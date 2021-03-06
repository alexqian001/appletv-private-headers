/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSInvocation, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsParentalControlsViewController : BRViewController {
	BOOL _correctPIN;	// 100 = 0x64
	NSInvocation *_correctPINAction;	// 104 = 0x68
	NSArray *_pcMerchants;	// 108 = 0x6c
}
- (id)init;	// 0x8f8a1
- (void).cxx_destruct;	// 0x8fded
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction;	// 0x91da9
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction argument:(void *)argument;	// 0x91dbd
- (id)_buildPasscodeControllerWithMode:(int)mode;	// 0x913e1
- (void)_changePIN;	// 0x9086d
- (id)_controlledMerchants;	// 0x906fd
- (void)_handlePCEnabledSectionSelectionForRow:(long)row;	// 0x90621
- (void)_handlePCStoreSectionSelectionForRow:(long)row;	// 0x9064d
- (void)_iterateRatingThresholdForMediaType:(id)mediaType;	// 0x91819
- (id)_ratingThresholdStringForMediaType:(id)mediaType;	// 0x914b5
- (void)_reloadMenuItems;	// 0x90815
- (void)_setTextForPCApplicationsSectionMenuItem:(id)pcapplicationsSectionMenuItem atRow:(long)row;	// 0x8ff55
- (void)_setTextForPCMatchSectionMenuItem:(id)pcmatchSectionMenuItem atRow:(long)row;	// 0x8fe21
- (void)_setTextForPCStoreSectionMenuItem:(id)pcstoreSectionMenuItem atRow:(long)row;	// 0x9017d
- (void)_successfulPINEntry:(id)entry;	// 0x91f85
- (void)_toggleExplicitContentMode;	// 0x91165
- (void)_toggleITunesMatchMode;	// 0x9096d
- (void)_toggleMerchantModeForIndex:(long)index;	// 0x90c29
- (void)_toggleParentalControls;	// 0x90b39
- (void)_togglePurchaseRentalMode;	// 0x90efd
- (void)_toggleRatingSystem;	// 0x90fb9
- (void)_toggleRestrictMoviesMode;	// 0x91065
- (void)_toggleRestrictTVShowsMode;	// 0x910e5
- (void)controlWasActivated;	// 0x8fa69
- (void)dealloc;	// 0x8f9fd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8fd49
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8faa9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8fc89
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x8fc4d
- (long)numberOfSectionsInList:(id)list;	// 0x8fc49
@end

