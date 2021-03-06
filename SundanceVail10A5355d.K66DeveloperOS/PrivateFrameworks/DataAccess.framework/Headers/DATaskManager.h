/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSTimer, NSMutableSet, DAAccount;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
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
@property(assign) DAAccount *account;	// G=0x33658575; S=0x33658651; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x33657d65; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x3365c895; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x33657989; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x3365c8a9; @synthesize=_queuedTasks
- (id)init;	// 0x33642dd5
- (id)initWithAccount:(id)account;	// 0x33657d75
- (void)_cancelTasksWithReason:(int)reason;	// 0x3365c2f9
- (id)_getHeldIndependentTasks;	// 0x3365c74d
- (id)_getIndependentTasks;	// 0x3365c6fd
- (id)_getModalHeldIndependentTasks;	// 0x3365c79d
- (id)_getQueuedExclusiveTasks;	// 0x3365c6ad
- (id)_getQueuedModalTasks;	// 0x3365c83d
- (id)_getQueuedTasks;	// 0x3365c7ed
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x336595c1
- (void)_makeStateTransition;	// 0x3365b559
- (void)_performTask:(id)task;	// 0x3365afd1
- (void)_populateVersionDescriptions;	// 0x33658491
- (void)_reactivateHeldTasks;	// 0x3365b2ed
- (void)_releasePowerAssertionForTask:(id)task;	// 0x3365c5b5
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x3365b0c9
- (void)_retainPowerAssertionForTask:(id)task;	// 0x3365c51d
- (void)_schedulePerformTask:(id)task;	// 0x3365c271
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x3365c1cd
- (void)_scheduleStartModal:(id)modal;	// 0x3365c291
- (void)_startModal:(id)modal;	// 0x3365b209
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x336594bd
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x336594fd
- (BOOL)_useFakeDescriptions;	// 0x3365851d
- (void)_useOpportunisticSocketsAgain;	// 0x33659441
- (id)_version;	// 0x336584f5
// declared property getter: - (id)account;	// 0x33658575
- (id)accountID;	// 0x33658759
- (id)accountPersistentUUID;	// 0x33658779
// declared property getter: - (id)activeModalTask;	// 0x33657d65
// declared property getter: - (id)activeQueuedTask;	// 0x3365c895
// declared property getter: - (id)allTasks;	// 0x33657989
- (void)cancelAllTasks;	// 0x3365903d
- (void)cancelTask:(id)task;	// 0x33659029
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x33658fc9
- (void)dealloc;	// 0x33657e59
- (id)deviceType;	// 0x33658521
- (id)identityPersist;	// 0x33658719
- (id)password;	// 0x336586d5
- (int)port;	// 0x33658695
// declared property getter: - (id)queuedTasks;	// 0x3365c8a9
- (id)scheme;	// 0x33658739
- (id)server;	// 0x336586b5
// declared property setter: - (void)setAccount:(id)account;	// 0x33658651
- (void)shutdown;	// 0x33659109
- (id)stateString;	// 0x33659271
- (void)submitExclusiveTask:(id)task;	// 0x33658799
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x336587ad
- (void)submitIndependentTask:(id)task;	// 0x33658ac5
- (void)submitQueuedTask:(id)task;	// 0x33658d2d
- (void)taskDidFinish:(id)task;	// 0x33659741
- (void)taskEndModal:(id)modal;	// 0x3365ab95
- (BOOL)taskIsModal:(id)modal;	// 0x3365aecd
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x3365c88d
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x3365c891
- (void)taskRequestModal:(id)modal;	// 0x3365a601
- (BOOL)useSSL;	// 0x336586f5
- (id)user;	// 0x33658675
- (id)userAgent;	// 0x33658525
@end

