/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVFloat64Range : NSObject <NSCopying> {
	double _minimum;	// 4 = 0x4
	double _maximum;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) double maximum;	// G=0x30338de9; @synthesize=_maximum
@property(readonly, assign, nonatomic) double minimum;	// G=0x30338dd1; @synthesize=_minimum
+ (id)float64RangeWithAudioValueRange:(AudioValueRange)audioValueRange;	// 0x30338be1
+ (id)float64RangeWithMinimum:(double)minimum maximum:(double)maximum;	// 0x30338b95
- (id)initWithAudioValueRange:(AudioValueRange)audioValueRange;	// 0x30338b71
- (id)initWithMinimum:(double)minimum maximum:(double)maximum;	// 0x30338b11
- (id)copyWithZone:(NSZone *)zone;	// 0x30338dc1
- (id)description;	// 0x30338d2d
- (unsigned)hash;	// 0x30338cdd
- (BOOL)isEqual:(id)equal;	// 0x30338c2d
// declared property getter: - (double)maximum;	// 0x30338de9
// declared property getter: - (double)minimum;	// 0x30338dd1
@end
