/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRPanelControl, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVNavigationBar : BRControl {
	NSTimer *_updateSelectedIndexTimer;	// 84 = 0x54
	BRPanelControl *_panel;	// 88 = 0x58
	BRControl *_bottomDivider;	// 92 = 0x5c
	BRImageControl *_glow;	// 96 = 0x60
	BRControl *_leftFade;	// 100 = 0x64
	BRControl *_rightFade;	// 104 = 0x68
	BOOL _rebuildPanel;	// 108 = 0x6c
	int _selectedIndex;	// 112 = 0x70
	float _topMargin;	// 116 = 0x74
	float _panelHeight;	// 120 = 0x78
	id _controlCreationBlock;	// 124 = 0x7c
	BOOL _needsUpdateOfSelectedItem;	// 128 = 0x80
	BOOL _needsUpdateOfItems;	// 129 = 0x81
	BOOL _centerFocusLayout;	// 130 = 0x82
	NSArray *_items;	// 132 = 0x84
	id _selectedItem;	// 136 = 0x88
	int _focusedIndex;	// 140 = 0x8c
	unsigned _barStyle;	// 144 = 0x90
	double _timeSinceFocusMoved;	// 148 = 0x94
}
@property(assign, nonatomic) BOOL _centerFocusLayout;	// G=0xc380d; S=0xc381d; @synthesize
@property(assign, nonatomic) int _focusedIndex;	// G=0xc37ed; S=0xc37fd; @synthesize
@property(assign, nonatomic) int _selectedIndex;	// G=0xc37cd; S=0xc37dd; @synthesize
@property(assign, nonatomic) double _timeSinceFocusMoved;	// G=0xc382d; S=0xc3845; @synthesize
@property(readonly, assign, nonatomic) unsigned barStyle;	// G=0xc3859; @synthesize=_barStyle
@property(copy, nonatomic) NSArray *items;	// G=0xc37a9; S=0xc2e1d; @synthesize=_items
@property(assign, nonatomic) unsigned selectedIndex;	// G=0xc352d; S=0xc34fd; 
@property(assign, nonatomic) id selectedItem;	// G=0xc37bd; S=0xc34d5; @synthesize=_selectedItem
- (id)init;	// 0xc26c1
- (id)initWithStyle:(unsigned)style;	// 0xc26d9
// declared property getter: - (BOOL)_centerFocusLayout;	// 0xc380d
- (void)_clearSelectedIndexTimer;	// 0xc4071
// declared property getter: - (int)_focusedIndex;	// 0xc37ed
- (void)_restoreSelection;	// 0xc38a5
- (void)_selectedCategoryDidChange;	// 0xc3b15
// declared property getter: - (int)_selectedIndex;	// 0xc37cd
- (void)_setPanelFocusedControl;	// 0xc3a7d
- (void)_setSelectedIndex:(int)index;	// 0xc39e1
- (void)_setupSelectedIndexTimer;	// 0xc40b9
// declared property getter: - (double)_timeSinceFocusMoved;	// 0xc382d
- (id)_titleControlForObject:(id)object;	// 0xc3869
- (void)_updateRepositioning;	// 0xc3b65
- (void)_updateSelectedIndex;	// 0xc396d
// declared property getter: - (unsigned)barStyle;	// 0xc3859
- (BOOL)brEventAction:(id)action;	// 0xc3541
- (void)controlWasFocused;	// 0xc335d
- (void)controlWasUnfocused;	// 0xc3441
- (void)dealloc;	// 0xc2d15
// declared property getter: - (id)items;	// 0xc37a9
- (void)layoutSubcontrols;	// 0xc2f4d
- (void)registerControlCreationBlock:(id)block;	// 0xc2ddd
// declared property getter: - (unsigned)selectedIndex;	// 0xc352d
// declared property getter: - (id)selectedItem;	// 0xc37bd
// declared property setter: - (void)setItems:(id)items;	// 0xc2e1d
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0xc34fd
// declared property setter: - (void)setSelectedItem:(id)item;	// 0xc34d5
// declared property setter: - (void)set_centerFocusLayout:(BOOL)layout;	// 0xc381d
// declared property setter: - (void)set_focusedIndex:(int)index;	// 0xc37fd
// declared property setter: - (void)set_selectedIndex:(int)index;	// 0xc37dd
// declared property setter: - (void)set_timeSinceFocusMoved:(double)moved;	// 0xc3845
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xc2eb5
- (void)updateBoundItems;	// 0xc2e95
- (void)updateBoundSelectedItem;	// 0xc34b5
@end
