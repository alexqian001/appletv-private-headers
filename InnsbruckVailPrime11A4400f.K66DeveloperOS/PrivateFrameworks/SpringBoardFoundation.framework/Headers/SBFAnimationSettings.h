/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import "SpringBoardFoundation-Structs.h"
#import "SBFAnimationCurveSettings.h"


@interface SBFAnimationSettings : SBFAnimationCurveSettings {
	int _animationType;	// 56 = 0x38
	float _mass;	// 60 = 0x3c
	float _stiffness;	// 64 = 0x40
	float _damping;	// 68 = 0x44
	float _epsilon;	// 72 = 0x48
	double _delay;	// 76 = 0x4c
	double _duration;	// 84 = 0x54
	double _calculatedDuration;	// 92 = 0x5c
}
@property(assign, nonatomic) int animationType;	// G=0x32757379; S=0x32757389; @synthesize=_animationType
@property(assign, nonatomic) double calculatedDuration;	// G=0x32757471; S=0x32757489; @synthesize=_calculatedDuration
@property(assign, nonatomic) float damping;	// G=0x32757431; S=0x32757441; @synthesize=_damping
@property(assign, nonatomic) double delay;	// G=0x32757399; S=0x327573b1; @synthesize=_delay
@property(assign, nonatomic) double duration;	// G=0x327573c5; S=0x327573dd; @synthesize=_duration
@property(assign, nonatomic) float epsilon;	// G=0x32757451; S=0x32757461; @synthesize=_epsilon
@property(assign, nonatomic) float mass;	// G=0x327573f1; S=0x32757401; @synthesize=_mass
@property(assign, nonatomic) float stiffness;	// G=0x32757411; S=0x32757421; @synthesize=_stiffness
+ (id)_moduleWithSectionTitle:(id)sectionTitle;	// 0x32756dbd
+ (id)_moduleWithSectionTitle:(id)sectionTitle delay:(BOOL)delay;	// 0x32756dd1
+ (id)settingsControllerModule;	// 0x32756da1
// declared property getter: - (int)animationType;	// 0x32757379
// declared property getter: - (double)calculatedDuration;	// 0x32757471
// declared property getter: - (float)damping;	// 0x32757431
// declared property getter: - (double)delay;	// 0x32757399
// declared property getter: - (double)duration;	// 0x327573c5
// declared property getter: - (float)epsilon;	// 0x32757451
// declared property getter: - (float)mass;	// 0x327573f1
// declared property setter: - (void)setAnimationType:(int)type;	// 0x32757389
// declared property setter: - (void)setCalculatedDuration:(double)duration;	// 0x32757489
// declared property setter: - (void)setDamping:(float)damping;	// 0x32757441
- (void)setDefaultValues;	// 0x32756cd1
// declared property setter: - (void)setDelay:(double)delay;	// 0x327573b1
// declared property setter: - (void)setDuration:(double)duration;	// 0x327573dd
// declared property setter: - (void)setEpsilon:(float)epsilon;	// 0x32757461
// declared property setter: - (void)setMass:(float)mass;	// 0x32757401
// declared property setter: - (void)setStiffness:(float)stiffness;	// 0x32757421
// declared property getter: - (float)stiffness;	// 0x32757411
@end

