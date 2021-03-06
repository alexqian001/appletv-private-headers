/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMerchantCoordinator : XXUnknownSuperclass <ATVSettingsSaver> {
	NSDictionary *_merchantsByIdentifier;	// 4 = 0x4
	NSArray *_enabledMerchants;	// 8 = 0x8
	NSArray *_allMerchants;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *allMerchants;	// G=0x380361; S=0x3834f5; @synthesize=_allMerchants
@property(copy, nonatomic) NSArray *enabledMerchants;	// G=0x38027d; S=0x3834e5; @synthesize=_enabledMerchants
@property(copy, nonatomic) NSArray *orderedMerchantIdentifiers;	// G=0x383229; S=0x382e89; 
+ (id)_currentStoreFrontAppOrderingPrefsKey;	// 0x382e11
+ (id)sharedInstance;	// 0x37fcc9
+ (void)sortMerchantsArray:(id)array;	// 0x382b15
- (id)init;	// 0x37fd69
- (void)_cleanUpAfterLegacyMerchant:(id)merchant;	// 0x3828a5
- (void)_cleanupAfterMerchantsHaveBeenRemoved;	// 0x38276d
- (id)_enabledMerchantsFilterPredicate;	// 0x380781
- (void)_handleFeatureDisabledNotification:(id)notification;	// 0x38071d
- (void)_handleFeatureEnabledNotification:(id)notification;	// 0x380709
- (void)_handleITMSMerchantDidInstallResources;	// 0x380731
- (void)_handleLanguageChangedNotification:(id)notification;	// 0x3806f5
- (void)_handleURLBagLoadedNotification:(id)notification;	// 0x380665
- (void)_loadAddSiteMerchantsWithCompletionHandler:(id)completionHandler;	// 0x381245
- (id)_localBags;	// 0x381149
- (void)_merchantsChanged:(id)changed;	// 0x383429
- (void)_musicStorePartnerDataUpdated;	// 0x383355
- (id)_newMerchantWithIdentifier:(id)identifier isFeedMerchant:(BOOL)merchant;	// 0x3817c5
- (void)_registerAccountAndAuthenticatorForMerchant:(id)merchant;	// 0x3818e5
- (id)_screensaverDictionariesFromResource;	// 0x3fdf29
- (id)_screensaverDictionariesFromVendorBags;	// 0x3fe1b1
- (void)_updateMerchantServices;	// 0x381d71
- (void)_updateMerchantsWithCompletionHandler:(id)completionHandler;	// 0x380f2d
- (void)_updateMerchantsWithVendorBags:(id)vendorBags;	// 0x380925
- (void)addPathsToSaveTo:(id)to;	// 0x37ffc9
// declared property getter: - (id)allMerchants;	// 0x380361
- (void)dealloc;	// 0x37ff49
// declared property getter: - (id)enabledMerchants;	// 0x38027d
- (BOOL)isITMSFeedCollectionReadFromLocal:(id)local;	// 0x3fdcf1
- (void)merchantChanged:(id)changed;	// 0x3834a5
- (id)merchantWithIdentifier:(id)identifier;	// 0x3801b1
// declared property getter: - (id)orderedMerchantIdentifiers;	// 0x383229
- (id)rootControllerForMerchantIdentifier:(id)merchantIdentifier;	// 0x380445
- (id)screensaverDictionaries;	// 0x3fd83d
// declared property setter: - (void)setAllMerchants:(id)merchants;	// 0x3834f5
// declared property setter: - (void)setEnabledMerchants:(id)merchants;	// 0x3834e5
// declared property setter: - (void)setOrderedMerchantIdentifiers:(id)identifiers;	// 0x382e89
@end

