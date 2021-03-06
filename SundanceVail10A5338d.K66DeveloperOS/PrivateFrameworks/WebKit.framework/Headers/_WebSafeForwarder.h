/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject {
	id target;	// 4 = 0x4
	id defaultTarget;	// 8 = 0x8
	BOOL catchExceptions;	// 12 = 0xc
	_WebSafeAsyncForwarder *asyncForwarder;	// 16 = 0x10
	long asyncForwarderPred;	// 20 = 0x14
}
@property(readonly, retain) _WebSafeAsyncForwarder *asyncForwarder;	// G=0x316d7679; converted property
- (id)initWithTarget:(id)target defaultTarget:(id)target2 catchExceptions:(BOOL)exceptions;	// 0x3165980d
// converted property getter: - (id)asyncForwarder;	// 0x316d7679
- (void)clearTarget;	// 0x31678a3d
- (void)dealloc;	// 0x31678a51
- (void)forwardInvocation:(id)invocation;	// 0x31659891
- (id)methodSignatureForSelector:(SEL)selector;	// 0x31659871
- (BOOL)respondsToSelector:(SEL)selector;	// 0x316d7745
@end

