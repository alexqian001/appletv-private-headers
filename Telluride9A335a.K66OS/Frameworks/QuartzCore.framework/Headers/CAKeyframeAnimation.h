/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAPropertyAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, NSArray;

@interface CAKeyframeAnimation : CAPropertyAnimation {
}
@property(copy) NSArray *biasValues;	// G=0x336278b9; S=0x336278a1; 
@property(copy) NSString *calculationMode;	// G=0x335a3d71; S=0x335a3739; 
@property(copy) NSArray *continuityValues;	// G=0x336278e9; S=0x336278d1; 
@property(copy) NSArray *keyTimes;	// G=0x335a3e1d; S=0x335c37c5; 
@property(assign) CGPathRef path;	// G=0x335a3ddd; S=0x335c37f5; 
@property(copy) NSString *rotationMode;	// G=0x335a3e4d; S=0x33627889; 
@property(copy) NSArray *tensionValues;	// G=0x33627919; S=0x33627901; 
@property(copy) NSArray *timingFunctions;	// G=0x335a3e35; S=0x335c37dd; 
@property(copy) NSArray *values;	// G=0x335a37ed; S=0x335a3721; 
- (void)CA_prepareRenderValue;	// 0x335a3785
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x335a3805
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x33627931
// declared property getter: - (id)biasValues;	// 0x336278b9
// declared property getter: - (id)calculationMode;	// 0x335a3d71
// declared property getter: - (id)continuityValues;	// 0x336278e9
// declared property getter: - (id)keyTimes;	// 0x335a3e1d
// declared property getter: - (CGPathRef)path;	// 0x335a3ddd
// declared property getter: - (id)rotationMode;	// 0x335a3e4d
// declared property setter: - (void)setBiasValues:(id)values;	// 0x336278a1
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x335a3739
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x336278d1
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x335c37c5
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x335c37f5
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x33627889
// declared property setter: - (void)setTensionValues:(id)values;	// 0x33627901
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x335c37dd
// declared property setter: - (void)setValues:(id)values;	// 0x335a3721
// declared property getter: - (id)tensionValues;	// 0x33627919
// declared property getter: - (id)timingFunctions;	// 0x335a3e35
// declared property getter: - (id)values;	// 0x335a37ed
@end

