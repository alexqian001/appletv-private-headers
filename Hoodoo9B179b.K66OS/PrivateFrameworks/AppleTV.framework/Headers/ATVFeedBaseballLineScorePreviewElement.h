/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString, NSArray, ATVFeedTableElement;

__attribute__((visibility("hidden")))
@interface ATVFeedBaseballLineScorePreviewElement : ATVFeedElement {
@private
	NSArray *_banners;	// 28 = 0x1c
	NSString *_leftLabel;	// 32 = 0x20
	NSString *_rightLabel;	// 36 = 0x24
	ATVFeedTableElement *_teamsTable;	// 40 = 0x28
	ATVFeedTableElement *_inningsTable;	// 44 = 0x2c
	ATVFeedTableElement *_summaryTable;	// 48 = 0x30
}
@property(retain, nonatomic) NSArray *banners;	// G=0x303d48d9; S=0x303d48e9; @synthesize=_banners
@property(retain, nonatomic) ATVFeedTableElement *inningsTable;	// G=0x303d49a9; S=0x303d49b9; @synthesize=_inningsTable
@property(retain, nonatomic) NSString *leftLabel;	// G=0x303d490d; S=0x303d491d; @synthesize=_leftLabel
@property(retain, nonatomic) NSString *rightLabel;	// G=0x303d4941; S=0x303d4951; @synthesize=_rightLabel
@property(retain, nonatomic) ATVFeedTableElement *summaryTable;	// G=0x303d49dd; S=0x303d49ed; @synthesize=_summaryTable
@property(retain, nonatomic) ATVFeedTableElement *teamsTable;	// G=0x303d4975; S=0x303d4985; @synthesize=_teamsTable
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303d457d
// declared property getter: - (id)banners;	// 0x303d48d9
- (void)dealloc;	// 0x303d4829
// declared property getter: - (id)inningsTable;	// 0x303d49a9
// declared property getter: - (id)leftLabel;	// 0x303d490d
// declared property getter: - (id)rightLabel;	// 0x303d4941
// declared property setter: - (void)setBanners:(id)banners;	// 0x303d48e9
// declared property setter: - (void)setInningsTable:(id)table;	// 0x303d49b9
// declared property setter: - (void)setLeftLabel:(id)label;	// 0x303d491d
// declared property setter: - (void)setRightLabel:(id)label;	// 0x303d4951
// declared property setter: - (void)setSummaryTable:(id)table;	// 0x303d49ed
// declared property setter: - (void)setTeamsTable:(id)table;	// 0x303d4985
// declared property getter: - (id)summaryTable;	// 0x303d49dd
// declared property getter: - (id)teamsTable;	// 0x303d4975
@end
