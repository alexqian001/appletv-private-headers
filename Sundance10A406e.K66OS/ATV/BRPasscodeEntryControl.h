/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextField.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRDeviceKeyboardMessage, BRPasscodeSelectionLayer;
@protocol BRTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface BRPasscodeEntryControl : BRControl <BRTextField> {
	BRPasscodeSelectionLayer *_passcodeLayer;	// 84 = 0x54
	unsigned _numDigits;	// 88 = 0x58
	BOOL _isUserEditable;	// 92 = 0x5c
	CGSize _passcodeLayerSize;	// 96 = 0x60
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 104 = 0x68
	id<BRTextFieldDelegate> _textFieldDelegate;	// 108 = 0x6c
}
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x322211
- (void)_handlePlayPauseButton:(id)button;	// 0x322b21
- (void)_layoutUI;	// 0x322b99
- (void)_shakeAnimationCompleted:(id)completed;	// 0x322769
- (id)accessibilityLabel;	// 0x3231e5
- (id)accessibilityTraitsList;	// 0x323165
- (BOOL)brEventAction:(id)action;	// 0x3227e1
- (void)controlWasFocused;	// 0x3229e1
- (void)controlWasUnfocused;	// 0x322a65
- (void)dealloc;	// 0x322375
- (void)deviceKeyboardClose;	// 0x322bdd
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x322d85
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x322c65
- (BOOL)isAccessibilityElement;	// 0x323161
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x322405
- (void)reset;	// 0x3224d5
- (void)setDelegate:(id)delegate;	// 0x3224a5
- (void)setFrame:(CGRect)frame;	// 0x322799
- (void)setInitialPasscode:(id)passcode;	// 0x3224b5
- (void)setKeyboardTitle:(id)title;	// 0x322aa5
- (void)setString:(id)string;	// 0x322b01
- (void)shake;	// 0x322579
- (id)stringValue;	// 0x322ae1
- (float)widthOfDigitsFromScreenSize:(CGSize)screenSize;	// 0x322485
@end
