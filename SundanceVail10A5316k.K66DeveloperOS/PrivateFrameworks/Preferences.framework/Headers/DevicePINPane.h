/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "UIKeyInput.h"
#import "Preferences-Structs.h"
#import "PSEditingPane.h"

@class UITransitionView, UIKeyboard;
@protocol PINEntryView;

@interface DevicePINPane : PSEditingPane <UIKeyInput> {
	UITransitionView *_transitionView;	// 116 = 0x74
	BOOL _transitioning;	// 120 = 0x78
	UIView<PINEntryView> *_pinView;	// 124 = 0x7c
	CGRect _pinViewFrame;	// 128 = 0x80
	UIKeyboard *_keypad;	// 144 = 0x90
	CGRect _keypadFrame;	// 148 = 0x94
	BOOL _keypadActive;	// 164 = 0xa4
	int _autocapitalizationType;	// 168 = 0xa8
	int _autocorrectionType;	// 172 = 0xac
	int _keyboardType;	// 176 = 0xb0
	int _keyboardAppearance;	// 180 = 0xb4
	BOOL _playSound;	// 184 = 0xb8
	BOOL _isBlocked;	// 185 = 0xb9
	BOOL _simplePIN;	// 186 = 0xba
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x372b115d; S=0x372b116d; @synthesize=_autocapitalizationType
@property(assign, nonatomic) int autocorrectionType;	// G=0x372b117d; S=0x372b118d; @synthesize=_autocorrectionType
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;	// G=0x372b11bd; S=0x372b11cd; @synthesize=_keyboardAppearance
@property(assign, nonatomic) int keyboardType;	// G=0x372b119d; S=0x372b11ad; @synthesize=_keyboardType
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// G=0x372b0f95; 
@property(readonly, assign) BOOL simplePIN;	// G=0x372b0271; converted property
@property(assign, nonatomic) int spellCheckingType;
@property(retain) id text;	// G=0x372b0c79; S=0x372b0c99; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x372afd59
- (void)_setKeypadState:(BOOL)state animated:(BOOL)animated;	// 0x372b0299
- (void)_setPlaysKeyboardClicks:(BOOL)clicks;	// 0x372afd29
- (void)activateKeypadView;	// 0x372aff81
- (void)adjustButtonsNow;	// 0x372b0f25
// declared property getter: - (int)autocapitalizationType;	// 0x372b115d
// declared property getter: - (int)autocorrectionType;	// 0x372b117d
- (BOOL)becomeFirstResponder;	// 0x372b05e5
- (BOOL)canBecomeFirstResponder;	// 0x372b0595
- (void)clearPassword;	// 0x372b0c51
- (void)deactivateKeypadView;	// 0x372b007d
- (void)dealloc;	// 0x372aff2d
- (void)deleteBackward;	// 0x372b0f05
- (void)dismissKeypad;	// 0x372b0541
- (BOOL)hasText;	// 0x372b0cb9
- (void)hideError;	// 0x372b0845
- (void)hideFailedAttempts;	// 0x372b00fd
- (void)insertText:(id)text;	// 0x372b0cf5
// declared property getter: - (BOOL)isSecureTextEntry;	// 0x372b0f95
// declared property getter: - (int)keyboardAppearance;	// 0x372b11bd
// declared property getter: - (int)keyboardType;	// 0x372b119d
- (void)layoutSubviews;	// 0x372b0fe1
- (void)okButtonPressed;	// 0x372b0825
- (id)password;	// 0x372b0c31
- (void)pinView:(id)view pinEntered:(id)entered;	// 0x372b0f99
- (BOOL)requiresKeyboard;	// 0x372b0281
- (BOOL)resignFirstResponder;	// 0x372b0669
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x372b116d
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x372b118d
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;	// 0x372b11cd
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x372b11ad
- (void)setPINPolicyString:(id)string visible:(BOOL)visible;	// 0x372b07e1
- (void)setSimplePIN:(BOOL)pin requiresKeyboard:(BOOL)keyboard;	// 0x372b011d
// converted property setter: - (void)setText:(id)text;	// 0x372b0c99
- (void)setTitle:(id)title;	// 0x372b0865
- (void)showError:(id)error error:(id)error2 isBlocked:(BOOL)blocked animate:(BOOL)animate;	// 0x372b06d1
- (void)showFailedAttempts:(int)attempts;	// 0x372b00dd
// converted property getter: - (BOOL)simplePIN;	// 0x372b0271
- (void)slideToNewPasscodeField:(BOOL)newPasscodeField withKeyboard:(BOOL)keyboard;	// 0x372b08b5
- (id)specifierLabel;	// 0x372afd09
// converted property getter: - (id)text;	// 0x372b0c79
- (void)transitionViewDidComplete:(id)transitionView;	// 0x372b0bdd
@end

