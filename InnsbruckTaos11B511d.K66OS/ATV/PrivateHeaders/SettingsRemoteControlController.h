/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface SettingsRemoteControlController : BRViewController {
}
+ (void)initialize;	// 0x2ea415
- (id)init;	// 0x2ea675
- (void)_configure3rdPartyRemotePairingMenuItem:(id)item forRow:(long)row;	// 0x2eba19
- (void)_configureAppleRemotePairingMenuItem:(id)item;	// 0x2eb74d
- (void)_configureMenuItemForMultiSectionDisplay:(id)multiSectionDisplay forSection:(long)section forRow:(long)row;	// 0x2eb6cd
- (void)_configureMenuItemForSingleSectionDisplay:(id)singleSectionDisplay forRow:(long)row;	// 0x2eb625
- (void)_configurePairedRemoteMenuItem:(id)item forRow:(long)row;	// 0x2eb805
- (void)_handle3rdPartyRemoteSettingSelectedAtRow:(long)row;	// 0x2ec721
- (void)_handleAppleRemoteSettingSelected;	// 0x2ebb45
- (void)_handlePairedRemoteSettingSelectedAtRow:(long)row;	// 0x2ec219
- (void)_handleRemoteAppItemSelected;	// 0x2ebd7d
- (BOOL)_havePairableRemotes;	// 0x2eb50d
- (BOOL)_havePairedRemotes;	// 0x2eb579
- (id)_instructionsForPairedRemoteAtRow:(long)row;	// 0x2ebff5
- (void)_learnRemoteOptionSelected:(id)selected;	// 0x2ecbf5
- (void)_openingMessageOptionSelected:(id)selected;	// 0x2ecb29
- (void)_pairingUpdate:(id)update;	// 0x2eb449
- (void)_removePairedRemoteDialogOptionSelected:(id)selected;	// 0x2ec5c9
- (BOOL)_showOtherRemotesSectionDivider;	// 0x2eb4a1
- (BOOL)_showPairableOrPairedRemotes;	// 0x2eb5e5
- (void)dealloc;	// 0x2ea8ad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2ead11
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2eb35d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2ea999
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2eaab5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2eac29
- (long)numberOfSectionsInList:(id)list;	// 0x2eaa71
- (void)wasExhumed;	// 0x2ea919
@end
