/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAppliance.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRApplianceInfo, NSArray;

__attribute__((visibility("hidden")))
@interface BRBaseAppliance : XXUnknownSuperclass <BRAppliance> {
	NSArray *_categories;	// 4 = 0x4
	long _categoriesLazyInitializationGuard;	// 8 = 0x8
	BRApplianceInfo *_applianceInfo;	// 12 = 0xc
}
@property(retain) BRApplianceInfo *applianceInfo;	// G=0x2eac85; S=0x2eac99; @synthesize=_applianceInfo
@property(readonly, assign, nonatomic) BOOL supportsPurchase;	// G=0x2ea7ad; 
@property(readonly, assign, nonatomic) BOOL supportsRental;	// G=0x2ea7b1; 
- (id)init;	// 0x2ea52d
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x2ea531
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x2eb465
- (id)_applianceCategories;	// 0x2eadb9
- (BOOL)_isCategory:(id)category memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x2eb369
- (id)accessibilityLabel;	// 0x2eac4d
- (id)alertControllerForNoContent;	// 0x2eab79
- (id)alertControllerForNoRemoteContent;	// 0x2eabd9
- (id)applianceCategories;	// 0x2ea909
- (id)applianceCategoryDescriptions;	// 0x2eaca9
- (id)applianceController;	// 0x2ea9f5
// declared property getter: - (id)applianceInfo;	// 0x2eac85
- (id)baseMediaType;	// 0x2ea7b5
- (id)categoryWithIdentifier:(id)identifier;	// 0x2eaae1
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x2ea9f1
- (void)dealloc;	// 0x2ea5f9
- (id)description;	// 0x2ea72d
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x2ea9f9
- (unsigned)hash;	// 0x2ea705
- (id)identifierForContentAlias:(id)contentAlias;	// 0x2ea9ed
- (BOOL)isEqual:(id)equal;	// 0x2ea68d
- (id)loadCategories;	// 0x2eacd1
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x2ea9fd
- (int)noContentBRError;	// 0x2eabd1
- (int)noRemoteContentBRError;	// 0x2eac31
- (BOOL)previewError;	// 0x2eac39
- (id)previewErrorIconImage;	// 0x2eac45
- (id)previewErrorSubtext;	// 0x2eac41
- (id)previewErrorText;	// 0x2eac3d
- (void)reloadCategories;	// 0x2eace1
// declared property setter: - (void)setApplianceInfo:(id)info;	// 0x2eac99
// declared property getter: - (BOOL)supportsPurchase;	// 0x2ea7ad
// declared property getter: - (BOOL)supportsRental;	// 0x2ea7b1
- (id)topShelfController;	// 0x2eac49
@end

