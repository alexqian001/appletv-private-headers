/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSError.h> // Unknown library


@interface NSError (WebKitExtras)
+ (void)_registerWebKitErrors;	// 0x30d28e2d
+ (id)_webKitErrorWithCode:(int)code failingURL:(id)url;	// 0x30d66c79
+ (id)_webKitErrorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x30d28df9
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;	// 0x30d29059
+ (id)_webkit_errorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x30d290b5
- (id)_initWithPluginErrorCode:(int)pluginErrorCode contentURL:(id)url pluginPageURL:(id)url3 pluginName:(id)name MIMEType:(id)type;	// 0x30d66a45
- (id)_webkit_initWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x30d290fd
@end
