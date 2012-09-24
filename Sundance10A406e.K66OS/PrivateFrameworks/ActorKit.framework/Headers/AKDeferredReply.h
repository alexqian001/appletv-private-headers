/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <NSObject.h> // Unknown library

@class NSConditionLock, NSInvocation;

@interface AKDeferredReply : NSObject {
	NSInvocation *_invocation;	// 4 = 0x4
	NSConditionLock *_blockingLock;	// 8 = 0x8
}
@property(readonly, retain) NSInvocation *invocation;	// G=0x356d2cb5; converted property
+ (id)currentReply;	// 0x356d2ca5
+ (void)initialize;	// 0x356d2d69
- (id)init;	// 0x356d2eb5
- (id)initWithInvocation:(id)invocation andBlockingLock:(id)lock;	// 0x356d2f05
- (void)becomeCurrentReply;	// 0x356d2c7d
- (void)dealloc;	// 0x356d2f7d
// converted property getter: - (id)invocation;	// 0x356d2cb5
- (void)resignCurrentReply;	// 0x356d2c91
- (void)sendReply;	// 0x356d2d09
- (void)setReturnValue:(void *)value;	// 0x356d2cc5
@end
