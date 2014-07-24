/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRPhotoMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVFlickrImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x193161
- (id)initWithAsset:(id)asset;	// 0x193109
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x19340d
- (void)dealloc;	// 0x19319d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x193385
- (id)imageForImageSize:(int)imageSize;	// 0x19325d
- (id)imageIDForImageSize:(int)imageSize;	// 0x1931f9
- (id)object;	// 0x1931e9
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x193381
@end
