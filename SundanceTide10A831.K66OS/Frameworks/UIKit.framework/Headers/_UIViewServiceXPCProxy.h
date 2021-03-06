/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIRemoteProtocolSettingViewServiceXPCProxyTarget.h"
#import <XPCProxy.h> // Unknown library

@class _UIQueueRedirectingProxy, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceXPCProxy : XPCProxy <_UIRemoteProtocolSettingViewServiceXPCProxyTarget> {
	int _connectionPID;	// 36 = 0x24
	_UIQueueRedirectingProxy *_queueRedirectingProxy;	// 40 = 0x28
	NSObject<OS_dispatch_queue> *_queue;	// 44 = 0x2c
	int _lock;	// 48 = 0x30
	int __automatic_invalidation_retainCount;	// 52 = 0x34
	BOOL __automatic_invalidation_invalidated;	// 56 = 0x38
}
+ (id)activeFencePort;	// 0x32028855
+ (void)initialize;	// 0x320287f1
- (id)initWithConnection:(id)connection queue:(id)queue target:(id)target;	// 0x32028871
- (int)__automatic_invalidation_logic;	// 0x32028439
- (BOOL)_isDeallocating;	// 0x320287c5
- (BOOL)_tryRetain;	// 0x32028775
- (id)_withRemoteProtocol:(id)remoteProtocol do:(id)aDo;	// 0x3202900d
- (void)dealloc;	// 0x32028c0d
- (void)forwardInvocation:(id)invocation;	// 0x32028e51
- (void)forwardInvocation:(id)invocation withRemoteProtocol:(id)remoteProtocol;	// 0x32028f3d
- (void)invalidate;	// 0x3202915d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32028e01
- (id)methodSignatureForSelector:(SEL)selector withRemoteProtocol:(id)remoteProtocol;	// 0x32028e9d
- (id)proxyDeliveryingXPCReplyHandlersAsynchronously;	// 0x32028ddd
- (id)proxyWithRemoteProtocol:(id)remoteProtocol;	// 0x32028de1
- (oneway void)release;	// 0x320286a1
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x32028d71
- (id)retain;	// 0x32028669
- (unsigned)retainCount;	// 0x32028761
@end

