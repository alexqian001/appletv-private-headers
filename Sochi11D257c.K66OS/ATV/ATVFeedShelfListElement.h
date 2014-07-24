/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedShelfElement, ATVFeedHeaderElement, ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfListElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	ATVFeedShelfElement *_centerShelf;	// 8 = 0x8
	ATVFeedMenuElement *_menu;	// 12 = 0xc
}
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x139809; S=0x139819; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x1397d1; S=0x1397e1; @synthesize=_header
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x139841; S=0x139851; @synthesize=_menu
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x139585
- (void).cxx_destruct;	// 0x139879
// declared property getter: - (id)centerShelf;	// 0x139809
// declared property getter: - (id)header;	// 0x1397d1
// declared property getter: - (id)menu;	// 0x139841
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x139819
// declared property setter: - (void)setHeader:(id)header;	// 0x1397e1
// declared property setter: - (void)setMenu:(id)menu;	// 0x139851
@end
