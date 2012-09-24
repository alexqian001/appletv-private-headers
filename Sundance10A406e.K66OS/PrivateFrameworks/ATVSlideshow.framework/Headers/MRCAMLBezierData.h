/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MRCAMLBezierData : NSObject {
	double ax;	// 4 = 0x4
	double bx;	// 12 = 0xc
	double cx;	// 20 = 0x14
	double ay;	// 28 = 0x1c
	double by;	// 36 = 0x24
	double cy;	// 44 = 0x2c
}
- (id)initWithControlPoints:(const double *)controlPoints;	// 0x361f52c5
- (id)initWithTimingFunction:(id)timingFunction;	// 0x361f53bd
- (double)evaluatAtTime:(double)time;	// 0x361f59a9
- (double)evaluate_inverseAtTime:(double)time;	// 0x361f59f5
- (double)sample_x:(double)x;	// 0x361f5599
- (double)sample_x_derivative:(double)derivative;	// 0x361f5641
- (double)sample_y:(double)y;	// 0x361f55ed
- (double)sample_y_derivative:(double)derivative;	// 0x361f569d
- (double)solve_x:(double)x epsilon:(double)epsilon;	// 0x361f56f9
- (double)solve_y:(double)y epsilon:(double)epsilon;	// 0x361f5851
@end
