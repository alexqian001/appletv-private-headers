/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFavoritesManager : BRSingleton {
	NSMutableArray *_favorites;	// 4 = 0x4
	NSTimer *_saveTimer;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *favorites;	// G=0x143b01; converted property
+ (void)setSingleton:(id)singleton;	// 0x143669
+ (id)singleton;	// 0x143659
- (id)init;	// 0x143679
- (void)_keyValueStoreAccountDidSignOut:(id)_keyValueStoreAccount;	// 0x144471
- (void)_keyValueStoreIsAvailable:(id)available;	// 0x14445d
- (void)_loadFavorites;	// 0x143b3d
- (void)_musicStoreItemAcquired:(id)acquired;	// 0x1444a1
- (unsigned)_nextUserOrderForType:(int)type;	// 0x147009
- (int)_normalizeItemType:(int)type;	// 0x146ff9
- (id)_orderedFavoritesForType:(int)type orderedBy:(int)by;	// 0x147211
- (void)_removeFavorites:(id)favorites;	// 0x143c7d
- (void)_saveFavorites;	// 0x144539
- (void)_saveTimerFired:(id)fired;	// 0x1439d5
- (void)_updateFavoritesFromDictionaryRepresentations:(id)dictionaryRepresentations;	// 0x143ee9
- (void)_updateFromKeyValueStoreIfAvailable:(id)keyValueStoreIfAvailable;	// 0x143e85
- (void)_updateFromKeyValueStoreInternal:(id)keyValueStoreInternal;	// 0x1442ad
- (void)dealloc;	// 0x1437d9
- (BOOL)favoriteExistsForItemID:(id)itemID;	// 0x143ae5
- (id)favoriteForItemID:(id)itemID;	// 0x143a61
// converted property getter: - (id)favorites;	// 0x143b01
- (id)favoritesForType:(int)type;	// 0x1470dd
- (id)orderedFavoritesForType:(int)type;	// 0x1474c9
- (id)radioFavorites;	// 0x1457bd
- (void)reloadFavorites;	// 0x14472d
- (void)removeFavorite:(id)favorite;	// 0x1439f5
- (void)removeFavorites:(id)favorites;	// 0x143a31
- (void)saveFavorite:(id)favorite;	// 0x143855
- (void)saveFavorites;	// 0x143969
- (void)setNeedsSave;	// 0x143979
- (void)sortModeChangedFrom:(int)from to:(int)to;	// 0x147521
- (void)updateFromKeyValueStore:(id)keyValueStore;	// 0x143b2d
@end
