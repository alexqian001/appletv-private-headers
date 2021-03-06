/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuSectionElement : ATVFeedElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_menuItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x14ccf1; S=0x14cd01; @synthesize=_header
@property(retain, nonatomic) NSArray *menuItems;	// G=0x14cd11; S=0x14cd21; @synthesize=_menuItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14ca9d
- (void)dealloc;	// 0x14cc8d
// declared property getter: - (id)header;	// 0x14ccf1
// declared property getter: - (id)menuItems;	// 0x14cd11
// declared property setter: - (void)setHeader:(id)header;	// 0x14cd01
// declared property setter: - (void)setMenuItems:(id)items;	// 0x14cd21
@end

