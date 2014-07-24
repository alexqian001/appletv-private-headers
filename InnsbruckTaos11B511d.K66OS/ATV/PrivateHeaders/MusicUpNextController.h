/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface MusicUpNextController : BRViewController {
	NSArray *_queuedAssets;	// 104 = 0x68
	unsigned _manualQueueCount;	// 108 = 0x6c
	BOOL _editMode;	// 112 = 0x70
	NSIndexPath *_refreshIndexPath;	// 116 = 0x74
}
@property(copy) NSIndexPath *refreshIndexPath;	// G=0x1bfa85; S=0x1bfa99; @synthesize=_refreshIndexPath
- (id)init;	// 0x1bd639
- (void).cxx_destruct;	// 0x1bfaa9
- (void)_addCurrentSelectionToQueue;	// 0x1bf911
- (unsigned)_currentlySelectedIndex;	// 0x1bf9cd
- (void)_deleteCurrentSelection;	// 0x1bf1bd
- (void)_enterEditMode;	// 0x1bf53d
- (void)_exitEditMode;	// 0x1bf5c9
- (void)_handleContextMenuSelection:(id)selection;	// 0x1bf655
- (void)_loadData;	// 0x1bebfd
- (void)_mediaChanged:(id)changed;	// 0x1befa1
- (void)_moveCurrentSelection:(int)selection;	// 0x1bf039
- (void)_moveCurrentSelectionDown;	// 0x1beffd
- (void)_moveCurrentSelectionUp;	// 0x1befc1
- (void)_nope;	// 0x1bf2bd
- (void)_playCurrentSelectionNext;	// 0x1bf881
- (void)_playCurrentSelectionNow;	// 0x1bf7d5
- (void)_promoteCurrentSelectionToManualQueue;	// 0x1bf2dd
- (void)_purge;	// 0x1bf99d
- (void)_queueChanged:(id)changed;	// 0x1beb55
- (void)_redraw;	// 0x1bedf5
- (void)_refresh;	// 0x1bec55
- (void)_refreshWithSelectedIndexPath:(id)selectedIndexPath;	// 0x1bed21
- (void)_removeCurrentSelection;	// 0x1bf77d
- (SEL)_selectorForDirection:(int)direction;	// 0x1bf445
- (BOOL)brEventAction:(id)action;	// 0x1bdfc5
- (void)controlWasActivated;	// 0x1bde15
- (void)controlWasDeactivated;	// 0x1bdf45
- (void)dealloc;	// 0x1bd789
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1be96d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1be8f9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1be92d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1be8ed
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1be0ed
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1be645
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x1be709
- (long)numberOfSectionsInList:(id)list;	// 0x1be8b1
- (id)providersForContextMenu;	// 0x1bd7f5
// declared property getter: - (id)refreshIndexPath;	// 0x1bfa85
// declared property setter: - (void)setRefreshIndexPath:(id)path;	// 0x1bfa99
@end
