/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DALocalDBGateKeeper.h"


@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
}
- (id)init;	// 0x3082be35
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x3082ca75
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x3082c7c1
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x3082cd89
- (void)_registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks preempt:(BOOL)preempt completionHandler:(id)handler;	// 0x3082d345
- (void)_sendAllClearNotifications;	// 0x3082d849
- (void)_setUnitTestHackRunLoopMode:(id)mode;	// 0x3082eb5d
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x3082e815
- (void)dealloc;	// 0x3082bf85
- (void)registerPreemptiveWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x3082d7e9
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x3082d819
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x3082e14d
- (void)setBookmarksLockHolder:(id)holder;	// 0x3082c6f9
- (void)setContactsLockHolder:(id)holder;	// 0x3082c4a1
- (void)setEventsLockHolder:(id)holder;	// 0x3082c569
- (void)setNotesLockHolder:(id)holder;	// 0x3082c631
- (id)stateString;	// 0x3082e8b5
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x3082dd39
@end

