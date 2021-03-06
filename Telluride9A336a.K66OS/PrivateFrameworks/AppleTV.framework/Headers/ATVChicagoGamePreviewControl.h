/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRCyclerDataSource.h"

@class BRCyclerControl, NSMutableArray, NSArray, ATVFeedUniformTextTableViewController, BRDividerControl, NSString, ATVFeedTextTableDataSet, BRImage, BRTableView, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVChicagoGamePreviewControl : BRControl <BRCyclerDataSource> {
@private
	BRDividerControl *_topDivider;	// 48 = 0x30
	BRDividerControl *_bottomDivider;	// 52 = 0x34
	NSMutableArray *_bannerControls;	// 56 = 0x38
	BRTableView *_summaryTable;	// 60 = 0x3c
	ATVFeedUniformTextTableViewController *_tableViewController;	// 64 = 0x40
	BRCyclerControl *_cycler;	// 68 = 0x44
	CGRect _scoreboardBackgroundImageFrame;	// 72 = 0x48
	BRMerchant *_merchant;	// 88 = 0x58
	NSArray *_bannerItems;	// 92 = 0x5c
	NSString *_text;	// 96 = 0x60
	NSString *_rightJustifiedText;	// 100 = 0x64
	NSString *_topTableLabel;	// 104 = 0x68
	NSString *_bottomTableLabel;	// 108 = 0x6c
	BRImage *_scoreboardBackgroundImage;	// 112 = 0x70
}
@property(copy, nonatomic) NSArray *bannerItems;	// G=0x33bb7045; S=0x33bb675d; @synthesize=_bannerItems
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x33bb7085; S=0x33bb66a1; @synthesize=_bottomTableLabel
@property(retain) ATVFeedTextTableDataSet *dataSet;	// G=0x33bb66f5; S=0x33bb6715; 
@property(retain) BRMerchant *merchant;	// G=0x33bb700d; S=0x33bb7021; @synthesize=_merchant
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x33bb7065; S=0x33bb65f9; @synthesize=_rightJustifiedText
@property(retain) BRImage *scoreboardBackgroundImage;	// G=0x33bb7095; S=0x33bb70a9; @synthesize=_scoreboardBackgroundImage
@property(copy, nonatomic) NSString *text;	// G=0x33bb7055; S=0x33bb65a5; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x33bb7075; S=0x33bb664d; @synthesize=_topTableLabel
- (id)init;	// 0x33bb60cd
- (id)accessibilityLabel;	// 0x33bb6f79
// declared property getter: - (id)bannerItems;	// 0x33bb7045
// declared property getter: - (id)bottomTableLabel;	// 0x33bb7085
- (void)controlWasActivated;	// 0x33bb6559
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x33bb69a9
// declared property getter: - (id)dataSet;	// 0x33bb66f5
- (void)dealloc;	// 0x33bb63d9
- (void)drawInContext:(CGContextRef)context;	// 0x33bb69c9
- (void)layoutSubcontrols;	// 0x33bb6dad
// declared property getter: - (id)merchant;	// 0x33bb700d
- (long)numberOfItemsInCycler:(id)cycler;	// 0x33bb6989
// declared property getter: - (id)rightJustifiedText;	// 0x33bb7065
// declared property getter: - (id)scoreboardBackgroundImage;	// 0x33bb7095
// declared property setter: - (void)setBannerItems:(id)items;	// 0x33bb675d
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x33bb66a1
// declared property setter: - (void)setDataSet:(id)set;	// 0x33bb6715
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x33bb7021
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x33bb65f9
// declared property setter: - (void)setScoreboardBackgroundImage:(id)image;	// 0x33bb70a9
// declared property setter: - (void)setText:(id)text;	// 0x33bb65a5
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x33bb664d
// declared property getter: - (id)text;	// 0x33bb7055
// declared property getter: - (id)topTableLabel;	// 0x33bb7075
@end

