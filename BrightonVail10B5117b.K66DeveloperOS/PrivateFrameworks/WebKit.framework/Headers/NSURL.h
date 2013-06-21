/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// 0x367c545d
@end

@interface NSURL (WebNSURLExtras)
+ (id)_web_URLWithData:(id)data;	// 0x367cd285
+ (id)_web_URLWithData:(id)data relativeToURL:(id)url;	// 0x367cd28d
+ (id)_web_URLWithDataAsString:(id)dataAsString;	// 0x36777b0d
+ (id)_web_URLWithDataAsString:(id)dataAsString relativeToURL:(id)url;	// 0x36777ec1
+ (id)_web_URLWithUserTypedString:(id)userTypedString;	// 0x36776125
+ (id)_web_URLWithUserTypedString:(id)userTypedString relativeToURL:(id)url;	// 0x367cd27d
+ (id)uniqueURLWithRelativePart:(id)relativePart;	// 0x367cdbe1
- (id)_web_URLByRemovingUserInfo;	// 0x367cd361
- (id)_web_URLByTruncatingOneCharacterBeforeComponent:(long)component;	// 0x367cd349
- (const char *)_web_URLCString;	// 0x367cd2d5
- (id)_web_URLWithLowercasedScheme;	// 0x367cd439
- (id)_web_dataForURLComponentType:(long)urlcomponentType;	// 0x367cd5dd
- (id)_web_hostData;	// 0x367cd5ed
- (id)_web_hostString;	// 0x367cd64d
- (BOOL)_web_isEmpty;	// 0x367cd299
- (id)_web_originalData;	// 0x367cd295
- (id)_web_originalDataAsString;	// 0x36776efd
- (id)_web_schemeData;	// 0x367cd5e5
- (id)_web_schemeSeparatorWithoutColon;	// 0x367cd54d
- (id)_web_userVisibleString;	// 0x36777335
- (id)_webkit_URLByRemovingFragment;	// 0x367cd351
- (id)_webkit_URLByRemovingResourceSpecifier;	// 0x367cd359
- (id)_webkit_URLFromURLOrSchemelessFileURL;	// 0x367cd6dd
- (id)_webkit_canonicalize;	// 0x3677c345
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x367cd3b5
- (BOOL)_webkit_isFileURL;	// 0x367cd38d
- (BOOL)_webkit_isJavaScriptURL;	// 0x367cd365
- (id)_webkit_scriptIfJavaScriptURL;	// 0x3677d069
- (BOOL)_webkit_shouldLoadAsEmptyDocument;	// 0x367cd3dd
- (id)_webkit_suggestedFilenameWithMIMEType:(id)mimetype;	// 0x367cd6d5
- (id)_webkit_youTubeURL;	// 0x367cd74d
@end
