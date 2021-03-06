/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTDeviceActivationController.h"
#import "ATVDeviceActivationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRWaitPromptControl, BRAlertControl, ATVDeviceActivationAction, BRTextControl;

__attribute__((visibility("hidden")))
@interface LTDeviceActivationController : XXUnknownSuperclass <ATVDeviceActivationDelegate> {
	BRWaitPromptControl *_prompt;	// 64 = 0x40
	BRTextControl *_subtext;	// 68 = 0x44
	BRAlertControl *_error;	// 72 = 0x48
	BOOL _userSkippedActivation;	// 76 = 0x4c
	ATVDeviceActivationAction *_action;	// 80 = 0x50
}
- (id)init;	// 0x5ae71
- (void).cxx_destruct;	// 0x5b589
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x5b505
- (void)activationSucceeded:(id)succeeded;	// 0x5b481
- (void)layoutSubcontrols;	// 0x5b33d
- (void)wasPopped;	// 0x5b271
- (void)wasPushed;	// 0x5b061
@end

@interface LTDeviceActivationController (Private)
- (void)_adjustSubtext;	// 0x5b7ed
- (void)_networkChanged:(id)changed;	// 0x5b6f1
- (void)_timeChangeNotification:(id)notification;	// 0x5b5e5
@end

