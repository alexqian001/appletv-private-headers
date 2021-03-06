/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOGeocodeRequester : NSObject {
	NSMapTable *_pendingGeocodes;	// 4 = 0x4
	NSLock *_pendingGeocodesLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x3798aca5
+ (id)sharedGeocodeRequester;	// 0x379543ad
- (id)init;	// 0x3795440d
- (void)cancelGeocode:(id)geocode;	// 0x3798abf1
- (void)dealloc;	// 0x3798a385
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x3798a3fd
- (void)registerProvider:(Class)provider;	// 0x379544ed
- (void)reverseGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x37954545
@end

