/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMusicMetadataControl : BRControl {
	BRMarqueeTextControl *_songTitle;	// 84 = 0x54
	BRTextControl *_songArtist;	// 88 = 0x58
	BRTextControl *_albumTitle;	// 92 = 0x5c
	BRTextControl *_trackInfo;	// 96 = 0x60
	BRTextControl *_duration;	// 100 = 0x64
	BRTextControl *_releaseDate;	// 104 = 0x68
	BRTextControl *_price;	// 108 = 0x6c
	BRImageControl *_ratingImage;	// 112 = 0x70
	BOOL _scrollingAllowed;	// 116 = 0x74
}
@property(assign) BOOL scrollingAllowed;	// G=0x375df9; S=0x375dc1; converted property
- (id)init;	// 0x3751a9
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x375f0d
- (id)_metadataMusicDetailsAttributes;	// 0x375ee9
- (id)_metadataMusicSongTitleAttributes;	// 0x375f31
- (id)accessibilityLabel;	// 0x375e09
- (void)controlWasActivated;	// 0x3753f5
- (void)controlWasDeactivated;	// 0x375451
- (void)dealloc;	// 0x375319
- (void)layoutSubcontrols;	// 0x375949
// converted property getter: - (BOOL)scrollingAllowed;	// 0x375df9
- (void)setAlbumTitle:(id)title;	// 0x3755cd
- (void)setDuration:(id)duration;	// 0x3756b5
- (void)setPrice:(id)price;	// 0x37579d
- (void)setRating:(id)rating;	// 0x375869
- (void)setReleaseDate:(id)date;	// 0x375729
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x375dc1
- (void)setSongArtist:(id)artist;	// 0x375559
- (void)setSongTitle:(id)title;	// 0x3754a1
- (void)setTrackInfo:(id)info;	// 0x375641
@end
