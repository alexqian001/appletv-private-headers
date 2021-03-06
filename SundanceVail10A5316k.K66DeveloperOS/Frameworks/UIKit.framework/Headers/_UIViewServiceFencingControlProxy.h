/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "XPCProxyTarget.h"
#import "_UIQueueingProxy.h"

@class _UIViewServiceFencingController;

__attribute__((visibility("hidden")))
@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy <XPCProxyTarget> {
@private
	_UIViewServiceFencingController *_fencingController;	// 20 = 0x14
}
+ (id)proxyWithTarget:(id)target fencingController:(id)controller;	// 0x304bca7d
- (void)__beginFencingMessagesWithSendRight:(id)sendRight connectionCount:(unsigned)count;	// 0x304bcb91
- (void)__endFencingMessagesForSendRight:(id)sendRight;	// 0x304bcbc1
- (void)dealloc;	// 0x304bcab9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x304bcb05
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x304bcbe5
@end

