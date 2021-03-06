/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIRefreshControlContentView.h"

@class UIImageView, UILabel, NSMutableDictionary, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView {
	BOOL _animationsAreValid;	// 92 = 0x5c
	UIImageView *_imageView;	// 96 = 0x60
	UILabel *_textLabel;	// 100 = 0x64
	UIImageView *_arrow;	// 104 = 0x68
	UIActivityIndicatorView *_spinner;	// 108 = 0x6c
	NSMutableDictionary *_snappingTextFromValues;	// 112 = 0x70
	NSMutableDictionary *_snappingImageFromValues;	// 116 = 0x74
	NSMutableDictionary *_snappingArrowFromValues;	// 120 = 0x78
	BOOL _areAnimationsValid;	// 124 = 0x7c
}
@property(assign, nonatomic) BOOL areAnimationsValid;	// G=0x31059a65; S=0x31056045; @synthesize=_areAnimationsValid
@property(readonly, assign, nonatomic) UIImageView *arrow;	// G=0x31059a85; @synthesize=_arrow
@property(retain) id attributedTitle;	// G=0x310599a1; S=0x31059945; converted property
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x31059a75; @synthesize=_imageView
@property(readonly, assign, nonatomic) UIActivityIndicatorView *spinner;	// G=0x31059a95; @synthesize=_spinner
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x31059aa5; @synthesize=_textLabel
- (id)initWithFrame:(CGRect)frame;	// 0x31055c15
- (double)_currentTimeOffset;	// 0x31056641
- (void)_fadeInMagic;	// 0x31057651
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// 0x31059479
- (void)_refreshingMagic;	// 0x31058c19
- (id)_regenerateArrow;	// 0x31059a55
- (id)_regenerateCircle;	// 0x310599c1
- (id)_revealingArrowAnimations;	// 0x31056e79
- (id)_revealingImageAnimations;	// 0x3105677d
- (void)_revealingMagic;	// 0x31057779
- (id)_revealingTextAnimations;	// 0x31057221
- (void)_snappingMagic;	// 0x31057a99
- (double)_snappingTimeOffset;	// 0x310565d1
- (void)_spinOutMagic;	// 0x31058e81
- (void)_updateTimeOffsetOfRelevantLayers;	// 0x310566e1
// declared property getter: - (BOOL)areAnimationsValid;	// 0x31059a65
// declared property getter: - (id)arrow;	// 0x31059a85
// converted property getter: - (id)attributedTitle;	// 0x310599a1
- (void)dealloc;	// 0x31055f79
- (void)didTransitionFromState:(int)state toState:(int)state2;	// 0x31056491
// declared property getter: - (id)imageView;	// 0x31059a75
- (void)layoutSubviews;	// 0x31059581
- (float)maximumSnappingHeight;	// 0x310593d9
- (float)minimumSnappingHeight;	// 0x31059339
- (void)refreshControlInvalidatedSnappingHeight;	// 0x310560ad
// declared property setter: - (void)setAreAnimationsValid:(BOOL)valid;	// 0x31056045
// converted property setter: - (void)setAttributedTitle:(id)title;	// 0x31059945
- (void)setTintColor:(id)color;	// 0x31059849
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x310594dd
// declared property getter: - (id)spinner;	// 0x31059a95
- (int)style;	// 0x31056041
// declared property getter: - (id)textLabel;	// 0x31059aa5
- (void)willTransitionFromState:(int)state toState:(int)state2;	// 0x310560c1
@end

