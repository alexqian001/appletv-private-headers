/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATViTunesKeyValueStoreAPI : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
	id _handler;	// 8 = 0x8
	dispatch_queue_s *_handlerQueue;	// 12 = 0xc
}
+ (void)getAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x301e5461
+ (void)putAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x301e552d
- (void)_getAllRequest:(id)request handler:(id)handler;	// 0x301e5761
- (id)_initWithDomain:(id)domain;	// 0x301e570d
- (void)_putAllRequest:(id)request handler:(id)handler;	// 0x301e5b31
- (id)_requestWithURLString:(id)urlstring;	// 0x301e60fd
- (void)_responseReady:(id)ready;	// 0x301e5f25
- (void)dealloc;	// 0x301e5669
@end
