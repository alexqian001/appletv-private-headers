/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class ATVStoreFrontLocale, NSArray, BRMediaMenuView;

__attribute__((visibility("hidden")))
@interface SettingsStoreFrontViewController : BRViewController {
	BRMediaMenuView *_menu;	// 104 = 0x68
	NSArray *_sortedStoreFronts;	// 108 = 0x6c
	ATVStoreFrontLocale *_currentStoreFront;	// 112 = 0x70
	unsigned _currentIndex;	// 116 = 0x74
	unsigned _pendingIndex;	// 120 = 0x78
}
- (id)init;	// 0x2d43f9
- (void).cxx_destruct;	// 0x2d4e45
- (id)_accessibilityLanguageForStoreFront:(id)storeFront;	// 0x2d4601
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2d49c9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2d4821
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2d49a9
- (void)updateBoundCurrentStoreFrontLocale;	// 0x2d4d05
- (void)updateBoundStoreLocales;	// 0x2d4c25
@end
