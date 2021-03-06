/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray;

@interface GEOETARoute : PBCodable {
	XXStruct_stqouA _trafficColorOffsets;	// 4 = 0x4
	XXStruct_stqouA _trafficColors;	// 16 = 0x10
	NSMutableArray *_invalidSectionZilchPoints;	// 28 = 0x1c
	NSMutableArray *_reroutedRoutes;	// 32 = 0x20
	NSData *_routeID;	// 36 = 0x24
	NSMutableArray *_steps;	// 40 = 0x28
	NSData *_zilchPoints;	// 44 = 0x2c
	BOOL _routeNoLongerValid;	// 48 = 0x30
	XXStruct_ec15KC _has;	// 49 = 0x31
}
@property(readonly, assign, nonatomic) BOOL hasRouteID;	// G=0x379e8449; 
@property(assign, nonatomic) BOOL hasRouteNoLongerValid;	// G=0x379e8589; S=0x379e856d; 
@property(readonly, assign, nonatomic) BOOL hasZilchPoints;	// G=0x379e852d; 
@property(retain, nonatomic) NSMutableArray *invalidSectionZilchPoints;	// G=0x379e9f55; S=0x379e9f65; @synthesize=_invalidSectionZilchPoints
@property(retain, nonatomic) NSMutableArray *reroutedRoutes;	// G=0x379e9f35; S=0x379e9f45; @synthesize=_reroutedRoutes
@property(retain, nonatomic) NSData *routeID;	// G=0x379e9ec5; S=0x379e9ed5; @synthesize=_routeID
@property(assign, nonatomic) BOOL routeNoLongerValid;	// G=0x379e9f25; S=0x379e8545; @synthesize=_routeNoLongerValid
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x379e9ee5; S=0x379e9ef5; @synthesize=_steps
@property(readonly, assign, nonatomic) unsigned *trafficColorOffsets;	// G=0x379e8851; 
@property(readonly, assign, nonatomic) unsigned trafficColorOffsetsCount;	// G=0x379e883d; 
@property(readonly, assign, nonatomic) unsigned *trafficColors;	// G=0x379e8749; 
@property(readonly, assign, nonatomic) unsigned trafficColorsCount;	// G=0x379e8735; 
@property(retain, nonatomic) NSData *zilchPoints;	// G=0x379e9f05; S=0x379e9f15; @synthesize=_zilchPoints
- (void)addInvalidSectionZilchPoints:(id)points;	// 0x379e8689
- (void)addReroutedRoute:(id)route;	// 0x379e85bd
- (void)addStep:(id)step;	// 0x379e8481
- (void)addTrafficColor:(unsigned)color;	// 0x379e876d
- (void)addTrafficColorOffset:(unsigned)offset;	// 0x379e8875
- (void)clearInvalidSectionZilchPoints;	// 0x379e8669
- (void)clearReroutedRoutes;	// 0x379e859d
- (void)clearSteps;	// 0x379e8461
- (void)clearTrafficColorOffsets;	// 0x379e8861
- (void)clearTrafficColors;	// 0x379e8759
- (void)copyTo:(id)to;	// 0x379e9925
- (void)dealloc;	// 0x379e8391
- (id)description;	// 0x379e8945
- (id)dictionaryRepresentation;	// 0x379e89b5
// declared property getter: - (BOOL)hasRouteID;	// 0x379e8449
// declared property getter: - (BOOL)hasRouteNoLongerValid;	// 0x379e8589
// declared property getter: - (BOOL)hasZilchPoints;	// 0x379e852d
- (unsigned)hash;	// 0x379e9db9
// declared property getter: - (id)invalidSectionZilchPoints;	// 0x379e9f55
- (id)invalidSectionZilchPointsAtIndex:(unsigned)index;	// 0x379e8715
- (unsigned)invalidSectionZilchPointsCount;	// 0x379e86f5
- (BOOL)isEqual:(id)equal;	// 0x379e9c0d
- (BOOL)readFrom:(id)from;	// 0x379e93c9
- (id)reroutedRouteAtIndex:(unsigned)index;	// 0x379e8649
// declared property getter: - (id)reroutedRoutes;	// 0x379e9f35
- (unsigned)reroutedRoutesCount;	// 0x379e8629
// declared property getter: - (id)routeID;	// 0x379e9ec5
// declared property getter: - (BOOL)routeNoLongerValid;	// 0x379e9f25
// declared property setter: - (void)setHasRouteNoLongerValid:(BOOL)valid;	// 0x379e856d
// declared property setter: - (void)setInvalidSectionZilchPoints:(id)points;	// 0x379e9f65
// declared property setter: - (void)setReroutedRoutes:(id)routes;	// 0x379e9f45
// declared property setter: - (void)setRouteID:(id)anId;	// 0x379e9ed5
// declared property setter: - (void)setRouteNoLongerValid:(BOOL)valid;	// 0x379e8545
// declared property setter: - (void)setSteps:(id)steps;	// 0x379e9ef5
- (void)setTrafficColorOffsets:(unsigned *)offsets count:(unsigned)count;	// 0x379e892d
- (void)setTrafficColors:(unsigned *)colors count:(unsigned)count;	// 0x379e8825
// declared property setter: - (void)setZilchPoints:(id)points;	// 0x379e9f15
- (id)stepAtIndex:(unsigned)index;	// 0x379e850d
// declared property getter: - (id)steps;	// 0x379e9ee5
- (unsigned)stepsCount;	// 0x379e84ed
- (unsigned)trafficColorAtIndex:(unsigned)index;	// 0x379e8781
- (unsigned)trafficColorOffsetAtIndex:(unsigned)index;	// 0x379e8889
// declared property getter: - (unsigned *)trafficColorOffsets;	// 0x379e8851
// declared property getter: - (unsigned)trafficColorOffsetsCount;	// 0x379e883d
// declared property getter: - (unsigned *)trafficColors;	// 0x379e8749
// declared property getter: - (unsigned)trafficColorsCount;	// 0x379e8735
- (void)writeTo:(id)to;	// 0x379e93d5
// declared property getter: - (id)zilchPoints;	// 0x379e9f05
@end

