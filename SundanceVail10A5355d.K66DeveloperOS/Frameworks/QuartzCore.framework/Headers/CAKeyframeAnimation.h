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
@property(copy) NSArray *biasValues;	// G=0x365b7bad; S=0x365b7bc5; 
@property(copy) NSString *calculationMode;	// G=0x3651b89d; S=0x3651b72d; 
@property(copy) NSArray *continuityValues;	// G=0x365b7b7d; S=0x365b7b95; 
@property(copy) NSArray *keyTimes;	// G=0x3651b92d; S=0x36537d3d; 
@property(assign) CGPathRef path;	// G=0x3651b915; S=0x36537d6d; 
@property(copy) NSString *rotationMode;	// G=0x3651b95d; S=0x365b7bdd; 
@property(copy) NSArray *tensionValues;	// G=0x365b7b4d; S=0x365b7b65; 
@property(copy) NSArray *timingFunctions;	// G=0x3651b945; S=0x36537d55; 
@property(copy) NSArray *values;	// G=0x3651b7f5; S=0x3651b715; 
- (void)CA_prepareRenderValue;	// 0x3651b785
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x3651b80d
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x365b69c9
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x365b6d49
// declared property getter: - (id)biasValues;	// 0x365b7bad
// declared property getter: - (id)calculationMode;	// 0x3651b89d
// declared property getter: - (id)continuityValues;	// 0x365b7b7d
// declared property getter: - (id)keyTimes;	// 0x3651b92d
// declared property getter: - (CGPathRef)path;	// 0x3651b915
// declared property getter: - (id)rotationMode;	// 0x3651b95d
// declared property setter: - (void)setBiasValues:(id)values;	// 0x365b7bc5
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x3651b72d
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x365b7b95
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x36537d3d
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x36537d6d
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x365b7bdd
// declared property setter: - (void)setTensionValues:(id)values;	// 0x365b7b65
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x36537d55
// declared property setter: - (void)setValues:(id)values;	// 0x3651b715
// declared property getter: - (id)tensionValues;	// 0x365b7b4d
// declared property getter: - (id)timingFunctions;	// 0x3651b945
// declared property getter: - (id)values;	// 0x3651b7f5
@end

