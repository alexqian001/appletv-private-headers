/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSProxy.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy : NSProxy {
@private
	NSUndoManager *_manager;	// 4 = 0x4
}
- (id)initWithManager:(id)manager;	// 0x3031ea49
- (BOOL)_tryRetain;	// 0x3031ea9d
- (void)forwardInvocation:(id)invocation;	// 0x3031eb85
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3031eb65
- (oneway void)release;	// 0x3031eaf5
- (id)retain;	// 0x3031ea59
- (void)superRelease;	// 0x3031eb39
@end
