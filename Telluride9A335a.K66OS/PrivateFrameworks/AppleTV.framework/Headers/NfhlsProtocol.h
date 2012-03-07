/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSURLProtocol.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NfhlsProtocol : NSURLProtocol {
}
+ (BOOL)canInitWithRequest:(id)request;	// 0x343cdce4
+ (id)canonicalRequestForRequest:(id)request;	// 0x343cdc4c
+ (void)registerSpecialProtocol;	// 0x343cddcc
+ (void)setDebug:(BOOL)debug;	// 0x343cdc54
+ (id)specialProtocolScheme;	// 0x343cdc2c
+ (id)specialProtocolVarsKey;	// 0x343cdc3c
+ (void)unregisterSpecialProtocol;	// 0x343cdd5c
- (void)startLoading;	// 0x343cde3c
- (void)stopLoading;	// 0x343cdc68
@end
