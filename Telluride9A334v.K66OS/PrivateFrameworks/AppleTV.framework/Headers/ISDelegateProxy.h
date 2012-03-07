/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSLock;

__attribute__((visibility("hidden")))
@interface ISDelegateProxy : NSObject {
@private
	id _delegate;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	BOOL _shouldMessageMainThread;	// 12 = 0xc
}
- (id)init;	// 0x3333bba9
- (void)dealloc;	// 0x3333bc0d
- (void)forwardInvocation:(id)invocation;	// 0x3333be55
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3333bef1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3333bf85
- (void)sendInvocationToDelegate:(id)delegate;	// 0x3333bcad
- (void)setDelegate:(id)delegate;	// 0x3333bc61
- (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x3333be09
@end
