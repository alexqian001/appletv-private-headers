/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDottedQuadEntryDelegate.h"
#import "SettingsNetworkAutoModeSelectionDelegate.h"
#import "SettingsNetworkAutoModeViewController.h"

@class ATVDottedQuadEntryController, NSString;
@protocol ATVTCPIPConfigDelegate;

__attribute__((visibility("hidden")))
@interface ATVTCPIPConfigController : SettingsNetworkAutoModeViewController <ATVDottedQuadEntryDelegate, SettingsNetworkAutoModeSelectionDelegate> {
	id<ATVTCPIPConfigDelegate> _configurationDelegate;	// 148 = 0x94
	NSString *_address;	// 152 = 0x98
	NSString *_subnetMask;	// 156 = 0x9c
	NSString *_router;	// 160 = 0xa0
	NSString *_dns;	// 164 = 0xa4
	ATVDottedQuadEntryController *_ipController;	// 168 = 0xa8
	ATVDottedQuadEntryController *_maskController;	// 172 = 0xac
	ATVDottedQuadEntryController *_routerController;	// 176 = 0xb0
	ATVDottedQuadEntryController *_dnsController;	// 180 = 0xb4
	unsigned _useDHCP : 1;	// 184 = 0xb8
	BOOL _showOnlyDNS;	// 185 = 0xb9
}
@property(assign, nonatomic) BOOL showOnlyDNS;	// G=0x1efb99; S=0x1efba9; @synthesize=_showOnlyDNS
- (id)initWithWireless:(BOOL)wireless forDNS:(BOOL)dns notifying:(id)notifying;	// 0x1ef1c1
- (void).cxx_destruct;	// 0x1efbb9
- (void)_readCurrentConfiguration;	// 0x1efc75
- (void)_saveConfiguration;	// 0x1efdd5
- (void)autoModeChosen:(BOOL)chosen forDNS:(BOOL)dns;	// 0x1ef2b1
- (void)entryComplete:(id)complete;	// 0x1ef609
// declared property setter: - (void)setShowOnlyDNS:(BOOL)dns;	// 0x1efba9
// declared property getter: - (BOOL)showOnlyDNS;	// 0x1efb99
@end
