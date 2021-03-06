/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle> {
	CFDictionaryRef mQuicklookProperties;	// 4 = 0x4
	CFDictionaryRef mAttachments;	// 8 = 0x8
	CFDataRef mMainHtmlData;	// 12 = 0xc
	CFStringRef mUriScheme;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
}
- (id)init;	// 0x368f0515
- (id)initWithUriScheme:(CFStringRef)uriScheme;	// 0x368f0531
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x368f0721
- (void)dealloc;	// 0x368f064d
- (BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)previewRequest;	// 0x368f0709
- (CFDataRef)mainHtmlData;	// 0x368f06e9
- (CFDictionaryRef)quicklookDictionary;	// 0x368f06f9
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x368f077d
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x368f0761
- (void)setDocumentSize:(CGSize)size;	// 0x368f0851
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x368f08cd
@end

