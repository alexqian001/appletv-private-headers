/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedImageElement, ATVFeedDividerElement, NSString, ATVFeedShelfElement, ATVFeedTableElement, ATVFeedGenericCollectionElement;

__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailElement : ATVFeedRootElement {
	NSString *_title;	// 8 = 0x8
	NSString *_subtitle;	// 12 = 0xc
	ATVFeedImageElement *_image;	// 16 = 0x10
	ATVFeedImageElement *_defaultImage;	// 20 = 0x14
	ATVFeedImageElement *_rightImage;	// 24 = 0x18
	NSString *_rating;	// 28 = 0x1c
	NSString *_summary;	// 32 = 0x20
	NSString *_footnote;	// 36 = 0x24
	ATVFeedTableElement *_table;	// 40 = 0x28
	ATVFeedShelfElement *_centerShelf;	// 44 = 0x2c
	ATVFeedDividerElement *_divider;	// 48 = 0x30
	ATVFeedShelfElement *_bottomShelf;	// 52 = 0x34
	ATVFeedGenericCollectionElement *_moreInfo;	// 56 = 0x38
}
@property(retain, nonatomic) ATVFeedShelfElement *bottomShelf;	// G=0x13ae49; S=0x13ae59; @synthesize=_bottomShelf
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x13ae09; S=0x13ae19; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x13ad3d; S=0x13ad4d; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedDividerElement *divider;	// G=0x13ae29; S=0x13ae39; @synthesize=_divider
@property(copy, nonatomic) NSString *footnote;	// G=0x13adc5; S=0x13add9; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x13ad1d; S=0x13ad2d; @synthesize=_image
@property(retain, nonatomic) ATVFeedGenericCollectionElement *moreInfo;	// G=0x13ae69; S=0x13ae79; @synthesize=_moreInfo
@property(copy, nonatomic) NSString *rating;	// G=0x13ad7d; S=0x13ad91; @synthesize=_rating
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x13ad5d; S=0x13ad6d; @synthesize=_rightImage
@property(copy, nonatomic) NSString *subtitle;	// G=0x13acf9; S=0x13ad0d; @synthesize=_subtitle
@property(copy, nonatomic) NSString *summary;	// G=0x13ada1; S=0x13adb5; @synthesize=_summary
@property(retain, nonatomic) ATVFeedTableElement *table;	// G=0x13ade9; S=0x13adf9; @synthesize=_table
@property(copy, nonatomic) NSString *title;	// G=0x13acd5; S=0x13ace9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13a749
// declared property getter: - (id)bottomShelf;	// 0x13ae49
// declared property getter: - (id)centerShelf;	// 0x13ae09
- (void)dealloc;	// 0x13ab95
// declared property getter: - (id)defaultImage;	// 0x13ad3d
// declared property getter: - (id)divider;	// 0x13ae29
// declared property getter: - (id)footnote;	// 0x13adc5
// declared property getter: - (id)image;	// 0x13ad1d
// declared property getter: - (id)moreInfo;	// 0x13ae69
// declared property getter: - (id)rating;	// 0x13ad7d
// declared property getter: - (id)rightImage;	// 0x13ad5d
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x13ae59
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x13ae19
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x13ad4d
// declared property setter: - (void)setDivider:(id)divider;	// 0x13ae39
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x13add9
// declared property setter: - (void)setImage:(id)image;	// 0x13ad2d
// declared property setter: - (void)setMoreInfo:(id)info;	// 0x13ae79
// declared property setter: - (void)setRating:(id)rating;	// 0x13ad91
// declared property setter: - (void)setRightImage:(id)image;	// 0x13ad6d
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x13ad0d
// declared property setter: - (void)setSummary:(id)summary;	// 0x13adb5
// declared property setter: - (void)setTable:(id)table;	// 0x13adf9
// declared property setter: - (void)setTitle:(id)title;	// 0x13ace9
// declared property getter: - (id)subtitle;	// 0x13acf9
// declared property getter: - (id)summary;	// 0x13ada1
// declared property getter: - (id)table;	// 0x13ade9
// declared property getter: - (id)title;	// 0x13acd5
@end
