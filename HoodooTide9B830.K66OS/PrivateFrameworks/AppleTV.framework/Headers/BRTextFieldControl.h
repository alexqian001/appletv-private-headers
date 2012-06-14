/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, NSMutableString, NSDictionary, BRMarqueeTextControl;

@interface BRTextFieldControl : BRControl <BRTextField> {
@private
	id _delegate;	// 48 = 0x30
	id _characterDelegate;	// 52 = 0x34
	BRMarqueeTextControl *_displayString;	// 56 = 0x38
	NSMutableString *_clearString;	// 60 = 0x3c
	NSDictionary *_savedAttributes;	// 64 = 0x40
	BOOL _useSecureText;	// 68 = 0x44
	BOOL _processingDeleteChar;	// 69 = 0x45
	BOOL _showCursor;	// 70 = 0x46
	BOOL _cursorVisible;	// 71 = 0x47
	int _textLengthLimit;	// 72 = 0x48
	NSTimer *_textObscureTimer;	// 76 = 0x4c
	NSTimer *_cursorBlinkTimer;	// 80 = 0x50
}
@property(assign) id characterDelegate;	// G=0x32a1bcb5; S=0x32a1bcc5; converted property
@property(assign) id delegate;	// G=0x32a1bc95; S=0x32a1bca5; converted property
@property(assign) BOOL showCursor;	// G=0x32a1bcd5; S=0x32a1bce5; converted property
@property(retain) id textAttributes;	// G=0x32a1bde1; S=0x32a1bdf1; converted property
@property(assign) int textLengthLimit;	// G=0x32a1bdc1; S=0x32a1bdd1; converted property
@property(assign) BOOL useSecureText;	// G=0x32a1bd71; S=0x32a1bd81; converted property
- (id)init;	// 0x32a1ba91
- (void)_blinkCursorTimerFired:(id)fired;	// 0x32a1ca75
- (id)_secureTextFromClearText;	// 0x32a1c7e1
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x32a1c9dd
- (void)_startSecureTextObscureTimer;	// 0x32a1c8f5
- (void)_stopBlinkCursorTimer;	// 0x32a1ca41
- (void)_stopSecureTextObscureTimer;	// 0x32a1c9a9
- (id)accessibilityTraits;	// 0x32a1c0f5
- (id)accessibilityValue;	// 0x32a1c0d5
- (BOOL)brKeyEvent:(id)event;	// 0x32a1c1bd
// converted property getter: - (id)characterDelegate;	// 0x32a1bcb5
- (void)controlWasDeactivated;	// 0x32a1bc55
- (void)dealloc;	// 0x32a1bbcd
// converted property getter: - (id)delegate;	// 0x32a1bc95
- (float)maxScrollPosition;	// 0x32a1c095
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x32a1c059
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x32a1bcc5
- (void)setClearString:(id)string;	// 0x32a1bf2d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32a1bca5
- (void)setDisplayString:(id)string;	// 0x32a1be79
- (void)setScrollPosition:(float)position;	// 0x32a1c0b5
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x32a1bce5
- (void)setString:(id)string;	// 0x32a1c159
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x32a1bdf1
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x32a1bdd1
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x32a1bd81
// converted property getter: - (BOOL)showCursor;	// 0x32a1bcd5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32a1bf89
- (id)stringValue;	// 0x32a1c121
// converted property getter: - (id)textAttributes;	// 0x32a1bde1
// converted property getter: - (int)textLengthLimit;	// 0x32a1bdc1
// converted property getter: - (BOOL)useSecureText;	// 0x32a1bd71
@end
