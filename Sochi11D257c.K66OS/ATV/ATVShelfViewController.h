/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSubviewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaShelfView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVShelfViewController : XXUnknownSuperclass <ATVSubviewController> {
	BRMediaShelfView *_shelfView;	// 4 = 0x4
	NSArray *_sections;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *sections;	// G=0x443201; S=0x443211; @synthesize=_sections
@property(retain, nonatomic) BRMediaShelfView *shelfView;	// G=0x4431c9; S=0x4431d9; @synthesize=_shelfView
- (id)init;	// 0x4426e5
- (void).cxx_destruct;	// 0x443239
- (id)mediaShelf:(id)shelf indexPathForItemID:(id)itemID;	// 0x442e29
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x442b3d
- (id)mediaShelf:(id)shelf itemIDForIndexPath:(id)indexPath;	// 0x442d41
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x442cb9
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x442d39
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x442d3d
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x442c7d
// declared property getter: - (id)sections;	// 0x443201
// declared property setter: - (void)setSections:(id)sections;	// 0x443211
// declared property setter: - (void)setShelfView:(id)view;	// 0x4431d9
// declared property getter: - (id)shelfView;	// 0x4431c9
- (void)updateWithViewElement:(id)viewElement;	// 0x442779
- (id)view;	// 0x442b2d
@end
