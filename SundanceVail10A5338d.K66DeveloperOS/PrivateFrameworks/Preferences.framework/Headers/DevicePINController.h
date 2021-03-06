/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSDetailController.h"

@class UIBarButtonItem, NSString;

@interface DevicePINController : PSDetailController {
	int _mode;	// 200 = 0xc8
	int _substate;	// 204 = 0xcc
	NSString *_oldPassword;	// 208 = 0xd0
	NSString *_lastEntry;	// 212 = 0xd4
	BOOL _success;	// 216 = 0xd8
	id _pinDelegate;	// 220 = 0xdc
	UIBarButtonItem *_cancelButton;	// 224 = 0xe0
	UIBarButtonItem *_nextButton;	// 228 = 0xe4
	UIBarButtonItem *_doneButton;	// 232 = 0xe8
	NSString *_error1;	// 236 = 0xec
	NSString *_error2;	// 240 = 0xf0
}
+ (BOOL)settingEnabled;	// 0x31d80c21
- (id)init;	// 0x31d80ca1
- (BOOL)_attemptValidationWithPIN:(id)pin;	// 0x31d815e1
- (void)_clearBlockedState;	// 0x31d813e5
- (void)_dismiss;	// 0x31d80e11
- (int)_getScreenType;	// 0x31d811ed
- (BOOL)_isBlocked;	// 0x31d814fd
- (int)_numberOfFailedAttempts;	// 0x31d81349
- (void)_setNumberOfFailedAttempts:(int)failedAttempts;	// 0x31d81385
- (void)_setUnblockTime:(double)time;	// 0x31d81571
- (void)_showFailedAttempts;	// 0x31d8177d
- (void)_showPINConfirmationError;	// 0x31d81cf9
- (void)_showUnacceptablePINError:(id)error password:(id)password;	// 0x31d81be9
- (void)_slidePasscodeField;	// 0x31d821ad
- (BOOL)_success;	// 0x31d82e11
- (double)_unblockTime;	// 0x31d81465
- (void)_updateErrorTextAndFailureCount:(BOOL)count;	// 0x31d81851
- (void)_updatePINButtons;	// 0x31d81d79
- (void)_updateUI;	// 0x31d81b91
- (void)adjustButtonsForPasswordLength:(unsigned)passwordLength;	// 0x31d82091
- (CFStringRef)blockTimeIntervalKey;	// 0x31d811d5
- (CFStringRef)blockedStateKey;	// 0x31d811e1
- (void)cancelButtonTapped;	// 0x31d82811
- (BOOL)completedInputIsValid:(id)valid;	// 0x31d820d5
- (void)dealloc;	// 0x31d80ecd
- (CFStringRef)defaultsID;	// 0x31d811bd
- (CFStringRef)failedAttemptsKey;	// 0x31d811c9
- (void)loadView;	// 0x31d820d9
- (CGRect)paneFrame;	// 0x31d82b01
- (void)performActionAfterPINEntry;	// 0x31d81751
- (void)performActionAfterPINRemove;	// 0x31d81759
- (void)performActionAfterPINSet;	// 0x31d81755
- (CGSize)pinContentSizeForViewInPopover;	// 0x31d80dbd
- (void)pinEntered:(id)entered;	// 0x31d82295
- (id)pinInstructionsPrompt;	// 0x31d828d1
- (id)pinInstructionsPromptFont;	// 0x31d82a15
- (BOOL)pinIsAcceptable:(id)acceptable outError:(id *)error;	// 0x31d8102d
- (int)pinLength;	// 0x31d811b9
- (BOOL)requiresKeyboard;	// 0x31d81271
- (void)setLastEntry:(id)entry;	// 0x31d80ff1
- (void)setOldPassword:(id)password;	// 0x31d80fb5
- (void)setPIN:(id)pin;	// 0x31d81099
- (void)setPane:(id)pane;	// 0x31d82b8d
- (void)setSpecifier:(id)specifier;	// 0x31d80d15
- (BOOL)simplePIN;	// 0x31d81329
- (id)stringsBundle;	// 0x31d80e95
- (id)stringsTable;	// 0x31d80e89
- (void)suspend;	// 0x31d8175d
- (BOOL)useProgressiveDelays;	// 0x31d811b5
- (BOOL)validatePIN:(id)pin;	// 0x31d81139
- (void)viewDidAppear:(BOOL)view;	// 0x31d82aa9
- (void)viewWillAppear:(BOOL)view;	// 0x31d82a39
- (void)viewWillLayoutSubviews;	// 0x31d8212d
- (void)willUnlock;	// 0x31d80c55
@end

