/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MZUniversalPlaybackPositionMediaItem.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, BRMediaType, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ATVUniversalPlaybackPositionRecord : XXUnknownSuperclass <MZUniversalPlaybackPositionMediaItem> {
	NSDate *_timestamp;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSNumber *_hasBeenPlayed;	// 12 = 0xc
	NSNumber *_playCount;	// 16 = 0x10
	NSURL *_podcastURL;	// 20 = 0x14
	NSString *_podcastGUID;	// 24 = 0x18
	NSString *_itemIdentifier;	// 28 = 0x1c
	NSNumber *_bookmarkTime;	// 32 = 0x20
}
@property(retain, nonatomic) NSNumber *bookmarkTime;	// G=0x3ba461; S=0x3ba471; @synthesize=_bookmarkTime
@property(retain, nonatomic) NSNumber *hasBeenPlayed;	// G=0x3ba3b9; S=0x3ba3c9; @synthesize=_hasBeenPlayed
@property(copy, nonatomic) NSString *itemIdentifier;	// G=0x3ba43d; S=0x3ba451; @synthesize=_itemIdentifier
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x3ba399; S=0x3ba3a9; @synthesize=_mediaType
@property(retain, nonatomic) NSNumber *playCount;	// G=0x3ba3d9; S=0x3ba3e9; @synthesize=_playCount
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x3ba419; S=0x3ba42d; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x3ba3f9; S=0x3ba409; @synthesize=_podcastURL
@property(retain, nonatomic) NSDate *timestamp;	// G=0x3ba379; S=0x3ba389; @synthesize=_timestamp
- (id)_uppDictionary;	// 0x3ba481
// declared property getter: - (id)bookmarkTime;	// 0x3ba461
- (void)dealloc;	// 0x3ba29d
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x3ba719
// declared property getter: - (id)hasBeenPlayed;	// 0x3ba3b9
// declared property getter: - (id)itemIdentifier;	// 0x3ba43d
// declared property getter: - (id)mediaType;	// 0x3ba399
// declared property getter: - (id)playCount;	// 0x3ba3d9
// declared property getter: - (id)podcastGUID;	// 0x3ba419
// declared property getter: - (id)podcastURL;	// 0x3ba3f9
// declared property setter: - (void)setBookmarkTime:(id)time;	// 0x3ba471
// declared property setter: - (void)setHasBeenPlayed:(id)played;	// 0x3ba3c9
// declared property setter: - (void)setItemIdentifier:(id)identifier;	// 0x3ba451
// declared property setter: - (void)setMediaType:(id)type;	// 0x3ba3a9
// declared property setter: - (void)setPlayCount:(id)count;	// 0x3ba3e9
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x3ba42d
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x3ba409
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x3ba389
// declared property getter: - (id)timestamp;	// 0x3ba379
@end

