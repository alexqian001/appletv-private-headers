/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSArray, NSMutableSet, DAAccount, NSMutableArray;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
@private
	NSMutableArray *_queuedExclusiveTasks;	// 8 = 0x8
	id<DATask> _activeExclusiveTask;	// 12 = 0xc
	NSMutableSet *_independentTasks;	// 16 = 0x10
	NSMutableSet *_heldIndependentTasks;	// 20 = 0x14
	NSMutableSet *_modalHeldIndependentTasks;	// 24 = 0x18
	NSMutableArray *_queuedTasks;	// 28 = 0x1c
	id<DATask> _activeQueuedTask;	// 32 = 0x20
	id<DATask> _modalHeldActiveQueuedTask;	// 36 = 0x24
	NSMutableArray *_queuedModalTasks;	// 40 = 0x28
	id<DATask> _activeModalTask;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	NSTimer *_managerIdleTimer;	// 52 = 0x34
}
@property(assign) DAAccount *account;	// G=0x31ebce6d; S=0x31ebcf39; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x31ebc67d; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x31ec0e9d; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x31ebc2e9; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x31ec0ead; @synthesize=_queuedTasks
- (id)init;	// 0x31eab599
- (id)initWithAccount:(id)account;	// 0x31ebc68d
- (void)_cancelTasksWithReason:(int)reason;	// 0x31ec09a5
- (id)_getHeldIndependentTasks;	// 0x31ec0d55
- (id)_getIndependentTasks;	// 0x31ec0d05
- (id)_getModalHeldIndependentTasks;	// 0x31ec0da5
- (id)_getQueuedExclusiveTasks;	// 0x31ec0cb5
- (id)_getQueuedModalTasks;	// 0x31ec0e45
- (id)_getQueuedTasks;	// 0x31ec0df5
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x31ebde61
- (void)_makeStateTransition;	// 0x31ebfb91
- (void)_performTask:(id)task;	// 0x31ebf639
- (void)_populateVersionDescriptions;	// 0x31ebcd85
- (void)_reactivateHeldTasks;	// 0x31ebf929
- (void)_releasePowerAssertionForTask:(id)task;	// 0x31ec0c49
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x31ebf71d
- (void)_retainPowerAssertionForTask:(id)task;	// 0x31ec0bb5
- (void)_schedulePerformTask:(id)task;	// 0x31ec0919
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x31ec0871
- (void)_scheduleStartModal:(id)modal;	// 0x31ec0939
- (void)_startModal:(id)modal;	// 0x31ebf845
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x31ebdd79
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x31ebddb9
- (BOOL)_useFakeDescriptions;	// 0x31ebce11
- (void)_useOpportunisticSocketsAgain;	// 0x31ebdd01
- (id)_version;	// 0x31ebcde9
// declared property getter: - (id)account;	// 0x31ebce6d
- (id)accountID;	// 0x31ebd045
- (id)accountPersistentUUID;	// 0x31ebd065
// declared property getter: - (id)activeModalTask;	// 0x31ebc67d
// declared property getter: - (id)activeQueuedTask;	// 0x31ec0e9d
// declared property getter: - (id)allTasks;	// 0x31ebc2e9
- (void)cancelAllTasks;	// 0x31ebd939
- (void)cancelTask:(id)task;	// 0x31ebd925
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x31ebd8c5
- (void)dealloc;	// 0x31ebc76d
- (id)deviceID;	// 0x31ebce69
- (id)deviceType;	// 0x31ebce15
- (id)identityPersist;	// 0x31ebd005
- (id)password;	// 0x31ebcfc1
- (int)port;	// 0x31ebcf81
// declared property getter: - (id)queuedTasks;	// 0x31ec0ead
- (id)scheme;	// 0x31ebd025
- (id)server;	// 0x31ebcfa1
// declared property setter: - (void)setAccount:(id)account;	// 0x31ebcf39
- (void)shutdown;	// 0x31ebd9e5
- (id)stateString;	// 0x31ebdb4d
- (void)submitExclusiveTask:(id)task;	// 0x31ebd085
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x31ebd099
- (void)submitIndependentTask:(id)task;	// 0x31ebd3ad
- (void)submitQueuedTask:(id)task;	// 0x31ebd621
- (void)taskDidFinish:(id)task;	// 0x31ebdfdd
- (void)taskEndModal:(id)modal;	// 0x31ebf325
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x31ec0e95
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x31ec0e99
- (void)taskRequestModal:(id)modal;	// 0x31ebeded
- (BOOL)useSSL;	// 0x31ebcfe1
- (id)user;	// 0x31ebcf61
- (id)userAgent;	// 0x31ebce19
@end
