/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRAsyncTaskContext, NSString, NSThread;

@interface BRAsyncTask : NSObject {
@private
	NSThread *_callingThread;	// 4 = 0x4
	id _target;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _object;	// 16 = 0x10
	id _result;	// 20 = 0x14
	BRAsyncTaskContext *_context;	// 24 = 0x18
	int _state;	// 28 = 0x1c
	NSString *_identifier;	// 32 = 0x20
}
@property(readonly, retain) NSThread *callingThread;	// G=0x342a2525; converted property
@property(readonly, retain) BRAsyncTaskContext *context;	// G=0x342a2171; converted property
@property(retain) NSString *identifier;	// G=0x342a21c1; S=0x342a2181; converted property
@property(readonly, retain) id object;	// G=0x342a2161; converted property
@property(readonly, retain) id result;	// G=0x342a2545; converted property
@property(readonly, assign) SEL selector;	// G=0x342a2141; converted property
@property(assign) int state;	// G=0x342a2131; S=0x342a2535; converted property
@property(readonly, retain) id target;	// G=0x342a2151; converted property
+ (void)_runTaskBlock:(id)block;	// 0x342a1f85
+ (void)initialize;	// 0x342a1da9
+ (id)taskWithBlock:(id)block;	// 0x342a1ea9
+ (id)taskWithContext:(id)context withBlock:(id)block;	// 0x342a1ef1
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object;	// 0x342a1e1d
+ (id)taskWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x342a1e4d
+ (id)voidReturnValue;	// 0x342a1e0d
- (id)_initWithSelector:(SEL)selector onTarget:(id)target withObject:(id)object withContext:(id)context;	// 0x342a21d1
// converted property getter: - (id)callingThread;	// 0x342a2525
- (void)cancel;	// 0x342a2101
// converted property getter: - (id)context;	// 0x342a2171
- (void)dealloc;	// 0x342a1f8d
- (id)description;	// 0x342a2015
// converted property getter: - (id)identifier;	// 0x342a21c1
- (id)invoke;	// 0x342a2291
// converted property getter: - (id)object;	// 0x342a2161
// converted property getter: - (id)result;	// 0x342a2545
- (void)run;	// 0x342a2081
// converted property getter: - (SEL)selector;	// 0x342a2141
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x342a2181
// converted property setter: - (void)setState:(int)state;	// 0x342a2535
// converted property getter: - (int)state;	// 0x342a2131
// converted property getter: - (id)target;	// 0x342a2151
@end
