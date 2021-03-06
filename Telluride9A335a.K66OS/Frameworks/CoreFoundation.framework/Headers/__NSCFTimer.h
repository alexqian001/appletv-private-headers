/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimer.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFTimer : NSTimer {
}
@property(retain) id fireDate;	// G=0x334d4f45; S=0x3346e0d5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x334d4f1d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x334d4f19
- (id)init;	// 0x334d5279
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x334d513d
- (unsigned long)_cfTypeID;	// 0x334d5139
- (BOOL)_isDeallocating;	// 0x334d4ec5
- (BOOL)_tryRetain;	// 0x334d4eb1
- (void)finalize;	// 0x334d4ed5
- (void)fire;	// 0x334d4f75
// converted property getter: - (id)fireDate;	// 0x334d4f45
- (unsigned)hash;	// 0x334d4ead
- (void)invalidate;	// 0x3345a829
- (BOOL)isEqual:(id)equal;	// 0x334d4e95
- (BOOL)isValid;	// 0x3346e081
- (oneway void)release;	// 0x3345aafd
- (id)retain;	// 0x33459e4d
- (unsigned)retainCount;	// 0x334d4ed1
// converted property setter: - (void)setFireDate:(id)date;	// 0x3346e0d5
- (double)timeInterval;	// 0x334d4f41
- (id)userInfo;	// 0x334a5a01
@end

