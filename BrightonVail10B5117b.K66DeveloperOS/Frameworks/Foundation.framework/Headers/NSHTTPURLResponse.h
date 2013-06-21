/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLResponse.h"
#import "Foundation-Structs.h"

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
	NSHTTPURLResponseInternal *_httpInternal;	// 8 = 0x8
}
+ (BOOL)isErrorStatusCode:(int)code;	// 0x31a22669
+ (id)localizedStringForStatusCode:(int)statusCode;	// 0x31a22369
- (id)initWithCoder:(id)coder;	// 0x31a21e95
- (id)initWithURL:(id)url statusCode:(int)code HTTPVersion:(id)version headerFields:(id)fields;	// 0x319971ad
- (id)initWithURL:(id)url statusCode:(int)code headerFields:(id)fields requestTime:(double)time;	// 0x31a21e59
- (id)_clientCertificateChain;	// 0x31a226e5
- (id)_clientCertificateState;	// 0x31a2274d
- (id)_initWithCFURLResponse:(CFURLResponseRef)cfurlresponse;	// 0x3195ea55
- (id)_peerCertificateChain;	// 0x31a2267d
- (SecTrust *)_peerTrust;	// 0x31a22821
- (void)_setPeerTrust:(SecTrust *)trust;	// 0x31a227c9
- (id)allHeaderFields;	// 0x31997261
- (void)dealloc;	// 0x3195ebb5
- (void)encodeWithCoder:(id)coder;	// 0x31a222f9
- (int)statusCode;	// 0x3195eb81
@end
