/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DALocalDBGateKeeper.h"

@class NSString, NSMutableDictionary;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
	NSString *_buildVersion;	// 68 = 0x44
	NSMutableDictionary *_refreshingWaiters;	// 72 = 0x48
	NSMutableDictionary *_failedWaiters;	// 76 = 0x4c
	NSMutableDictionary *_restrictedWaiters;	// 80 = 0x50
}
- (id)init;	// 0x325a20c1
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x325a3119
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x325a2cad
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x325a2f51
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x325a36e5
- (void)_reloadBabysitterProperties;	// 0x325a18dd
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x325a33f1
- (void)_sendAllClearNotifications;	// 0x325a40f9
- (BOOL)babysitterEnabled;	// 0x325a2091
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x325a504d
- (void)dealloc;	// 0x325a2279
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x325a2821
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x325a3d61
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x325a4981
- (void)setBookmarksLockHolder:(id)holder;	// 0x325a2bed
- (void)setContactsLockHolder:(id)holder;	// 0x325a29ad
- (void)setEventsLockHolder:(id)holder;	// 0x325a2a6d
- (void)setNotesLockHolder:(id)holder;	// 0x325a2b2d
- (id)stateString;	// 0x325a50ed
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x325a45cd
@end

