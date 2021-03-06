/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVSubmittable.h"

@class NSError, NSMutableSet;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager, CoreDAVTaskGroupDelegate;

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable> {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	double _timeoutInterval;	// 12 = 0xc
	NSMutableSet *_outstandingTasks;	// 20 = 0x14
	BOOL _isCancelling;	// 24 = 0x18
	BOOL _isTearingDown;	// 25 = 0x19
	id<CoreDAVTaskGroupDelegate> _delegate;	// 28 = 0x1c
	id _progressBlock;	// 32 = 0x20
	id _completionBlock;	// 36 = 0x24
	NSError *_error;	// 40 = 0x28
}
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x33a4e13d; S=0x33a4e14d; @synthesize=_accountInfoProvider
@property(copy, nonatomic) id completionBlock;	// G=0x33a4e15d; S=0x33a4e171; @synthesize=_completionBlock
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// G=0x33a4e181; S=0x33a4e191; @synthesize=_delegate
@property(retain, nonatomic) NSError *error;	// G=0x33a4e1a1; S=0x33a4e1b1; @synthesize=_error
@property(readonly, assign) NSMutableSet *outstandingTasks;	// G=0x33a4e1c1; @synthesize=_outstandingTasks
@property(copy, nonatomic) id progressBlock;	// G=0x33a4e1d5; S=0x33a4e1e9; @synthesize=_progressBlock
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;	// G=0x33a4e1f9; S=0x33a4e209; @synthesize=_taskManager
@property(assign) double timeoutInterval;	// G=0x33a4e219; S=0x33a4e24d; @synthesize=_timeoutInterval
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x33a4dbad
- (void)_tearDownAllTasks;	// 0x33a4dd95
// declared property getter: - (id)accountInfoProvider;	// 0x33a4e13d
- (void)bailWithError:(id)error;	// 0x33a4dee1
- (void)cancelTaskGroup;	// 0x33a4df2d
// declared property getter: - (id)completionBlock;	// 0x33a4e15d
- (void)dealloc;	// 0x33a4dc55
// declared property getter: - (id)delegate;	// 0x33a4e181
// declared property getter: - (id)error;	// 0x33a4e1a1
- (void)finishCoreDAVTaskGroupWithError:(id)error;	// 0x33a4dfa5
- (void)finishEarlyWithError:(id)error;	// 0x33a4e061
// declared property getter: - (id)outstandingTasks;	// 0x33a4e1c1
// declared property getter: - (id)progressBlock;	// 0x33a4e1d5
// declared property setter: - (void)setAccountInfoProvider:(id)provider;	// 0x33a4e14d
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x33a4e171
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33a4e191
// declared property setter: - (void)setError:(id)error;	// 0x33a4e1b1
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x33a4e1e9
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x33a4e209
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x33a4e24d
- (void)startTaskGroup;	// 0x33a4dd7d
- (void)submitWithTaskManager:(id)taskManager;	// 0x33a4e091
- (void)syncAway;	// 0x33a4dd81
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x33a4dd91
// declared property getter: - (id)taskManager;	// 0x33a4e1f9
// declared property getter: - (double)timeoutInterval;	// 0x33a4e219
@end

