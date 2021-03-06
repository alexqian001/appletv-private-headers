/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface GEOCountryConfiguration : NSObject {
@private
	NSString *_countryCode;	// 4 = 0x4
	NSDictionary *_oldProvidersInfo;	// 8 = 0x8
	NSString *_oldCountryCode;	// 12 = 0xc
	BOOL _isObservingReachability;	// 16 = 0x10
	BOOL _isUpdating;	// 17 = 0x11
}
@property(copy, nonatomic) NSString *countryCode;	// G=0x34b125e1; S=0x34b12789; @synthesize=_countryCode
+ (id)sharedConfiguration;	// 0x34b11c39
- (void)_checkCountryCode;	// 0x34b12149
- (void)_checkCountryProviders;	// 0x34b123b9
- (void)_reachabilityChanged:(id)changed;	// 0x34b11d49
- (void)_registerNetworkDefaults;	// 0x34b1234d
- (void)_useCountryCodeProvider:(id)provider;	// 0x34b12641
// declared property getter: - (id)countryCode;	// 0x34b125e1
- (id)countryDefaultForKey:(id)key;	// 0x34b1271d
- (void)dealloc;	// 0x34b11ca5
- (id)defaultForKey:(id)key defaultValue:(id)value;	// 0x34b126f1
// declared property setter: - (void)setCountryCode:(id)code;	// 0x34b12789
- (void)updateProvidersForCurrentCountry;	// 0x34b11ded
@end

