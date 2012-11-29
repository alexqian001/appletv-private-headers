/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSLock, NSDictionary;

__attribute__((visibility("hidden")))
@interface GEOLocalizationRegionsInfo : NSObject {
	NSDictionary *_regions;	// 4 = 0x4
	NSLock *_regionsLock;	// 8 = 0x8
}
- (id)init;	// 0x30220d9d
- (void)dealloc;	// 0x302e16c1
- (BOOL)needsLocalizationForKey:(const GEOTileKey *)key language:(id)language;	// 0x302e1781
- (void)reset;	// 0x302e1725
@end
