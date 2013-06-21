/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedGridElement : ATVFeedElement {
	int _columnCount;	// 4 = 0x4
	NSArray *_gridItems;	// 8 = 0x8
}
@property(assign, nonatomic) int columnCount;	// G=0x162c91; S=0x162ca1; @synthesize=_columnCount
@property(retain, nonatomic) NSArray *gridItems;	// G=0x162cb1; S=0x162cc1; @synthesize=_gridItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x162a81
// declared property getter: - (int)columnCount;	// 0x162c91
- (void)dealloc;	// 0x162c45
// declared property getter: - (id)gridItems;	// 0x162cb1
// declared property setter: - (void)setColumnCount:(int)count;	// 0x162ca1
// declared property setter: - (void)setGridItems:(id)items;	// 0x162cc1
@end
