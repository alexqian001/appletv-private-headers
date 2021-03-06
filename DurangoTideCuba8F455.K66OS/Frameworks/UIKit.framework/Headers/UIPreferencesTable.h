/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITable.h"

@class UIPreferencesTableCell, UIKeyboard, NSMutableArray;

@interface UIPreferencesTable : UITable {
@private
	UIPreferencesTableCell *_editingCell;	// 440 = 0x1b8
	int _editingCellRow;	// 444 = 0x1bc
	NSMutableArray *_groupItems;	// 448 = 0x1c0
	UIKeyboard *_keyboard;	// 452 = 0x1c4
	float _textOffset;	// 456 = 0x1c8
	CFDictionaryRef _piecesForCell;	// 460 = 0x1cc
	unsigned _datasourceCellForGroup : 1;	// 464 = 0x1d0
	unsigned _datasourceIsRadioGroup : 1;	// 464 = 0x1d0
	unsigned _datasourceIsLabelGroup : 1;	// 464 = 0x1d0
	unsigned _datasourceIsRowCheckedInRadioGroup : 1;	// 464 = 0x1d0
	unsigned _centersContent : 1;	// 464 = 0x1d0
	unsigned _reserved : 27;	// 464 = 0x1d0
}
@property(readonly, retain) UIKeyboard *keyboard;	// G=0x3021abed; converted property
@property(assign) BOOL keyboardVisible;	// G=0x3021abd9; S=0x3021b165; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x3021be41
- (void)_animatePiecesOfCell:(id)cell isFirstItemInGroup:(BOOL)group isDeletion:(BOOL)deletion isDestinationRowFrame:(CGRect)frame;	// 0x3021e805
- (BOOL)_beginEditingNextCell;	// 0x3021ad11
- (int)_cellOutlineForRow:(int)row withChildCount:(int)childCount isLabelGroup:(BOOL)group;	// 0x3021ab95
- (id)_copyPieceOfCell:(id)cell withContentsPosition:(int)contentsPosition;	// 0x3021bff9
- (id)_editingCell;	// 0x3021ac01
- (id)_existingPieceForCell:(id)cell;	// 0x3021cc2d
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x3021cebd
- (void)_fadeCellOutAnimationDidStopAndFixOutlines:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x3021cc85
- (void)_fadeCellSelection;	// 0x3021ba4d
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row;	// 0x3021b909
- (id)_groupItemForTableRow:(int)tableRow andGroupIndex:(int *)index andRow:(int *)row inGroups:(id)groups;	// 0x3021b951
- (void)_keyboardRemoveAnimationCompleted:(id)completed;	// 0x3021b17d
- (int)_paddingForCenteringContent;	// 0x3021c881
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x3021b245
- (void)_removePiecesFromSuperview:(id)superview;	// 0x3021ce39
- (void)_removePiecesFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x3021b22d
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x3021abfd
- (void)_setAlpha:(float)alpha forSubviewsOf:(id)of;	// 0x3021b29d
- (void)_setEditingCell:(id)cell;	// 0x3021af9d
- (void)_updateContentSize;	// 0x3021b3f9
- (void)_updatePaddingForCenteringContent;	// 0x3021b4b9
- (BOOL)_userCanDeleteRows;	// 0x3021b1b9
- (id)_visibleCheckedCellInTableRowRange:(NSRange)tableRowRange;	// 0x3021cf65
- (void)addTableColumn:(id)column;	// 0x3021c821
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x3021c0f9
- (float)animationDuration;	// 0x3021abd1
- (BOOL)canDeleteRow:(int)row;	// 0x3021bb69
- (BOOL)canHandleSwipes;	// 0x3021ab91
- (BOOL)canInsertAtRow:(int)row;	// 0x3021bb01
- (BOOL)canSelectRow:(int)row;	// 0x3021ba71
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x3021c281
- (int)dataSourceGetRowCount;	// 0x3021b501
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x3021abcd
- (void)dealloc;	// 0x3021bbd1
- (void)deleteItems:(id)items;	// 0x3021b25d
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x3021c7fd
- (int)editingRow;	// 0x3021ac11
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x3021c9cd
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x3021efa1
- (CGRect)frameOfPreferencesCellAtRow:(int)row inGroup:(int)group;	// 0x3021c241
- (BOOL)getGroup:(int *)group row:(int *)row forTableRow:(int)tableRow;	// 0x3021b871
- (BOOL)getGroup:(int *)group row:(int *)row ofPreferencesTableCell:(id)preferencesTableCell;	// 0x3021b8bd
- (int)groupForTableRow:(int)tableRow;	// 0x3021b899
- (void)insertItems:(id)items;	// 0x3021b27d
- (void)insertItems:(id)items deleteItems:(id)items2 andReloadIndexes:(id)indexes;	// 0x3021d291
// converted property getter: - (id)keyboard;	// 0x3021abed
// converted property getter: - (BOOL)keyboardVisible;	// 0x3021abd9
- (void)reloadData;	// 0x3021ac7d
- (void)resumeWithNotification:(id)notification;	// 0x3021b131
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x3021ac21
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x3021d059
- (void)setBottomBufferHeight:(float)height;	// 0x3021b0f5
- (void)setCentersContent:(BOOL)content;	// 0x3021b461
- (void)setDataSource:(id)source;	// 0x3021b759
- (void)setFrame:(CGRect)frame;	// 0x3021e76d
// converted property setter: - (void)setKeyboardVisible:(BOOL)visible;	// 0x3021b165
- (void)setKeyboardVisible:(BOOL)visible animated:(BOOL)animated;	// 0x3021ebc1
- (BOOL)shouldIndentRow:(int)row;	// 0x3021b305
- (int)tableRowForRow:(int)row inGroup:(int)group;	// 0x3021ba05
- (BOOL)validateDataSource;	// 0x3021b705
- (id)visiblePreferencesCellForRow:(int)row inGroup:(int)group;	// 0x3021b3cd
@end

