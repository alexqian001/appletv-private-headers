/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MRAction, NSDictionary;

@interface MRAnimationTrigger : NSObject {
	MRAction *_action;	// 4 = 0x4
	float _startValue;	// 8 = 0x8
	float _lastValue;	// 12 = 0xc
	NSDictionary *_animationAttributes;	// 16 = 0x10
}
@property(retain, nonatomic) MRAction *action;	// G=0x333f40ed; S=0x333f3fad; @synthesize=_action
@property(readonly, assign) NSDictionary *animationAttributes;	// G=0x333f4155; @synthesize=_animationAttributes
@property(readonly, assign) BOOL isArmed;	// G=0x333f4051; 
@property(assign) float lastValue;	// G=0x333f4129; S=0x333f413d; @synthesize=_lastValue
@property(assign) float startValue;	// G=0x333f40fd; S=0x333f4111; @synthesize=_startValue
- (id)initWithAction:(id)action;	// 0x333f3ebd
// declared property getter: - (id)action;	// 0x333f40ed
// declared property getter: - (id)animationAttributes;	// 0x333f4155
- (void)dealloc;	// 0x333f3f35
- (void)disarm;	// 0x333f407d
// declared property getter: - (BOOL)isArmed;	// 0x333f4051
// declared property getter: - (float)lastValue;	// 0x333f4129
- (float)rearmIfNeededWithDefaultValue:(float)defaultValue;	// 0x333f4095
// declared property setter: - (void)setAction:(id)action;	// 0x333f3fad
// declared property setter: - (void)setLastValue:(float)value;	// 0x333f413d
// declared property setter: - (void)setStartValue:(float)value;	// 0x333f4111
// declared property getter: - (float)startValue;	// 0x333f40fd
@end

