/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseAppliance.h"


__attribute__((visibility("hidden")))
@interface MOVAppliance : ATVMusicStoreBaseAppliance {
	BOOL _wishlistCategoryEnabled;	// 8 = 0x8
}
+ (void)initialize;	// 0x841cd
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x842e9
- (void)_favoritesUpdated:(id)updated;	// 0x84add
- (id)applianceController;	// 0x846dd
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x84861
- (void)dealloc;	// 0x843b9
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x84729
- (id)loadCategories;	// 0x84451
- (id)localizedSearchTitle;	// 0x84a5d
- (int)noContentBRError;	// 0x84acd
- (int)noRemoteContentBRError;	// 0x84ad5
- (BOOL)supportsPurchase;	// 0x84449
- (BOOL)supportsRental;	// 0x8444d
- (id)topShelfController;	// 0x846a5
@end

