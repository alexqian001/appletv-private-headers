/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, NSArray, NSURL, ATVVendorBag;

__attribute__((visibility("hidden")))
@interface BRMerchantInfo : XXUnknownSuperclass {
	ATVVendorBag *_vendorBag;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
	NSString *_featureName;	// 12 = 0xc
	NSDictionary *metadata;	// 16 = 0x10
	NSDictionary *feedResources;	// 20 = 0x14
	int _iconBadgeCount;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDictionary *appDictionary;	// G=0x37ee35; 
@property(readonly, assign, nonatomic) NSString *authType;	// G=0x37eb69; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceURL;	// G=0x37eb95; 
@property(readonly, assign, nonatomic) NSString *bootstrapResourceVersion;	// G=0x37ebc1; 
@property(readonly, assign, nonatomic) int defaultParentalControlsAccessMode;	// G=0x37ecc9; 
@property(assign) BOOL enabled;	// G=0x37e6f9; S=0x37e781; 
@property(readonly, assign, nonatomic) BOOL enabledInBag;	// G=0x37e819; 
@property(retain) NSString *featureName;	// G=0x37e669; S=0x37e6bd; 
@property(assign, nonatomic) NSDictionary *feedResources;	// G=0x37f005; S=0x37f015; @synthesize
@property(readonly, assign, nonatomic) BOOL hasBeenRemoved;	// G=0x37e791; 
@property(assign, nonatomic) int iconBadgeCount;	// G=0x37f025; S=0x37f035; @synthesize=_iconBadgeCount
@property(readonly, assign, nonatomic) BOOL isFeedMerchant;	// G=0x37e7d5; 
@property(readonly, assign, nonatomic) BOOL isReadFromLocalBag;	// G=0x37e8d9; 
@property(readonly, assign, nonatomic) NSString *javascriptURL;	// G=0x37ebed; 
@property(readonly, assign, nonatomic) NSString *maximumVersion;	// G=0x37eda1; 
@property(readonly, assign, nonatomic) NSURL *menuIconURL;	// G=0x37e9a5; 
@property(readonly, assign, nonatomic) NSString *menuIconURLVersion;	// G=0x37ead1; 
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x37e94d; 
@property(readonly, assign, nonatomic) NSString *merchantID;	// G=0x37e985; 
@property(assign, nonatomic) NSDictionary *metadata;	// G=0x37efe5; S=0x37eff5; @synthesize
@property(readonly, assign, nonatomic) NSString *minimumRequiredVersion;	// G=0x37ed5d; 
@property(readonly, assign, nonatomic) BOOL pinToMerchant;	// G=0x37eef5; 
@property(readonly, assign, nonatomic) float preferredOrder;	// G=0x37ec19; 
@property(readonly, assign, nonatomic) NSString *rootURL;	// G=0x37eb3d; 
@property(readonly, assign, nonatomic) NSArray *screensaverDictionaries;	// G=0x37ee61; 
@property(readonly, assign, nonatomic) NSString *supportURL;	// G=0x37ee09; 
@property(readonly, assign, nonatomic) BOOL usesParentalControls;	// G=0x37ec85; 
+ (id)infoWithVendorBag:(id)vendorBag;	// 0x37e4c5
- (id)initWithVendorBag:(id)vendorBag;	// 0x37e501
- (id)_featureCode;	// 0x37ef5d
// declared property getter: - (id)appDictionary;	// 0x37ee35
// declared property getter: - (id)authType;	// 0x37eb69
// declared property getter: - (id)bootstrapResourceURL;	// 0x37eb95
// declared property getter: - (id)bootstrapResourceVersion;	// 0x37ebc1
- (void)dealloc;	// 0x37e5e5
// declared property getter: - (int)defaultParentalControlsAccessMode;	// 0x37ecc9
// declared property getter: - (BOOL)enabled;	// 0x37e6f9
// declared property getter: - (BOOL)enabledInBag;	// 0x37e819
// declared property getter: - (id)featureName;	// 0x37e669
// declared property getter: - (id)feedResources;	// 0x37f005
// declared property getter: - (BOOL)hasBeenRemoved;	// 0x37e791
// declared property getter: - (int)iconBadgeCount;	// 0x37f025
// declared property getter: - (BOOL)isFeedMerchant;	// 0x37e7d5
// declared property getter: - (BOOL)isReadFromLocalBag;	// 0x37e8d9
// declared property getter: - (id)javascriptURL;	// 0x37ebed
// declared property getter: - (id)maximumVersion;	// 0x37eda1
// declared property getter: - (id)menuIconURL;	// 0x37e9a5
// declared property getter: - (id)menuIconURLVersion;	// 0x37ead1
// declared property getter: - (id)menuTitle;	// 0x37e94d
// declared property getter: - (id)merchantID;	// 0x37e985
// declared property getter: - (id)metadata;	// 0x37efe5
// declared property getter: - (id)minimumRequiredVersion;	// 0x37ed5d
// declared property getter: - (BOOL)pinToMerchant;	// 0x37eef5
// declared property getter: - (float)preferredOrder;	// 0x37ec19
// declared property getter: - (id)rootURL;	// 0x37eb3d
// declared property getter: - (id)screensaverDictionaries;	// 0x37ee61
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x37e781
// declared property setter: - (void)setFeatureName:(id)name;	// 0x37e6bd
// declared property setter: - (void)setFeedResources:(id)resources;	// 0x37f015
// declared property setter: - (void)setIconBadgeCount:(int)count;	// 0x37f035
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x37eff5
// declared property getter: - (id)supportURL;	// 0x37ee09
- (void)useDefaultEnablement;	// 0x37e91d
// declared property getter: - (BOOL)usesParentalControls;	// 0x37ec85
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x37e649
@end
