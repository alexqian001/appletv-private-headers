/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "VideoController.h"

@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MoviesController : VideoController <BRTabControlDelegate> {
	NSMutableArray *_unwatchedItems;	// 172 = 0xac
	BOOL _showUnwatchedItemsOnly;	// 176 = 0xb0
	NSMutableDictionary *_genreNameToMoviesDict;	// 180 = 0xb4
	NSArray *_genresSortedByName;	// 184 = 0xb8
	NSString *_genreName;	// 188 = 0xbc
	BOOL _showGenreList;	// 192 = 0xc0
	BOOL _showMoviesInSpecificGenre;	// 193 = 0xc1
}
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x82df9
+ (id)moviesControllerForCollection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type;	// 0x82e69
+ (id)moviesControllerForGenreWithName:(id)name dataClient:(id)client dataClientType:(unsigned long)type;	// 0x830e1
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x831fd
- (id)initWithGenreName:(id)genreName dataClient:(id)client dataClientType:(unsigned long)type;	// 0x83149
- (id)initWithMoviesCollection:(id)moviesCollection dataClient:(id)client dataClientType:(unsigned long)type;	// 0x82f85
- (void).cxx_destruct;	// 0x84bf9
- (id)_currentItems;	// 0x84d01
- (id)_genreData;	// 0x84e55
- (id)_initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x82edd
- (void)_mediaItemPropertySet:(id)set;	// 0x85235
- (id)_unwatchedItems;	// 0x84de9
- (void)_updateDisplayPlaylists;	// 0x84c55
- (void)_updatePreviewForMediaItem:(id)mediaItem inMediaItems:(id)mediaItems;	// 0x85355
- (id)currentItems;	// 0x83731
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x83691
- (BOOL)dataQueryComplete:(id)complete;	// 0x83ae1
- (void)dealloc;	// 0x83549
- (id)errorForNoContent;	// 0x83c01
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x84269
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x8479d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8442d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x84235
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x841d5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x83d81
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x83cd9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x83d31
- (id)newDataQuery;	// 0x83741
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x83c21
- (long)numberOfSectionsInList:(id)list;	// 0x83cd5
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x84971
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x84b9d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x84bf5
- (void)wasPopped;	// 0x835b5
@end
