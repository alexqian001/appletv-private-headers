/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRebootWaitController : BRViewController {
	NSTimer *_holdoffTimer;	// 104 = 0x68
}
- (id)init;	// 0xec659
- (void)_handleUpdateProgress:(id)progress;	// 0xec925
- (void)_holdOffScreenSaver:(id)saver;	// 0xec8c5
- (BOOL)brEventAction:(id)action;	// 0xec83d
- (void)dealloc;	// 0xec7cd
- (id)secondaryProgressImagePath;	// 0xec841
- (void)wasPopped;	// 0xec871
@end
