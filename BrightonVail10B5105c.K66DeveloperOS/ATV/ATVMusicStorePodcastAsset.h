/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRRSSMediaAsset.h"

@class NSDictionary, ATVMusicStoreShowInfo;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x201529; S=0x201421; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x200c69; S=0x200c2d; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x200ac9
- (void)_playerStateChanged:(id)changed;	// 0x20172d
- (id)_podcastID;	// 0x201671
- (id)_showInfo;	// 0x2016cd
- (id)artist;	// 0x20120d
- (id)assetID;	// 0x200c79
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x201529
- (id)cast;	// 0x200db1
- (id)copyright;	// 0x2012ad
- (id)coverArtID;	// 0x200f79
- (id)dateAcquired;	// 0x201031
- (id)datePublished;	// 0x200ff9
- (id)datePublishedString;	// 0x2011e5
- (void)dealloc;	// 0x200b9d
- (id)description;	// 0x2012f9
- (id)directors;	// 0x200e31
- (long)duration;	// 0x200d31
// converted property getter: - (id)feedInfo;	// 0x200c69
- (id)genres;	// 0x201141
- (BOOL)hasCoverArt;	// 0x200f4d
- (BOOL)hasVideoContent;	// 0x201169
- (BOOL)incrementPlayCount:(unsigned)count;	// 0x2013b1
- (BOOL)isExplicit;	// 0x201321
- (id)mediaDescription;	// 0x200cf9
- (id)mediaSummary;	// 0x20129d
- (id)mediaType;	// 0x201041
- (id)mediaURL;	// 0x200e69
- (long)performanceCount;	// 0x201389
- (id)previewURL;	// 0x200ed1
- (id)primaryCollectionTitle;	// 0x201255
- (id)primaryGenre;	// 0x201095
- (id)primaryGenreAsString;	// 0x20105d
- (id)producers;	// 0x200e4d
- (id)publisher;	// 0x2012f5
- (id)rating;	// 0x201165
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x201421
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x200c2d
- (void)setHasBeenPlayed:(BOOL)played;	// 0x2013f1
- (id)thumbnailArtID;	// 0x200fe9
- (id)thumbnailURL;	// 0x2012e5
- (id)title;	// 0x200cc1
- (float)userStarRating;	// 0x20115d
- (void)willBeginPlayback;	// 0x201551
@end

