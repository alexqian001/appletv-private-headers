/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRGridView.h"

@class NSTimer, ListViewAnimationDelegate, BRBlueGlowSelectionLozengeLayer;

__attribute__((visibility("hidden")))
@interface BRListView : BRGridView {
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 208 = 0xd0
	ListViewAnimationDelegate *_animationDelegate;	// 212 = 0xd4
	NSTimer *_pokeTimer;	// 216 = 0xd8
	NSTimer *_delayTimer;	// 220 = 0xdc
	NSTimer *_repeatTimer;	// 224 = 0xe0
	double _repeatStart;	// 228 = 0xe4
	double _repeatAccumulator;	// 236 = 0xec
	long _scrollSelection;	// 244 = 0xf4
	long _savedSelection;	// 248 = 0xf8
	BOOL _turboEngaged;	// 252 = 0xfc
	BOOL _movingDown;	// 253 = 0xfd
	BOOL _selectionEntered;	// 254 = 0xfe
}
@property(retain) BRBlueGlowSelectionLozengeLayer *cursor;	// G=0x2dea61; S=0x2de821; converted property
@property(assign) BOOL lastItemCentered;	// G=0x2dec05; S=0x2dec01; converted property
- (id)init;	// 0x2de299
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2dfe31
- (double)_calculateRepeatRate;	// 0x2e0939
- (unsigned)_countOfHeadersInRange:(NSRange)range;	// 0x2df9d1
- (long)_dataIndexFromGridIndex:(long)gridIndex;	// 0x2e0fe1
- (id)_dataIndexPathFromGridIndex:(long)gridIndex sectionIndex:(long *)index;	// 0x2e0ebd
- (void)_ensureSelectionFocusable;	// 0x2dfdc5
- (void)_enterCurrentSelection;	// 0x2e09b1
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x2dfebd
- (long)_gridIndexForDataIndex:(long)dataIndex;	// 0x2e10a5
- (long)_gridIndexForDataIndexPath:(id)dataIndexPath;	// 0x2e1169
- (void)_leaveCurrentSelection;	// 0x2e0a51
- (void)_listScrollingCompleted:(id)completed;	// 0x2e0e69
- (void)_listScrollingInitiated:(id)initiated;	// 0x2e0e15
- (void)_performScrollInitiationActivities;	// 0x2e0df1
- (void)_performScrollTerminationActivities;	// 0x2e0e11
- (void)_pokeTimerFired:(id)fired;	// 0x2e08f1
- (void)_postSelectionFinalizedNotification;	// 0x2e0a85
- (void)_repeatDownTimerFired:(id)fired;	// 0x2e0651
- (void)_repeatUpTimerFired:(id)fired;	// 0x2e07a1
- (void)_restoreCurrentSelectionIndex;	// 0x2e0cf1
- (void)_saveCurrentSelectionIndex;	// 0x2e0cd1
- (BOOL)_scrollDown:(id)down;	// 0x2dfce1
- (BOOL)_scrollUp:(id)up;	// 0x2dfbfd
- (void)_setNewScrollIndex:(long)index;	// 0x2dff45
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x2e0431
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x2e01b1
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x2e00d1
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x2e02f1
- (void)_stopRepeatTimer;	// 0x2e05e1
- (void)_updateScrollPosition;	// 0x2dffc1
- (void)_updateWidgetFrame;	// 0x2e0a89
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x2e0c15
- (id)accessibilityControls;	// 0x2df8b5
- (id)accessibilityLabel;	// 0x2df789
- (BOOL)brEventAction:(id)action;	// 0x2de435
- (void)controlWasActivated;	// 0x2dec79
- (void)controlWasFocused;	// 0x2decf1
- (void)controlWasUnfocused;	// 0x2ded51
- (unsigned)countOfCells;	// 0x2df8d1
// converted property getter: - (id)cursor;	// 0x2dea61
- (void)dealloc;	// 0x2de391
- (void)didFocusItemAtIndex:(long)index;	// 0x2df4f9
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x2df6d5
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x2df661
- (void)didUnFocusItemAtIndex:(long)index;	// 0x2df5e9
- (float)heightForItemAtIndex:(long)index;	// 0x2df2b5
- (long)indexForItemID:(id)itemID;	// 0x2df23d
- (unsigned)indexInCellsOfObject:(id)object;	// 0x2dfafd
- (BOOL)isAccessibilityElement;	// 0x2df821
- (id)itemAtIndex:(long)index;	// 0x2df125
- (id)itemIDAtIndex:(long)index;	// 0x2df1c5
// converted property getter: - (BOOL)lastItemCentered;	// 0x2dec05
- (void)layoutSubcontrols;	// 0x2dedc5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2df775
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2df785
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2df781
- (void)list:(id)list didUnFocusItemAtIndexPath:(id)indexPath;	// 0x2df77d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2df769
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2df765
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x2df75d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x2df759
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2df749
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2df751
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2df755
- (void)list:(id)list willDisplayItemAtIndexPath:(id)indexPath;	// 0x2df76d
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x2df771
- (void)list:(id)list willUnFocusItemAtIndexPath:(id)indexPath;	// 0x2df779
- (float)listHeightToMaximum:(float)maximum;	// 0x2deb95
- (void)listWasActivated:(id)activated;	// 0x2df761
- (long)numberOfSectionsInList:(id)list;	// 0x2df74d
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x2dfb79
- (void)populateDataCache:(id)cache;	// 0x2def0d
- (void)reload;	// 0x2de735
- (void)reloadItemAtIndexPath:(id)indexPath;	// 0x2dec49
- (void)selectItemAtIndex:(long)index;	// 0x2df0f1
- (void)selectRowAtIndexPath:(id)indexPath;	// 0x2dea81
- (long)selectedIndex;	// 0x2df0e1
- (id)selectedIndexPath;	// 0x2deb75
- (long)selection;	// 0x2dea71
// converted property setter: - (void)setCursor:(id)cursor;	// 0x2de821
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x2dec01
- (id)visibleRowAtIndexPath:(id)indexPath;	// 0x2dec09
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x2dec39
- (void)willDisplayItemAtIndex:(long)index;	// 0x2df3f1
- (long)willFocusItemAtIndex:(long)index;	// 0x2df46d
- (void)willUnFocusItemAtIndex:(long)index;	// 0x2df571
@end
