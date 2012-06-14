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
@property(assign, nonatomic) int curve;	// G=0x353eb4b9; S=0x3563cf89; @synthesize=_curve
@property(assign, nonatomic) double duration;	// G=0x353eb4a1; S=0x35472141; @synthesize=_duration
@property(assign, nonatomic) double startTime;	// G=0x35472155; S=0x3563cf75; @synthesize=_startTime
- (id)init;	// 0x3563cf65
- (id)initWithDefaultParameters;	// 0x353eb451
// declared property getter: - (int)curve;	// 0x353eb4b9
// declared property getter: - (double)duration;	// 0x353eb4a1
// declared property setter: - (void)setCurve:(int)curve;	// 0x3563cf89
// declared property setter: - (void)setDuration:(double)duration;	// 0x35472141
// declared property setter: - (void)setStartTime:(double)time;	// 0x3563cf75
// declared property getter: - (double)startTime;	// 0x35472155
@end
