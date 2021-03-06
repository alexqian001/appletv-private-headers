/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"
#import "NSCoding.h"

@class UIFont, UIImageView, NSArray, UILabel, NSAttributedString, UIColor, UIImage, NSString;

@interface UIButton : UIControl <NSCoding> {
	CFDictionaryRef _contentLookup;	// 108 = 0x6c
	UIEdgeInsets _contentEdgeInsets;	// 112 = 0x70
	UIEdgeInsets _titleEdgeInsets;	// 128 = 0x80
	UIEdgeInsets _imageEdgeInsets;	// 144 = 0x90
	UIImageView *_backgroundView;	// 160 = 0xa0
	UIImageView *_imageView;	// 164 = 0xa4
	UILabel *_titleView;	// 168 = 0xa8
	BOOL _initialized;	// 172 = 0xac
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
	} _buttonFlags;	// 173 = 0xad
	NSArray *_contentConstraints;	// 176 = 0xb0
}
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints;	// G=0x31e582f5; S=0x31e58309; @synthesize
@property(assign, nonatomic) BOOL adjustsImageWhenDisabled;	// G=0x31cbcbe1; S=0x31bf987d; @dynamic
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;	// G=0x31cbcbcd; S=0x31bf981d; @dynamic
@property(assign) BOOL autosizesToFit;	// G=0x31be86e5; S=0x31bfae75; converted property
@property(readonly, assign, nonatomic) int buttonType;	// G=0x31e57459; 
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;	// G=0x31bf7f79; S=0x31bfa9e5; @dynamic
@property(readonly, assign, nonatomic) NSAttributedString *currentAttributedTitle;	// G=0x31cb58f1; 
@property(readonly, assign, nonatomic) UIImage *currentBackgroundImage;	// G=0x31e5757d; 
@property(readonly, assign, nonatomic) UIImage *currentImage;	// G=0x31c6e299; 
@property(readonly, assign, nonatomic) NSString *currentTitle;	// G=0x31cb5951; 
@property(readonly, assign, nonatomic) UIColor *currentTitleColor;	// G=0x31e574dd; 
@property(readonly, assign, nonatomic) UIColor *currentTitleShadowColor;	// G=0x31e5752d; 
@property(retain, nonatomic) UIFont *font;	// G=0x31e58319; S=0x31c3f0b1; 
@property(assign, nonatomic) UIEdgeInsets imageEdgeInsets;	// G=0x31c19581; S=0x31bfb7b1; @dynamic
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x31d1e099; 
@property(assign, nonatomic) int lineBreakMode;	// G=0x31e58329; S=0x31e58339; 
@property(assign, nonatomic) BOOL reversesTitleShadowWhenHighlighted;	// G=0x31e5746d; S=0x31d1e025; @dynamic
@property(assign, nonatomic) BOOL showsTouchWhenHighlighted;	// G=0x31d4d0f9; S=0x31c80a2d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x31e582ed; S=0x31e582f1; 
@property(retain) id title;	// G=0x31e58839; S=0x31e5883d; converted property
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;	// G=0x31c484ad; S=0x31bf8b4d; @dynamic
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x31c47aad; 
@property(assign, nonatomic) CGSize titleShadowOffset;	// G=0x31e58349; S=0x31c3f24d; 
+ (id)_defaultContentForType:(int)type andState:(unsigned)state;	// 0x31c47851
+ (id)_defaultNormalTitleColor;	// 0x31bf78c9
+ (id)_defaultNormalTitleShadowColor;	// 0x31bf7991
+ (id)buttonWithType:(int)type;	// 0x31c47479
- (id)initWithCoder:(id)coder;	// 0x31d71ac9
- (id)initWithFrame:(CGRect)frame;	// 0x31bf7445
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x31e5837d
- (id)_archivableContent:(id *)content;	// 0x31e58a11
- (id)_attributedTitleForState:(unsigned)state;	// 0x31bf84ed
- (id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL *)normalState;	// 0x31bf7f11
- (id)_backgroundView;	// 0x31c195b9
- (int)_buttonType;	// 0x31e58369
- (BOOL)_canHaveTitle;	// 0x31c2360d
// declared property getter: - (id)_contentConstraints;	// 0x31e582f5
- (id)_contentForState:(unsigned)state;	// 0x31be86a5
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x31e575f9
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x31e575cd
- (id)_font;	// 0x31c2363d
- (id)_imageForState:(unsigned)state usesImageForNormalState:(BOOL *)normalState;	// 0x31bf7871
- (id)_imageView;	// 0x31e58829
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x31c2307d
- (void)_invalidateContentConstraints;	// 0x31e56e71
- (id)_letterpressStyleForState:(unsigned)state;	// 0x31c48455
- (BOOL)_likelyToHaveTitle;	// 0x31c235a5
- (int)_lineBreakMode;	// 0x31c23681
- (void)_populateArchivedSubviews:(id)subviews;	// 0x31e56f1d
- (id)_scriptingInfo;	// 0x31d1f2f9
- (void)_setAttributedTitle:(id)title forStates:(unsigned)states;	// 0x31e58845
- (void)_setBackground:(id)background forStates:(unsigned)states;	// 0x31bfa789
- (void)_setButtonType:(int)type;	// 0x31c47be5
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x31bf7919
// declared property setter: - (void)_setContentConstraints:(id)constraints;	// 0x31e58309
- (void)_setFont:(id)font;	// 0x31bf7ae9
- (void)_setImage:(id)image forStates:(unsigned)states;	// 0x31bf972d
- (void)_setLetterpressStyle:(id)style forState:(unsigned)state;	// 0x31e58791
- (void)_setLineBreakMode:(int)mode;	// 0x31d19c41
- (void)_setShadowColor:(id)color forStates:(unsigned)states;	// 0x31bf7a7d
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)_set;	// 0x31d53fd1
- (void)_setTitle:(id)title forStates:(unsigned)states;	// 0x31c48371
- (void)_setTitleColor:(id)color forStates:(unsigned)states;	// 0x31bf78e5
- (void)_setTitleShadowOffset:(CGSize)offset;	// 0x31bf8c49
- (id)_setupBackgroundView;	// 0x31c18b65
- (void)_setupImageView;	// 0x31c18fc9
- (void)_setupTitleView;	// 0x31bf7bf9
- (id)_shadowColorForState:(unsigned)state;	// 0x31c483fd
- (void)_takeContentFromArchivableContent:(id)archivableContent overrides:(id)overrides;	// 0x31d73349
- (void)_titleAttributesChanged;	// 0x31bf8af5
- (id)_titleColorForState:(unsigned)state;	// 0x31c483a5
- (id)_titleForState:(unsigned)state;	// 0x31bf8495
- (CGRect)_titleRectForContentRect:(CGRect)contentRect calculatePositionForEmptyTitle:(BOOL)emptyTitle;	// 0x31bf7fe5
- (CGSize)_titleShadowOffset;	// 0x31e587ed
- (id)_titleView;	// 0x31d771f9
- (id)_viewForBaselineLayout;	// 0x31e57625
// declared property getter: - (BOOL)adjustsImageWhenDisabled;	// 0x31cbcbe1
// declared property getter: - (BOOL)adjustsImageWhenHighlighted;	// 0x31cbcbcd
- (UIEdgeInsets)alignmentRectInsets;	// 0x31bfb525
- (id)attributedTitleForState:(unsigned)state;	// 0x31cb5941
// converted property getter: - (BOOL)autosizesToFit;	// 0x31be86e5
- (id)backgroundImageForState:(unsigned)state;	// 0x31bf7efd
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x31c18c5d
// declared property getter: - (int)buttonType;	// 0x31e57459
// declared property getter: - (UIEdgeInsets)contentEdgeInsets;	// 0x31bf7f79
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x31bf7e2d
- (void)crossfadeAnimationDidStop:(id)crossfadeAnimation finished:(id)finished context:(void *)context;	// 0x31e586b9
- (void)crossfadeToImage:(id)image forState:(unsigned)state;	// 0x31e583c5
// declared property getter: - (id)currentAttributedTitle;	// 0x31cb58f1
// declared property getter: - (id)currentBackgroundImage;	// 0x31e5757d
// declared property getter: - (id)currentImage;	// 0x31c6e299
// declared property getter: - (id)currentTitle;	// 0x31cb5951
// declared property getter: - (id)currentTitleColor;	// 0x31e574dd
// declared property getter: - (id)currentTitleShadowColor;	// 0x31e5752d
- (void)dealloc;	// 0x31c00e79
- (unsigned long long)defaultAccessibilityTraits;	// 0x31e7094d
- (void)encodeWithCoder:(id)coder;	// 0x31e56fed
// declared property getter: - (id)font;	// 0x31e58319
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x31d1b489
- (id)image;	// 0x31e58841
// declared property getter: - (UIEdgeInsets)imageEdgeInsets;	// 0x31c19581
- (id)imageForState:(unsigned)state;	// 0x31bf785d
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x31c19139
// declared property getter: - (id)imageView;	// 0x31d1e099
- (void)invalidateIntrinsicContentSize;	// 0x31e56edd
- (BOOL)isAccessibilityElementByDefault;	// 0x31e70949
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x31e7098d
- (void)layoutSubviews;	// 0x31c18479
// declared property getter: - (int)lineBreakMode;	// 0x31e58329
- (CGPoint)pressFeedbackPosition;	// 0x31c195e9
// declared property getter: - (BOOL)reversesTitleShadowWhenHighlighted;	// 0x31e5746d
// declared property setter: - (void)setAdjustsImageWhenDisabled:(BOOL)disabled;	// 0x31bf987d
// declared property setter: - (void)setAdjustsImageWhenHighlighted:(BOOL)highlighted;	// 0x31bf981d
- (void)setAttributedTitle:(id)title forState:(unsigned)state;	// 0x31d54d59
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x31bfae75
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x31c3f029
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x31bfa731
- (void)setBounds:(CGRect)bounds;	// 0x31c4855d
// declared property setter: - (void)setContentEdgeInsets:(UIEdgeInsets)insets;	// 0x31bfa9e5
- (void)setContentHorizontalAlignment:(int)alignment;	// 0x31bf9761
- (void)setContentVerticalAlignment:(int)alignment;	// 0x31e57481
- (void)setDisabledDimsImage:(BOOL)image;	// 0x31bf98dd
- (void)setEnabled:(BOOL)enabled;	// 0x31bfadf1
// declared property setter: - (void)setFont:(id)font;	// 0x31c3f0b1
- (void)setFrame:(CGRect)frame;	// 0x31bf778d
- (void)setHighlighted:(BOOL)highlighted;	// 0x31c61915
- (void)setImage:(id)image forState:(unsigned)state;	// 0x31be86f9
- (void)setImage:(id)image forStates:(unsigned)states;	// 0x31bf96d5
// declared property setter: - (void)setImageEdgeInsets:(UIEdgeInsets)insets;	// 0x31bfb7b1
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x31e58339
// declared property setter: - (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;	// 0x31d1e025
- (void)setSelected:(BOOL)selected;	// 0x31d1e115
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x31e583b5
// declared property setter: - (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x31c80a2d
// declared property setter: - (void)setTintColor:(id)color;	// 0x31e582f1
// converted property setter: - (void)setTitle:(id)title;	// 0x31e5883d
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x31be84d5
- (void)setTitle:(id)title forStates:(unsigned)states;	// 0x31c48319
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x31bfabad
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x31d19c11
// declared property setter: - (void)setTitleEdgeInsets:(UIEdgeInsets)insets;	// 0x31bf8b4d
- (void)setTitleShadowColor:(id)color forState:(unsigned)state;	// 0x31c3f1f1
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x31bf8c19
// declared property setter: - (void)setTitleShadowOffset:(CGSize)offset;	// 0x31c3f24d
// declared property getter: - (BOOL)showsTouchWhenHighlighted;	// 0x31d4d0f9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31c23051
// declared property getter: - (id)tintColor;	// 0x31e582ed
// converted property getter: - (id)title;	// 0x31e58839
- (id)titleColorForState:(unsigned)state;	// 0x31d1e105
// declared property getter: - (UIEdgeInsets)titleEdgeInsets;	// 0x31c484ad
- (id)titleForState:(unsigned)state;	// 0x31bfb515
// declared property getter: - (id)titleLabel;	// 0x31c47aad
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x31bf7f9d
- (id)titleShadowColorForState:(unsigned)state;	// 0x31d77209
// declared property getter: - (CGSize)titleShadowOffset;	// 0x31e58349
- (void)updateConstraints;	// 0x31e5772d
- (id)viewForBaselineLayout;	// 0x31e58279
@end

