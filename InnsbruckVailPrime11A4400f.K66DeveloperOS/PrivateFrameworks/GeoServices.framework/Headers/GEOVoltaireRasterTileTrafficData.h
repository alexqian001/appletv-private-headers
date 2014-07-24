/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import </libobjc.A.h>

@class NSMutableArray, NSArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject {
	XXStruct_K5nmsA *_vertices;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
	NSArray *_trafficIncidents;	// 12 = 0xc
	double _expirationTime;	// 16 = 0x10
}
@property(assign, nonatomic) double expirationTime;	// G=0x30f0a3ed; S=0x30f0a405; @synthesize=_expirationTime
@property(readonly, assign, nonatomic) NSArray *trafficIncidents;	// G=0x30f0a419; @synthesize=_trafficIncidents
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x30f0a3cd; S=0x30f0a3dd; @synthesize=_trafficSegments
@property(assign, nonatomic) XXStruct_K5nmsA *vertices;	// G=0x30f0a3ad; S=0x30f0a3bd; @synthesize=_vertices
+ (id)createWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x30f09f4d
+ (double)expirationTimeInterval;	// 0x30f09f99
- (id)initWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x30f09fb1
- (void)dealloc;	// 0x30f0a335
// declared property getter: - (double)expirationTime;	// 0x30f0a3ed
// declared property setter: - (void)setExpirationTime:(double)time;	// 0x30f0a405
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x30f0a3dd
// declared property setter: - (void)setVertices:(XXStruct_K5nmsA *)vertices;	// 0x30f0a3bd
// declared property getter: - (id)trafficIncidents;	// 0x30f0a419
// declared property getter: - (id)trafficSegments;	// 0x30f0a3cd
// declared property getter: - (XXStruct_K5nmsA *)vertices;	// 0x30f0a3ad
@end
