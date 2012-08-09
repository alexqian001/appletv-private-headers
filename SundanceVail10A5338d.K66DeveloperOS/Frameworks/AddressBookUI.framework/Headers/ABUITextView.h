/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITextView.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class UIColor, ABSwellTextView;

@interface ABUITextView : UITextView {
	float _lastContentHeight;	// 508 = 0x1fc
	BOOL _isHighlighted;	// 512 = 0x200
	UIColor *_savedTextColor;	// 516 = 0x204
	UIColor *_highlightedTextColor;	// 520 = 0x208
	UIColor *_shadowColor;	// 524 = 0x20c
	CGSize _shadowOffset;	// 528 = 0x210
	BOOL _disallowsSetContentOffset;	// 536 = 0x218
	BOOL _informParentOfContentSizeChange;	// 537 = 0x219
	NSRange _pinnedCursorPosition;	// 540 = 0x21c
	ABSwellTextView *_parent;	// 548 = 0x224
}
@property(assign, nonatomic) BOOL disallowsSetContentOffset;	// G=0x370bfc01; S=0x370bf6b5; @synthesize=_disallowsSetContentOffset
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x370bfbd1; S=0x370bf839; @synthesize=_isHighlighted
@property(retain, nonatomic) UIColor *highlightedTextColor;	// G=0x370bfbe1; S=0x370bfbf1; @synthesize=_highlightedTextColor
@property(assign, nonatomic) ABSwellTextView *parent;	// G=0x370bfbb1; S=0x370bfbc1; @synthesize=_parent
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x370bfc11; S=0x370bfb01; @synthesize=_shadowColor
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x370bfc21; S=0x370bfb59; @synthesize=_shadowOffset
- (id)initWithFrame:(CGRect)frame;	// 0x370bf5e1
- (void)_beginPinningInputViews;	// 0x370bf979
- (void)_endPinningInputViews;	// 0x370bf9e9
- (void)_secretSetFrame:(CGRect)frame;	// 0x370bf715
- (void)_updateStylesheet;	// 0x370bfa29
- (BOOL)becomeFirstResponder;	// 0x370bf8ed
- (void)dealloc;	// 0x370bf641
// declared property getter: - (BOOL)disallowsSetContentOffset;	// 0x370bfc01
// declared property getter: - (id)highlightedTextColor;	// 0x370bfbe1
// declared property getter: - (BOOL)isHighlighted;	// 0x370bfbd1
// declared property getter: - (id)parent;	// 0x370bfbb1
- (void)setContentOffset:(CGPoint)offset;	// 0x370bf76d
- (void)setContentSize:(CGSize)size;	// 0x370bf7ad
// declared property setter: - (void)setDisallowsSetContentOffset:(BOOL)offset;	// 0x370bf6b5
- (void)setFrame:(CGRect)frame;	// 0x370bf769
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x370bf839
// declared property setter: - (void)setHighlightedTextColor:(id)color;	// 0x370bfbf1
// declared property setter: - (void)setParent:(id)parent;	// 0x370bfbc1
// declared property setter: - (void)setShadowColor:(id)color;	// 0x370bfb01
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x370bfb59
- (void)setTextColor:(id)color;	// 0x370bf875
// declared property getter: - (id)shadowColor;	// 0x370bfc11
// declared property getter: - (CGSize)shadowOffset;	// 0x370bfc21
@end
