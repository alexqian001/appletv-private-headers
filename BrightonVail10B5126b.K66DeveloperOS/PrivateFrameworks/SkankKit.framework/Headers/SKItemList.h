/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKControl.h"
#import "SkankKit-Structs.h"

@class NSMutableArray, SKScrollLayer, DPTextLayer;

@interface SKItemList : SKControl {
	NSMutableArray *_toAdd;	// 68 = 0x44
	DPTextLayer *_title;	// 72 = 0x48
	SKScrollLayer *_scroller;	// 76 = 0x4c
	float _itemHeight;	// 80 = 0x50
	BOOL _drags;	// 84 = 0x54
	BOOL _dragged;	// 85 = 0x55
	NSMutableArray *_items;	// 88 = 0x58
	id _lastMousedLayer;	// 92 = 0x5c
}
@property(assign) float itemHeight;	// G=0x354416c1; S=0x354416d1; converted property
@property(readonly, retain) NSMutableArray *items;	// G=0x35440de5; converted property
- (id)init;	// 0x35440bf9
- (void)addItem:(id)item;	// 0x35440ec9
- (id)addItemWithTitle:(id)title withObject:(id)object;	// 0x35440f19
- (void)clearAllItems;	// 0x3544141d
- (void)dealloc;	// 0x35440d81
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x354417e9
// converted property getter: - (float)itemHeight;	// 0x354416c1
- (id)itemWithObject:(id)object;	// 0x35440df5
// converted property getter: - (id)items;	// 0x35440de5
- (void)refreshItems;	// 0x35441011
- (void)selectLayer:(id)layer;	// 0x354417a1
- (void)setBounds:(CGRect)bounds;	// 0x3544151d
- (void)setDraggable:(BOOL)draggable;	// 0x35441781
- (void)setDrawsBorder:(BOOL)border;	// 0x354416f9
// converted property setter: - (void)setItemHeight:(float)height;	// 0x354416d1
- (void)setName:(id)name forItemWithObject:(id)object;	// 0x35441245
- (void)setTitle:(id)title;	// 0x3544160d
@end

