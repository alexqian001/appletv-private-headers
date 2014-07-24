/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SettingsNetworkAutoModeViewController.h"
#import "ATVDottedQuadEntryDelegate.h"
#import "SettingsNetworkAutoModeSelectionDelegate.h"

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
@property(assign, nonatomic) BOOL showOnlyDNS;	// G=0x22ef0d; S=0x22ef1d; @synthesize=_showOnlyDNS
- (id)initWithWireless:(BOOL)wireless forDNS:(BOOL)dns notifying:(id)notifying;	// 0x22e7bd
- (void).cxx_destruct;	// 0x22ef2d
- (void)_readCurrentConfiguration;	// 0x22efe9
- (void)_saveConfiguration;	// 0x22f149
- (void)autoModeChosen:(BOOL)chosen forDNS:(BOOL)dns;	// 0x22e8a1
- (void)entryComplete:(id)complete;	// 0x22eb4d
// declared property setter: - (void)setShowOnlyDNS:(BOOL)dns;	// 0x22ef1d
// declared property getter: - (BOOL)showOnlyDNS;	// 0x22ef0d
@end
