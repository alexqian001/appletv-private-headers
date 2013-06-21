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
- (id)init;	// 0x33b50e31
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x33b51e8d
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x33b51a25
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x33b51cd5
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x33b524f1
- (void)_registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks preempt:(BOOL)preempt completionHandler:(id)handler;	// 0x33b52c1d
- (void)_reloadBabysitterProperties;	// 0x33b506bd
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x33b521bd
- (void)_sendAllClearNotifications;	// 0x33b5310d
- (void)_setUnitTestHackRunLoopMode:(id)mode;	// 0x33b544dd
- (BOOL)babysitterEnabled;	// 0x33b50e01
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x33b54191
- (void)dealloc;	// 0x33b50fe5
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x33b51569
- (void)registerPreemptiveWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x33b530c5
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x33b530e9
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x33b53a25
- (void)setBookmarksLockHolder:(id)holder;	// 0x33b5195d
- (void)setContactsLockHolder:(id)holder;	// 0x33b51705
- (void)setEventsLockHolder:(id)holder;	// 0x33b517cd
- (void)setNotesLockHolder:(id)holder;	// 0x33b51895
- (id)stateString;	// 0x33b54231
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x33b535f9
@end
