/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSString, _UIButtonMaskAnimationView, UIImageView, UIColor, UIImage, NSAttributedString, UILabel, NSArray;

@interface UIButton : UIControl <NSCoding> {
	CFDictionaryRef _contentLookup;	// 120 = 0x78
	UIEdgeInsets _contentEdgeInsets;	// 124 = 0x7c
	UIEdgeInsets _titleEdgeInsets;	// 140 = 0x8c
	UIEdgeInsets _imageEdgeInsets;	// 156 = 0x9c
	UIImageView *_backgroundView;	// 172 = 0xac
	UIImageView *_imageView;	// 176 = 0xb0
	UILabel *_titleView;	// 180 = 0xb4
	BOOL _initialized;	// 184 = 0xb8
	unsigned _lastDrawingControlState;	// 188 = 0xbc
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
		unsigned titleFrozen : 1;
	} _buttonFlags;	// 192 = 0xc0
	_UIButtonMaskAnimationView *_maskAnimationView;	// 196 = 0xc4
	UIView *_selectionView;	// 200 = 0xc8
	NSArray *_contentConstraints;	// 204 = 0xcc
	UIEdgeInsets _internalTitlePaddingInsets;	// 208 = 0xd0
}
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints;	// G=0x2f6b23e1; S=0x2f6b23f5; @synthesize
@property(readonly, assign, nonatomic) UIColor *_currentImageColor;	// G=0x2f6af5ad; 
@property(assign, nonatomic, setter=_setInternalTitlePaddingInsets:) UIEdgeInsets _internalTitlePaddingInsets;	// G=0x2f6b2405; S=0x2f6b241d; @synthesize
@property(assign, nonatomic) BOOL adjustsImageWhenDisabled;	// G=0x2f4b58c9; S=0x2f402c5d; @dynamic
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;	// G=0x2f4b58b5; S=0x2f402bf9; @dynamic
@property(assign) BOOL autosizesToFit;	// G=0x2f6b0cb1; S=0x2f6b0c6d; converted property
@property(readonly, assign, nonatomic) int buttonType;	// G=0x2f6ad24d; 
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;	// G=0x2f4016e1; S=0x2f403e89; @dynamic
@property(readonly, assign, nonatomic) NSAttributedString *currentAttributedTitle;	// G=0x2f4af385; 
@property(readonly, assign, nonatomic) UIImage *currentBackgroundImage;	// G=0x2f6af64d; 
@property(readonly, assign, nonatomic) UIImage *currentImage;	// G=0x2f46cf4d; 
@property(readonly, assign, nonatomic) NSString *currentTitle;	// G=0x2f4af3e5; 
@property(readonly, assign, nonatomic) UIColor *currentTitleColor;	// G=0x2f6af55d; 
@property(readonly, assign, nonatomic) UIColor *currentTitleShadowColor;	// G=0x2f6af5fd; 
@property(retain) id font;	// G=0x2f6b0609; S=0x2f6b0619; converted property
@property(assign, nonatomic) UIEdgeInsets imageEdgeInsets;	// G=0x2f41ef55; S=0x2f404ed5; @dynamic
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x2f509051; 
@property(assign) int lineBreakMode;	// G=0x2f6b0629; S=0x2f6b0639; converted property
@property(assign, nonatomic) BOOL reversesTitleShadowWhenHighlighted;	// G=0x2f6ad325; S=0x2f508fe1; @dynamic
@property(assign, nonatomic) BOOL showsTouchWhenHighlighted;	// G=0x2f534055; S=0x2f4808b1; 
@property(retain, nonatomic) UIColor *tintColor;	// @dynamic
@property(retain) id title;	// G=0x2f6b13a1; S=0x2f6b13a5; converted property
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;	// G=0x2f44acc1; S=0x2f402261; @dynamic
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x2f44a2a9; 
@property(assign) CGSize titleShadowOffset;	// G=0x2f6b0649; S=0x2f6b0669; converted property
+ (id)_checkmarkImage;	// 0x2f6af20d
+ (id)_defaultBackgroundImageForType:(int)type andState:(unsigned)state;	// 0x2f6b2021
+ (id)_defaultImageColorForState:(unsigned)state button:(id)button;	// 0x2f6b2235
+ (id)_defaultImageForType:(int)type andState:(unsigned)state;	// 0x2f6b1e85
+ (id)_defaultNormalTitleColor;	// 0x2f401481
+ (id)_defaultNormalTitleShadowColor;	// 0x2f4014ad
+ (id)_defaultTitleColorForState:(unsigned)state button:(id)button;	// 0x2f6b2119
+ (id)_detailDisclosureImage;	// 0x2f6af175
+ (id)_exclamationMarkImage;	// 0x2f6af1ed
+ (id)_infoDarkImage;	// 0x2f6af1ad
+ (id)_infoLightImage;	// 0x2f6af185
+ (id)_minusImage;	// 0x2f6af21d
+ (id)_plusImage;	// 0x2f6af1dd
+ (id)_questionMarkImage;	// 0x2f6af1fd
+ (id)_selectedIndicatorImage;	// 0x2f6ade0d
+ (void)_setVisuallyHighlighted:(BOOL)highlighted forViews:(id)views initialPress:(BOOL)press;	// 0x2f6ada11
+ (void)_setVisuallyHighlighted:(BOOL)highlighted forViews:(id)views initialPress:(BOOL)press baseAlpha:(float)alpha;	// 0x2f6ad7a9
+ (id)_xImage;	// 0x2f6af22d
+ (id)buttonWithType:(int)type;	// 0x2f449d85
+ (void)initialize;	// 0x2f6acc89
- (id)initWithCoder:(id)coder;	// 0x2f5552f5
- (id)initWithFrame:(CGRect)frame;	// 0x2f401065
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x2f6b0c11
- (void)_applyAppropriateChargeForButtonType;	// 0x2f6ad265
- (id)_archivableContent:(id *)content;	// 0x2f6b1ad1
- (id)_attributedTitleForState:(unsigned)state;	// 0x2f6b2351
- (id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL *)normalState;	// 0x2f6b2025
- (id)_backgroundView;	// 0x2f6b1371
- (void)_beginTitleAnimation;	// 0x2f6aef09
- (id)_borderColorForState:(unsigned)state;	// 0x2f6aed79
- (float)_borderWidthForState:(unsigned)state bounds:(CGRect)bounds;	// 0x2f6aee19
- (int)_buttonType;	// 0x2f6b0ba5
- (BOOL)_canHaveTitle;	// 0x2f426bc1
- (CGRect)_clippedHighlightBounds;	// 0x2f6af455
- (UIEdgeInsets)_combinedContentPaddingInsets;	// 0x2f6acb2d
// declared property getter: - (id)_contentConstraints;	// 0x2f6b23e1
- (id)_contentForState:(unsigned)state;	// 0x2f6b19a5
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x2f6af6c9
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x2f6af69d
// declared property getter: - (id)_currentImageColor;	// 0x2f6af5ad
- (float)_drawingStrokeForState:(unsigned)state;	// 0x2f6b1705
- (float)_drawingStrokeForStyle:(int)style;	// 0x2f6b1555
- (int)_drawingStyleForState:(unsigned)state;	// 0x2f6b15d9
- (int)_drawingStyleForStroke:(float)stroke;	// 0x2f6b1579
- (id)_fadeOutAnimationWithKeyPath:(id)keyPath;	// 0x2f6aec21
- (id)_font;	// 0x2f6b101d
- (BOOL)_hasDrawingStyle;	// 0x2f6aeed1
- (BOOL)_hasHighlightColor;	// 0x2f6ad569
- (CGRect)_highlightBounds;	// 0x2f6b13ad
- (float)_highlightCornerRadius;	// 0x2f6ad511
- (CGRect)_highlightRectForImageRect:(CGRect)imageRect;	// 0x2f6af31d
- (CGRect)_highlightRectForTextRect:(CGRect)textRect;	// 0x2f6af23d
- (id)_imageColorForState:(unsigned)state;	// 0x2f6b2285
- (id)_imageForState:(unsigned)state usesImageForNormalState:(BOOL *)normalState;	// 0x2f6b1f75
- (id)_imageView;	// 0x2f6b1381
// declared property getter: - (UIEdgeInsets)_internalTitlePaddingInsets;	// 0x2f6b2405
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x2f4263b9
- (void)_invalidateContentConstraints;	// 0x2f6acbdd
- (BOOL)_isModernButton;	// 0x2f6ad395
- (id)_letterpressStyleForState:(unsigned)state;	// 0x2f6b2399
- (BOOL)_likelyToHaveTitle;	// 0x2f426b59
- (int)_lineBreakMode;	// 0x2f6b1171
- (id)_newImageViewWithFrame:(CGRect)frame;	// 0x2f6b0679
- (id)_newLabelWithFrame:(CGRect)frame;	// 0x2f6b0921
- (UIEdgeInsets)_outsetInsets:(UIEdgeInsets)insets;	// 0x2f6ad4e5
- (UIEdgeInsets)_pathImageEdgeInsets;	// 0x2f6ad4b1
- (UIEdgeInsets)_pathTitleEdgeInsets;	// 0x2f6ad47d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x2f6acd29
- (id)_scriptingInfo;	// 0x2f50a1f1
- (float)_selectedIndicatorAlpha;	// 0x2f6ade01
- (CGRect)_selectedIndicatorBounds;	// 0x2f6adf4d
- (id)_selectedIndicatorViewWithImage:(id)image;	// 0x2f6adeed
- (void)_setAttributedTitle:(id)title forStates:(unsigned)states;	// 0x2f6b1971
- (void)_setBackground:(id)background forStates:(unsigned)states;	// 0x2f6b186d
- (void)_setButtonType:(int)type;	// 0x2f6b0b81
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x2f6b17d1
// declared property setter: - (void)_setContentConstraints:(id)constraints;	// 0x2f6b23f5
- (void)_setContentHuggingPriorities:(CGSize)priorities;	// 0x2f6af6f5
- (void)_setDrawingStroke:(float)stroke forState:(unsigned)state;	// 0x2f6b1609
- (void)_setDrawingStyle:(int)style forState:(unsigned)state;	// 0x2f6b15a5
- (void)_setFont:(id)font;	// 0x2f6b1061
- (void)_setImage:(id)image forStates:(unsigned)states;	// 0x2f6b1839
- (void)_setImageColor:(id)color forState:(unsigned)state;	// 0x2f6af4ed
- (void)_setImageColor:(id)color forStates:(unsigned)states;	// 0x2f6b1909
// declared property setter: - (void)_setInternalTitlePaddingInsets:(UIEdgeInsets)insets;	// 0x2f6b241d
- (void)_setLetterpressStyle:(id)style forState:(unsigned)state;	// 0x2f6b0fad
- (void)_setLineBreakMode:(int)mode;	// 0x2f6b1199
- (void)_setShadowColor:(id)color forStates:(unsigned)states;	// 0x2f6b193d
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)_set;	// 0x2f6b0c49
- (void)_setTitle:(id)title forStates:(unsigned)states;	// 0x2f6b18a1
- (void)_setTitleColor:(id)color forStates:(unsigned)states;	// 0x2f6b18d5
- (void)_setTitleShadowOffset:(CGSize)offset;	// 0x2f6b1261
- (id)_setupBackgroundView;	// 0x2f6b0701
- (void)_setupDrawingStyleForState:(unsigned)state;	// 0x2f6ae101
- (void)_setupImageView;	// 0x2f6b07dd
- (void)_setupPressednessForState:(unsigned)state;	// 0x2f6ada35
- (void)_setupTitleView;	// 0x2f6b09fd
- (id)_shadowColorForState:(unsigned)state;	// 0x2f6b2309
- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)imageViewBackground;	// 0x2f6b1761
- (BOOL)_shouldDelaySendingTouchesEndedActionUntilNextRunLoop;	// 0x2f6af4d5
- (void)_takeContentFromArchivableContent:(id)archivableContent;	// 0x2f6b1d95
- (void)_titleAttributesChanged;	// 0x2f6b0bb9
- (id)_titleColorForState:(unsigned)state;	// 0x2f6b21b1
- (id)_titleForState:(unsigned)state;	// 0x2f6b20d1
- (id)_titleOrImageViewForBaselineLayout;	// 0x2f6af7a9
- (CGRect)_titleRectForContentRect:(CGRect)contentRect calculatePositionForEmptyTitle:(BOOL)emptyTitle;	// 0x2f401741
- (CGSize)_titleShadowOffset;	// 0x2f6b1225
- (id)_titleView;	// 0x2f6b1391
- (id)_transitionAnimationWithKeyPath:(id)keyPath;	// 0x2f6aeb49
- (void)_updateEffectsForImageView:(id)imageView background:(BOOL)background;	// 0x2f6b178d
- (void)_updateMaskState;	// 0x2f6ad5d9
- (void)_updateSelectionViewForState:(unsigned)state;	// 0x2f6adbf9
- (BOOL)_usesSelectedFontTraits;	// 0x2f6b04b1
- (void)_willMoveToWindow:(id)window;	// 0x2f6aeac9
// declared property getter: - (BOOL)adjustsImageWhenDisabled;	// 0x2f4b58c9
// declared property getter: - (BOOL)adjustsImageWhenHighlighted;	// 0x2f4b58b5
- (UIEdgeInsets)alignmentRectInsets;	// 0x2f404be1
- (id)attributedTitleForState:(unsigned)state;	// 0x2f4af3d5
// converted property getter: - (BOOL)autosizesToFit;	// 0x2f6b0cb1
- (id)backgroundImageForState:(unsigned)state;	// 0x2f4016b9
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x2f41e7dd
// declared property getter: - (int)buttonType;	// 0x2f6ad24d
// declared property getter: - (UIEdgeInsets)contentEdgeInsets;	// 0x2f4016e1
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x2f4015c1
- (void)crossfadeToImage:(id)image forState:(unsigned)state;	// 0x2f6b0fa9
// declared property getter: - (id)currentAttributedTitle;	// 0x2f4af385
// declared property getter: - (id)currentBackgroundImage;	// 0x2f6af64d
// declared property getter: - (id)currentImage;	// 0x2f46cf4d
// declared property getter: - (id)currentTitle;	// 0x2f4af3e5
// declared property getter: - (id)currentTitleColor;	// 0x2f6af55d
// declared property getter: - (id)currentTitleShadowColor;	// 0x2f6af5fd
- (void)dealloc;	// 0x2f40ae31
- (unsigned long long)defaultAccessibilityTraits;	// 0x2f6dc9a9
- (void)encodeWithCoder:(id)coder;	// 0x2f6ace19
// converted property getter: - (id)font;	// 0x2f6b0609
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x2f5050e5
- (id)image;	// 0x2f6b13a9
// declared property getter: - (UIEdgeInsets)imageEdgeInsets;	// 0x2f41ef55
- (id)imageForState:(unsigned)state;	// 0x2f40146d
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x2f41e9e1
// declared property getter: - (id)imageView;	// 0x2f509051
- (void)invalidateIntrinsicContentSize;	// 0x2f6acc49
- (BOOL)isAccessibilityElementByDefault;	// 0x2f6dc9a5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x2f6dc9e9
- (void)layoutSubviews;	// 0x2f41dce9
// converted property getter: - (int)lineBreakMode;	// 0x2f6b0629
- (CGPoint)pressFeedbackPosition;	// 0x2f6b0d15
// declared property getter: - (BOOL)reversesTitleShadowWhenHighlighted;	// 0x2f6ad325
// declared property setter: - (void)setAdjustsImageWhenDisabled:(BOOL)disabled;	// 0x2f402c5d
// declared property setter: - (void)setAdjustsImageWhenHighlighted:(BOOL)highlighted;	// 0x2f402bf9
- (void)setAttributedTitle:(id)title forState:(unsigned)state;	// 0x2f53b48d
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x2f6b0c6d
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x2f442645
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x2f6b0f51
- (void)setBounds:(CGRect)bounds;	// 0x2f44ad69
// declared property setter: - (void)setContentEdgeInsets:(UIEdgeInsets)insets;	// 0x2f403e89
- (void)setContentHorizontalAlignment:(int)alignment;	// 0x2f402b25
- (void)setContentVerticalAlignment:(int)alignment;	// 0x2f6ad339
- (void)setDisabledDimsImage:(BOOL)image;	// 0x2f6b0cc5
- (void)setEnabled:(BOOL)enabled;	// 0x2f4043d9
// converted property setter: - (void)setFont:(id)font;	// 0x2f6b0619
- (void)setFrame:(CGRect)frame;	// 0x2f4013a1
- (void)setHighlighted:(BOOL)highlighted;	// 0x2f463169
- (void)setImage:(id)image forState:(unsigned)state;	// 0x2f3f417d
- (void)setImage:(id)image forStates:(unsigned)states;	// 0x2f6b0ef9
// declared property setter: - (void)setImageEdgeInsets:(UIEdgeInsets)insets;	// 0x2f404ed5
// converted property setter: - (void)setLineBreakMode:(int)mode;	// 0x2f6b0639
// declared property setter: - (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;	// 0x2f508fe1
- (void)setSelected:(BOOL)selected;	// 0x2f5090d1
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x2f6b0d05
// declared property setter: - (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x2f4808b1
// converted property setter: - (void)setTitle:(id)title;	// 0x2f6b13a5
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x2f3f3f8d
- (void)setTitle:(id)title forStates:(unsigned)states;	// 0x2f6b0e41
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x2f40413d
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x2f6b0e99
// declared property setter: - (void)setTitleEdgeInsets:(UIEdgeInsets)insets;	// 0x2f402261
- (void)setTitleShadowColor:(id)color forState:(unsigned)state;	// 0x2f442715
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x2f6b0ec9
// converted property setter: - (void)setTitleShadowOffset:(CGSize)offset;	// 0x2f6b0669
// declared property getter: - (BOOL)showsTouchWhenHighlighted;	// 0x2f534055
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f426389
- (void)tintColorDidChange;	// 0x2f6ad3d9
// converted property getter: - (id)title;	// 0x2f6b13a1
- (id)titleColorForState:(unsigned)state;	// 0x2f5090bd
// declared property getter: - (UIEdgeInsets)titleEdgeInsets;	// 0x2f44acc1
- (id)titleForState:(unsigned)state;	// 0x2f404bcd
// declared property getter: - (id)titleLabel;	// 0x2f44a2a9
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x2f4016fd
- (id)titleShadowColorForState:(unsigned)state;	// 0x2f55a775
// converted property getter: - (CGSize)titleShadowOffset;	// 0x2f6b0649
- (void)updateConstraints;	// 0x2f6af8e1
- (id)viewForBaselineLayout;	// 0x2f6b043d
@end
