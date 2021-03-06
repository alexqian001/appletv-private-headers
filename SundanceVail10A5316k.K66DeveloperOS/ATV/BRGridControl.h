/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRProviderGroup;

__attribute__((visibility("hidden")))
@interface BRGridControl : BRControl {
	BRProviderGroup *_group;	// 80 = 0x50
	BRControl *_requester;	// 84 = 0x54
	NSRange _range;	// 88 = 0x58
	float _lastGapHeight;	// 96 = 0x60
	double _heightToRange;	// 100 = 0x64
	double _allRowsHeight;	// 108 = 0x6c
	float _singleControlHeight;	// 116 = 0x74
	BOOL _allRowsAreSameHeight;	// 120 = 0x78
	float _allColumnWidths;	// 124 = 0x7c
	long _columnCount;	// 128 = 0x80
	XXStruct_qlg9jA _horizontalGap;	// 132 = 0x84
	XXStruct_qlg9jA _verticalGap;	// 136 = 0x88
	float _leftMargin;	// 140 = 0x8c
	float _rightMargin;	// 144 = 0x90
	float _bottomMargin;	// 148 = 0x94
	float _bottomMarginFactor;	// 152 = 0x98
	float _topMargin;	// 156 = 0x9c
	float _topMarginFactor;	// 160 = 0xa0
	BOOL _wrapsNavigation;	// 164 = 0xa4
	BOOL _explicitlyAcceptsFocus;	// 165 = 0xa5
}
@property(assign) BOOL allRowsAreSameHeight;	// G=0x2a06c9; S=0x2a06b9; converted property
@property(assign) long columnCount;	// G=0x29fe49; S=0x29fe1d; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x29fe9d; S=0x29fe59; converted property
@property(assign) float leftMargin;	// G=0x29ffa1; S=0x29ff65; converted property
@property(retain) id providerRequester;	// G=0x2a000d; S=0x29fffd; converted property
@property(retain) id providers;	// G=0x29fd61; S=0x29fb89; converted property
@property(assign) float rightMargin;	// G=0x29ffed; S=0x29ffb1; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x29ff15; S=0x29feb9; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x2a0591; S=0x2a0581; converted property
- (id)init;	// 0x29fa31
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x2a23c1
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x2a1ed1
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x2a1fe1
- (id)_controlsInRange:(NSRange)range;	// 0x2a224d
- (id)_createControlsInRange:(NSRange)range;	// 0x2a213d
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x2a1925
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x2a1a75
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x2a1b29
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x2a1ca1
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x2a1df9
- (double)_heightToRange;	// 0x2a170d
- (long)_indexOfFocusedControl;	// 0x2a20e1
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x2a1801
- (void)_providerDataSetChanged:(id)changed;	// 0x2a2589
- (void)_providerModified:(id)modified;	// 0x2a25fd
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x2a1be9
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x2a14e9
- (double)_totalHeight;	// 0x2a1609
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x2a243d
- (id)accessibilityControls;	// 0x2a0e09
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x2a06c9
- (BOOL)brEventAction:(id)action;	// 0x2a0229
// converted property getter: - (long)columnCount;	// 0x29fe49
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x2a0f91
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x2a11ed
- (CGRect)controlFrameAtIndex:(long)index;	// 0x2a1101
- (unsigned)countOfCells;	// 0x2a0e25
- (long)dataCount;	// 0x29fd81
- (void)dealloc;	// 0x29facd
- (void)focusControlAtIndex:(long)index;	// 0x2a0fd5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2a034d
- (float)heightOfControlAtIndex:(long)index;	// 0x2a01f5
- (float)heightToMaximum:(float)maximum;	// 0x2a00c1
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x29fe9d
- (unsigned)indexInCellsOfObject:(id)object;	// 0x2a0e35
- (id)initialFocus;	// 0x2a0eb5
- (void)layoutSubcontrols;	// 0x2a06e9
// converted property getter: - (float)leftMargin;	// 0x29ffa1
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x2a0e75
- (float)positionOfColumn:(long)column;	// 0x2a01a1
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x29fda1
// converted property getter: - (id)providerRequester;	// 0x2a000d
// converted property getter: - (id)providers;	// 0x29fd61
- (void)reloadData;	// 0x2a1325
// converted property getter: - (float)rightMargin;	// 0x29ffed
- (long)rowCount;	// 0x29fdc1
- (void)setAcceptsFocus:(BOOL)focus;	// 0x2a12c1
- (void)setAllColumnWidths:(float)widths;	// 0x29fe0d
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x2a06b9
- (void)setBottomMargin:(float)margin;	// 0x2a05a1
// converted property setter: - (void)setColumnCount:(long)count;	// 0x29fe1d
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x29fe59
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x29ff65
- (void)setProvider:(id)provider;	// 0x29fb49
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x29fffd
// converted property setter: - (void)setProviders:(id)providers;	// 0x29fb89
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x29ffb1
- (void)setTopMargin:(float)margin;	// 0x2a062d
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x29feb9
- (void)setVerticalMargins:(float)margins;	// 0x29ff31
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x2a0581
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2a0c55
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x29ff15
- (id)visibleControlAtIndex:(long)index;	// 0x2a0071
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x2a001d
- (NSRange)visibleRange;	// 0x2a0059
- (void)visibleScrollRectChanged;	// 0x2a06d9
- (void)windowMaxBoundsChanged;	// 0x2a0d59
// converted property getter: - (BOOL)wrapsNavigation;	// 0x2a0591
@end

