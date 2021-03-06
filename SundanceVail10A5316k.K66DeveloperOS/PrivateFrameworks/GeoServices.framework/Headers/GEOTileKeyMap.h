/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library


@interface GEOTileKeyMap : NSObject {
	int _type;	// 4 = 0x4
	void *_map;	// 8 = 0x8
}
- (id)initWithMapType:(int)mapType;	// 0x34b2d141
- (id)contentsDescription;	// 0x34b2d391
- (void)dealloc;	// 0x34b2d239
- (id)objectForKey:(const GEOTileKey *)key;	// 0x34b2d4b5
- (void)removeObjectForKey:(const GEOTileKey *)key;	// 0x34b2d56d
- (void)setObject:(id)object forKey:(const GEOTileKey *)key;	// 0x34b2d4dd
@end

