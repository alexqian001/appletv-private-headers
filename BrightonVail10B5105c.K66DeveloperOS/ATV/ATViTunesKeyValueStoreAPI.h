/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATViTunesKeyValueStoreAPI : XXUnknownSuperclass {
	NSString *_domain;	// 4 = 0x4
	id _handler;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_handlerQueue;	// 12 = 0xc
}
+ (void)getAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x1b9dd1
+ (void)putAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x1b9e81
- (void)_getAllRequest:(id)request handler:(id)handler;	// 0x1ba0a1
- (id)_initWithDomain:(id)domain;	// 0x1ba04d
- (void)_putAllRequest:(id)request handler:(id)handler;	// 0x1ba455
- (void)_responseReady:(id)ready;	// 0x1ba835
- (void)dealloc;	// 0x1b9fa5
@end
