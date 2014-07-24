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
	BRProviderGroup *_group;	// 84 = 0x54
	BRControl *_requester;	// 88 = 0x58
	NSRange _range;	// 92 = 0x5c
	float _lastGapHeight;	// 100 = 0x64
	double _heightToRange;	// 104 = 0x68
	double _allRowsHeight;	// 112 = 0x70
	float _singleControlHeight;	// 120 = 0x78
	BOOL _allRowsAreSameHeight;	// 124 = 0x7c
	float _allColumnWidths;	// 128 = 0x80
	long _columnCount;	// 132 = 0x84
	XXStruct_qlg9jA _horizontalGap;	// 136 = 0x88
	XXStruct_qlg9jA _verticalGap;	// 140 = 0x8c
	float _leftMargin;	// 144 = 0x90
	float _rightMargin;	// 148 = 0x94
	float _bottomMargin;	// 152 = 0x98
	float _bottomMarginFactor;	// 156 = 0x9c
	float _topMargin;	// 160 = 0xa0
	float _topMarginFactor;	// 164 = 0xa4
	BOOL _wrapsNavigation;	// 168 = 0xa8
	BOOL _explicitlyAcceptsFocus;	// 169 = 0xa9
}
@property(assign) BOOL allRowsAreSameHeight;	// G=0x367cd5; S=0x367cc5; converted property
@property(assign) long columnCount;	// G=0x367375; S=0x367349; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x3673c5; S=0x367385; converted property
@property(assign) float leftMargin;	// G=0x3674d5; S=0x367499; converted property
@property(retain) id providerRequester;	// G=0x367545; S=0x367531; converted property
@property(retain) id providers;	// G=0x36729d; S=0x36704d; converted property
@property(assign) float rightMargin;	// G=0x367521; S=0x3674e5; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x367449; S=0x3673e1; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x367b9d; S=0x367b8d; converted property
- (id)init;	// 0x366ee9
- (void).cxx_destruct;	// 0x3684d5
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x369c8d
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x3696b9
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x3697e1
- (id)_controlsInRange:(NSRange)range;	// 0x369ac1
- (id)_createControlsInRange:(NSRange)range;	// 0x36996d
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x369099
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x3691ed
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x3692b5
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x369411
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x3695d9
- (double)_heightToRange;	// 0x368e61
- (long)_indexOfFocusedControl;	// 0x3698e9
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x368f6d
- (void)_providerDataSetChanged:(id)changed;	// 0x369ec9
- (void)_providerModified:(id)modified;	// 0x369f49
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x36938d
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x368c19
- (double)_totalHeight;	// 0x368d41
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x369d3d
- (id)accessibilityControls;	// 0x3682f1
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x367cd5
- (BOOL)brEventAction:(id)action;	// 0x3677b1
// converted property getter: - (long)columnCount;	// 0x367375
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x3685d9
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x3688a1
- (CGRect)controlFrameAtIndex:(long)index;	// 0x3687a5
- (unsigned)countOfCells;	// 0x36830d
- (long)dataCount;	// 0x3672bd
- (void)dealloc;	// 0x366f95
- (void)focusControlAtIndex:(long)index;	// 0x36863d
- (void)focusDirectlyOnControl:(id)control;	// 0x368505
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x367905
- (float)heightOfControlAtIndex:(long)index;	// 0x36776d
- (float)heightToMaximum:(float)maximum;	// 0x367629
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x3673c5
- (unsigned)indexInCellsOfObject:(id)object;	// 0x36831d
- (id)initialFocus;	// 0x3683e1
- (void)layoutSubcontrols;	// 0x367cf9
// converted property getter: - (float)leftMargin;	// 0x3674d5
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x368385
- (float)positionOfColumn:(long)column;	// 0x367719
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x3672dd
// converted property getter: - (id)providerRequester;	// 0x367545
// converted property getter: - (id)providers;	// 0x36729d
- (void)reloadData;	// 0x3689f1
// converted property getter: - (float)rightMargin;	// 0x367521
- (long)rowCount;	// 0x3672fd
- (void)setAcceptsFocus:(BOOL)focus;	// 0x36898d
- (void)setAllColumnWidths:(float)widths;	// 0x367339
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x367cc5
- (void)setBottomMargin:(float)margin;	// 0x367bad
// converted property setter: - (void)setColumnCount:(long)count;	// 0x367349
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x367385
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x367499
- (void)setProvider:(id)provider;	// 0x367001
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x367531
// converted property setter: - (void)setProviders:(id)providers;	// 0x36704d
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x3674e5
- (void)setTopMargin:(float)margin;	// 0x367c39
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x3673e1
- (void)setVerticalMargins:(float)margins;	// 0x367465
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x367b8d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x368111
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x367449
- (id)visibleControlAtIndex:(long)index;	// 0x3675b9
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x367565
- (NSRange)visibleRange;	// 0x3675a1
- (void)visibleScrollRectChanged;	// 0x367ce5
- (void)windowMaxBoundsChanged;	// 0x368241
// converted property getter: - (BOOL)wrapsNavigation;	// 0x367b9d
@end
