/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMTrip : PBCodable {
	NSMutableArray *_routes;	// 4 = 0x4
	NSString *_tripSummary;	// 8 = 0x8
	BOOL _hasDetailLevel;	// 12 = 0xc
	int _detailLevel;	// 16 = 0x10
}
@property(assign, nonatomic) int detailLevel;	// G=0x31faeac5; S=0x31faeae9; @synthesize=_detailLevel
@property(assign, nonatomic) BOOL hasDetailLevel;	// G=0x31faefe9; S=0x31faeff9; @synthesize=_hasDetailLevel
@property(readonly, assign, nonatomic) BOOL hasTripSummary;	// G=0x31faeaad; 
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x31faef81; S=0x31faef91; @synthesize=_routes
@property(retain, nonatomic) NSString *tripSummary;	// G=0x31faefb5; S=0x31faefc5; @synthesize=_tripSummary
- (void)addRoute:(id)route;	// 0x31faea09
- (id)altDescription;	// 0x31fc7991
- (void)dealloc;	// 0x31fae9b1
- (id)description;	// 0x31faeb0d
- (id)description;	// 0x31f93729
// declared property getter: - (int)detailLevel;	// 0x31faeac5
- (id)dictionaryRepresentation;	// 0x31faeb7d
// declared property getter: - (BOOL)hasDetailLevel;	// 0x31faefe9
// declared property getter: - (BOOL)hasTripSummary;	// 0x31faeaad
- (BOOL)readFrom:(id)from;	// 0x31faec55
- (id)routeAtIndex:(unsigned)index;	// 0x31faea8d
// declared property getter: - (id)routes;	// 0x31faef81
- (unsigned)routesCount;	// 0x31faea6d
// declared property setter: - (void)setDetailLevel:(int)level;	// 0x31faeae9
// declared property setter: - (void)setHasDetailLevel:(BOOL)level;	// 0x31faeff9
// declared property setter: - (void)setRoutes:(id)routes;	// 0x31faef91
// declared property setter: - (void)setTripSummary:(id)summary;	// 0x31faefc5
// declared property getter: - (id)tripSummary;	// 0x31faefb5
- (void)writeTo:(id)to;	// 0x31faee19
@end
