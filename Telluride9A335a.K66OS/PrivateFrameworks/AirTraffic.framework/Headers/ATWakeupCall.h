/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSNetServiceBrowser, NSMutableArray, NSThread;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSArray *_hostLibraryIdentifiers;	// 4 = 0x4
	NSMutableArray *_resolvedLibraryIdentifiers;	// 8 = 0x8
	NSMutableArray *_resolvedLibraryServices;	// 12 = 0xc
	id _completion;	// 16 = 0x10
	NSNetServiceBrowser *_browser;	// 20 = 0x14
	NSThread *_wakeThread;	// 24 = 0x18
	BOOL _searching;	// 28 = 0x1c
	int _resolving;	// 32 = 0x20
	int _hostsToResolve;	// 36 = 0x24
}
+ (void)sendWakeupCall:(id)call;	// 0x36765759
+ (void)sendWakeupCallToAllSyncHosts;	// 0x367658d1
+ (id)wakeableHostsWithCompletion:(id)completion;	// 0x36765a91
- (void)dealloc;	// 0x36765bf5
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x367654f1
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x36764f69
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x36765055
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x367650ad
- (void)netServiceDidResolveAddress:(id)netService;	// 0x36765195
- (void)stop;	// 0x36765561
- (void)wake;	// 0x367655d1
@end
