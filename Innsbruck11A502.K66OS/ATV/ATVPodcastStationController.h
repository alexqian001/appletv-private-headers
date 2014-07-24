/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class BRMetadataPreviewControl, NSDictionary, NSArray, BRMediaMenuView;

__attribute__((visibility("hidden")))
@interface ATVPodcastStationController : BRViewController {
	NSDictionary *_station;	// 104 = 0x68
	BRMediaMenuView *_mediaMenuView;	// 108 = 0x6c
	BRMetadataPreviewControl *_metadataControl;	// 112 = 0x70
	NSDictionary *_collectionIdToShows;	// 116 = 0x74
	NSArray *_shows;	// 120 = 0x78
}
@property(copy, nonatomic) NSArray *shows;	// G=0x1e87a9; S=0x1e6add; @synthesize=_shows
- (id)init;	// 0x1e6895
- (id)initWithStation:(id)station;	// 0x1e68b1
- (void).cxx_destruct;	// 0x1e87bd
- (id)_allBlueDotParams;	// 0x1e7885
- (id)_blueDotParamsForSelectedItem;	// 0x1e7681
- (void)_markAllAsUnwatched;	// 0x1e7dd1
- (void)_markAllAsWatched;	// 0x1e7d91
- (void)_markAsUnwatched;	// 0x1e7d51
- (void)_markAsWatched;	// 0x1e7d11
- (void)_markAsWatched:(BOOL)watched blueDotParams:(id)params;	// 0x1e7a4d
- (void)_selectCollection:(id)collection;	// 0x1e80dd
- (void)_updateDetail:(id)detail;	// 0x1e7f79
- (int)_watchStateWithGroupedShows:(id)groupedShows;	// 0x1e7e11
- (id)cancelProviderForContextMenu;	// 0x1e767d
- (void)controlWasActivated;	// 0x1e6e19
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1e8749
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1e8211
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1e821d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1e8729
- (long)numberOfSectionsInList:(id)list;	// 0x1e8725
- (id)providersForContextMenu;	// 0x1e6fdd
// declared property setter: - (void)setShows:(id)shows;	// 0x1e6add
// declared property getter: - (id)shows;	// 0x1e87a9
@end
