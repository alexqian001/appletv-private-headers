/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class ATVDataQuery, ATVInternetRadioFavorite, ATVDataClient, NSArray;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface MEInternetRadioController : BRDataQueryController {
	id<BRMediaAsset> _nowPlayingStation;	// 164 = 0xa4
	NSArray *_favorites;	// 168 = 0xa8
	NSArray *_categories;	// 172 = 0xac
	ATVDataClient *_tunerDataClient;	// 176 = 0xb0
	long _fetchingStationsForIndex;	// 180 = 0xb4
	ATVInternetRadioFavorite *_selectedFavorite;	// 184 = 0xb8
	ATVDataQuery *_categoryQuery;	// 188 = 0xbc
	ATVDataQuery *_stationQuery;	// 192 = 0xc0
	ATVDataQuery *_favoriteCategoryQuery;	// 196 = 0xc4
	ATVDataQuery *_favoriteStationQuery;	// 200 = 0xc8
	BOOL _showNowPlayingMenu;	// 204 = 0xcc
}
@property(assign, nonatomic) BOOL showNowPlayingMenu;	// G=0x21fb4d; S=0x21fb5d; @synthesize=_showNowPlayingMenu
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned)type;	// 0x21ea85
- (void).cxx_destruct;	// 0x21fb6d
- (void)_favoriteAdded:(id)added;	// 0x221465
- (void)_favoriteCategoryQueryComplete:(id)complete;	// 0x22107d
- (void)_favoriteRemoved:(id)removed;	// 0x221561
- (void)_favoriteStationQueryComplete:(id)complete;	// 0x221119
- (void)_favoriteUnavailable:(id)unavailable;	// 0x220fcd
- (void)_getFavoriteCategoryFromString:(id)string;	// 0x221775
- (void)_getStationInCategory:(id)category;	// 0x221921
- (void)_handleContextMenuSelection:(id)selection;	// 0x2211e1
- (void)_handleDidSelectRadioFavorite:(id)_handle;	// 0x22165d
- (void)_nowPlayingStateChanged:(id)changed;	// 0x2212e1
- (void)_performStationsQueryForList:(id)list withIndexPath:(id)indexPath withFollowUpAction:(int)followUpAction;	// 0x220831
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay;	// 0x21f3d1
- (void)_stationsQueryComplete:(id)complete;	// 0x220c3d
- (void)_updateNowPlaying;	// 0x22130d
- (BOOL)brEventAction:(id)action;	// 0x21efe5
- (id)controlForContextMenuPositioning;	// 0x22082d
- (id)controlForContextMenuStart;	// 0x220829
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x21f319
- (BOOL)dataQueryComplete:(id)complete;	// 0x21f28d
- (void)dealloc;	// 0x21ee8d
- (id)errorForNoContent;	// 0x21f2f9
- (id)identifier;	// 0x21efcd
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x220325
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x220665
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2205d1
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x2200c1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x21ffb9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x21fc2d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x21fe85
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x21fef9
- (id)newDataQuery;	// 0x21f20d
- (long)numberOfSectionsInList:(id)list;	// 0x21fe59
- (id)providersForContextMenu;	// 0x2206f9
// declared property setter: - (void)setShowNowPlayingMenu:(BOOL)menu;	// 0x21fb5d
// declared property getter: - (BOOL)showNowPlayingMenu;	// 0x21fb4d
- (BOOL)typeaheadPhraseAccumulator:(id)accumulator phraseChanged:(id)changed;	// 0x21f3d5
- (void)wasExhumed;	// 0x21f1cd
- (void)wasPushed;	// 0x21f175
@end

