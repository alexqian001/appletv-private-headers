/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextField.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableString, BRMarqueeTextControl, NSTimer, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRTextFieldControl : BRControl <BRTextField> {
	id _delegate;	// 84 = 0x54
	id _characterDelegate;	// 88 = 0x58
	BRMarqueeTextControl *_displayString;	// 92 = 0x5c
	NSMutableString *_clearString;	// 96 = 0x60
	NSDictionary *_savedAttributes;	// 100 = 0x64
	BOOL _useSecureText;	// 104 = 0x68
	BOOL _processingDeleteChar;	// 105 = 0x69
	BOOL _showCursor;	// 106 = 0x6a
	int _textLengthLimit;	// 108 = 0x6c
	NSTimer *_textObscureTimer;	// 112 = 0x70
	BOOL _drawCursorSymbolNow;	// 116 = 0x74
	NSString *_displayStringToSet;	// 120 = 0x78
	NSTimer *__enhancedCursorBlinkTimer;	// 124 = 0x7c
}
@property(assign, nonatomic, setter=_setEnhancedCursorBlinkTimer:) NSTimer *_enhancedCursorBlinkTimer;	// G=0x31b445; S=0x31b339; @synthesize=__enhancedCursorBlinkTimer
@property(assign) id characterDelegate;	// G=0x31a7fd; S=0x31a80d; converted property
@property(assign) id delegate;	// G=0x31a7dd; S=0x31a7ed; converted property
@property(retain, nonatomic) NSString *displayStringToSet;	// G=0x31b425; S=0x31b435; @synthesize=_displayStringToSet
@property(assign, nonatomic) BOOL drawCursorSymbolNow;	// G=0x31b405; S=0x31b415; @synthesize=_drawCursorSymbolNow
@property(assign) BOOL showCursor;	// G=0x31a81d; S=0x31a82d; converted property
@property(retain) id textAttributes;	// G=0x31a949; S=0x31a959; converted property
@property(assign) int textLengthLimit;	// G=0x31a929; S=0x31a939; converted property
@property(assign) BOOL useSecureText;	// G=0x31a8e1; S=0x31a8f1; converted property
- (id)init;	// 0x31a305
- (void)_enhancedBlinkCursorTimerFired:(id)fired;	// 0x31b699
// declared property getter: - (id)_enhancedCursorBlinkTimer;	// 0x31b445
- (id)_secureTextFromClearText;	// 0x31b455
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x31b635
// declared property setter: - (void)_setEnhancedCursorBlinkTimer:(id)timer;	// 0x31b339
- (void)_startSecureTextObscureTimer;	// 0x31b565
- (void)_stopSecureTextObscureTimer;	// 0x31b605
- (id)accessibilityTraitsList;	// 0x31ac1d
- (id)accessibilityValue;	// 0x31abfd
- (BOOL)brKeyEvent:(id)event;	// 0x31ad1d
// converted property getter: - (id)characterDelegate;	// 0x31a7fd
- (void)controlWasDeactivated;	// 0x31a799
- (void)dealloc;	// 0x31a43d
// converted property getter: - (id)delegate;	// 0x31a7dd
- (id)description;	// 0x31b37d
// declared property getter: - (id)displayStringToSet;	// 0x31b425
// declared property getter: - (BOOL)drawCursorSymbolNow;	// 0x31b405
- (void)drawRect:(CGRect)rect;	// 0x31a4ed
- (float)maxScrollPosition;	// 0x31abbd
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x31ab8d
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x31a80d
- (void)setClearString:(id)string;	// 0x31aa2d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a7ed
- (void)setDisplayString:(id)string;	// 0x31a9dd
// declared property setter: - (void)setDisplayStringToSet:(id)set;	// 0x31b435
// declared property setter: - (void)setDrawCursorSymbolNow:(BOOL)now;	// 0x31b415
- (void)setScrollPosition:(float)position;	// 0x31abdd
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x31a82d
- (void)setString:(id)string;	// 0x31acb9
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x31a959
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x31a939
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x31a8f1
// converted property getter: - (BOOL)showCursor;	// 0x31a81d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31aa85
- (id)stringValue;	// 0x31ac81
// converted property getter: - (id)textAttributes;	// 0x31a949
// converted property getter: - (int)textLengthLimit;	// 0x31a929
// converted property getter: - (BOOL)useSecureText;	// 0x31a8e1
@end

