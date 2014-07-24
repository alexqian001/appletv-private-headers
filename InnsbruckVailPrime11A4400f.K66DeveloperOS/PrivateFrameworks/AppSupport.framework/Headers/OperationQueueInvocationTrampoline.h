/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "InvocationTrampoline.h"

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
	NSOperationQueue *_queue;	// 8 = 0x8
	int _priority;	// 12 = 0xc
}
- (id)initWithTarget:(id)target operationQueue:(id)queue priority:(int)priority;	// 0x2ffe6e1d
- (void)dealloc;	// 0x2ffe6ea5
- (void)forwardInvocation:(id)invocation;	// 0x2ffe6ef1
@end
