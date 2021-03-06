/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAssetManager.h"
#import "ATVSlideshow-Structs.h"


@interface MPEmbeddedAssetManager : MPAssetManager {
}
+ (char *)convertCGImageToBuffer:(CGImageRef)buffer;	// 0x31bb3275
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x31bb34e9
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x31bb33f1
+ (FaceCoreAPI *)createFaceAPI;	// 0x31bb30b5
- (id)absolutePathFromPath:(id)path;	// 0x31bb30b1
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x31bb28a5
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x31bb281d
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x31bb2a01
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x31bb2909
@end

