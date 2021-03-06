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
@property(copy) NSArray *biasValues;	// G=0x329d2425; S=0x329d243d; 
@property(copy) NSString *calculationMode;	// G=0x329356dd; S=0x32928dd5; 
@property(copy) NSArray *continuityValues;	// G=0x329d23f5; S=0x329d240d; 
@property(copy) NSArray *keyTimes;	// G=0x32935795; S=0x32948615; 
@property(assign) CGPathRef path;	// G=0x32935755; S=0x329d15a5; 
@property(copy) NSString *rotationMode;	// G=0x329357c5; S=0x329d2455; 
@property(copy) NSArray *tensionValues;	// G=0x329d23c5; S=0x329d23dd; 
@property(copy) NSArray *timingFunctions;	// G=0x329357ad; S=0x329d158d; 
@property(copy) NSArray *values;	// G=0x329352b5; S=0x32928dbd; 
- (void)CA_prepareRenderValue;	// 0x32935245
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x329352cd
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x32935359
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x329d15c1
// declared property getter: - (id)biasValues;	// 0x329d2425
// declared property getter: - (id)calculationMode;	// 0x329356dd
// declared property getter: - (id)continuityValues;	// 0x329d23f5
// declared property getter: - (id)keyTimes;	// 0x32935795
// declared property getter: - (CGPathRef)path;	// 0x32935755
// declared property getter: - (id)rotationMode;	// 0x329357c5
// declared property setter: - (void)setBiasValues:(id)values;	// 0x329d243d
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x32928dd5
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x329d240d
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x32948615
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x329d15a5
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x329d2455
// declared property setter: - (void)setTensionValues:(id)values;	// 0x329d23dd
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x329d158d
// declared property setter: - (void)setValues:(id)values;	// 0x32928dbd
// declared property getter: - (id)tensionValues;	// 0x329d23c5
// declared property getter: - (id)timingFunctions;	// 0x329357ad
// declared property getter: - (id)values;	// 0x329352b5
@end

