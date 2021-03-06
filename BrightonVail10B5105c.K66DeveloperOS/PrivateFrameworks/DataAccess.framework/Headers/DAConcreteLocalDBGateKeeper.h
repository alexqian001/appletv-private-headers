/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DALocalDBGateKeeper.h"

@class NSMutableDictionary, NSString;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
	NSString *_buildVersion;	// 72 = 0x48
	NSMutableDictionary *_refreshingWaiters;	// 76 = 0x4c
	NSMutableDictionary *_failedWaiters;	// 80 = 0x50
	NSMutableDictionary *_restrictedWaiters;	// 84 = 0x54
}
- (id)init;	// 0x35e58e31
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x35e59e8d
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x35e59a25
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x35e59cd5
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x35e5a4f1
- (void)_registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks preempt:(BOOL)preempt completionHandler:(id)handler;	// 0x35e5ac1d
- (void)_reloadBabysitterProperties;	// 0x35e586bd
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x35e5a1bd
- (void)_sendAllClearNotifications;	// 0x35e5b10d
- (void)_setUnitTestHackRunLoopMode:(id)mode;	// 0x35e5c4dd
- (BOOL)babysitterEnabled;	// 0x35e58e01
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x35e5c191
- (void)dealloc;	// 0x35e58fe5
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x35e59569
- (void)registerPreemptiveWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x35e5b0c5
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x35e5b0e9
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x35e5ba25
- (void)setBookmarksLockHolder:(id)holder;	// 0x35e5995d
- (void)setContactsLockHolder:(id)holder;	// 0x35e59705
- (void)setEventsLockHolder:(id)holder;	// 0x35e597cd
- (void)setNotesLockHolder:(id)holder;	// 0x35e59895
- (id)stateString;	// 0x35e5c231
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x35e5b5f9
@end

