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
@property(assign, nonatomic) id delegate;	// G=0x3639abb9; S=0x3639abc9; @synthesize=_delegate
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x3639a831; S=0x3639a841; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3639aba9; S=0x3639a4c1; @synthesize=_interfaceOrientation
@property(assign, nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;	// G=0x3639a58d; S=0x3639a5b5; 
@property(readonly, retain) UIPasscodeField *passcodeField;	// G=0x36399e59; converted property
@property(copy, nonatomic) NSString *stringValue;	// G=0x3639a565; S=0x3639a539; 
@property(readonly, retain) UITextInputTraits *textInputTraits;	// G=0x3639a659; converted property
+ (id)topShadowImage;	// 0x363996f9
- (id)initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x36399721
- (id)_backgroundImage;	// 0x36399f81
- (CGSize)_fieldSizeForCurrentDevice;	// 0x36399e69
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3639a90d
- (void)_layoutForCurrentDevice;	// 0x3639a10d
- (void)appendString:(id)string;	// 0x3639a5e1
- (BOOL)becomeFirstResponder;	// 0x36399d39
- (BOOL)canBecomeFirstResponder;	// 0x36399d05
- (void)dealloc;	// 0x36399c79
// declared property getter: - (id)delegate;	// 0x3639abb9
- (void)deleteLastCharacter;	// 0x3639a631
// declared property getter: - (int)interfaceOrientation;	// 0x3639aba9
- (BOOL)isFirstResponder;	// 0x36399d99
// declared property getter: - (BOOL)isHighlighted;	// 0x3639a831
// declared property getter: - (BOOL)isOkayButtonEnabled;	// 0x3639a58d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3639ab59
// converted property getter: - (id)passcodeField;	// 0x36399e59
- (BOOL)passcodeField:(id)field shouldInsertText:(id)text;	// 0x3639a6ed
- (void)passcodeFieldDidAcceptEntry:(id)passcodeField;	// 0x3639a741
- (void)passcodeFieldTextDidChange:(id)passcodeFieldText;	// 0x3639a6a5
- (BOOL)resignFirstResponder;	// 0x36399df9
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3639aaf9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3639abc9
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3639a841
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3639a4c1
// declared property setter: - (void)setOkayButtonEnabled:(BOOL)enabled;	// 0x3639a5b5
// declared property setter: - (void)setStringValue:(id)value;	// 0x3639a539
// declared property getter: - (id)stringValue;	// 0x3639a565
// converted property getter: - (id)textInputTraits;	// 0x3639a659
@end

