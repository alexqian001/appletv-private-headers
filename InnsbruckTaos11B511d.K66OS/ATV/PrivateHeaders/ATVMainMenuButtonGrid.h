/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMainMenuButtonGrid : BRGridView {
	BOOL _itemsNeedUpdating;	// 88 = 0x58
	BOOL _focusedItemNeedsUpdating;	// 89 = 0x59
	BOOL _updatingFocusedItem;	// 90 = 0x5a
	NSArray *_items;	// 92 = 0x5c
	NSDictionary *_buttonTemplateInfo;	// 96 = 0x60
	long _numberOfColumns;	// 100 = 0x64
	id _itemTitleBlock;	// 104 = 0x68
	id _itemImageBlock;	// 108 = 0x6c
	id _itemIconBadgeCountBlock;	// 112 = 0x70
	BOOL _shouldAlignCenter;	// 116 = 0x74
	BOOL _allowsReordering;	// 117 = 0x75
	int _navigationalBias;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL allowsReordering;	// G=0xf7f69; S=0xf7f79; @synthesize=_allowsReordering
@property(readonly, assign, nonatomic) NSDictionary *buttonTemplateInfo;	// G=0xf7f19; @synthesize=_buttonTemplateInfo
@property(assign, nonatomic) int navigationalBias;	// G=0xf7f49; S=0xf7f59; @synthesize=_navigationalBias
@property(assign, nonatomic) long numberOfColumns;	// G=0xf7f09; S=0xf7a85; @synthesize=_numberOfColumns
@property(assign, nonatomic) BOOL shouldAlignCenter;	// G=0xf7f29; S=0xf7f39; @synthesize=_shouldAlignCenter
- (id)init;	// 0xf6f51
- (id)initWithLayout:(id)layout;	// 0xf6f91
- (void)_centerSubcontrols;	// 0xf7139
- (id)_itemIconBadgeCountBlock;	// 0xf7839
- (id)_itemImageBlock;	// 0xf7829
- (id)_itemTitleBlock;	// 0xf7819
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0xf7781
- (void)_updateFocusedItem;	// 0xf78fd
// declared property getter: - (BOOL)allowsReordering;	// 0xf7f69
- (void)bindItemIconBadgeCountWithBlock:(id)block;	// 0xf78c1
- (void)bindItemImageWithBlock:(id)block;	// 0xf7885
- (void)bindItemTitleWithBlock:(id)block;	// 0xf7849
// declared property getter: - (id)buttonTemplateInfo;	// 0xf7f19
- (BOOL)canMoveItemAtIndex:(long)index;	// 0xf7cc5
- (id)dataItemAtIndex:(unsigned)index;	// 0xf7a39
- (id)dataItems;	// 0xf79b1
- (void)dealloc;	// 0xf7039
- (void)didFocusItemAtIndex:(long)index;	// 0xf7e81
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0xf76dd
- (id)initialFocus;	// 0xf759d
- (id)itemAtIndex:(long)index;	// 0xf7b5d
- (void)layoutSubcontrols;	// 0xf77ad
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0xf7cdd
// declared property getter: - (int)navigationalBias;	// 0xf7f49
// declared property getter: - (long)numberOfColumns;	// 0xf7f09
- (void)populateDataCache:(id)cache;	// 0xf7aad
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0xf7359
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0xf73e9
// declared property setter: - (void)setAllowsReordering:(BOOL)reordering;	// 0xf7f79
// declared property setter: - (void)setNavigationalBias:(int)bias;	// 0xf7f59
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0xf7a85
// declared property setter: - (void)setShouldAlignCenter:(BOOL)alignCenter;	// 0xf7f39
// declared property getter: - (BOOL)shouldAlignCenter;	// 0xf7f29
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0xf7de5
- (void)updateBoundFocusedItem;	// 0xf7119
- (void)updateBoundItems;	// 0xf70f9
@end
