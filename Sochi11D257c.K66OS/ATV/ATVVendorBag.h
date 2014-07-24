/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVVendorBag : XXUnknownSuperclass {
	NSDictionary *_bag;	// 4 = 0x4
	BOOL _originatesFromStore;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDictionary *appConfiguration;	// G=0x45828d; 
@property(retain, nonatomic) NSDictionary *bag;	// G=0x458aed; S=0x458afd; @synthesize=_bag
@property(readonly, assign, nonatomic) NSDictionary *feedResources;	// G=0x458265; 
@property(readonly, assign, nonatomic) BOOL isEnabled;	// G=0x458195; 
@property(readonly, assign, nonatomic) BOOL isTrusted;	// G=0x457db1; 
@property(readonly, assign, nonatomic) NSString *maximumVersion;	// G=0x4581f5; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x458215; 
@property(readonly, assign, nonatomic) NSDictionary *metadata;	// G=0x45823d; 
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x4581d5; 
@property(assign, nonatomic) BOOL originatesFromStore;	// G=0x458b0d; S=0x458b1d; @synthesize=_originatesFromStore
@property(readonly, assign, nonatomic) NSString *requiresProfileId;	// G=0x4582b5; 
+ (id)vendorBagWithDictionary:(id)dictionary;	// 0x457b3d
+ (id)vendorBagsWithDictionaries:(id)dictionaries;	// 0x457a31
- (id)initWithDictionary:(id)dictionary;	// 0x457b79
- (BOOL)_bagValidForCurrentVersion:(id)currentVersion;	// 0x458449
- (id)_maximumVersionWithBag:(id)bag;	// 0x458401
- (id)_minimumRequiredVersionWithBag:(id)bag;	// 0x4583c9
- (id)_normalizeBag:(id)bag;	// 0x4584d9
- (BOOL)_originatesFromStore:(id)store;	// 0x458a71
- (id)_rehydrateDictionary:(id)dictionary fromBag:(id)bag;	// 0x4582dd
// declared property getter: - (id)appConfiguration;	// 0x45828d
- (id)appConfigurationForKey:(id)key;	// 0x457d85
// declared property getter: - (id)bag;	// 0x458aed
- (void)dealloc;	// 0x457c25
- (id)description;	// 0x457c71
- (id)feedResourceForKey:(id)key;	// 0x457d2d
// declared property getter: - (id)feedResources;	// 0x458265
// declared property getter: - (BOOL)isEnabled;	// 0x458195
// declared property getter: - (BOOL)isTrusted;	// 0x457db1
// declared property getter: - (id)maximumVersion;	// 0x4581f5
// declared property getter: - (id)merchantID;	// 0x458215
// declared property getter: - (id)metadata;	// 0x45823d
- (id)metadatumForKey:(id)key;	// 0x457d59
// declared property getter: - (id)minimumRequiredVersion;	// 0x4581d5
// declared property getter: - (BOOL)originatesFromStore;	// 0x458b0d
// declared property getter: - (id)requiresProfileId;	// 0x4582b5
// declared property setter: - (void)setBag:(id)bag;	// 0x458afd
// declared property setter: - (void)setOriginatesFromStore:(BOOL)store;	// 0x458b1d
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x457d0d
@end
