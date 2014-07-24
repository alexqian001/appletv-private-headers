/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class BRPhotoMediaCollection, BRPhotoMediaAsset;

__attribute__((visibility("hidden")))
@interface BRPhotoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
	BRPhotoMediaCollection *_collection;	// 8 = 0x8
}
@property(readonly, retain) BRPhotoMediaAsset *asset;	// G=0x33fcf1; converted property
+ (id)imageProxyWithAsset:(id)asset;	// 0x33f695
+ (id)imageProxyWithCollection:(id)collection;	// 0x33f739
- (id)initWithAsset:(id)asset;	// 0x33f6e1
- (id)initWithCollection:(id)collection;	// 0x33f785
// converted property getter: - (id)asset;	// 0x33fcf1
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x33fae9
- (void)dealloc;	// 0x33f841
- (id)defaultImageForImageSize:(int)imageSize;	// 0x33fa99
- (id)imageForImageSize:(int)imageSize;	// 0x33f909
- (id)imageIDForImageSize:(int)imageSize;	// 0x33f8a5
- (id)object;	// 0x33fcc9
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x33fae5
@end
