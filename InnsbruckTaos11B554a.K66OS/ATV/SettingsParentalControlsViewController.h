/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, NSInvocation;

__attribute__((visibility("hidden")))
@interface SettingsParentalControlsViewController : BRViewController {
	BOOL _correctPIN;	// 104 = 0x68
	NSInvocation *_correctPINAction;	// 108 = 0x6c
	NSArray *_pcMerchants;	// 112 = 0x70
}
+ (id)localizedStringForAccessMode:(int)accessMode;	// 0x2e012d
+ (int)nextModeFromAccessMode:(int)accessMode accessControlled:(BOOL)controlled;	// 0x2e0191
- (id)init;	// 0x2e01ad
- (void).cxx_destruct;	// 0x2e0759
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction;	// 0x2e2c65
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction argument:(void *)argument;	// 0x2e2c79
- (id)_buildPasscodeControllerWithMode:(int)mode;	// 0x2e231d
- (void)_changePIN;	// 0x2e15a5
- (id)_controlledMerchants;	// 0x2e12b5
- (void)_handlePCAirPlaySectionSelectionForRow:(long)row;	// 0x2e11d1
- (void)_handlePCEnabledSectionSelectionForRow:(long)row;	// 0x2e10f5
- (void)_handlePCStoreSectionSelectionForRow:(long)row;	// 0x2e1121
- (void)_iterateRatingThresholdForMediaType:(id)mediaType;	// 0x2e25f9
- (id)_musicApplianceInfo;	// 0x2e2ee9
- (id)_ratingThresholdStringForMediaType:(id)mediaType;	// 0x2e23e5
- (void)_reloadMenuItems;	// 0x2e154d
- (void)_setTextForPCAirPlaySectionMenuItem:(id)pcairPlaySectionMenuItem atRow:(long)row;	// 0x2e0f59
- (void)_setTextForPCApplicationsSectionMenuItem:(id)pcapplicationsSectionMenuItem atRow:(long)row;	// 0x2e08cd
- (void)_setTextForPCMusicSectionMenuItem:(id)pcmusicSectionMenuItem atRow:(long)row;	// 0x2e078d
- (void)_setTextForPCStoreSectionMenuItem:(id)pcstoreSectionMenuItem atRow:(long)row;	// 0x2e0b41
- (void)_successfulPINEntry:(id)entry;	// 0x2e2e4d
- (void)_toggleAirPlayCRD;	// 0x2e1e15
- (void)_toggleAirPlaySettings;	// 0x2e1d1d
- (void)_toggleExplicitContentMode;	// 0x2e20a1
- (void)_toggleITunesMusicMode;	// 0x2e16a9
- (void)_toggleMerchantModeForIndex:(long)index;	// 0x2e18c5
- (void)_toggleParentalControls;	// 0x2e17d5
- (void)_togglePurchaseRentalMode;	// 0x2e1c59
- (void)_toggleRatingSystem;	// 0x2e1ef5
- (void)_toggleRestrictMoviesMode;	// 0x2e1fa1
- (void)_toggleRestrictTVShowsMode;	// 0x2e2021
- (void)controlWasActivated;	// 0x2e036d
- (void)dealloc;	// 0x2e0301
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2e06a5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2e03ad
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2e05c5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2e058d
- (long)numberOfSectionsInList:(id)list;	// 0x2e0589
@end

