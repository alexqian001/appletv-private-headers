/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MZEffectTiming.h"
#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class NSString, NSArray;

@interface MREffectOrigamiTiming : NSObject <MZEffectTiming> {
	NSString *_effectID;	// 4 = 0x4
	NSArray *_description;	// 8 = 0x8
	NSArray *_animationTimeBounds;	// 12 = 0xc
	double _durationStretchFactor;	// 16 = 0x10
	double _slideTimings[8][2];	// 24 = 0x18
	double _phaseInDuration;	// 152 = 0x98
	double _mainDuration;	// 160 = 0xa0
	double _phaseOutDuration;	// 168 = 0xa8
	double _defaultPhaseInDuration;	// 176 = 0xb0
	double _defaultMainDuration;	// 184 = 0xb8
	double _defaultPhaseOutDuration;	// 192 = 0xc0
}
@property(readonly, assign, nonatomic) double mainDuration;	// G=0x2fc2c0d1; @synthesize=_mainDuration
@property(readonly, assign, nonatomic) double phaseInDuration;	// G=0x2fc2c0b9; @synthesize=_phaseInDuration
@property(readonly, assign, nonatomic) double phaseOutDuration;	// G=0x2fc2c0e9; @synthesize=_phaseOutDuration
- (id)initWithEffectID:(id)effectID;	// 0x2fc2ba7d
- (void)dealloc;	// 0x2fc2bba1
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x2fc2c059
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x2fc2c089
- (double)lowestDisplayTime;	// 0x2fc2c0a1
// declared property getter: - (double)mainDuration;	// 0x2fc2c0d1
// declared property getter: - (double)phaseInDuration;	// 0x2fc2c0b9
// declared property getter: - (double)phaseOutDuration;	// 0x2fc2c0e9
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x2fc2bc31
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x2fc2c03d
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x2fc2c021
@end
