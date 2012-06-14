/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSOperation : NSObject {
@private
	id _private;	// 4 = 0x4
	int _private1;	// 8 = 0x8
}
@property(retain) id completionBlock;	// G=0x319fed6d; S=0x31a14bc9; converted property
@property(assign) void *observationInfo;	// G=0x31a0b335; S=0x31a76e05; converted property
@property(assign) int queuePriority;	// G=0x31a76fd1; S=0x31a2cbd5; converted property
@property(assign) double threadPriority;	// G=0x31a7700d; S=0x31a77049; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x319ef18d
+ (void)initialize;	// 0x319ecce1
- (id)init;	// 0x319ecd59
- (id)__;	// 0x31a771e5
- (id)_implicitObservationInfo;	// 0x31a0b355
- (BOOL)_isDeallocating;	// 0x31a76e41
- (BOOL)_tryRetain;	// 0x31a0b2bd
- (void)addDependency:(id)dependency;	// 0x31a77121
- (void)cancel;	// 0x31a22f8d
// converted property getter: - (id)completionBlock;	// 0x319fed6d
- (void)dealloc;	// 0x319fef51
- (id)dependencies;	// 0x31a771a1
- (void)finalize;	// 0x31a76e79
- (BOOL)isAsynchronous;	// 0x31a76f3d
- (BOOL)isCancelled;	// 0x31a14c6d
- (BOOL)isConcurrent;	// 0x31a76ea9
- (BOOL)isExecuting;	// 0x31a233f1
- (BOOL)isFinished;	// 0x31a0c751
- (BOOL)isReady;	// 0x319efc31
- (void)main;	// 0x31a771dd
// converted property getter: - (void *)observationInfo;	// 0x31a0b335
// converted property getter: - (int)queuePriority;	// 0x31a76fd1
- (oneway void)release;	// 0x319efd0d
- (void)removeDependency:(id)dependency;	// 0x31a77161
- (id)retain;	// 0x319efbdd
- (unsigned)retainCount;	// 0x31a76e29
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x31a14bc9
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x31a76e05
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x31a2cbd5
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x31a77049
- (void)start;	// 0x31a0adc9
// converted property getter: - (double)threadPriority;	// 0x31a7700d
- (void)waitUntilFinished;	// 0x31a77099
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x31a770d5
@end
