/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPrintFormatter.h"
#import "UIKit-Structs.h"

@class NSAttributedString, NSString, UIColor, UITextView, UITextViewPrintFormatter, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter {
	UITextView *_textView;	// 44 = 0x2c
	UITextViewPrintFormatter *_textViewPrintFormatter;	// 48 = 0x30
}
@property(copy, nonatomic) NSAttributedString *attributedText;	// G=0x2f7e673d; S=0x2f7e675d; 
@property(retain, nonatomic) UIColor *color;	// G=0x2f7e68dd; S=0x2f7e68fd; @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x2f7e6819; S=0x2f7e6839; @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x2f7e6661; S=0x2f7e6681; @dynamic
@property(assign, nonatomic) int textAlignment;	// G=0x2f7e6959; S=0x2f7e6979; @dynamic
- (id)initWithAttributedText:(id)attributedText;	// 0x2f7e6401
- (id)initWithText:(id)text;	// 0x2f7e6369
- (int)_recalcPageCount;	// 0x2f7e6ab9
- (id)_textViewPrintFormatter;	// 0x2f7e6a05
// declared property getter: - (id)attributedText;	// 0x2f7e673d
// declared property getter: - (id)color;	// 0x2f7e68dd
- (id)copyWithZone:(NSZone *)zone;	// 0x2f7e6499
- (void)dealloc;	// 0x2f7e65e9
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x2f7e6b21
// declared property getter: - (id)font;	// 0x2f7e6819
- (CGRect)rectForPageAtIndex:(int)index;	// 0x2f7e6ae1
- (void)removeFromPrintPageRenderer;	// 0x2f7e6a69
// declared property setter: - (void)setAttributedText:(id)text;	// 0x2f7e675d
// declared property setter: - (void)setColor:(id)color;	// 0x2f7e68fd
// declared property setter: - (void)setFont:(id)font;	// 0x2f7e6839
// declared property setter: - (void)setText:(id)text;	// 0x2f7e6681
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x2f7e6979
// declared property getter: - (id)text;	// 0x2f7e6661
// declared property getter: - (int)textAlignment;	// 0x2f7e6959
@end
