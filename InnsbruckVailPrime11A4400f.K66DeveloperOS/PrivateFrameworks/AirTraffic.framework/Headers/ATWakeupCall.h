/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import </libobjc.A.h>

@class NSNetServiceBrowser, NSThread, NSMutableArray;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSMutableArray *_hostLibraryIdentifiers;	// 4 = 0x4
	NSMutableArray *_resolvingHosts;	// 8 = 0x8
	NSMutableArray *_resolvedLibraryIdentifiers;	// 12 = 0xc
	NSMutableArray *_resolvedLibraryServices;	// 16 = 0x10
	id _completion;	// 20 = 0x14
	NSNetServiceBrowser *_browser;	// 24 = 0x18
	NSThread *_wakeThread;	// 28 = 0x1c
	BOOL _searching;	// 32 = 0x20
	int _resolving;	// 36 = 0x24
	unsigned _hostsToResolve;	// 40 = 0x28
}
+ (void)sendWakeupCall:(id)call;	// 0x2ffc9719
+ (void)sendWakeupCallToAllSyncHosts;	// 0x2ffc98a1
+ (id)wakeableHostsWithCompletion:(id)completion;	// 0x2ffc9b61
- (void)dealloc;	// 0x2ffc9cdd
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x2ffc9499
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x2ffc8e51
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x2ffc8f55
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x2ffc8fc1
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x2ffc8fad
- (void)netServiceDidResolveAddress:(id)netService;	// 0x2ffc90b5
- (void)stop;	// 0x2ffc9519
- (void)wake;	// 0x2ffc9595
@end
