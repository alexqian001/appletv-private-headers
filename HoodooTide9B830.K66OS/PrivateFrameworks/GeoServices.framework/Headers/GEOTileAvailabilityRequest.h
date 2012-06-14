/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOLatLng;

@interface GEOTileAvailabilityRequest : NSObject {
	GEOTileKey _tileKey;	// 4 = 0x4
	GEOLatLng *_gmmLatLng;	// 20 = 0x14
}
@property(retain, nonatomic) GEOLatLng *gmmLatLng;	// G=0x35f3fcd1; S=0x35f3fce1; @synthesize=_gmmLatLng
@property(readonly, assign) unsigned short providerID;	// G=0x35f3fc81; 
@property(assign, nonatomic) GEOTileKey tileKey;	// G=0x35f3fc95; S=0x35f3fcb1; @synthesize=_tileKey
- (void)dealloc;	// 0x35f3fc35
// declared property getter: - (id)gmmLatLng;	// 0x35f3fcd1
// declared property getter: - (unsigned short)providerID;	// 0x35f3fc81
// declared property setter: - (void)setGmmLatLng:(id)lng;	// 0x35f3fce1
// declared property setter: - (void)setTileKey:(GEOTileKey)key;	// 0x35f3fcb1
// declared property getter: - (GEOTileKey)tileKey;	// 0x35f3fc95
@end
