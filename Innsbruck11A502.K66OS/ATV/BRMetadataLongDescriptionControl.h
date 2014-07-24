/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, NSArray, UIColor, BRHorizontalDividerControl, BRTextControl, NSNumber;

__attribute__((visibility("hidden")))
@interface BRMetadataLongDescriptionControl : BRControl {
	BRTextControl *_titleLayer;	// 84 = 0x54
	BRTextControl *_titleSubtextLayer;	// 88 = 0x58
	BRTextControl *_labelLayer;	// 92 = 0x5c
	BRTextControl *_labelSubtextLayer;	// 96 = 0x60
	BRTextControl *_priceLayer;	// 100 = 0x64
	BRControl *_formatControl;	// 104 = 0x68
	BRTextControl *_releaseDateLayer;	// 108 = 0x6c
	BRTextControl *_lengthLayer;	// 112 = 0x70
	BRTextControl *_studioNameLayer;	// 116 = 0x74
	BRImageControl *_ratingImageLayer;	// 120 = 0x78
	BRControl *_userRatingControl;	// 124 = 0x7c
	BRImageControl *_topRightImageLayer;	// 128 = 0x80
	BRTextControl *_summaryLayer;	// 132 = 0x84
	BRTextControl *_copyrightLayer;	// 136 = 0x88
	NSNumber *_trackNumber;	// 140 = 0x8c
	BRHorizontalDividerControl *_topDivider;	// 144 = 0x90
	BRHorizontalDividerControl *_bottomDivider;	// 148 = 0x94
	NSArray *_metadataObjs;	// 152 = 0x98
	NSArray *_metadataLabels;	// 156 = 0x9c
	float _totalHeight;	// 160 = 0xa0
	int _alignment;	// 164 = 0xa4
	CGSize _artworkSize;	// 168 = 0xa8
	UIColor *_titleColor;	// 176 = 0xb0
	UIColor *_bodyColor;	// 180 = 0xb4
}
@property(retain, nonatomic) UIColor *bodyColor;	// G=0x381c9d; S=0x380c2d; @synthesize=_bodyColor
@property(retain, nonatomic) UIColor *titleColor;	// G=0x381c7d; S=0x381c8d; @synthesize=_titleColor
- (id)init;	// 0x3806ed
- (void)_setCopyright:(id)copyright;	// 0x38299d
- (void)_setFormatControl:(id)control;	// 0x3822ed
- (void)_setLabel:(id)label;	// 0x381fe1
- (void)_setLabelSubtext:(id)subtext;	// 0x3820e5
- (void)_setLength:(id)length;	// 0x382475
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x382909
- (void)_setPrice:(id)price;	// 0x3821e9
- (void)_setRating:(id)rating;	// 0x38267d
- (void)_setReleaseDate:(id)date;	// 0x382371
- (void)_setStudioName:(id)name;	// 0x382579
- (void)_setSummary:(id)summary;	// 0x38277d
- (void)_setTitle:(id)title;	// 0x381cad
- (void)_setTitleSubtext:(id)subtext;	// 0x381db1
- (void)_setTopRightImage:(id)image;	// 0x38275d
- (void)_setTrackNumber:(id)number;	// 0x381eb5
- (void)_setUserRatingControl:(id)control;	// 0x3826d9
- (id)accessibilityScreenContent;	// 0x382a6d
// declared property getter: - (id)bodyColor;	// 0x381c9d
- (void)dealloc;	// 0x380a21
- (void)layoutSubcontrols;	// 0x381339
- (CGSize)renderedSize;	// 0x381295
- (void)resetAllFields;	// 0x380d81
- (void)setAlignment:(int)alignment;	// 0x381c09
- (void)setArtworkSize:(CGSize)size;	// 0x381c19
// declared property setter: - (void)setBodyColor:(id)color;	// 0x380c2d
- (void)setCopyright:(id)copyright;	// 0x381259
- (void)setFormatControl:(id)control;	// 0x38102d
- (void)setLabel:(id)label;	// 0x380f79
- (void)setLabelSubtext:(id)subtext;	// 0x380fb5
- (void)setLength:(id)length;	// 0x3810a5
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x38121d
- (void)setPrice:(id)price;	// 0x380ff1
- (void)setRating:(id)rating;	// 0x38111d
- (void)setReleaseDate:(id)date;	// 0x381069
- (void)setStudioName:(id)name;	// 0x3810e1
- (void)setSummary:(id)summary;	// 0x3811e1
- (void)setTitle:(id)title;	// 0x380ec5
// declared property setter: - (void)setTitleColor:(id)color;	// 0x381c8d
- (void)setTitleSubtext:(id)subtext;	// 0x380f01
- (void)setTopRightImage:(id)image;	// 0x3811a5
- (void)setTrackNumber:(id)number;	// 0x380f3d
- (void)setUserRatingControl:(id)control;	// 0x381159
// declared property getter: - (id)titleColor;	// 0x381c7d
- (id)topRightImageControl;	// 0x381195
- (void)windowMaxBoundsChanged;	// 0x3812f9
@end
