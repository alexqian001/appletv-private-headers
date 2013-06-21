/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface BRBackgroundTask : XXUnknownSuperclass {
	double _interval;	// 4 = 0x4
	double _delay;	// 12 = 0xc
	NSTimer *_initialDelayTimer;	// 20 = 0x14
	NSTimer *_reenableTimer;	// 24 = 0x18
	NSTimer *_intervalTimer;	// 28 = 0x1c
	BOOL _enabled;	// 32 = 0x20
	BOOL _firedWhileDisabled;	// 33 = 0x21
	int _taskType;	// 36 = 0x24
	NSDictionary *_userInfo;	// 40 = 0x28
}
@property(readonly, assign) BOOL enabled;	// G=0x39f9f9; converted property
@property(readonly, assign) double interval;	// G=0x39f759; converted property
+ (void)_resumeBackgroundProcessing:(id)processing;	// 0x3a03b1
+ (void)_resumeHeavyBackgroundProcessing:(id)processing;	// 0x3a0431
+ (void)_suspendBackgroundProcessing:(id)processing;	// 0x3a035d
+ (void)_suspendHeavyBackgroundProcessing:(id)processing;	// 0x3a03dd
+ (void)_timeOrTimeZoneChangeNotification:(id)notification;	// 0x3a045d
+ (void)disableBackgroundTasks:(id)tasks ofType:(int)type;	// 0x39ee21
+ (void)enableBackgroundTasksOfType:(int)type;	// 0x39eab1
+ (void)initialize;	// 0x39e909
+ (void)performFinishedForTask:(id)task;	// 0x39f4a9
+ (void)registerBackgroundTask:(id)task;	// 0x39f09d
+ (id)taskForContext:(id)context ofType:(int)type;	// 0x39ec59
+ (void)unregisterBackgroundTask:(id)task;	// 0x39f2a1
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x39f649
- (void)_cancelTimers;	// 0x39fbd5
- (void)_delayedPerform:(id)perform;	// 0x3a0025
- (void)_intervalPerform:(id)perform;	// 0x3a01fd
- (void)_setEnabled:(BOOL)enabled;	// 0x3a0001
- (void)_setupTimers;	// 0x39fa09
- (void)_updateTimersForTimeChange;	// 0x39fd09
- (id)_userInfo;	// 0x3a034d
- (void)dealloc;	// 0x39f6e9
- (void)disable:(id)disable;	// 0x39f9c1
- (void)enable;	// 0x39f771
// converted property getter: - (BOOL)enabled;	// 0x39f9f9
// converted property getter: - (double)interval;	// 0x39f759
- (BOOL)perform:(id)perform;	// 0x39f9f1
- (void)stop;	// 0x39f9f5
- (int)type;	// 0x39f749
@end
