/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVVendorBag : XXUnknownSuperclass {
	NSDictionary *_bag;	// 4 = 0x4
	BOOL _originatesFromStore;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDictionary *appConfiguration;	// G=0x383b9d; 
@property(retain, nonatomic) NSDictionary *bag;	// G=0x383fd1; S=0x383fe1; @synthesize=_bag
@property(readonly, assign, nonatomic) NSDictionary *feedResources;	// G=0x383b75; 
@property(readonly, assign, nonatomic) BOOL isEnabled;	// G=0x383ae5; 
@property(readonly, assign, nonatomic) BOOL isTrusted;	// G=0x383889; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x383b25; 
@property(readonly, assign, nonatomic) NSDictionary *metadata;	// G=0x383b4d; 
@property(assign, nonatomic) BOOL originatesFromStore;	// G=0x383ff1; S=0x384001; @synthesize=_originatesFromStore
+ (id)vendorBagWithDictionary:(id)dictionary;	// 0x383611
+ (id)vendorBagsWithDictionaries:(id)dictionaries;	// 0x383505
- (id)initWithDictionary:(id)dictionary;	// 0x38364d
- (id)_normalizeBag:(id)bag;	// 0x383cb1
- (BOOL)_originatesFromStore:(id)store;	// 0x383f55
- (id)_rehydrateDictionary:(id)dictionary fromBag:(id)bag;	// 0x383bc5
// declared property getter: - (id)appConfiguration;	// 0x383b9d
- (id)appConfigurationForKey:(id)key;	// 0x38385d
// declared property getter: - (id)bag;	// 0x383fd1
- (void)dealloc;	// 0x3836f9
- (id)description;	// 0x383745
- (id)feedResourceForKey:(id)key;	// 0x383805
// declared property getter: - (id)feedResources;	// 0x383b75
// declared property getter: - (BOOL)isEnabled;	// 0x383ae5
// declared property getter: - (BOOL)isTrusted;	// 0x383889
// declared property getter: - (id)merchantID;	// 0x383b25
// declared property getter: - (id)metadata;	// 0x383b4d
- (id)metadatumForKey:(id)key;	// 0x383831
// declared property getter: - (BOOL)originatesFromStore;	// 0x383ff1
// declared property setter: - (void)setBag:(id)bag;	// 0x383fe1
// declared property setter: - (void)setOriginatesFromStore:(BOOL)store;	// 0x384001
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3837e5
@end
