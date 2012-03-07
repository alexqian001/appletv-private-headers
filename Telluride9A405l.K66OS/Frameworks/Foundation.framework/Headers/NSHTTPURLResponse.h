/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLResponse.h"

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
@private
	NSHTTPURLResponseInternal *_httpInternal;	// 8 = 0x8
}
+ (BOOL)isErrorStatusCode:(int)code;	// 0x3029b169
+ (id)localizedStringForStatusCode:(int)statusCode;	// 0x30319ca5
- (id)initWithCoder:(id)coder;	// 0x303197fd
- (id)initWithURL:(id)url statusCode:(int)code HTTPVersion:(id)version headerFields:(id)fields;	// 0x30319749
- (id)initWithURL:(id)url statusCode:(int)code headerFields:(id)fields requestTime:(double)time;	// 0x3031970d
- (id)_clientCertificateChain;	// 0x30319fc9
- (id)_clientCertificateState;	// 0x3031a035
- (id)_initWithCFURLResponse:(CFURLResponseRef)cfurlresponse;	// 0x3026ba41
- (id)_peerCertificateChain;	// 0x30319f5d
- (SecTrust *)_peerTrust;	// 0x3031a111
- (void)_setPeerTrust:(SecTrust *)trust;	// 0x3031a0b5
- (id)allHeaderFields;	// 0x3026c735
- (void)dealloc;	// 0x3026bba5
- (void)encodeWithCoder:(id)coder;	// 0x30319c39
- (int)statusCode;	// 0x3026bb71
@end
