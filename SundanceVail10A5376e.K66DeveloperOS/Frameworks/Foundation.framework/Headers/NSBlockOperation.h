/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"


@interface NSBlockOperation : NSOperation {
	id _private2;	// 12 = 0xc
	void *_reserved2;	// 16 = 0x10
}
+ (id)blockOperationWithBlock:(id)block;	// 0x34d570bd
- (id)init;	// 0x34d5710d
- (void)addExecutionBlock:(id)block;	// 0x34d5716d
- (void)dealloc;	// 0x34d5fed1
- (id)executionBlocks;	// 0x34dc4ff9
- (void)main;	// 0x34d574b1
@end

