/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsMigration.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSString, BRAccount, NSMutableArray, NSNetServiceBrowser;

__attribute__((visibility("hidden")))
@interface ATVHSManager : XXUnknownSuperclass <NSNetServiceBrowserDelegate, NSNetServiceDelegate, ATVSettingsMigration> {
	BOOL _isWirelessInterfaceActive;	// 4 = 0x4
	BOOL _isWiredInterfaceActive;	// 5 = 0x5
	BOOL _activeNetworkInterfaceInitialized;	// 6 = 0x6
	NSNetServiceBrowser *_iTunesServiceBrowser;	// 8 = 0x8
	NSNetServiceBrowser *_photoAppServiceBrowser;	// 12 = 0xc
	NSMutableArray *_resolvingServices;	// 16 = 0x10
	NSMutableArray *_monitoredServices;	// 20 = 0x14
	NSString *_hsGroupIDInternal;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BRAccount *hsAccount;	// G=0x3b33e1; @dynamic
@property(readonly, assign, nonatomic) NSString *hsGroupID;	// G=0x3b3389; @dynamic
@property(copy, nonatomic) NSString *hsGroupIDInternal;	// G=0x3b53a9; S=0x3b53bd; @synthesize=_hsGroupIDInternal
@property(retain, nonatomic) NSNetServiceBrowser *iTunesServiceBrowser;	// G=0x3b5329; S=0x3b5339; @synthesize=_iTunesServiceBrowser
@property(retain, nonatomic) NSMutableArray *monitoredServices;	// G=0x3b5389; S=0x3b5399; @synthesize=_monitoredServices
@property(retain, nonatomic) NSNetServiceBrowser *photoAppServiceBrowser;	// G=0x3b5349; S=0x3b5359; @synthesize=_photoAppServiceBrowser
@property(retain, nonatomic) NSMutableArray *resolvingServices;	// G=0x3b5369; S=0x3b5379; @synthesize=_resolvingServices
+ (id)sharedInstance;	// 0x3b2771
- (id)init;	// 0x3b27e1
- (id)_availableHomeSharesOfType:(unsigned long)type;	// 0x3b5929
- (BOOL)_connectAvailableDataClientsForServer:(id)server;	// 0x3b53cd
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x3b557d
- (id)_dataServerWithID:(id)anId;	// 0x3b59ed
- (void)_handleITunesTXTRecord:(id)record service:(id)service;	// 0x3b3c31
- (void)_handlePhotoAppTXTRecord:(id)record service:(id)service;	// 0x3b4255
- (void)_handleTXTRecord:(id)record service:(id)service;	// 0x3b3b59
- (void)_iTunesRequestTimedOut:(id)anOut;	// 0x3b56a5
- (void)_networkStateChanged:(id)changed;	// 0x3b577d
- (void)_resolveBonjourWithDataServer:(id)dataServer;	// 0x3b37f9
- (void)_serverAvailableForConnection:(id)connection;	// 0x3b54f1
- (unsigned long long)_uint64ValueWithData:(id)data;	// 0x3b5b39
- (void)cleanUpOrEnableHomeShareState;	// 0x3b36b5
- (BOOL)connectToServer:(id)server;	// 0x3b3565
- (void)disableHomeSharing;	// 0x3b2f69
- (void)enableBonjourBrowseWithHSGroupID:(id)hsgroupID;	// 0x3b3151
- (void)enableHomeSharingWithAccountName:(id)accountName andPassword:(id)password;	// 0x3b29bd
- (id)homeSharesOfTypes:(unsigned long)types;	// 0x3b3451
// declared property getter: - (id)hsAccount;	// 0x3b33e1
// declared property getter: - (id)hsGroupID;	// 0x3b3389
// declared property getter: - (id)hsGroupIDInternal;	// 0x3b53a9
// declared property getter: - (id)iTunesServiceBrowser;	// 0x3b5329
- (void)migrateFrom:(id)from to:(id)to;	// 0x3b28a1
// declared property getter: - (id)monitoredServices;	// 0x3b5389
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x3b5075
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x3b4edd
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x3b4781
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x3b4749
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x3b4811
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x3b4711
- (void)netServiceBrowserWillSearch:(id)netServiceBrowser;	// 0x3b46d9
- (void)netServiceDidResolveAddress:(id)netService;	// 0x3b4f91
// declared property getter: - (id)photoAppServiceBrowser;	// 0x3b5349
// declared property getter: - (id)resolvingServices;	// 0x3b5369
// declared property setter: - (void)setHsGroupIDInternal:(id)internal;	// 0x3b53bd
// declared property setter: - (void)setITunesServiceBrowser:(id)browser;	// 0x3b5339
// declared property setter: - (void)setMonitoredServices:(id)services;	// 0x3b5399
// declared property setter: - (void)setPhotoAppServiceBrowser:(id)browser;	// 0x3b5359
// declared property setter: - (void)setResolvingServices:(id)services;	// 0x3b5379
- (int)sharingState;	// 0x3b34c9
@end
