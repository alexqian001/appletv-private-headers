/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextField.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDictionary, NSMutableString, NSString, NSTimer, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface BRTextFieldControl : BRControl <BRTextField> {
	id _delegate;	// 80 = 0x50
	id _characterDelegate;	// 84 = 0x54
	BRMarqueeTextControl *_displayString;	// 88 = 0x58
	NSMutableString *_clearString;	// 92 = 0x5c
	NSDictionary *_savedAttributes;	// 96 = 0x60
	BOOL _useSecureText;	// 100 = 0x64
	BOOL _processingDeleteChar;	// 101 = 0x65
	BOOL _showCursor;	// 102 = 0x66
	int _textLengthLimit;	// 104 = 0x68
	NSTimer *_textObscureTimer;	// 108 = 0x6c
	BOOL _drawCursorSymbolNow;	// 112 = 0x70
	NSString *_displayStringToSet;	// 116 = 0x74
	NSTimer *__enhancedCursorBlinkTimer;	// 120 = 0x78
}
@property(assign, nonatomic, setter=_setEnhancedCursorBlinkTimer:) NSTimer *_enhancedCursorBlinkTimer;	// G=0x2f9e91; S=0x2f9dfd; @synthesize=__enhancedCursorBlinkTimer
@property(assign) id characterDelegate;	// G=0x2f9301; S=0x2f9311; converted property
@property(assign) id delegate;	// G=0x2f92e1; S=0x2f92f1; converted property
@property(retain, nonatomic) NSString *displayStringToSet;	// G=0x2f9e71; S=0x2f9e81; @synthesize=_displayStringToSet
@property(assign, nonatomic) BOOL drawCursorSymbolNow;	// G=0x2f9e51; S=0x2f9e61; @synthesize=_drawCursorSymbolNow
@property(assign) BOOL showCursor;	// G=0x2f9321; S=0x2f9331; converted property
@property(retain) id textAttributes;	// G=0x2f944d; S=0x2f945d; converted property
@property(assign) int textLengthLimit;	// G=0x2f942d; S=0x2f943d; converted property
@property(assign) BOOL useSecureText;	// G=0x2f93e5; S=0x2f93f5; converted property
- (id)init;	// 0x2f8e09
- (void)_enhancedBlinkCursorTimerFired:(id)fired;	// 0x2fa0e5
// declared property getter: - (id)_enhancedCursorBlinkTimer;	// 0x2f9e91
- (id)_secureTextFromClearText;	// 0x2f9ea1
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x2fa081
// declared property setter: - (void)_setEnhancedCursorBlinkTimer:(id)timer;	// 0x2f9dfd
- (void)_startSecureTextObscureTimer;	// 0x2f9fb1
- (void)_stopSecureTextObscureTimer;	// 0x2fa051
- (id)accessibilityTraitsList;	// 0x2f9721
- (id)accessibilityValue;	// 0x2f9701
- (BOOL)brKeyEvent:(id)event;	// 0x2f9821
// converted property getter: - (id)characterDelegate;	// 0x2f9301
- (void)controlWasDeactivated;	// 0x2f929d
- (void)dealloc;	// 0x2f8f41
// converted property getter: - (id)delegate;	// 0x2f92e1
// declared property getter: - (id)displayStringToSet;	// 0x2f9e71
// declared property getter: - (BOOL)drawCursorSymbolNow;	// 0x2f9e51
- (void)drawRect:(CGRect)rect;	// 0x2f8ff1
- (float)maxScrollPosition;	// 0x2f96c1
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x2f9691
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x2f9311
- (void)setClearString:(id)string;	// 0x2f9531
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2f92f1
- (void)setDisplayString:(id)string;	// 0x2f94e1
// declared property setter: - (void)setDisplayStringToSet:(id)set;	// 0x2f9e81
// declared property setter: - (void)setDrawCursorSymbolNow:(BOOL)now;	// 0x2f9e61
- (void)setScrollPosition:(float)position;	// 0x2f96e1
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x2f9331
- (void)setString:(id)string;	// 0x2f97bd
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x2f945d
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x2f943d
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x2f93f5
// converted property getter: - (BOOL)showCursor;	// 0x2f9321
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f9589
- (id)stringValue;	// 0x2f9785
// converted property getter: - (id)textAttributes;	// 0x2f944d
// converted property getter: - (int)textLengthLimit;	// 0x2f942d
// converted property getter: - (BOOL)useSecureText;	// 0x2f93e5
@end
