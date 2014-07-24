/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BREvent.h"


__attribute__((visibility("hidden")))
@interface BRHIDEvent : BREvent {
	unsigned short _page;	// 28 = 0x1c
	unsigned short _usage;	// 30 = 0x1e
	unsigned long long _extendedSignature;	// 32 = 0x20
}
@property(readonly, assign) unsigned long long extendedSignature;	// G=0x33ba69; converted property
@property(readonly, assign) unsigned short page;	// G=0x33ba49; converted property
@property(readonly, assign) unsigned short usage;	// G=0x33ba59; converted property
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x33b591
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x33b541
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x33b4ed
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x33b491
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x33b5d9
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x33b655
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x33b611
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x33b68d
- (id)description;	// 0x33b849
// converted property getter: - (unsigned long long)extendedSignature;	// 0x33ba69
- (BOOL)isEqual:(id)equal;	// 0x33b979
// converted property getter: - (unsigned short)page;	// 0x33ba49
// converted property getter: - (unsigned short)usage;	// 0x33ba59
@end
