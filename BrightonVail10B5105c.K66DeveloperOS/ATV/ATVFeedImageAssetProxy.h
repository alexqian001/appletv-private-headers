/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedImageAssetProxy : XXUnknownSuperclass <BRImageProxy> {
	id _object;	// 4 = 0x4
	BOOL _imageIsScaledToFill;	// 8 = 0x8
	ATVMerchant *_merchant;	// 12 = 0xc
	NSArray *_imageAssets;	// 16 = 0x10
}
@property(copy, nonatomic) NSArray *imageAssets;	// G=0x3e9f55; S=0x3e9f69; @synthesize=_imageAssets
@property(assign, nonatomic) BOOL imageIsScaledToFill;	// G=0x3e9efd; S=0x3e9f0d; @synthesize=_imageIsScaledToFill
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3e9f1d; S=0x3e9f2d; @synthesize=_merchant
@property(retain, nonatomic) id object;	// G=0x3e9ed9; S=0x3e9ee9; @synthesize=_object
- (id)initWithObject:(id)object imageAssets:(id)assets merchant:(id)merchant;	// 0x3e9635
- (void).cxx_destruct;	// 0x3e9f79
- (id)_imageIDForImageSize:(int)imageSize imageAsset:(id *)asset;	// 0x3e9961
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x3e983d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x3e9821
// declared property getter: - (id)imageAssets;	// 0x3e9f55
- (id)imageForImageSize:(int)imageSize;	// 0x3e96f9
- (id)imageIDForImageSize:(int)imageSize;	// 0x3e96e5
// declared property getter: - (BOOL)imageIsScaledToFill;	// 0x3e9efd
// declared property getter: - (id)merchant;	// 0x3e9f1d
// declared property getter: - (id)object;	// 0x3e9ed9
// declared property setter: - (void)setImageAssets:(id)assets;	// 0x3e9f69
// declared property setter: - (void)setImageIsScaledToFill:(BOOL)fill;	// 0x3e9f0d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3e9f2d
// declared property setter: - (void)setObject:(id)object;	// 0x3e9ee9
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x3e9839
@end
