/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableSet, ATVProgressBarView, NSString, ATVRoundProgressView, BRAsyncImageControl, NSAttributedString, BRWaitSpinnerControl, BRMarqueeTextControl, NSNumber;
@protocol BRDisplayInfoLoader;

__attribute__((visibility("hidden")))
@interface BRMenuItem : BRControl {
	CGColorRef _bgColor;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	NSAttributedString *_detailedText;	// 92 = 0x5c
	NSAttributedString *_extraDetailText;	// 96 = 0x60
	NSAttributedString *_rightJustifiedText;	// 100 = 0x64
	BRMarqueeTextControl *_scrollingTextControl;	// 104 = 0x68
	BRAsyncImageControl *_imageControl;	// 108 = 0x6c
	BRWaitSpinnerControl *_spinner;	// 112 = 0x70
	ATVRoundProgressView *_progressAccessory;	// 116 = 0x74
	ATVProgressBarView *_progressBar;	// 120 = 0x78
	BRControl *_flipContainer;	// 124 = 0x7c
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 128 = 0x80
	NSMutableSet *_accessories;	// 132 = 0x84
	BOOL _dimmed;	// 136 = 0x88
	BOOL _disableAccessoryHighlighting;	// 137 = 0x89
	BOOL _forceOrdinalLayout;	// 138 = 0x8a
	BOOL _dotsTrailImage;	// 139 = 0x8b
	BOOL _forceBlueDotLayout;	// 140 = 0x8c
	BOOL _forceCenteredIconLayout;	// 141 = 0x8d
	BOOL _forceMenuArrowLayout;	// 142 = 0x8e
	BOOL _usingDefaultTextAttributes;	// 143 = 0x8f
	BOOL _iconsTrailText;	// 144 = 0x90
	float _forcedHeight;	// 148 = 0x94
	float _forcedContentHeight;	// 152 = 0x98
	NSNumber *_ordinal;	// 156 = 0x9c
	int _largestOrdinal;	// 160 = 0xa0
	float _imageInset;	// 164 = 0xa4
	float _imageHeight;	// 168 = 0xa8
	float _textPadding;	// 172 = 0xac
	float _leftMargin;	// 176 = 0xb0
	float _rightMargin;	// 180 = 0xb4
	float _imageAspectRatio;	// 184 = 0xb8
	BOOL _colorSet;	// 188 = 0xbc
	BOOL _preferTextScroller;	// 189 = 0xbd
	NSString *_accessibilityText;	// 192 = 0xc0
	float _progress;	// 196 = 0xc4
}
@property(copy, nonatomic) NSString *accessibilityText;	// G=0x3e66f1; S=0x3e923d; @synthesize=_accessibilityText
@property(retain) NSAttributedString *detailedText;	// G=0x3e6541; S=0x3e63b9; converted property
@property(assign) BOOL dimmed;	// G=0x3e7585; S=0x3e7459; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x3e75b5; S=0x3e7595; converted property
@property(retain) id displayInfoLoader;	// G=0x3e6c5d; S=0x3e6b4d; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x3e7855; S=0x3e7829; converted property
@property(retain) id extraDetailedText;	// G=0x3e6605; S=0x3e6561; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x3e77dd; S=0x3e77b1; converted property
@property(assign) BOOL forceCenteredIconLayout;	// G=0x3e7819; S=0x3e77ed; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x3e76ed; S=0x3e76cd; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x3e77a1; converted property
@property(assign) float forcedContentHeight;	// G=0x3e76bd; S=0x3e769d; converted property
@property(assign) float forcedHeight;	// G=0x3e768d; S=0x3e75c5; converted property
@property(assign) BOOL iconsTrailText;	// G=0x3e7891; S=0x3e7865; converted property
@property(retain) id image;	// G=0x3e6985; S=0x3e6719; converted property
@property(assign) float imageAspectRatio;	// G=0x3e6b3d; S=0x3e6b05; converted property
@property(assign) float imageHeight;	// G=0x3e79b1; S=0x3e7979; converted property
@property(assign) float imageInset;	// G=0x3e7921; S=0x3e78e9; converted property
@property(retain) id imageProxy;	// G=0x3e6ae5; S=0x3e6ad1; converted property
@property(assign) float leftMargin;	// G=0x3e78d9; S=0x3e78a1; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x3e61e9; S=0x3e61c5; converted property
@property(assign, nonatomic) BOOL preferTextScroller;	// G=0x3e925d; S=0x3e926d; @synthesize=_preferTextScroller
@property(assign, nonatomic) float progress;	// G=0x3e924d; S=0x3e7051; @synthesize=_progress
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x3e66d1; S=0x3e6625; converted property
@property(assign) float rightMargin;	// G=0x3e79f9; S=0x3e79c1; converted property
@property(retain) NSAttributedString *text;	// G=0x3e6399; S=0x3e6211; converted property
@property(assign) float textPadding;	// G=0x3e7969; S=0x3e7931; converted property
- (id)init;	// 0x3e5b19
- (id)_accessoryOfType:(int)type;	// 0x3e940d
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x3e9421
- (CGRect)_contentFrameForBounds:(CGRect)bounds;	// 0x3ea6dd
- (id)_detailedTextAttributes;	// 0x3e9e25
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x3e98c1
- (CGRect)_imageFrame;	// 0x3ea20d
- (id)_imageWithName:(id)name;	// 0x3e9ecd
- (id)_largeLeftImage;	// 0x3e9aa1
- (float)_largestOrdinalWidth;	// 0x3e9ffd
- (void)_layoutProgressAccessoryInFlipContainer:(id)flipContainer;	// 0x3e9021
- (id)_ordinalImage;	// 0x3e9c4d
- (id)_ordinalString;	// 0x3ea0d5
- (id)_ordinalTypes;	// 0x3e9bb9
- (CGRect)_progressFrame;	// 0x3ea459
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x3e9939
- (id)_rightTextAttributes;	// 0x3e9e59
- (void)_setAttributedText:(id)text usingDefaultAttributes:(BOOL)attributes;	// 0x3e6319
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x3e9f4d
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x3e927d
- (id)_textAttributes;	// 0x3e9e8d
- (void)_updateColorAndContentHeight;	// 0x3e92ed
- (id)_upperRightImageTypes;	// 0x3e9c81
- (id)_upperRightImages;	// 0x3e9d65
- (id)accessibilityLabel;	// 0x3ea771
- (id)accessibilitySecondaryLabel;	// 0x3ea861
// declared property getter: - (id)accessibilityText;	// 0x3e66f1
- (id)accessibilityTraitsList;	// 0x3ea925
- (id)accessibilityValue;	// 0x3ea915
- (void)addAccessoryOfType:(int)type;	// 0x3e6c6d
- (void)cancelLoadDisplayInfo;	// 0x3e60c1
- (id)centeredDetailedTextAttributes;	// 0x3e61a1
- (id)centeredTextAttributes;	// 0x3e6109
- (void)controlWasActivated;	// 0x3e5ec1
- (void)controlWasDeactivated;	// 0x3e5fad
- (void)controlWasFocused;	// 0x3e5e01
- (void)controlWasUnfocused;	// 0x3e5e61
- (void)dealloc;	// 0x3e5c01
- (id)description;	// 0x3e5d51
// converted property getter: - (id)detailedText;	// 0x3e6541
// converted property getter: - (BOOL)dimmed;	// 0x3e7585
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x3e75b5
// converted property getter: - (id)displayInfoLoader;	// 0x3e6c5d
// converted property getter: - (BOOL)dotsTrailImage;	// 0x3e7855
- (void)drawRect:(CGRect)rect;	// 0x3e7ab5
// converted property getter: - (id)extraDetailedText;	// 0x3e6605
- (CGRect)focusCursorFrame;	// 0x3e7a09
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x3e77dd
// converted property getter: - (BOOL)forceCenteredIconLayout;	// 0x3e7819
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x3e76ed
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x3e77a1
// converted property getter: - (float)forcedContentHeight;	// 0x3e76bd
// converted property getter: - (float)forcedHeight;	// 0x3e768d
- (BOOL)hasAccessoryOfType:(int)type;	// 0x3e6fd9
// converted property getter: - (BOOL)iconsTrailText;	// 0x3e7891
// converted property getter: - (id)image;	// 0x3e6985
// converted property getter: - (float)imageAspectRatio;	// 0x3e6b3d
// converted property getter: - (float)imageHeight;	// 0x3e79b1
// converted property getter: - (float)imageInset;	// 0x3e7921
// converted property getter: - (id)imageProxy;	// 0x3e6ae5
- (BOOL)isAccessibilityElement;	// 0x3ea76d
- (void)layoutSubcontrols;	// 0x3e915d
// converted property getter: - (float)leftMargin;	// 0x3e78d9
- (void)loadDisplayInfo;	// 0x3e6079
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x3e61e9
// declared property getter: - (BOOL)preferTextScroller;	// 0x3e925d
// declared property getter: - (float)progress;	// 0x3e924d
- (void)removeAccessoryOfType:(int)type;	// 0x3e6eb9
- (void)removeAllAccessories;	// 0x3e6ff5
// converted property getter: - (id)rightJustifiedText;	// 0x3e66d1
// converted property getter: - (float)rightMargin;	// 0x3e79f9
- (void)scrollingCompleted;	// 0x3e6019
// declared property setter: - (void)setAccessibilityText:(id)text;	// 0x3e923d
- (void)setAttributedText:(id)text;	// 0x3e6305
- (void)setDefaultImage:(id)image;	// 0x3e6871
- (void)setDetailedAttributedText:(id)text;	// 0x3e64f1
// converted property setter: - (void)setDetailedText:(id)text;	// 0x3e63b9
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x3e63cd
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3e7459
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x3e7595
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x3e6b4d
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x3e7829
// converted property setter: - (void)setExtraDetailedText:(id)text;	// 0x3e6561
- (void)setExtraDetailedText:(id)text withAttributes:(id)attributes;	// 0x3e6575
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x3e77b1
// converted property setter: - (void)setForceCenteredIconLayout:(BOOL)layout;	// 0x3e77ed
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x3e76cd
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x3e76fd
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x3e769d
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x3e75c5
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x3e7865
// converted property setter: - (void)setImage:(id)image;	// 0x3e6719
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x3e6b05
// converted property setter: - (void)setImageHeight:(float)height;	// 0x3e7979
// converted property setter: - (void)setImageInset:(float)inset;	// 0x3e78e9
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x3e6ad1
- (void)setImageProxy:(id)proxy shouldCropAndFill:(BOOL)fill;	// 0x3e69a5
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x3e78a1
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x3e61c5
// declared property setter: - (void)setPreferTextScroller:(BOOL)scroller;	// 0x3e926d
// declared property setter: - (void)setProgress:(float)progress;	// 0x3e7051
- (void)setProgress:(float)progress removeOnCompletion:(BOOL)completion;	// 0x3e7065
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x3e6625
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x3e6639
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x3e79c1
// converted property setter: - (void)setText:(id)text;	// 0x3e6211
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x3e6225
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x3e7931
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3e5db9
// converted property getter: - (id)text;	// 0x3e6399
// converted property getter: - (float)textPadding;	// 0x3e7969
@end
