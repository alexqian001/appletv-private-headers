/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MZUniversalPlaybackPositionMediaItem.h"
#import <NSObject.h> // Unknown library

@class MPMediaItem;

@interface MPUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem> {
	MPMediaItem *_mediaItem;	// 4 = 0x4
}
+ (id)mediaPropertiesToMZProperties;	// 0x31e310bd
+ (id)mzPropertiesToMediaProperties;	// 0x31e30e99
+ (id)mzPropertyValueForMediaProperty:(id)mediaProperty mediaValue:(id)value;	// 0x31e31209
- (id)initWithMediaItem:(id)mediaItem;	// 0x31e30e45
- (void)dealloc;	// 0x31e311bd
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x31e3141d
@end
