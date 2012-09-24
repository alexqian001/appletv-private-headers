/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRHorizontalDividerControl, BRMetadataLinesLayer, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRMetadataControl : BRControl {
	BRTextControl *_titleLayer;	// 84 = 0x54
	BRTextControl *_rightJustifiedTitleLayer;	// 88 = 0x58
	BRImageControl *_ratingImageLayer;	// 92 = 0x5c
	BRControl *_likesRatingLayer;	// 96 = 0x60
	BRImageControl *_topRightImageLayer;	// 100 = 0x64
	BRTextControl *_summaryLayer;	// 104 = 0x68
	BRMetadataLinesLayer *_metadataLinesLayer;	// 108 = 0x6c
	BRTextControl *_copyrightLayer;	// 112 = 0x70
	BRHorizontalDividerControl *_topDividerLayer;	// 116 = 0x74
	BRHorizontalDividerControl *_middleDividerLayer;	// 120 = 0x78
	BRHorizontalDividerControl *_bottomDividerLayer;	// 124 = 0x7c
	NSArray *_metadataObjs;	// 128 = 0x80
	NSArray *_metadataLabels;	// 132 = 0x84
	float _totalHeight;	// 136 = 0x88
	int _alignment;	// 140 = 0x8c
}
@property(retain, nonatomic) NSString *rightJustifiedTitle;	// G=0x2e0c01; S=0x2e0bb9; 
- (id)init;	// 0x2e06f9
- (void)_setCopyright:(id)copyright;	// 0x2e1eb5
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x2e1e21
- (void)_setNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes;	// 0x2e1bc9
- (void)_setRating:(id)rating;	// 0x2e1b6d
- (void)_setSummary:(id)summary;	// 0x2e1c89
- (void)_setTitle:(id)title;	// 0x2e1aad
- (void)_setTopRightImage:(id)image;	// 0x2e1c69
- (id)accessibilityLabel;	// 0x2e19d1
- (void)dealloc;	// 0x2e0955
- (void)layoutSubcontrols;	// 0x2e0e55
- (CGSize)renderedSize;	// 0x2e0db1
- (void)resetAllFields;	// 0x2e0ac1
// declared property getter: - (id)rightJustifiedTitle;	// 0x2e0c01
- (void)setAlignment:(int)alignment;	// 0x2e1a9d
- (void)setCopyright:(id)copyright;	// 0x2e0d75
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2e0d39
- (void)setNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes;	// 0x2e0c75
- (void)setRating:(id)rating;	// 0x2e0c39
// declared property setter: - (void)setRightJustifiedTitle:(id)title;	// 0x2e0bb9
- (void)setSummary:(id)summary;	// 0x2e0cfd
- (void)setTitle:(id)title;	// 0x2e0b7d
- (void)setTopRightImage:(id)image;	// 0x2e0cc1
- (id)topRightImageControl;	// 0x2e0cb1
- (void)windowMaxBoundsChanged;	// 0x2e0e15
@end
