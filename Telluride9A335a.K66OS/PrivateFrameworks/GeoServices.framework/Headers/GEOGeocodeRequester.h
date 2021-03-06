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
+ (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x31d045a5
+ (id)sharedGeocodeRequester;	// 0x31d0379d
- (id)init;	// 0x31d0390d
- (void)cancelGeocode:(id)geocode;	// 0x31d044a9
- (void)dealloc;	// 0x31d039e5
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x31d03a59
- (void)registerProvider:(Class)provider;	// 0x31d04565
- (void)reverseGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x31d03e71
@end

