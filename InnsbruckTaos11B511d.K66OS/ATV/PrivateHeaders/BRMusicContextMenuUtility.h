/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRContextMenuUtility.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRMusicContextMenuUtility : XXUnknownSuperclass <BRContextMenuUtility> {
	BOOL _onTheGoEnabled;	// 4 = 0x4
	BOOL _startGeniusEnabled;	// 5 = 0x5
	BOOL _airTunesSettingsEnabled;	// 6 = 0x6
	BOOL _browseArtistEnabled;	// 7 = 0x7
	BOOL _browseAlbumEnabled;	// 8 = 0x8
	BOOL _navigateToArtistForBrowseArtist;	// 9 = 0x9
	BOOL _navigateToAlbumForBrowseAlbum;	// 10 = 0xa
	BOOL _storeViewAlbumEnabled;	// 11 = 0xb
	BOOL _addRemoveToWishListEnabled;	// 12 = 0xc
	BOOL _buyRadioTrackEnabled;	// 13 = 0xd
	BOOL _createStationEnabled;	// 14 = 0xe
}
@property(assign, nonatomic) BOOL addRemoveToWishListEnabled;	// G=0x45b969; S=0x45b979; @synthesize=_addRemoveToWishListEnabled
@property(assign) BOOL airTunesSettingsEnabled;	// G=0x45b88d; S=0x45b87d; converted property
@property(assign) BOOL browseAlbumEnabled;	// G=0x45b8cd; S=0x45b8bd; converted property
@property(assign) BOOL browseArtistEnabled;	// G=0x45b8ad; S=0x45b89d; converted property
@property(assign, nonatomic) BOOL buyRadioTrackEnabled;	// G=0x45b989; S=0x45b999; @synthesize=_buyRadioTrackEnabled
@property(assign, nonatomic) BOOL createStationEnabled;	// G=0x45b9a9; S=0x45b9b9; @synthesize=_createStationEnabled
@property(assign) BOOL navigateToAlbumForBrowseAlbum;	// G=0x45b90d; S=0x45b8fd; converted property
@property(assign) BOOL navigateToArtistForBrowseArtist;	// G=0x45b8ed; S=0x45b8dd; converted property
@property(assign) BOOL onTheGoEnabled;	// G=0x45b84d; S=0x45b83d; converted property
@property(assign) BOOL startGeniusEnabled;	// G=0x45b86d; S=0x45b85d; converted property
@property(assign, nonatomic) BOOL storeViewAlbumEnabled;	// G=0x45b949; S=0x45b959; @synthesize=_storeViewAlbumEnabled
+ (id)utility;	// 0x45b739
- (id)init;	// 0x45b77d
// declared property getter: - (BOOL)addRemoveToWishListEnabled;	// 0x45b969
- (id)addToQueueMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b939
// converted property getter: - (BOOL)airTunesSettingsEnabled;	// 0x45b88d
// converted property getter: - (BOOL)browseAlbumEnabled;	// 0x45b8cd
- (id)browseAlbumMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b945
// converted property getter: - (BOOL)browseArtistEnabled;	// 0x45b8ad
- (id)browseArtistMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b941
// declared property getter: - (BOOL)buyRadioTrackEnabled;	// 0x45b989
- (id)contextMenuProviderForNowPlayingObject:(id)nowPlayingObject target:(id)target selector:(SEL)selector;	// 0x45b921
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x45b91d
// declared property getter: - (BOOL)createStationEnabled;	// 0x45b9a9
- (id)geniusMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b929
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x45b925
// converted property getter: - (BOOL)navigateToAlbumForBrowseAlbum;	// 0x45b90d
// converted property getter: - (BOOL)navigateToArtistForBrowseArtist;	// 0x45b8ed
// converted property getter: - (BOOL)onTheGoEnabled;	// 0x45b84d
- (id)playNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b935
- (id)playNowMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b931
- (id)purgeMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b93d
// declared property setter: - (void)setAddRemoveToWishListEnabled:(BOOL)wishListEnabled;	// 0x45b979
// converted property setter: - (void)setAirTunesSettingsEnabled:(BOOL)enabled;	// 0x45b87d
// converted property setter: - (void)setBrowseAlbumEnabled:(BOOL)enabled;	// 0x45b8bd
// converted property setter: - (void)setBrowseArtistEnabled:(BOOL)enabled;	// 0x45b89d
// declared property setter: - (void)setBuyRadioTrackEnabled:(BOOL)enabled;	// 0x45b999
// declared property setter: - (void)setCreateStationEnabled:(BOOL)enabled;	// 0x45b9b9
// converted property setter: - (void)setNavigateToAlbumForBrowseAlbum:(BOOL)browseAlbum;	// 0x45b8fd
// converted property setter: - (void)setNavigateToArtistForBrowseArtist:(BOOL)browseArtist;	// 0x45b8dd
// converted property setter: - (void)setOnTheGoEnabled:(BOOL)enabled;	// 0x45b83d
// converted property setter: - (void)setStartGeniusEnabled:(BOOL)enabled;	// 0x45b85d
// declared property setter: - (void)setStoreViewAlbumEnabled:(BOOL)enabled;	// 0x45b959
// converted property getter: - (BOOL)startGeniusEnabled;	// 0x45b86d
// declared property getter: - (BOOL)storeViewAlbumEnabled;	// 0x45b949
- (id)upNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x45b92d
@end
