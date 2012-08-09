/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIStatusBarAnimationParameters : NSObject {
	double _startTime;	// 4 = 0x4
	double _duration;	// 12 = 0xc
	int _curve;	// 20 = 0x14
}
@property(assign, nonatomic) int curve;	// G=0x3035eaa1; S=0x3055c979; @synthesize=_curve
@property(assign, nonatomic) double duration;	// G=0x302bb9d1; S=0x30376885; @synthesize=_duration
@property(assign, nonatomic) double startTime;	// G=0x3035ea15; S=0x3055c965; @synthesize=_startTime
- (id)init;	// 0x3055c955
- (id)initWithDefaultParameters;	// 0x30221c45
- (id)initWithEmptyParameters;	// 0x30284abd
// declared property getter: - (int)curve;	// 0x3035eaa1
// declared property getter: - (double)duration;	// 0x302bb9d1
// declared property setter: - (void)setCurve:(int)curve;	// 0x3055c979
// declared property setter: - (void)setDuration:(double)duration;	// 0x30376885
// declared property setter: - (void)setStartTime:(double)time;	// 0x3055c965
// declared property getter: - (double)startTime;	// 0x3035ea15
@end
