/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class NSTimer, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRMediaShelfView : BRControl <BRContainerViewCell> {
	id _dataSource;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	NSDictionary *_controlActions;	// 92 = 0x5c
	NSDictionary *_titleActions;	// 96 = 0x60
	BOOL _centered;	// 100 = 0x64
	BOOL _scrollable;	// 101 = 0x65
	NSRange _flatRange;	// 104 = 0x68
	CATransform3D _leftTransform;	// 112 = 0x70
	CATransform3D _rightTransform;	// 176 = 0xb0
	NSMutableArray *_cells;	// 240 = 0xf0
	NSMutableArray *_titles;	// 244 = 0xf4
	NSTimer *_scrollTimer;	// 248 = 0xf8
	BOOL _scrolling;	// 252 = 0xfc
	int _collapsedState;	// 256 = 0x100
	BOOL _ordered;	// 260 = 0x104
	BOOL _needToReloadDataOnActivate;	// 261 = 0x105
	long _numberOfItems;	// 264 = 0x108
	NSRange _refillVisibleRange;	// 268 = 0x10c
	BOOL _restoreLastFocus;	// 276 = 0x114
	NSTimer *_forceDisplayTimer;	// 280 = 0x118
	id _loadCompletionBlock;	// 284 = 0x11c
	BOOL _okToLoad;	// 288 = 0x120
	BOOL _displayComplete;	// 289 = 0x121
	BOOL _explicitlyAcceptsFocus;	// 290 = 0x122
	long _columnCount;	// 292 = 0x124
	XXStruct_qlg9jA _horizontalGap;	// 296 = 0x128
	float _coverflowMargin;	// 300 = 0x12c
	BOOL antialiasCoverflowPosters;	// 304 = 0x130
}
@property(assign, nonatomic) BOOL antialiasCoverflowPosters;	// G=0x2a9b21; S=0x2a9b31; @synthesize
@property(assign) BOOL centered;	// G=0x2a8cd9; S=0x2a8cad; converted property
@property(assign) int collapsedState;	// G=0x2a9359; S=0x2a9331; converted property
@property(assign, nonatomic) long columnCount;	// G=0x2a9ad5; S=0x2a89ed; @synthesize=_columnCount
@property(assign, nonatomic) float coverflowMargin;	// G=0x2a9b01; S=0x2a9b11; @synthesize=_coverflowMargin
@property(retain) id dataSource;	// G=0x2a8b89; S=0x2a8ad5; converted property
@property(assign) id delegate;	// G=0x2a8ba9; S=0x2a8b99; converted property
@property(retain) id focusedIndexPath;	// G=0x2a9045; S=0x2a90c1; converted property
@property(assign, nonatomic) XXStruct_qlg9jA horizontalGap;	// G=0x2a9ae5; S=0x2a8a19; @synthesize=_horizontalGap
@property(assign) BOOL ordered;	// G=0x2a8d15; S=0x2a8ce9; converted property
@property(assign) BOOL scrollable;	// G=0x2a8c9d; S=0x2a8c55; converted property
- (id)init;	// 0x2a8451
- (long)_columnCount;	// 0x2a9c21
- (id)_controlActions;	// 0x2ab8b9
- (id)_controlsInRange:(NSRange)range oldRange:(NSRange)range2;	// 0x2abee1
- (float)_coverflowMargin;	// 0x2a9d09
- (id)_createControlAtIndex:(int)index;	// 0x2abc5d
- (id)_createControlsInRange:(NSRange)range;	// 0x2ac03d
- (void)_displayCellsForce:(BOOL)force;	// 0x2ac4b9
- (NSRange)_dividedRangeForRange:(NSRange)range andDirection:(int)direction;	// 0x2ac6dd
- (unsigned)_dividerCountInRange:(NSRange)range;	// 0x2ac805
- (unsigned)_firstScrollableIndex;	// 0x2a9e75
- (void)_focusChanged:(id)changed;	// 0x2a9db5
- (void)_forceDisplayTimerFired:(id)fired;	// 0x2ac6b9
- (float)_horizontalGap;	// 0x2a9c81
- (long)_indexFromIndexPath:(id)indexPath;	// 0x2acccd
- (id)_indexPathFromIndex:(long)index sectionIndex:(long *)index2;	// 0x2acd95
- (BOOL)_isDividerAtIndex:(long)index;	// 0x2ac851
- (unsigned)_lastScrollableIndex;	// 0x2a9e3d
- (void)_layoutShelfContents;	// 0x2aa401
- (BOOL)_leftButtonEvent;	// 0x2a9f5d
- (void)_loadControlWithStartIndex:(long)startIndex start:(BOOL)start;	// 0x2ac1c1
- (void)_loadControlsInRange:(NSRange)range;	// 0x2ac11d
- (unsigned)_nextFocusableIndexInDirection:(int)direction;	// 0x2a9e85
- (long)_numberOfItems;	// 0x2acbd9
- (void)_purgeControls;	// 0x2a9bd1
- (void)_refillShelf;	// 0x2a9b41
- (void)_reloadTitles;	// 0x2ac8e9
- (void)_removeSectionHeaderTitleControls;	// 0x2acb31
- (BOOL)_rightButtonEvent;	// 0x2a9efd
- (BOOL)_scrollInDirection:(int)direction;	// 0x2a9fbd
- (BOOL)_scrollIndexToVisible:(long)visible;	// 0x2aa3c5
- (BOOL)_scrollLeft;	// 0x2aa1b9
- (BOOL)_scrollRight;	// 0x2aa1a1
- (long)_sectionIndexForIndex:(long)index;	// 0x2aced5
- (id)_setControlRange:(NSRange)range oldRange:(NSRange)range2;	// 0x2abce5
- (void)_setDimness:(float)dimness forLayer:(id)layer;	// 0x2ab779
- (void)_setFlatRange:(NSRange)range delayedLayout:(BOOL)layout;	// 0x2abb15
- (void)_stopForceDisplayTimer;	// 0x2ac685
- (id)_titleActions;	// 0x2aca11
- (id)_updateFlatRangeForScrollDirection:(int)scrollDirection;	// 0x2aba51
- (void)_updateSublayerTransform;	// 0x2aa29d
- (NSRange)_visibleRange;	// 0x2aa1d5
- (id)accessibilityControls;	// 0x2a94ed
- (id)accessibilityLabel;	// 0x2acf99
// declared property getter: - (BOOL)antialiasCoverflowPosters;	// 0x2a9b21
- (BOOL)brEventAction:(id)action;	// 0x2a8d25
- (void)cancelContainerViewLoad;	// 0x2a980d
// converted property getter: - (BOOL)centered;	// 0x2a8cd9
// converted property getter: - (int)collapsedState;	// 0x2a9359
// declared property getter: - (long)columnCount;	// 0x2a9ad5
- (void)controlWasActivated;	// 0x2a8781
- (void)controlWasDeactivated;	// 0x2a8831
- (unsigned)countOfCells;	// 0x2a9509
// declared property getter: - (float)coverflowMargin;	// 0x2a9b01
- (long)dataCount;	// 0x2a8bb9
// converted property getter: - (id)dataSource;	// 0x2a8b89
- (void)dealloc;	// 0x2a866d
// converted property getter: - (id)delegate;	// 0x2a8ba9
- (void)focusDirectlyOnControl:(id)control;	// 0x2a91b1
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2a9449
// converted property getter: - (id)focusedIndexPath;	// 0x2a9045
// declared property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x2a9ae5
- (unsigned)indexInCellsOfObject:(id)object;	// 0x2a9595
- (void)layoutSubcontrols;	// 0x2a9369
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x2a9775
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x2a9679
// converted property getter: - (BOOL)ordered;	// 0x2a8d15
- (id)randomNavigationLabel;	// 0x2ad0a9
- (void)reloadData;	// 0x2a8a51
- (BOOL)restorePersistentSavedSelection;	// 0x2a9861
// converted property getter: - (BOOL)scrollable;	// 0x2a8c9d
- (void)scrollingCompleted;	// 0x2a9735
- (id)selectedControl;	// 0x2a9321
- (void)setAcceptsFocus:(BOOL)focus;	// 0x2a8739
// declared property setter: - (void)setAntialiasCoverflowPosters:(BOOL)posters;	// 0x2a9b31
// converted property setter: - (void)setCentered:(BOOL)centered;	// 0x2a8cad
// converted property setter: - (void)setCollapsedState:(int)state;	// 0x2a9331
// declared property setter: - (void)setColumnCount:(long)count;	// 0x2a89ed
// declared property setter: - (void)setCoverflowMargin:(float)margin;	// 0x2a9b11
// converted property setter: - (void)setDataSource:(id)source;	// 0x2a8ad5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2a8b99
// converted property setter: - (void)setFocusedIndexPath:(id)path;	// 0x2a90c1
// declared property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x2a8a19
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x2a983d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x2a9851
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x2a8ce9
- (void)setReadyToDisplay;	// 0x2a9839
// converted property setter: - (void)setScrollable:(BOOL)scrollable;	// 0x2a8c55
- (void)updatePersistentSavedSelection;	// 0x2a99a5
- (void)visibleScrollRectChanged;	// 0x2a96c9
- (void)windowMaxBoundsChanged;	// 0x2a8979
@end

