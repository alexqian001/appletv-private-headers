/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSIndexPath, NSArray;

__attribute__((visibility("hidden")))
@interface MusicUpNextController : BRViewController {
	NSArray *_queuedAssets;	// 104 = 0x68
	unsigned _manualQueueCount;	// 108 = 0x6c
	BOOL _editMode;	// 112 = 0x70
	NSIndexPath *_refreshIndexPath;	// 116 = 0x74
}
@property(copy) NSIndexPath *refreshIndexPath;	// G=0x1a304d; S=0x1a3061; @synthesize=_refreshIndexPath
- (id)init;	// 0x1a0c01
- (void).cxx_destruct;	// 0x1a3071
- (void)_addCurrentSelectionToQueue;	// 0x1a2ed9
- (unsigned)_currentlySelectedIndex;	// 0x1a2f95
- (void)_deleteCurrentSelection;	// 0x1a2785
- (void)_enterEditMode;	// 0x1a2b05
- (void)_exitEditMode;	// 0x1a2b91
- (void)_handleContextMenuSelection:(id)selection;	// 0x1a2c1d
- (void)_loadData;	// 0x1a21c5
- (void)_mediaChanged:(id)changed;	// 0x1a2569
- (void)_moveCurrentSelection:(int)selection;	// 0x1a2601
- (void)_moveCurrentSelectionDown;	// 0x1a25c5
- (void)_moveCurrentSelectionUp;	// 0x1a2589
- (void)_nope;	// 0x1a2885
- (void)_playCurrentSelectionNext;	// 0x1a2e49
- (void)_playCurrentSelectionNow;	// 0x1a2d9d
- (void)_promoteCurrentSelectionToManualQueue;	// 0x1a28a5
- (void)_purge;	// 0x1a2f65
- (void)_queueChanged:(id)changed;	// 0x1a211d
- (void)_redraw;	// 0x1a23bd
- (void)_refresh;	// 0x1a221d
- (void)_refreshWithSelectedIndexPath:(id)selectedIndexPath;	// 0x1a22e9
- (void)_removeCurrentSelection;	// 0x1a2d45
- (SEL)_selectorForDirection:(int)direction;	// 0x1a2a0d
- (BOOL)brEventAction:(id)action;	// 0x1a158d
- (void)controlWasActivated;	// 0x1a13dd
- (void)controlWasDeactivated;	// 0x1a150d
- (void)dealloc;	// 0x1a0d51
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1a1f35
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1a1ec1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1a1ef5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1a1eb5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1a16b5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1a1c0d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x1a1cd1
- (long)numberOfSectionsInList:(id)list;	// 0x1a1e79
- (id)providersForContextMenu;	// 0x1a0dbd
// declared property getter: - (id)refreshIndexPath;	// 0x1a304d
// declared property setter: - (void)setRefreshIndexPath:(id)path;	// 0x1a3061
@end
