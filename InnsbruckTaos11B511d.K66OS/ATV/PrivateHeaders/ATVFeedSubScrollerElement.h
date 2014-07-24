/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedSubScrollerElement : ATVFeedElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_scrollerItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x12f2cd; S=0x12f2dd; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x12f305; S=0x12f315; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12f031
- (void).cxx_destruct;	// 0x12f33d
// declared property getter: - (id)header;	// 0x12f2cd
// declared property getter: - (id)scrollerItems;	// 0x12f305
// declared property setter: - (void)setHeader:(id)header;	// 0x12f2dd
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x12f315
@end
