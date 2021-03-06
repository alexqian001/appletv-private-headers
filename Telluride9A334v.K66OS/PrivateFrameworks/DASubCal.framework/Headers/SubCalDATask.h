/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "DATask.h"
#import <NSObject.h> // Unknown library

@class DATaskManager, DAStatusReport;

@interface SubCalDATask : NSObject <DATask> {
	DATaskManager *_taskManager;	// 4 = 0x4
	BOOL _finished;	// 8 = 0x8
	DAStatusReport *_statusReport;	// 12 = 0xc
}
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x358e7731; S=0x358e7741; @synthesize=_statusReport
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x358e7711; S=0x358e7721; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x358e766d
- (id)consumerDictKey;	// 0x358e5105
- (void)dealloc;	// 0x358e761d
- (void)didFinish;	// 0x358e770d
- (void)finishWithError:(id)error;	// 0x358e7685
- (void)performDelegateCallbackWithError:(id)error;	// 0x358e7709
- (void)performTask;	// 0x358e7669
// declared property setter: - (void)setStatusReport:(id)report;	// 0x358e7741
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x358e7721
- (BOOL)shouldHoldPowerAssertion;	// 0x358e7681
// declared property getter: - (id)statusReport;	// 0x358e7731
// declared property getter: - (id)taskManager;	// 0x358e7711
- (void)willFinish;	// 0x358e7705
@end

