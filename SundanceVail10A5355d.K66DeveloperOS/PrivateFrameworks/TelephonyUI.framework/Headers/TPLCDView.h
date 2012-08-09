/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TPLCDBar.h"
#import "TelephonyUI-Structs.h"

@class TPLCDTextView, TPLCDSubImageView, UIView;

@interface TPLCDView : TPLCDBar {
	UIView *_contentView;	// 104 = 0x68
	TPLCDTextView *_textView;	// 108 = 0x6c
	TPLCDTextView *_secondLineTextView;	// 112 = 0x70
	TPLCDTextView *_labelView;	// 116 = 0x74
	TPLCDSubImageView *_imageView;	// 120 = 0x78
	unsigned _layoutAsLabelled : 1;	// 124 = 0x7c
}
@property(retain) id label;	// G=0x3589d30d; S=0x3589d2f9; converted property
@property(retain) id secondLineText;	// G=0x3589c88d; S=0x3589cec9; converted property
@property(retain) id subImage;	// G=0x3589d5dd; S=0x3589d4d9; converted property
@property(retain) id text;	// G=0x3589c3a1; S=0x3589c225; converted property
+ (float)labelFontSize;	// 0x3589bfd1
+ (float)textFontSize;	// 0x3589bfc9
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x3589bf0d
- (CGRect)_imageViewFrame;	// 0x3589caa9
- (CGRect)_labelFrame;	// 0x3589c8ad
- (float)_labelVInset;	// 0x3589c179
- (void)_resetContentViewFrame;	// 0x3589be9d
- (CGRect)_text1Frame;	// 0x3589c405
- (CGRect)_text2Frame;	// 0x3589c6a1
- (float)_textVInset;	// 0x3589c1cd
- (void)blinkLabel;	// 0x3589d331
- (void)dealloc;	// 0x3589bfd9
- (void)didFinishAnimatingLCDLabelFadeOut:(id)anOut finished:(id)finished context:(id)context;	// 0x3589d041
- (CGRect)fullSizedContentViewFrame;	// 0x3589bd79
// converted property getter: - (id)label;	// 0x3589d30d
- (void)layoutSubviews;	// 0x3589cbd9
// converted property getter: - (id)secondLineText;	// 0x3589c88d
- (void)setContentsAlpha:(float)alpha;	// 0x3589c121
// converted property setter: - (void)setLabel:(id)label;	// 0x3589d2f9
- (void)setLabel:(id)label animate:(BOOL)animate;	// 0x3589d071
- (void)setLayoutAsLabelled:(BOOL)labelled;	// 0x3589d655
// converted property setter: - (void)setSecondLineText:(id)text;	// 0x3589cec9
- (void)setShadowColor:(id)color;	// 0x3589d5fd
// converted property setter: - (void)setSubImage:(id)image;	// 0x3589d4d9
// converted property setter: - (void)setText:(id)text;	// 0x3589c225
- (BOOL)shouldCenterContentView;	// 0x3589c0c9
- (BOOL)shouldCenterText;	// 0x3589c099
- (BOOL)showImageViewOnLeftSide;	// 0x3589c11d
// converted property getter: - (id)subImage;	// 0x3589d5dd
// converted property getter: - (id)text;	// 0x3589c3a1
- (CGRect)textFrame;	// 0x3589c67d
@end
