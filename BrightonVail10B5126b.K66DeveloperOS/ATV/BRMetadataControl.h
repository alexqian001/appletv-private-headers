/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, NSArray, BRImageControl, BRTextControl, BRHorizontalDividerControl, BRMetadataLinesLayer;

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
@property(retain, nonatomic) NSString *rightJustifiedTitle;	// G=0x2f3dd9; S=0x2f3d91; 
- (id)init;	// 0x2f38d1
- (void)_setCopyright:(id)copyright;	// 0x2f50ad
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x2f5019
- (void)_setNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes;	// 0x2f4da1
- (void)_setRating:(id)rating;	// 0x2f4d45
- (void)_setSummary:(id)summary;	// 0x2f4e61
- (void)_setTitle:(id)title;	// 0x2f4c85
- (void)_setTopRightImage:(id)image;	// 0x2f4e41
- (id)accessibilityLabel;	// 0x2f4ba9
- (void)dealloc;	// 0x2f3b2d
- (void)layoutSubcontrols;	// 0x2f402d
- (CGSize)renderedSize;	// 0x2f3f89
- (void)resetAllFields;	// 0x2f3c99
// declared property getter: - (id)rightJustifiedTitle;	// 0x2f3dd9
- (void)setAlignment:(int)alignment;	// 0x2f4c75
- (void)setCopyright:(id)copyright;	// 0x2f3f4d
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2f3f11
- (void)setNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes;	// 0x2f3e4d
- (void)setRating:(id)rating;	// 0x2f3e11
// declared property setter: - (void)setRightJustifiedTitle:(id)title;	// 0x2f3d91
- (void)setSummary:(id)summary;	// 0x2f3ed5
- (void)setTitle:(id)title;	// 0x2f3d55
- (void)setTopRightImage:(id)image;	// 0x2f3e99
- (id)topRightImageControl;	// 0x2f3e89
- (void)windowMaxBoundsChanged;	// 0x2f3fed
@end
