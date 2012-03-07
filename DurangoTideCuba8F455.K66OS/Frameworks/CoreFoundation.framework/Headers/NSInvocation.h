/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


@interface NSInvocation : NSObject {
@private
	void *_frame;	// 4 = 0x4
	void *_retdata;	// 8 = 0x8
	id _signature;	// 12 = 0xc
	id _container;	// 16 = 0x10
	unsigned char _retainedArgs;	// 20 = 0x14
	unsigned char _reserved[15];	// 21 = 0x15
}
@property(assign) SEL selector;	// G=0x3423add9; S=0x34243375; converted property
@property(retain) id target;	// G=0x3426dffd; S=0x342527a5; converted property
+ (id)invocationWithMethodSignature:(id)methodSignature;	// 0x3423abed
- (id)init;	// 0x342c095d
- (void)_addAttachedObject:(id)object;	// 0x342c0909
- (BOOL)argumentsRetained;	// 0x342c08dd
- (id)copyWithZone:(NSZone *)zone;	// 0x342c2ff5
- (void)dealloc;	// 0x3423b5f9
- (void)getArgument:(void *)argument atIndex:(int)index;	// 0x3423ae01
- (void)getReturnValue:(void *)value;	// 0x3426aa75
- (void)invoke;	// 0x3423b3d1
- (void)invokeSuper;	// 0x342c3299
- (void)invokeWithTarget:(id)target;	// 0x3423b0b5
- (id)methodSignature;	// 0x34243365
- (void)retainArguments;	// 0x342527c5
// converted property getter: - (SEL)selector;	// 0x3423add9
- (void)setArgument:(void *)argument atIndex:(int)index;	// 0x3423b0e9
- (void)setReturnValue:(void *)value;	// 0x342c08f1
// converted property setter: - (void)setSelector:(SEL)selector;	// 0x34243375
// converted property setter: - (void)setTarget:(id)target;	// 0x342527a5
// converted property getter: - (id)target;	// 0x3426dffd
@end
