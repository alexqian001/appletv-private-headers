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
@property(retain) id completionBlock;	// G=0x3101fe31; S=0x31035fa5; converted property
@property(assign) void *observationInfo;	// G=0x3102c56d; S=0x31092e45; converted property
@property(assign) int queuePriority;	// G=0x31093005; S=0x3104dc29; converted property
@property(assign) double threadPriority;	// G=0x31093041; S=0x3109307d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31010009
+ (void)initialize;	// 0x3100dc91
- (id)init;	// 0x3100dcf9
- (id)__;	// 0x31093221
- (id)_implicitObservationInfo;	// 0x3102c58d
- (BOOL)_isDeallocating;	// 0x31092e79
- (BOOL)_tryRetain;	// 0x3102c4fd
- (void)addDependency:(id)dependency;	// 0x31093161
- (void)cancel;	// 0x3104414d
// converted property getter: - (id)completionBlock;	// 0x3101fe31
- (void)dealloc;	// 0x31020009
- (id)dependencies;	// 0x310931e1
- (void)finalize;	// 0x31092eb1
- (BOOL)isAsynchronous;	// 0x31092f71
- (BOOL)isCancelled;	// 0x31036045
- (BOOL)isConcurrent;	// 0x31092edd
- (BOOL)isExecuting;	// 0x31044595
- (BOOL)isFinished;	// 0x3102d93d
- (BOOL)isReady;	// 0x310109e5
- (void)main;	// 0x3109321d
// converted property getter: - (void *)observationInfo;	// 0x3102c56d
// converted property getter: - (int)queuePriority;	// 0x31093005
- (oneway void)release;	// 0x31010abd
- (void)removeDependency:(id)dependency;	// 0x310931a1
- (id)retain;	// 0x31010995
- (unsigned)retainCount;	// 0x31092e65
// converted property setter: - (void)setCompletionBlock:(id)block;	// 0x31035fa5
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x31092e45
// converted property setter: - (void)setQueuePriority:(int)priority;	// 0x3104dc29
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x3109307d
- (void)start;	// 0x3102bff9
// converted property getter: - (double)threadPriority;	// 0x31093041
- (void)waitUntilFinished;	// 0x310930d1
- (void)waitUntilFinishedOrTimeout:(double)timeout;	// 0x3109310d
@end
