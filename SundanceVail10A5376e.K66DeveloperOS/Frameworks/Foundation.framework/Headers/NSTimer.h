/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


@interface NSTimer (NSTimer)
@property(retain) id fireDate;	// G=0x34dd9445; S=0x34dd9469; converted property
@property(assign) double fireTime;	// G=0x34dd94cd; S=0x34dd94f5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34d29fc1
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x34dd9255
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x34d29f25
+ (id)timerWithFireDate:(id)fireDate target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x34dd9319
+ (id)timerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x34dd91a9
+ (id)timerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x34d764f9
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x34dd9391
- (double)_cffireTime;	// 0x34dd9541
- (XXStruct_K1psTC)context;	// 0x34dd9531
- (CFStringRef)copyDebugDescription;	// 0x34dd9491
- (void)fire;	// 0x34dd9421
// converted property getter: - (id)fireDate;	// 0x34dd9445
// converted property getter: - (double)fireTime;	// 0x34dd94cd
- (double)interval;	// 0x34dd94bd
- (void)invalidate;	// 0x34dd939d
- (BOOL)isValid;	// 0x34dd93c1
- (long)order;	// 0x34dd94b9
// converted property setter: - (void)setFireDate:(id)date;	// 0x34dd9469
// converted property setter: - (void)setFireTime:(double)time;	// 0x34dd94f5
- (double)timeInterval;	// 0x34dd93e9
- (id)userInfo;	// 0x34dd948d
@end
