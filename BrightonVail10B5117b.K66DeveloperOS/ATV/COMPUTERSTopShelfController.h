/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTopShelfController.h"
#import "BRSingleton.h"

@class BRBackgroundTask, BRTopShelfView, ATVDataServer, PlayHandler, ATVDataQuery, NSTimer, ATVDataType, NSArray, NSString;
@protocol BRProvider, BRControlFactory;

__attribute__((visibility("hidden")))
@interface COMPUTERSTopShelfController : BRSingleton <BRTopShelfController> {
	id<BRProvider> _nowPlayingProvider;	// 4 = 0x4
	ATVDataQuery *_homeShareDateAddedQuery;	// 8 = 0x8
	ATVDataQuery *_homeShareDatePlayedQuery;	// 12 = 0xc
	ATVDataQuery *_homeShareSongsToAlbumQuery;	// 16 = 0x10
	BOOL _queryResultsParsed;	// 20 = 0x14
	NSString *_homeShareTitle;	// 24 = 0x18
	NSArray *_homeShareItems;	// 28 = 0x1c
	long _numOfRentalsOnShelf;	// 32 = 0x20
	id<BRControlFactory> _homeShareFactory;	// 36 = 0x24
	BRTopShelfView *_topShelf;	// 40 = 0x28
	ATVDataType *_lastAccessedMediaType;	// 44 = 0x2c
	ATVDataServer *_lastAccessedDataServer;	// 48 = 0x30
	NSTimer *_homeShareRefreshDelayTimer;	// 52 = 0x34
	BRBackgroundTask *_homeShareRefreshTask;	// 56 = 0x38
	PlayHandler *_playHandler;	// 60 = 0x3c
}
@property(readonly, retain) ATVDataType *lastAccessedMediaType;	// G=0x80595; converted property
+ (void)setSingleton:(id)singleton;	// 0x80001
+ (id)singleton;	// 0x7fff1
- (id)init;	// 0x80025
- (void).cxx_destruct;	// 0x813b9
- (void)_cancelHomeShareRefreshTask;	// 0x8287d
- (void)_dataClientDataUpdated:(id)updated;	// 0x83411
- (void)_dataClientStatusChanged:(id)changed;	// 0x83215
- (void)_dataServerStatusChanged:(id)changed;	// 0x83141
- (void)_handleWindowMaxBoundsChanged:(id)changed;	// 0x83121
- (void)_homeShareQueryComplete;	// 0x81e89
- (void)_homeShareRefreshDelayTimerFired:(id)fired;	// 0x827cd
- (void)_homeShareServersChanged:(id)changed;	// 0x82e15
- (void)_nowPlayingProviderUpdated:(id)updated;	// 0x82db9
- (void)_preferredAccountStateChanged:(id)changed;	// 0x83349
- (void)_reloadHomeShareItems;	// 0x8153d
- (void)_scheduleHomeShareRefreshTask;	// 0x82801
- (id)_serverIDForMediaItem:(id)mediaItem;	// 0x814c9
- (void)_setLastAccessedMediaType:(id)type fromDataServer:(id)dataServer;	// 0x828c1
- (void)_songsToAlbumsQueryComplete;	// 0x826ed
- (void)_submitHomeShareDateAddedQuery:(id)query;	// 0x81bf1
- (void)_submitHomeShareDatePlayedQuery:(id)query;	// 0x81d55
- (void)_submitSongsToAlbumsQuery:(id)albumsQuery forAlbumID:(id)albumID;	// 0x82581
- (void)_validateTopShelf;	// 0x82941
- (void)_willWakeFromSleep:(id)sleep;	// 0x830c1
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x813ad
- (void)dealloc;	// 0x8041d
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x813a1
// converted property getter: - (id)lastAccessedMediaType;	// 0x80595
- (id)mainMenuShelfView;	// 0x805ed
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x80cd1
- (void)mediaShelf:(id)shelf didPlayItemAtIndexPath:(id)indexPath;	// 0x8115d
- (void)mediaShelf:(id)shelf didSelectItemAtIndexPath:(id)indexPath;	// 0x80cd5
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x80725
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x809a5
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x80a05
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x80a9d
- (id)newBaseQuery:(id)query;	// 0x81889
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x80905
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x809a1
- (void)refresh;	// 0x80711
- (void)requeryHomeShare;	// 0x805bd
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x80721
- (void)setLastAccessedMediaType:(id)type fromDataServer:(id)dataServer;	// 0x804fd
@end

