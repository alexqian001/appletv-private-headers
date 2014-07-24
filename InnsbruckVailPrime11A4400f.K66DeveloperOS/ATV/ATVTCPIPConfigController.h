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
	id<ATVTCPIPConfigDelegate> _configurationDelegate;	// 152 = 0x98
	NSString *_address;	// 156 = 0x9c
	NSString *_subnetMask;	// 160 = 0xa0
	NSString *_router;	// 164 = 0xa4
	NSString *_dns;	// 168 = 0xa8
	ATVDottedQuadEntryController *_ipController;	// 172 = 0xac
	ATVDottedQuadEntryController *_maskController;	// 176 = 0xb0
	ATVDottedQuadEntryController *_routerController;	// 180 = 0xb4
	ATVDottedQuadEntryController *_dnsController;	// 184 = 0xb8
	unsigned _useDHCP : 1;	// 188 = 0xbc
	BOOL _showOnlyDNS;	// 189 = 0xbd
}
@property(assign, nonatomic) BOOL showOnlyDNS;	// G=0x1f49b9; S=0x1f49c9; @synthesize=_showOnlyDNS
- (id)initWithWireless:(BOOL)wireless forDNS:(BOOL)dns notifying:(id)notifying;	// 0x1f4269
- (void).cxx_destruct;	// 0x1f49d9
- (void)_readCurrentConfiguration;	// 0x1f4a95
- (void)_saveConfiguration;	// 0x1f4bf5
- (void)autoModeChosen:(BOOL)chosen forDNS:(BOOL)dns;	// 0x1f434d
- (void)entryComplete:(id)complete;	// 0x1f45f9
// declared property setter: - (void)setShowOnlyDNS:(BOOL)dns;	// 0x1f49c9
// declared property getter: - (BOOL)showOnlyDNS;	// 0x1f49b9
@end
