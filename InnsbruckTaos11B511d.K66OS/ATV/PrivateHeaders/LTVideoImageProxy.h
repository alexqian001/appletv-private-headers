/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVMetadataItem, NSString;

__attribute__((visibility("hidden")))
@interface LTVideoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_identifier;	// 4 = 0x4
	AVMetadataItem *_metadataItem;	// 8 = 0x8
}
+ (id)imageProxyWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x4a2e95
- (id)initWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x4a2ef5
- (void).cxx_destruct;	// 0x4a334d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x4a3345
- (id)defaultImageForImageSize:(int)imageSize;	// 0x4a32ed
- (id)imageForImageSize:(int)imageSize;	// 0x4a2f9d
- (id)imageIDForImageSize:(int)imageSize;	// 0x4a2f89
- (id)object;	// 0x4a3349
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x4a3341
@end
