/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAssetManager.h"


@interface MPEmbeddedAssetManager : MPAssetManager {
}
- (id)absolutePathFromPath:(id)path;	// 0x321989c5
- (double)durationForAssetAtPath:(id)path;	// 0x321988c5
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x3219881d
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x321986cd
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x32198775
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x32198591
- (double)stopTimeForAssetAtPath:(id)path;	// 0x321989b5
@end
