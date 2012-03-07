/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRDividerControl, NSArray, BRMetadataLinesLayer, NSString, BRImageControl;

@interface BRMetadataControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 48 = 0x30
	BRTextControl *_rightJustifiedTitleLayer;	// 52 = 0x34
	BRImageControl *_ratingImageLayer;	// 56 = 0x38
	BRImageControl *_starRatingImageLayer;	// 60 = 0x3c
	BRImageControl *_topRightImageLayer;	// 64 = 0x40
	BRTextControl *_summaryLayer;	// 68 = 0x44
	BRMetadataLinesLayer *_metadataLinesLayer;	// 72 = 0x48
	BRTextControl *_copyrightLayer;	// 76 = 0x4c
	BRDividerControl *_topDividerLayer;	// 80 = 0x50
	BRDividerControl *_middleDividerLayer;	// 84 = 0x54
	BRDividerControl *_bottomDividerLayer;	// 88 = 0x58
	NSArray *_metadataObjs;	// 92 = 0x5c
	NSArray *_metadataLabels;	// 96 = 0x60
	float _totalHeight;	// 100 = 0x64
	int _alignment;	// 104 = 0x68
}
@property(retain, nonatomic) NSString *rightJustifiedTitle;	// G=0x34200781; S=0x34200739; 
- (id)init;	// 0x342001a1
- (void)_setCopyright:(id)copyright;	// 0x34201ae1
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x34201a49
- (void)_setRating:(id)rating;	// 0x342017d9
- (void)_setStarRating:(id)rating;	// 0x34201835
- (void)_setSummary:(id)summary;	// 0x342018b1
- (void)_setTitle:(id)title;	// 0x34201719
- (void)_setTopRightImage:(id)image;	// 0x34201891
- (void)_themeMetricsChanged;	// 0x34201ba1
- (id)accessibilityLabel;	// 0x3420162d
- (void)dealloc;	// 0x342004d9
- (void)layoutSubcontrols;	// 0x34200a21
- (CGSize)renderedSize;	// 0x342009c1
- (void)resetAllFields;	// 0x34200645
// declared property getter: - (id)rightJustifiedTitle;	// 0x34200781
- (void)setAlignment:(int)alignment;	// 0x34201709
- (void)setCopyright:(id)copyright;	// 0x34200985
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x34200949
- (void)setRating:(id)rating;	// 0x342007b9
// declared property setter: - (void)setRightJustifiedTitle:(id)title;	// 0x34200739
- (void)setStarRating:(id)rating;	// 0x34200885
- (void)setSummary:(id)summary;	// 0x3420090d
- (void)setTitle:(id)title;	// 0x342006fd
- (void)setTopRightImage:(id)image;	// 0x342008d1
- (void)setUserRating:(id)rating;	// 0x342007f5
- (id)topRightImageControl;	// 0x342008c1
@end
