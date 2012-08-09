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
@property(retain, nonatomic) MRAction *action;	// G=0x362f897d; S=0x362f883d; @synthesize=_action
@property(readonly, assign) NSDictionary *animationAttributes;	// G=0x362f89e5; @synthesize=_animationAttributes
@property(readonly, assign) BOOL isArmed;	// G=0x362f88e1; 
@property(assign) float lastValue;	// G=0x362f89b9; S=0x362f89cd; @synthesize=_lastValue
@property(assign) float startValue;	// G=0x362f898d; S=0x362f89a1; @synthesize=_startValue
- (id)initWithAction:(id)action;	// 0x362f874d
// declared property getter: - (id)action;	// 0x362f897d
// declared property getter: - (id)animationAttributes;	// 0x362f89e5
- (void)dealloc;	// 0x362f87c5
- (void)disarm;	// 0x362f890d
// declared property getter: - (BOOL)isArmed;	// 0x362f88e1
// declared property getter: - (float)lastValue;	// 0x362f89b9
- (float)rearmIfNeededWithDefaultValue:(float)defaultValue;	// 0x362f8925
// declared property setter: - (void)setAction:(id)action;	// 0x362f883d
// declared property setter: - (void)setLastValue:(float)value;	// 0x362f89cd
// declared property setter: - (void)setStartValue:(float)value;	// 0x362f89a1
// declared property getter: - (float)startValue;	// 0x362f898d
@end
