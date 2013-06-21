/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRListView, BRCursorControl, BRMediaShelfView;

__attribute__((visibility("hidden")))
@interface ATVShelfListView : BRControl {
	BRCursorControl *_cursor;	// 84 = 0x54
	BRControl *_headerControl;	// 88 = 0x58
	BRMediaShelfView *_centerShelf;	// 92 = 0x5c
	BRListView *_bottomList;	// 96 = 0x60
}
@property(retain, nonatomic) BRListView *bottomList;	// G=0x138679; S=0x138191; @synthesize=_bottomList
@property(retain, nonatomic) BRMediaShelfView *centerShelf;	// G=0x138669; S=0x1380e5; @synthesize=_centerShelf
@property(retain, nonatomic) BRCursorControl *cursor;	// G=0x138639; S=0x138649; @synthesize=_cursor
@property(retain, nonatomic) BRControl *headerControl;	// G=0x138659; S=0x138071; @synthesize=_headerControl
- (id)init;	// 0x137ecd
- (void)_focusChanged:(id)changed;	// 0x1385d9
// declared property getter: - (id)bottomList;	// 0x138679
// declared property getter: - (id)centerShelf;	// 0x138669
// declared property getter: - (id)cursor;	// 0x138639
- (void)dealloc;	// 0x137fb9
// declared property getter: - (id)headerControl;	// 0x138659
- (void)layoutSubcontrols;	// 0x138265
// declared property setter: - (void)setBottomList:(id)list;	// 0x138191
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x1380e5
// declared property setter: - (void)setCursor:(id)cursor;	// 0x138649
// declared property setter: - (void)setHeaderControl:(id)control;	// 0x138071
@end
