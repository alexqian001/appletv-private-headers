/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedInitialSelectionElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedShowcaseElement : ATVFeedElement {
	NSArray *items;	// 4 = 0x4
	ATVFeedInitialSelectionElement *initialSelection;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedInitialSelectionElement *initialSelection;	// G=0x3d674d; S=0x3d675d; @synthesize
@property(copy, nonatomic) NSArray *items;	// G=0x3d6729; S=0x3d673d; @synthesize
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3d64c9
- (void).cxx_destruct;	// 0x3d6785
// declared property getter: - (id)initialSelection;	// 0x3d674d
// declared property getter: - (id)items;	// 0x3d6729
// declared property setter: - (void)setInitialSelection:(id)selection;	// 0x3d675d
// declared property setter: - (void)setItems:(id)items;	// 0x3d673d
@end
