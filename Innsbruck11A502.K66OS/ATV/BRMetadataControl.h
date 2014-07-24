/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, NSArray, BRHorizontalDividerControl, BRTextControl, BRMetadataLinesLayer, NSString;

__attribute__((visibility("hidden")))
@interface BRMetadataControl : BRControl {
	BRTextControl *_titleLayer;	// 84 = 0x54
	BRTextControl *_rightJustifiedTitleLayer;	// 88 = 0x58
	BRImageControl *_ratingImageLayer;	// 92 = 0x5c
	BRControl *_likesRatingLayer;	// 96 = 0x60
	BRImageControl *_topRightImageLayer;	// 100 = 0x64
	BRImageControl *_bottomRightImageLayer;	// 104 = 0x68
	BRTextControl *_summaryLayer;	// 108 = 0x6c
	BRMetadataLinesLayer *_metadataLinesLayer;	// 112 = 0x70
	BRTextControl *_copyrightLayer;	// 116 = 0x74
	BRHorizontalDividerControl *_topDividerLayer;	// 120 = 0x78
	BRHorizontalDividerControl *_middleDividerLayer;	// 124 = 0x7c
	BRHorizontalDividerControl *_bottomDividerLayer;	// 128 = 0x80
	NSArray *_metadataObjs;	// 132 = 0x84
	NSArray *_metadataLabels;	// 136 = 0x88
	float _totalHeight;	// 140 = 0x8c
	int _alignment;	// 144 = 0x90
}
@property(retain, nonatomic) NSString *rightJustifiedTitle;	// G=0x37ddad; S=0x37dd65; 
- (id)init;	// 0x37d865
- (void)_setBottomRightImage:(id)image;	// 0x37ef35
- (void)_setCopyright:(id)copyright;	// 0x37f1a1
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x37f10d
- (void)_setNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes;	// 0x37ee6d
- (void)_setRating:(id)rating;	// 0x37ee11
- (void)_setSummary:(id)summary;	// 0x37ef55
- (void)_setTitle:(id)title;	// 0x37ed51
- (void)_setTopRightImage:(id)image;	// 0x37ef15
- (id)accessibilityLabel;	// 0x37ec75
- (void)dealloc;	// 0x37daed
- (void)layoutSubcontrols;	// 0x37e03d
- (CGSize)renderedSize;	// 0x37df99
- (void)resetAllFields;	// 0x37dc6d
// declared property getter: - (id)rightJustifiedTitle;	// 0x37ddad
- (void)setAlignment:(int)alignment;	// 0x37ed41
- (void)setBottomRightImage:(id)image;	// 0x37dea9
- (void)setCopyright:(id)copyright;	// 0x37df5d
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x37df21
- (void)setNumberOfLikes:(int)likes numberOfDislikes:(int)dislikes;	// 0x37de21
- (void)setRating:(id)rating;	// 0x37dde5
// declared property setter: - (void)setRightJustifiedTitle:(id)title;	// 0x37dd65
- (void)setSummary:(id)summary;	// 0x37dee5
- (void)setTitle:(id)title;	// 0x37dd29
- (void)setTopRightImage:(id)image;	// 0x37de6d
- (id)topRightImageControl;	// 0x37de5d
- (void)windowMaxBoundsChanged;	// 0x37dffd
@end
