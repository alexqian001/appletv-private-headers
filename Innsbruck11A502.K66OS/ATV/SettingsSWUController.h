/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface SettingsSWUController : BRViewController {
	BOOL _showingCancelDialog;	// 104 = 0x68
	float _updateDownloadPercentage;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL showingCancelDialog;	// G=0x26d7a9; S=0x26d7b9; @synthesize=_showingCancelDialog
@property(assign, nonatomic) float updateDownloadPercentage;	// G=0x26d789; S=0x26d799; @synthesize=_updateDownloadPercentage
- (id)init;	// 0x26cec5
- (id)_mediaMenuView;	// 0x26d7c9
- (void)_reloadList;	// 0x26d7d9
- (void)_seedSoftwareUpdateSettingSelected;	// 0x26d831
- (void)_showHideProgressUI;	// 0x26d86d
- (void)_softwareUpdate:(BOOL)update;	// 0x26da55
- (void)_updateApplyFailed:(id)failed;	// 0x26df21
- (void)_updateCheckFinished:(id)finished;	// 0x26dd39
- (void)_updateCheckStarted:(id)started;	// 0x26dcad
- (void)_updateDownloadFinished:(id)finished;	// 0x26de6d
- (void)_updateDownloadStarted:(id)started;	// 0x26de25
- (void)_updateProgress:(id)progress;	// 0x26df91
- (void)dealloc;	// 0x26d161
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x26d575
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x26d6e1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x26d271
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x26d571
// declared property setter: - (void)setShowingCancelDialog:(BOOL)dialog;	// 0x26d7b9
// declared property setter: - (void)setUpdateDownloadPercentage:(float)percentage;	// 0x26d799
// declared property getter: - (BOOL)showingCancelDialog;	// 0x26d7a9
// declared property getter: - (float)updateDownloadPercentage;	// 0x26d789
@end
