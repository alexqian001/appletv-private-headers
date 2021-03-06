/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class NSURL, NSString, BRMediaType, NSDictionary, BRImage;
@protocol BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRURLImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_imageID;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	NSDictionary *_headerFields;	// 12 = 0xc
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 16 = 0x10
	BRMediaType *_mediaTypeForDefaultImage;	// 20 = 0x14
	BRImage *_defaultImage;	// 24 = 0x18
	BOOL _writeToDisk;	// 28 = 0x1c
	long _imageIDLazyInitializationGuard;	// 32 = 0x20
}
@property(retain) id decryptionAgent;	// G=0x388de5; S=0x388df5; converted property
@property(retain) BRImage *defaultImage;	// G=0x388d69; S=0x388d2d; converted property
@property(retain) NSDictionary *headerFields;	// G=0x388d99; S=0x388da9; converted property
@property(retain) BRMediaType *mediaTypeForDefaultImage;	// G=0x388cd9; S=0x388cc9; converted property
@property(retain) id object;	// G=0x388d85; S=0x388d81; converted property
@property(readonly, retain) NSURL *url;	// G=0x388d89; converted property
@property(assign) BOOL writeToDisk;	// G=0x388e15; S=0x388e05; converted property
+ (id)proxyWithURL:(id)url;	// 0x388779
+ (id)proxyWithURL:(id)url decryptionAgent:(id)agent;	// 0x3887c5
+ (id)proxyWithURL:(id)url headerFields:(id)fields;	// 0x388815
+ (id)proxyWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x388865
- (id)initWithURL:(id)url;	// 0x3888bd
- (id)initWithURL:(id)url decryptionAgent:(id)agent;	// 0x3888dd
- (id)initWithURL:(id)url headerFields:(id)fields;	// 0x3888fd
- (id)initWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x388921
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x388d7d
- (void)dealloc;	// 0x3889c1
// converted property getter: - (id)decryptionAgent;	// 0x388de5
// converted property getter: - (id)defaultImage;	// 0x388d69
- (id)defaultImageForImageSize:(int)imageSize;	// 0x388ce9
// converted property getter: - (id)headerFields;	// 0x388d99
- (id)imageForImageSize:(int)imageSize;	// 0x388b31
- (id)imageIDForImageSize:(int)imageSize;	// 0x388a4d
// converted property getter: - (id)mediaTypeForDefaultImage;	// 0x388cd9
// converted property getter: - (id)object;	// 0x388d85
// converted property setter: - (void)setDecryptionAgent:(id)agent;	// 0x388df5
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x388d2d
// converted property setter: - (void)setHeaderFields:(id)fields;	// 0x388da9
// converted property setter: - (void)setMediaTypeForDefaultImage:(id)defaultImage;	// 0x388cc9
// converted property setter: - (void)setObject:(id)object;	// 0x388d81
// converted property setter: - (void)setWriteToDisk:(BOOL)disk;	// 0x388e05
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x388d79
// converted property getter: - (id)url;	// 0x388d89
// converted property getter: - (BOOL)writeToDisk;	// 0x388e15
@end

