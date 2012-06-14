/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, MRAction;

@interface MRAnimationTrigger : NSObject {
	MRAction *_action;	// 4 = 0x4
	float _startValue;	// 8 = 0x8
	float _lastValue;	// 12 = 0xc
	NSDictionary *_animationAttributes;	// 16 = 0x10
}
@property(retain, nonatomic) MRAction *action;	// G=0x32173d79; S=0x32173c39; @synthesize=_action
@property(readonly, assign) NSDictionary *animationAttributes;	// G=0x32173dc9; @synthesize=_animationAttributes
@property(readonly, assign) BOOL isArmed;	// G=0x32173cdd; 
@property(assign) float lastValue;	// G=0x32173da9; S=0x32173db9; @synthesize=_lastValue
@property(assign) float startValue;	// G=0x32173d89; S=0x32173d99; @synthesize=_startValue
- (id)initWithAction:(id)action;	// 0x32173b49
// declared property getter: - (id)action;	// 0x32173d79
// declared property getter: - (id)animationAttributes;	// 0x32173dc9
- (void)dealloc;	// 0x32173bc1
- (void)disarm;	// 0x32173d09
// declared property getter: - (BOOL)isArmed;	// 0x32173cdd
// declared property getter: - (float)lastValue;	// 0x32173da9
- (float)rearmIfNeededWithDefaultValue:(float)defaultValue;	// 0x32173d21
// declared property setter: - (void)setAction:(id)action;	// 0x32173c39
// declared property setter: - (void)setLastValue:(float)value;	// 0x32173db9
// declared property setter: - (void)setStartValue:(float)value;	// 0x32173d99
// declared property getter: - (float)startValue;	// 0x32173d89
@end
