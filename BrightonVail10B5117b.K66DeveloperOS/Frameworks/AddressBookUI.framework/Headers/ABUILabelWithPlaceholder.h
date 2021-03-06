/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIView.h> // Unknown library

@class UILabel, UIColor, UIFont, NSString;

@interface ABUILabelWithPlaceholder : UIView {
	UILabel *_label;	// 84 = 0x54
	BOOL _isPlaceholderActive;	// 88 = 0x58
	NSString *_placeholder;	// 92 = 0x5c
	NSString *_actualText;	// 96 = 0x60
	UIColor *_actualTextColor;	// 100 = 0x64
}
@property(assign, nonatomic) UIFont *font;	// G=0x30961e21; S=0x30961e41; 
@property(assign, nonatomic) UIColor *highlightedTextColor;	// G=0x30961d51; S=0x30961d71; 
@property(readonly, retain) UILabel *label;	// G=0x30961f51; converted property
@property(copy, nonatomic) NSString *placeholder;	// G=0x30961c5d; S=0x30961c6d; 
@property(assign, nonatomic) UIColor *shadowColor;	// G=0x30961d91; S=0x30961db1; 
@property(assign, nonatomic) CGSize shadowOffset;	// G=0x30961dd1; S=0x30961e01; 
@property(copy, nonatomic) NSString *text;	// G=0x30961e61; S=0x30961e71; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x30961ced; S=0x30961cfd; 
- (id)initWithFrame:(CGRect)frame;	// 0x30961a05
- (CGRect)_labelFrameForBounds:(CGRect)bounds;	// 0x3096204d
- (void)_setActualText:(id)text;	// 0x30961bbd
- (void)_setActualTextColor:(id)color;	// 0x30961c19
- (void)dealloc;	// 0x30961b45
// declared property getter: - (id)font;	// 0x30961e21
// declared property getter: - (id)highlightedTextColor;	// 0x30961d51
// converted property getter: - (id)label;	// 0x30961f51
- (float)labelLeftEdgeInset;	// 0x30961f61
- (void)layoutSubviews;	// 0x30962155
// declared property getter: - (id)placeholder;	// 0x30961c5d
// declared property setter: - (void)setFont:(id)font;	// 0x30961e41
- (void)setFrame:(CGRect)frame;	// 0x309620a5
// declared property setter: - (void)setHighlightedTextColor:(id)color;	// 0x30961d71
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x30961c6d
// declared property setter: - (void)setShadowColor:(id)color;	// 0x30961db1
// declared property setter: - (void)setShadowOffset:(CGSize)offset;	// 0x30961e01
// declared property setter: - (void)setText:(id)text;	// 0x30961e71
// declared property setter: - (void)setTextColor:(id)color;	// 0x30961cfd
// declared property getter: - (id)shadowColor;	// 0x30961d91
// declared property getter: - (CGSize)shadowOffset;	// 0x30961dd1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30962009
- (void)sizeToFit;	// 0x30961f69
// declared property getter: - (id)text;	// 0x30961e61
// declared property getter: - (id)textColor;	// 0x30961ced
@end

