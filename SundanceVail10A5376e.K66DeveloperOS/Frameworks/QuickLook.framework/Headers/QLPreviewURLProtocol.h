/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSURLProtocol.h> // Unknown library


__attribute__((visibility("hidden")))
@interface QLPreviewURLProtocol : NSURLProtocol {
}
+ (id)_errorForAbort;	// 0x32c3cfc5
+ (id)_errorForCancel;	// 0x32c3d025
+ (id)_errorForNoPreview;	// 0x32c3d085
+ (void)_unregisterURL:(id)url;	// 0x32c3d189
+ (void)appendData:(id)data forURL:(id)url lastChunk:(BOOL)chunk;	// 0x32c3d475
+ (BOOL)canInitWithRequest:(id)request;	// 0x32c3e0ad
+ (id)canonicalRequestForRequest:(id)request;	// 0x32c3e0d1
+ (id)errorForURL:(id)url;	// 0x32c3d975
+ (void)initialize;	// 0x32c3c95d
+ (id)mimeTypeForAttachmentURL:(id)attachmentURL;	// 0x32c3e135
+ (id)newURLWithContentID:(id)contentID baseURL:(id)url;	// 0x32c3caf9
+ (id)newUniqueURLWithName:(id)name;	// 0x32c3ca21
+ (void)registerPreview:(id)preview;	// 0x32c3cba5
+ (void)registerURL:(id)url mimeType:(id)type textEncoding:(id)encoding;	// 0x32c3cc85
+ (void)setError:(id)error forURL:(id)url;	// 0x32c3d72d
+ (void)startLoadingProtocol:(id)protocol;	// 0x32c3da7d
+ (void)stopLoadingProtocol:(id)protocol;	// 0x32c3dec1
+ (void)unregisterURLs:(id)urls andPreview:(id)preview;	// 0x32c3d2c5
- (void)startLoading;	// 0x32c3e0d5
- (void)stopLoading;	// 0x32c3e105
@end
