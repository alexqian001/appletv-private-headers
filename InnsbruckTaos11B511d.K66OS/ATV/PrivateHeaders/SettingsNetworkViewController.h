/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "ATVAPNetworkSelectionDelegate.h"

@class NSTimer, BRMediaMenuView, BRIPConfiguration, SettingsMetadataView;

__attribute__((visibility("hidden")))
@interface SettingsNetworkViewController : BRViewController <ATVAPNetworkSelectionDelegate> {
	int _controllerState;	// 104 = 0x68
	BRIPConfiguration *_ipConfig;	// 108 = 0x6c
	BRMediaMenuView *_mediaMenuView;	// 112 = 0x70
	SettingsMetadataView *_infoView;	// 116 = 0x74
	NSTimer *_updateTimer;	// 120 = 0x78
	BOOL _forWireless;	// 124 = 0x7c
	BOOL _showSpeedTest;	// 125 = 0x7d
}
- (id)init;	// 0x2de131
- (void).cxx_destruct;	// 0x2de941
- (void)_commissionNetworkUpdateTimer;	// 0x2dfb6d
- (id)_configFailedStateItemForRow:(long)row;	// 0x2dec09
- (void)_configFailedStateSelectItemForRow:(long)row;	// 0x2dee25
- (void)_configureEthernet;	// 0x2df0c5
- (void)_configureFailedMenuTextForReason:(int)reason withNetworkNamed:(id)networkNamed withMenu:(id)menu;	// 0x2dfda9
- (void)_configureSelectionFinishedStateMenu:(id)menu forInterface:(int)interface;	// 0x2dfc29
- (void)_configureWiFi;	// 0x2df04d
- (void)_decommissionNetworkUpdateTimer;	// 0x2dfbf5
- (void)_doNetworkDownloadSpeedTest;	// 0x2defd9
- (void)_networkChanged:(id)changed;	// 0x2dfa8d
- (id)_networkMenuStateItemForList:(id)list atIndexPath:(id)indexPath;	// 0x2de99d
- (void)_networkMenuStateSelectItemForRow:(long)row;	// 0x2decd9
- (id)_selectionFinishedStateItemForRow:(long)row;	// 0x2deb75
- (void)_selectionFinishedStateSelectItem;	// 0x2dedb9
- (void)_swapToAPNetworkMenu;	// 0x2def61
- (void)_swapToTCPIPConfig;	// 0x2deead
- (void)_updateNetworkChangeText;	// 0x2df8ad
- (void)_updateNetworkInfo:(id)info;	// 0x2df161
- (void)_updateNetworkSummary;	// 0x2df28d
- (id)accessibilityScreenContent;	// 0x2e010d
- (void)dealloc;	// 0x2de3bd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2de6fd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2de68d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2de59d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2de64d
- (void)network:(id)network wasSelected:(BOOL)selected;	// 0x2de72d
- (void)wasBuried;	// 0x2de4e1
- (void)wasExhumed;	// 0x2de521
- (void)wasPopped;	// 0x2de4a1
- (void)wasPushed;	// 0x2de429
@end
