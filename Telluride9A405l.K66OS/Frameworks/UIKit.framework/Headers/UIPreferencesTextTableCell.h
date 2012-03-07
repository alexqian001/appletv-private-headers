/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPreferencesTableCell.h"
#import "UITextFieldDelegate.h"

@class UITextField, UILabel;

@interface UIPreferencesTextTableCell : UIPreferencesTableCell <UITextFieldDelegate> {
@private
	UITextField *_textField;	// 108 = 0x6c
	UILabel *_valueSuffixLabel;	// 112 = 0x70
	float _textFieldOffset;	// 116 = 0x74
	SEL _returnAction;	// 120 = 0x78
}
@property(readonly, retain) UITextField *textField;	// G=0x32e863a9; converted property
@property(assign) float textFieldOffset;	// G=0x32e859c9; S=0x32e8598d; converted property
@property(retain) id value;	// G=0x32e85f7d; S=0x32e85e2d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32e856e5
- (id)_disabledFontColor;	// 0x32e85aa9
- (void)_textFieldEndEditing:(id)editing;	// 0x32e860c5
- (void)_textFieldEndEditingOnReturn:(id)aReturn;	// 0x32e861fd
- (void)_textFieldStartEditing:(id)editing;	// 0x32e86069
- (void)_textValueChanged:(id)changed;	// 0x32e86295
- (void)_updateSuffixFrame;	// 0x32e863f5
- (BOOL)becomeFirstResponder;	// 0x32e85afd
- (BOOL)canBecomeFirstResponder;	// 0x32e85b21
- (void)dealloc;	// 0x32e859e9
- (BOOL)hasValueSuffix;	// 0x32e85e15
- (void)layoutSubviews;	// 0x32e866a1
- (BOOL)resignFirstResponder;	// 0x32e85b45
- (void)setPlaceHolderValue:(id)value;	// 0x32e863b9
- (void)setReturnAction:(SEL)action;	// 0x32e859d9
// converted property setter: - (void)setTextFieldOffset:(float)offset;	// 0x32e8598d
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x32e85b69
// converted property setter: - (void)setValue:(id)value;	// 0x32e85e2d
- (void)setValueSuffix:(id)suffix;	// 0x32e85c49
// converted property getter: - (id)textField;	// 0x32e863a9
- (void)textFieldClearButtonPressed:(id)pressed;	// 0x32e86395
- (void)textFieldDidBecomeFirstResponder:(id)textField;	// 0x32e85f01
// converted property getter: - (float)textFieldOffset;	// 0x32e859c9
// converted property getter: - (id)value;	// 0x32e85f7d
- (id)valueTextLabel;	// 0x32e86025
@end
