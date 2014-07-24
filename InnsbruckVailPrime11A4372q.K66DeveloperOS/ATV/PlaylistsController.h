/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicCollectionController.h"

@class ATVDataType, NSArray, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface PlaylistsController : MusicCollectionController {
	ATVDataType *_mediaTypeForQuery;	// 164 = 0xa4
	ATVDataCollection *_folder;	// 168 = 0xa8
	NSArray *_filteredPlaylists;	// 172 = 0xac
	Class _mediaTypeControllerClass;	// 176 = 0xb0
}
+ (id)playlistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned)type mediaType:(id)type3 mediaTypeControllerClass:(Class)aClass;	// 0x1af519
- (id)initWithMediaType:(id)mediaType folder:(id)folder dataClient:(id)client dataClientType:(unsigned)type mediaTypeControllerClass:(Class)aClass;	// 0x1af575
- (BOOL)_cloudFolderHasPlaylist:(id)playlist inTree:(id)tree;	// 0x1b1775
- (void)_cloudPreparePlaylistHierarcy:(id)hierarcy;	// 0x1b10c1
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)index inArray:(id)array totalChildern:(int *)childern;	// 0x1b0f0d
- (void)_preparePlaylistHierarcy:(id)hierarcy;	// 0x1b0d35
- (id)currentItems;	// 0x1b0b39
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1b0a89
- (BOOL)dataQueryComplete:(id)complete;	// 0x1af94d
- (void)dealloc;	// 0x1af6e1
- (id)errorForNoContent;	// 0x1afdf1
- (id)filterForCurrentMediaType;	// 0x1b0c85
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1afed1
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1b0701
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1b0765
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1b0639
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1b01e1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1b0121
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1affad
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1b0649
- (id)newDataQuery;	// 0x1af759
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1b02d1
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1afe11
- (long)numberOfSectionsInList:(id)list;	// 0x1b0645
- (void)playQueryComplete:(id)complete;	// 0x1b0555
- (id)providersForContextMenu;	// 0x1b0501
- (BOOL)typeaheadPhraseAccumulator:(id)accumulator phraseChanged:(id)changed;	// 0x1b0b49
- (int)typeaheadSelectionOffset;	// 0x1b0ae1
@end
