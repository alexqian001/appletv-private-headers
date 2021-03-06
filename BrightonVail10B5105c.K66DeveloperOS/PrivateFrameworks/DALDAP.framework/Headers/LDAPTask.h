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
@property(assign) id delegate;	// G=0x34407465; S=0x34407455; 
@property(assign) LDAPTaskManager *taskManager;	// G=0x34407635; S=0x34407649; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x34407535
// declared property getter: - (id)delegate;	// 0x34407465
- (void)finishWithError:(id)error;	// 0x344074f9
- (int)numDownloadedElements;	// 0x34407475
- (void)performTask;	// 0x34407355
- (void)performTaskInBackground;	// 0x34407451
- (void)reportStatusWithError:(id)error;	// 0x34407479
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34407455
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x34407649
- (BOOL)shouldHoldPowerAssertion;	// 0x3440758d
// declared property getter: - (id)taskManager;	// 0x34407635
- (int)taskStatusForError:(id)error;	// 0x34407591
@end

