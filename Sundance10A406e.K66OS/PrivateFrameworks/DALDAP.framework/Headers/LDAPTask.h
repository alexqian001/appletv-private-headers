/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DATask.h"
#import <DADisableableObject.h> // Unknown library

@class LDAPTaskManager;

@interface LDAPTask : DADisableableObject <DATask> {
	LDAPTaskManager *_taskManager;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x303a1469; S=0x303a1459; 
@property(assign) LDAPTaskManager *taskManager;	// G=0x303a1639; S=0x303a164d; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x303a1539
// declared property getter: - (id)delegate;	// 0x303a1469
- (void)finishWithError:(id)error;	// 0x303a14fd
- (int)numDownloadedElements;	// 0x303a1479
- (void)performTask;	// 0x303a1359
- (void)performTaskInBackground;	// 0x303a1455
- (void)reportStatusWithError:(id)error;	// 0x303a147d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303a1459
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x303a164d
- (BOOL)shouldHoldPowerAssertion;	// 0x303a1591
// declared property getter: - (id)taskManager;	// 0x303a1639
- (int)taskStatusForError:(id)error;	// 0x303a1595
@end

