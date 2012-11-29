/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDeviceActivationDelegate.h"
#import "BRController.h"

@class BRTextControl, BRAlertControl, ATVDeviceActivationAction, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface LTDeviceActivationController : BRController <ATVDeviceActivationDelegate> {
	BRWaitPromptControl *_prompt;	// 100 = 0x64
	BRTextControl *_subtext;	// 104 = 0x68
	BRAlertControl *_error;	// 108 = 0x6c
	BOOL _userSkippedActivation;	// 112 = 0x70
	ATVDeviceActivationAction *_action;	// 116 = 0x74
}
- (id)init;	// 0x6ac29
- (void).cxx_destruct;	// 0x6b2e9
- (void)_adjustSubtext;	// 0x6b54d
- (void)_networkChanged:(id)changed;	// 0x6b455
- (void)_timeChangeNotification:(id)notification;	// 0x6b345
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0x6b251
- (void)activationSucceeded:(id)succeeded;	// 0x6b1cd
- (void)layoutSubcontrols;	// 0x6b0d1
- (void)wasPopped;	// 0x6b005
- (void)wasPushed;	// 0x6adfd
@end
