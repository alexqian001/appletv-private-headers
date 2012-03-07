/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


@interface AVItem : NSObject {
@private
	AVItemPrivate *_priv;	// 4 = 0x4
}
@property(assign) float volume;	// G=0x339069dd; S=0x3391180d; converted property
+ (id)avItem;	// 0x33911a11
+ (id)avItemWithPath:(id)path error:(id *)error;	// 0x3390eaf1
- (id)init;	// 0x33901ca9
- (id)initWithError:(id *)error;	// 0x33901cbd
- (id)initWithPath:(id)path error:(id *)error;	// 0x33909b75
- (int)_instantiateItem;	// 0x339117f5
- (id)accessLog;	// 0x33911a49
- (id)attributeForKey:(id)key;	// 0x33903519
- (long)beginDownloading;	// 0x33911c09
- (void)cancelDownload;	// 0x33911b29
- (id)chapterImageForImageID:(int)imageID;	// 0x339118cd
- (void)dealloc;	// 0x33904589
- (float)downloadProgress;	// 0x33911b59
- (long)downloadStatus;	// 0x339117f9
- (void *)downloadThread;	// 0x33911cb1
- (double)duration;	// 0x33909d45
- (int)eqPreset;	// 0x339069f1
- (id)errorLog;	// 0x33911ab9
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;	// 0x3390f961
- (id)formatDetailsForTracks;	// 0x339118ad
- (CGSize)naturalSize;	// 0x33908401
- (id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;	// 0x339118ed
- (id)path;	// 0x33909d0d
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x339023a9
- (void)setEQPreset:(int)preset;	// 0x3391185d
- (BOOL)setPath:(id)path error:(id *)error;	// 0x33909bed
// converted property setter: - (void)setVolume:(float)volume;	// 0x3391180d
- (void)stopDownload;	// 0x33911bd1
- (id)url;	// 0x339119d1
- (id)urlFromPath:(id)path;	// 0x33911929
// converted property getter: - (float)volume;	// 0x339069dd
@end
