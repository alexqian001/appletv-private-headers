/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOSimpleTileRequester.h"
#import "NSURLConnectionDelegate.h"


__attribute__((visibility("hidden")))
@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate> {
}
- (id)_localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x30f53205
- (id)localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x30f5337d
- (unsigned)tileEditionForKey:(GEOTileKey *)key;	// 0x30f53069
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x30f53041
- (id)urlForTileKey:(GEOTileKey *)tileKey;	// 0x30f530a1
@end
