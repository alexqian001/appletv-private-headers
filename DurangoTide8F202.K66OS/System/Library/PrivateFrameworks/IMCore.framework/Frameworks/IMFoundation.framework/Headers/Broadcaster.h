/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSProxy.h> // Unknown library

@class NSArray, IMRemoteObjectBroadcaster, NSProtocolChecker, Protocol;

@interface Broadcaster : NSProxy {
	NSArray *_targets;	// 4 = 0x4
	IMRemoteObjectBroadcaster *_parent;	// 8 = 0x8
	Protocol *_protocol;	// 12 = 0xc
	NSProtocolChecker *_checker;	// 16 = 0x10
}
- (id)initWithNotifier:(id)notifier protocol:(id)protocol targets:(id)targets;	// 0x31212609
- (void)dealloc;	// 0x312143a9
- (void)forwardInvocation:(id)invocation;	// 0x31214295
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31212599
@end
