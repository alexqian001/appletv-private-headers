/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRListControl, NSAttributedString, BRVerticalScrollBarControl;

__attribute__((visibility("hidden")))
@interface BRScrollingTextBoxControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	BRVerticalScrollBarControl *_scrollBar;	// 92 = 0x5c
	float _textHeightFactor;	// 96 = 0x60
	long _upperFocusLimit;	// 100 = 0x64
	long _lowerFocusLimit;	// 104 = 0x68
}
@property(retain) NSAttributedString *text;	// G=0x2fddf1; S=0x2fdd71; converted property
@property(assign) float textHeightFactor;	// G=0x2fde11; S=0x2fde01; converted property
- (id)init;	// 0x2fda61
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x2fe269
- (void)_forceSelectionToFocusLimit;	// 0x2fe195
- (void)_listSelectionChanged:(id)changed;	// 0x2fe185
- (void)_providerCountChanged:(id)changed;	// 0x2fe431
- (id)accessibilityLabel;	// 0x2fe15d
- (BOOL)brEventAction:(id)action;	// 0x2fde21
- (void)dealloc;	// 0x2fdccd
- (void)layoutSubcontrols;	// 0x2fdebd
// converted property setter: - (void)setText:(id)text;	// 0x2fdd71
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x2fde01
// converted property getter: - (id)text;	// 0x2fddf1
// converted property getter: - (float)textHeightFactor;	// 0x2fde11
@end

