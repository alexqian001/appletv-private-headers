/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMusicContextMenuUtility.h"


__attribute__((visibility("hidden")))
@interface MusicContextMenuUtility : BRMusicContextMenuUtility {
	BOOL _nowPlayingActive;	// 11 = 0xb
}
@property(assign, nonatomic) BOOL nowPlayingActive;	// G=0x1c311d; S=0x1c312d; @synthesize=_nowPlayingActive
+ (BOOL)hasSelectedAdditionalAlbumOfferItem;	// 0x1bf5ed
+ (void)initialize;	// 0x1bef4d
+ (void)setHasSelectedAdditionalAlbumOfferItem:(BOOL)item;	// 0x1bf5fd
- (BOOL)_favoriteExists:(id)exists;	// 0x1c1845
- (void)_handleAddRadioStationToFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c28d9
- (void)_handleAddRemoveToWishlistForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c2bad
- (void)_handleAddToOnTheGoForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c1ce9
- (void)_handleAdditionalAlbumOfferForRadioTrack:(id)radioTrack sender:(id)sender context:(id)context;	// 0x1c25fd
- (void)_handleAirTunesSetSpeakerForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c1d49
- (void)_handleAirTunesSettingsForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c1e15
- (void)_handleBrowseAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c21f9
- (void)_handleBrowseArtistForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c2049
- (void)_handleBuyRadioTrack:(id)track sender:(id)sender context:(id)context;	// 0x1c2525
- (void)_handleCreateRadioStationForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c2a81
- (void)_handleRemoveRadioStationFromFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c2991
- (void)_handleStartGeniusForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c1a19
- (void)_handleViewAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c23a5
- (BOOL)_isMusicItem:(id)item;	// 0x1c2e89
- (id)_providerForCollection:(id)collection target:(id)target selector:(SEL)selector;	// 0x1c0a45
- (id)_providerForFavorite:(id)favorite target:(id)target selector:(SEL)selector;	// 0x1c100d
- (id)_providerForMediaItem:(id)mediaItem target:(id)target selector:(SEL)selector;	// 0x1bffc1
- (id)_providerForPodcast:(id)podcast target:(id)target selector:(SEL)selector;	// 0x1bf8f1
- (id)_providerForSpeakersWithHandler:(id)handler initialSelection:(long *)selection;	// 0x1c112d
- (BOOL)_shouldShowAddCollectionToQueue:(id)queue;	// 0x1c3119
- (BOOL)_shouldShowAddItemToQueue:(id)queue;	// 0x1c3011
- (BOOL)_shouldShowAddRemoveToWishlistForItem:(id)item;	// 0x1c1775
- (BOOL)_shouldShowAddToFavoritesItem:(id)favoritesItem;	// 0x1c1645
- (BOOL)_shouldShowAdditionalAlbumOfferForRadioTrackItem:(id)radioTrackItem;	// 0x1c12a1
- (BOOL)_shouldShowBrowseAlbumItem:(id)item;	// 0x1c1531
- (BOOL)_shouldShowBrowseArtistItem:(id)item;	// 0x1c14c1
- (BOOL)_shouldShowBuyRadioTrackItem:(id)item;	// 0x1c117d
- (BOOL)_shouldShowCreateStationFromItem:(id)item;	// 0x1c16a1
- (BOOL)_shouldShowGeniusItem:(id)item;	// 0x1c1389
- (BOOL)_shouldShowOnTheGoItem:(id)item;	// 0x1c1421
- (BOOL)_shouldShowPlayCollectionNext:(id)next;	// 0x1c3111
- (BOOL)_shouldShowPlayCollectionNow:(id)now;	// 0x1c3115
- (BOOL)_shouldShowPlayItemNext:(id)next;	// 0x1c3055
- (BOOL)_shouldShowPlayItemNow:(id)now;	// 0x1c3099
- (BOOL)_shouldShowPurge:(id)purge;	// 0x1c30dd
- (BOOL)_shouldShowRemoveFromFavoritesItem:(id)favoritesItem;	// 0x1c19c1
- (BOOL)_shouldShowSpeakers;	// 0x1c197d
- (BOOL)_shouldShowSpeakersItem:(id)item;	// 0x1c18f1
- (BOOL)_shouldShowUpNext;	// 0x1c2f5d
- (BOOL)_shouldShowUpNextItem:(id)item;	// 0x1c2f05
- (BOOL)_shouldShowUpNextItemForCollection:(id)collection;	// 0x1c2f45
- (BOOL)_shouldShowViewAlbumItem:(id)item;	// 0x1c15c1
- (id)addToQueueMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bfce1
- (id)browseAlbumMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bff05
- (id)browseArtistMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bfe49
- (id)contextMenuProviderForNowPlayingObject:(id)nowPlayingObject target:(id)target selector:(SEL)selector;	// 0x1bf74d
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x1bf60d
- (id)geniusMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bfa09
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x1bf7a5
// declared property getter: - (BOOL)nowPlayingActive;	// 0x1c311d
- (id)playNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bfc2d
- (id)playNowMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bfb79
- (id)purgeMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bfd95
// declared property setter: - (void)setNowPlayingActive:(BOOL)active;	// 0x1c312d
- (id)upNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1bfac5
@end
