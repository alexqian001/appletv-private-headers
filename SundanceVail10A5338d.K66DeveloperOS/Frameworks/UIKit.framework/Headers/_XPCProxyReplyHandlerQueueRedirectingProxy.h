/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _XPCProxyReplyHandlerQueueRedirectingProxy : _UITargetedProxy {
	NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
}
+ (id)proxyInterceptingMessagesToObject:(id)object executingReplyHandlersOnQueue:(id)queue;	// 0x3103010d
- (void)dealloc;	// 0x31030391
- (void)forwardInvocation:(id)invocation;	// 0x310301b1
@end

