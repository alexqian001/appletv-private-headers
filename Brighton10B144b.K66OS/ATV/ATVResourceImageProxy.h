/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface ATVResourceImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSBundle *_bundle;	// 4 = 0x4
	NSString *_imageName;	// 8 = 0x8
	NSString *_imageType;	// 12 = 0xc
	BOOL _shouldCacheImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSBundle *bundle;	// G=0x26b2bd; S=0x26b2cd; @synthesize=_bundle
@property(retain, nonatomic) NSString *imageName;	// G=0x26b2dd; S=0x26b2ed; @synthesize=_imageName
@property(retain, nonatomic) NSString *imageType;	// G=0x26b2fd; S=0x26b30d; @synthesize=_imageType
@property(assign, nonatomic) BOOL shouldCacheImage;	// G=0x26b31d; S=0x26b32d; @synthesize=_shouldCacheImage
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type;	// 0x26af39
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x26af89
- (id)initWithImageName:(id)imageName imageType:(id)type;	// 0x26afe1
- (id)initWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x26b025
// declared property getter: - (id)bundle;	// 0x26b2bd
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x26b2b5
- (void)dealloc;	// 0x26b0a5
- (id)defaultImageForImageSize:(int)imageSize;	// 0x26b2ad
- (id)imageForImageSize:(int)imageSize;	// 0x26b1b1
- (id)imageIDForImageSize:(int)imageSize;	// 0x26b11d
// declared property getter: - (id)imageName;	// 0x26b2dd
// declared property getter: - (id)imageType;	// 0x26b2fd
- (id)object;	// 0x26b2b9
// declared property setter: - (void)setBundle:(id)bundle;	// 0x26b2cd
// declared property setter: - (void)setImageName:(id)name;	// 0x26b2ed
// declared property setter: - (void)setImageType:(id)type;	// 0x26b30d
// declared property setter: - (void)setShouldCacheImage:(BOOL)cacheImage;	// 0x26b32d
// declared property getter: - (BOOL)shouldCacheImage;	// 0x26b31d
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x26b2b1
@end
