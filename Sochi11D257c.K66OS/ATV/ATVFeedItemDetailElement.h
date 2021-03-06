/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedDividerElement, ATVFeedShelfElement, ATVFeedGenericCollectionElement, ATVFeedTableElement, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailElement : ATVFeedRootElement {
	BOOL _verticallyCentered;	// 4 = 0x4
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
@property(retain, nonatomic) ATVFeedShelfElement *bottomShelf;	// G=0x139005; S=0x139015; @synthesize=_bottomShelf
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x138f95; S=0x138fa5; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x138e81; S=0x138e91; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedDividerElement *divider;	// G=0x138fcd; S=0x138fdd; @synthesize=_divider
@property(copy, nonatomic) NSString *footnote;	// G=0x138f39; S=0x138f4d; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x138e49; S=0x138e59; @synthesize=_image
@property(retain, nonatomic) ATVFeedGenericCollectionElement *moreInfo;	// G=0x13903d; S=0x13904d; @synthesize=_moreInfo
@property(copy, nonatomic) NSString *rating;	// G=0x138ef1; S=0x138f05; @synthesize=_rating
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x138eb9; S=0x138ec9; @synthesize=_rightImage
@property(copy, nonatomic) NSString *subtitle;	// G=0x138e25; S=0x138e39; @synthesize=_subtitle
@property(copy, nonatomic) NSString *summary;	// G=0x138f15; S=0x138f29; @synthesize=_summary
@property(retain, nonatomic) ATVFeedTableElement *table;	// G=0x138f5d; S=0x138f6d; @synthesize=_table
@property(copy, nonatomic) NSString *title;	// G=0x138e01; S=0x138e15; @synthesize=_title
@property(assign, nonatomic) BOOL verticallyCentered;	// G=0x139075; S=0x139085; @synthesize=_verticallyCentered
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13864d
- (void).cxx_destruct;	// 0x139095
// declared property getter: - (id)bottomShelf;	// 0x139005
// declared property getter: - (id)centerShelf;	// 0x138f95
// declared property getter: - (id)defaultImage;	// 0x138e81
// declared property getter: - (id)divider;	// 0x138fcd
// declared property getter: - (id)footnote;	// 0x138f39
// declared property getter: - (id)image;	// 0x138e49
// declared property getter: - (id)moreInfo;	// 0x13903d
// declared property getter: - (id)rating;	// 0x138ef1
// declared property getter: - (id)rightImage;	// 0x138eb9
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x139015
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x138fa5
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x138e91
// declared property setter: - (void)setDivider:(id)divider;	// 0x138fdd
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x138f4d
// declared property setter: - (void)setImage:(id)image;	// 0x138e59
// declared property setter: - (void)setMoreInfo:(id)info;	// 0x13904d
// declared property setter: - (void)setRating:(id)rating;	// 0x138f05
// declared property setter: - (void)setRightImage:(id)image;	// 0x138ec9
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x138e39
// declared property setter: - (void)setSummary:(id)summary;	// 0x138f29
// declared property setter: - (void)setTable:(id)table;	// 0x138f6d
// declared property setter: - (void)setTitle:(id)title;	// 0x138e15
// declared property setter: - (void)setVerticallyCentered:(BOOL)centered;	// 0x139085
// declared property getter: - (id)subtitle;	// 0x138e25
// declared property getter: - (id)summary;	// 0x138f15
// declared property getter: - (id)table;	// 0x138f5d
// declared property getter: - (id)title;	// 0x138e01
// declared property getter: - (BOOL)verticallyCentered;	// 0x139075
@end

