/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchResultsElement : ATVFeedRootElement {
	ATVFeedMenuElement *_menu;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x1411b9; S=0x1411c9; @synthesize=_menu
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1410d9
- (void)dealloc;	// 0x14116d
// declared property getter: - (id)menu;	// 0x1411b9
// declared property setter: - (void)setMenu:(id)menu;	// 0x1411c9
@end
