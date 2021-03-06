/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"


@interface NSInvocation : NSObject {
	void *_frame;	// 4 = 0x4
	void *_retdata;	// 8 = 0x8
	id _signature;	// 12 = 0xc
	id _container;	// 16 = 0x10
	unsigned char _retainedArgs;	// 20 = 0x14
	unsigned char _reserved[15];	// 21 = 0x15
}
@property(assign) SEL selector;	// G=0x35697805; S=0x35698b21; converted property
@property(retain) id target;	// G=0x356e10c1; S=0x356c4f51; converted property
+ (id)_invocationWithMethodSignature:(id)methodSignature frame:(void *)frame;	// 0x356976a9
+ (id)invocationWithMethodSignature:(id)methodSignature;	// 0x35698b0d
- (id)init;	// 0x3573e955
- (void)_addAttachedObject:(id)object;	// 0x356dcc7d
- (BOOL)argumentsRetained;	// 0x3573ed31
- (id)copyWithZone:(NSZone *)zone;	// 0x3573ed49
- (void)dealloc;	// 0x356986d5
- (void)getArgument:(void *)argument atIndex:(int)index;	// 0x35697829
- (void)getReturnValue:(void *)value;	// 0x356e2059
- (void)invoke;	// 0x35697ecd
- (void)invokeSuper;	// 0x3573f1d1
- (void)invokeUsingIMP:(/*function-pointer*/ void *)imp;	// 0x3573f091
- (void)invokeWithTarget:(id)target;	// 0x35697b11
- (id)methodSignature;	// 0x35698a09
- (void)retainArguments;	// 0x35698d51
// converted property getter: - (SEL)selector;	// 0x35697805
- (void)setArgument:(void *)argument atIndex:(int)index;	// 0x35697b49
- (void)setReturnValue:(void *)value;	// 0x3573ee09
// converted property setter: - (void)setSelector:(SEL)selector;	// 0x35698b21
// converted property setter: - (void)setTarget:(id)target;	// 0x356c4f51
// converted property getter: - (id)target;	// 0x356e10c1
@end

