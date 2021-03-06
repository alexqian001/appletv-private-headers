/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class NSString, UIPasscodeField, UITextInputTraits, UIImageView;

@interface SBDeviceLockEntryField : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	UIPasscodeField *_passcodeField;	// 92 = 0x5c
	UITextInputTraits *_textInputTraits;	// 96 = 0x60
	CFCharacterSetRef _numericTrimmingSet;	// 100 = 0x64
	UIImageView *_shadowView;	// 104 = 0x68
	BOOL _highlighted;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
}
@property(assign, nonatomic) id delegate;	// G=0x33095c59; S=0x33095c69; @synthesize=_delegate
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x330958d9; S=0x330958e9; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x33095c49; S=0x33095569; @synthesize=_interfaceOrientation
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x33095635; S=0x3309565d; 
@property(readonly, retain) UIPasscodeField *passcodeField;	// G=0x33094ed5; converted property
@property(copy, nonatomic) NSString *stringValue;	// G=0x3309560d; S=0x330955e1; 
@property(readonly, retain) UITextInputTraits *textInputTraits;	// G=0x33095701; converted property
+ (id)topShadowImage;	// 0x33094781
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x330947a9
- (id)_backgroundImage;	// 0x33095011
- (CGSize)_fieldSizeForCurrentDevice;	// 0x33094ee5
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x330959b5
- (void)_layoutForCurrentDevice;	// 0x33095181
- (void)appendString:(id)string;	// 0x33095689
- (BOOL)becomeFirstResponder;	// 0x33094db5
- (BOOL)canBecomeFirstResponder;	// 0x33094d81
- (void)dealloc;	// 0x33094cf5
// declared property getter: - (id)delegate;	// 0x33095c59
- (void)deleteLastCharacter;	// 0x330956d9
// declared property getter: - (int)interfaceOrientation;	// 0x33095c49
- (BOOL)isFirstResponder;	// 0x33094e15
// declared property getter: - (BOOL)isHighlighted;	// 0x330958d9
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x33095635
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33095bf9
// converted property getter: - (id)passcodeField;	// 0x33094ed5
- (BOOL)passcodeField:(id)field shouldInsertText:(id)text;	// 0x33095795
- (void)passcodeFieldDidAcceptEntry:(id)passcodeField;	// 0x330957e9
- (void)passcodeFieldTextDidChange:(id)passcodeFieldText;	// 0x3309574d
- (BOOL)resignFirstResponder;	// 0x33094e75
- (BOOL)respondsToSelector:(SEL)selector;	// 0x33095b99
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33095c69
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x330958e9
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x33095569
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x3309565d
// declared property setter: - (void)setStringValue:(id)value;	// 0x330955e1
// declared property getter: - (id)stringValue;	// 0x3309560d
// converted property getter: - (id)textInputTraits;	// 0x33095701
@end

