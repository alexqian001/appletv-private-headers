/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOTileKeyList;

@interface GEOMapDataCacheHint : NSObject {
	GEOTileKeyList *_tileKeys;	// 4 = 0x4
	int _policy;	// 8 = 0x8
	double _priority;	// 12 = 0xc
}
@property(assign, nonatomic) int policy;	// G=0x3288acc9; S=0x3288acd9; @synthesize=_policy
@property(assign, nonatomic) double priority;	// G=0x3288ace9; S=0x3288ad01; @synthesize=_priority
@property(retain, nonatomic) GEOTileKeyList *tileKeys;	// G=0x3288ac95; S=0x3288aca5; @synthesize=_tileKeys
- (void)cacheTilesForCenter:(XXStruct_zYrK5D)center radius:(double)radius atZoomLevel:(int)zoomLevel;	// 0x3288ac85
- (void)cacheTilesForKeys:(id)keys;	// 0x3288ac91
- (void)cacheTilesForPath:(XXStruct_zYrK5D *)path pointCount:(unsigned)count marginWidth:(double)width atZoomLevel:(int)zoomLevel;	// 0x3288ac8d
- (void)cacheTilesForRegion:(id)region atZoomLevel:(int)zoomLevel;	// 0x3288ac89
// declared property getter: - (int)policy;	// 0x3288acc9
// declared property getter: - (double)priority;	// 0x3288ace9
// declared property setter: - (void)setPolicy:(int)policy;	// 0x3288acd9
// declared property setter: - (void)setPriority:(double)priority;	// 0x3288ad01
// declared property setter: - (void)setTileKeys:(id)keys;	// 0x3288aca5
// declared property getter: - (id)tileKeys;	// 0x3288ac95
@end
