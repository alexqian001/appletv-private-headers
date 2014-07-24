/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRMetadataContainer.h"

@class NSArray, BRMetadataTitleControl, UIColor, BRTextControl, NSMutableArray, BRHorizontalDividerControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMetadataControl : BRControl <BRMetadataContainer> {
	BRMetadataTitleControl *_titleControl;	// 84 = 0x54
	BRHorizontalDividerControl *_topDivider;	// 88 = 0x58
	BRHorizontalDividerControl *_middleDivider;	// 92 = 0x5c
	BRTextControl *_summaryControl;	// 96 = 0x60
	BOOL _shouldDisplayTitle;	// 100 = 0x64
	NSMutableArray *_detailControls;	// 104 = 0x68
	int _currentDetailIndex;	// 108 = 0x6c
	XXStruct_qlg9jA _maxSummaryHeight;	// 112 = 0x70
	UIColor *_titleColor;	// 116 = 0x74
	UIColor *_textColor;	// 120 = 0x78
	BRTextControl *_expiryControl;	// 124 = 0x7c
	int _displayOption;	// 128 = 0x80
	NSArray *_ratingsControls;	// 132 = 0x84
}
@property(assign, nonatomic) int currentDetailIndex;	// G=0x374839; S=0x374849; @synthesize=_currentDetailIndex
@property(retain, nonatomic) NSMutableArray *detailControls;	// G=0x374819; S=0x374829; @synthesize=_detailControls
@property(assign, nonatomic) int displayOption;	// G=0x3748e5; S=0x3748f5; @synthesize=_displayOption
@property(retain, nonatomic) BRTextControl *expiryControl;	// G=0x3748c5; S=0x3748d5; @synthesize=_expiryControl
@property(assign, nonatomic) XXStruct_qlg9jA maxSummaryHeight;	// G=0x374859; S=0x374875; @synthesize=_maxSummaryHeight
@property(copy, nonatomic) NSArray *ratingsControls;	// G=0x374905; S=0x374919; @synthesize=_ratingsControls
@property(assign, nonatomic) BOOL shouldDisplayTitle;	// G=0x3748b5; S=0x3735c1; @synthesize=_shouldDisplayTitle
@property(retain, nonatomic) UIColor *textColor;	// G=0x374895; S=0x3748a5; @synthesize=_textColor
@property(retain, nonatomic) UIColor *titleColor;	// G=0x374885; S=0x37368d; @synthesize=_titleColor
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x374809; @synthesize=_titleControl
- (id)init;	// 0x37330d
- (id)_currentDetailControl;	// 0x3747a1
- (id)_detailControlAtIndex:(int)index;	// 0x3747c1
- (id)_detailControlsWithDetails:(id)details;	// 0x373b7d
- (id)_labelControlWithLabel:(id)label;	// 0x373ac9
- (id)accessibilityLabel;	// 0x374735
- (void)addDetailPage:(id)page;	// 0x373e71
- (void)addDetailStrings:(id)strings withLabel:(id)label;	// 0x373d1d
// declared property getter: - (int)currentDetailIndex;	// 0x374839
- (void)dealloc;	// 0x3734d1
// declared property getter: - (id)detailControls;	// 0x374819
// declared property getter: - (int)displayOption;	// 0x3748e5
// declared property getter: - (id)expiryControl;	// 0x3748c5
- (void)layoutSubcontrols;	// 0x373ed9
// declared property getter: - (XXStruct_qlg9jA)maxSummaryHeight;	// 0x374859
- (CGSize)metadataSizeThatFits:(CGSize)fits;	// 0x373dd5
// declared property getter: - (id)ratingsControls;	// 0x374905
- (float)renderedHeightForWidth:(float)width;	// 0x374515
// declared property setter: - (void)setCurrentDetailIndex:(int)index;	// 0x374849
// declared property setter: - (void)setDetailControls:(id)controls;	// 0x374829
// declared property setter: - (void)setDisplayOption:(int)option;	// 0x3748f5
// declared property setter: - (void)setExpiryControl:(id)control;	// 0x3748d5
// declared property setter: - (void)setMaxSummaryHeight:(XXStruct_qlg9jA)height;	// 0x374875
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x373d8d
- (void)setRating:(id)rating;	// 0x3736ad
// declared property setter: - (void)setRatingsControls:(id)controls;	// 0x374919
// declared property setter: - (void)setShouldDisplayTitle:(BOOL)displayTitle;	// 0x3735c1
- (void)setSummary:(id)summary;	// 0x3736cd
// declared property setter: - (void)setTextColor:(id)color;	// 0x3748a5
- (void)setTitle:(id)title;	// 0x3735fd
// declared property setter: - (void)setTitleColor:(id)color;	// 0x37368d
- (void)setTitleSubtext:(id)subtext;	// 0x373645
- (void)setTopRightImage2:(id)a2;	// 0x373901
- (void)setTopRightImage:(id)image;	// 0x3738e1
// declared property getter: - (BOOL)shouldDisplayTitle;	// 0x3748b5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x374361
// declared property getter: - (id)textColor;	// 0x374895
// declared property getter: - (id)titleColor;	// 0x374885
// declared property getter: - (id)titleControl;	// 0x374809
- (void)toggleSummaryMetadataView;	// 0x373921
@end
