/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedMenuElement, ATVFeedShelfElement, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfListElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	ATVFeedShelfElement *_centerShelf;	// 8 = 0x8
	ATVFeedMenuElement *_menu;	// 12 = 0xc
}
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x1238a1; S=0x1238b1; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x123869; S=0x123879; @synthesize=_header
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x1238d9; S=0x1238e9; @synthesize=_menu
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12361d
- (void).cxx_destruct;	// 0x123911
// declared property getter: - (id)centerShelf;	// 0x1238a1
// declared property getter: - (id)header;	// 0x123869
// declared property getter: - (id)menu;	// 0x1238d9
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x1238b1
// declared property setter: - (void)setHeader:(id)header;	// 0x123879
// declared property setter: - (void)setMenu:(id)menu;	// 0x1238e9
@end
