/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSThread, NSConditionLock, NSInvocation;

__attribute__((visibility("hidden")))
@interface ATVHIDThread : BRSingleton {
	NSThread *_hidThread;	// 4 = 0x4
	CFRunLoopRef _runLoop;	// 8 = 0x8
	NSConditionLock *_startLock;	// 12 = 0xc
	CFRunLoopSourceRef _invocationRunLoopSource;	// 16 = 0x10
	NSInvocation *_pendingInvocation;	// 20 = 0x14
	NSConditionLock *_invocationLock;	// 24 = 0x18
}
+ (void)setSingleton:(id)singleton;	// 0x24ad45
+ (id)singleton;	// 0x24ad35
- (id)init;	// 0x24ad55
- (void)_hidThreadLoop;	// 0x24b099
- (void)_invocationHandler;	// 0x24b269
- (void)dealloc;	// 0x24ae4d
- (BOOL)invokeOnHIDThread:(id)thread;	// 0x24aeb1
@end
