/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRATVDataImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BOOL _usesScreenSaverImageManager;	// 4 = 0x4
	id _mediaObject;	// 8 = 0x8
	ATVDataClient *_dataClient;	// 12 = 0xc
	NSMutableArray *_savedTokens;	// 16 = 0x10
}
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x32c5c1; S=0x32c5d1; @synthesize=_dataClient
@property(retain, nonatomic) id mediaObject;	// G=0x32c5a1; S=0x32c5b1; @synthesize=_mediaObject
@property(retain, nonatomic) NSMutableArray *savedTokens;	// G=0x32c5e1; S=0x32c5f1; @synthesize=_savedTokens
@property(assign, nonatomic) BOOL usesScreenSaverImageManager;	// G=0x32c601; S=0x32bcc5; @synthesize=_usesScreenSaverImageManager
+ (id)imageProxyWithMediaObject:(id)mediaObject;	// 0x32af25
- (id)initWithMediaObject:(id)mediaObject;	// 0x32b041
- (void)_cancelImageForImageID:(id)imageID;	// 0x32bfb9
- (void)_cancelToken:(id)token;	// 0x32c011
- (id)_imageIDForImageSize:(int)imageSize;	// 0x32c131
- (id)_imageIDStringForSize:(int)size;	// 0x32c0e9
- (void)_removeTokenForImageID:(id)imageID;	// 0x32bf5d
- (void)_saveToken:(id)token forImageID:(id)imageID;	// 0x32bf09
- (id)_tokenInfoForImageID:(id)imageID;	// 0x32be8d
- (void)cancelAllImageRequests;	// 0x32bd5d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x32bbad
// declared property getter: - (id)dataClient;	// 0x32c5c1
- (void)dealloc;	// 0x32b11d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x32bb79
- (id)imageForImageSize:(int)imageSize;	// 0x32b1b5
- (BOOL)imageForImageSizeIsAvailable:(int)imageSizeIsAvailable;	// 0x32bc85
- (id)imageIDForImageSize:(int)imageSize;	// 0x32b1a5
- (id)imageManager;	// 0x32bcd5
// declared property getter: - (id)mediaObject;	// 0x32c5a1
- (id)object;	// 0x32bc75
// declared property getter: - (id)savedTokens;	// 0x32c5e1
// declared property setter: - (void)setDataClient:(id)client;	// 0x32c5d1
// declared property setter: - (void)setMediaObject:(id)object;	// 0x32c5b1
// declared property setter: - (void)setSavedTokens:(id)tokens;	// 0x32c5f1
// declared property setter: - (void)setUsesScreenSaverImageManager:(BOOL)manager;	// 0x32bcc5
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x32bba9
// declared property getter: - (BOOL)usesScreenSaverImageManager;	// 0x32c601
@end
