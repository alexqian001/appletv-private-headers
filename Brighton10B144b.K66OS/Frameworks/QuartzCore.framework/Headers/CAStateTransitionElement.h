/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class CAAnimation, CALayer, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding> {
	CALayer *_target;	// 4 = 0x4
	CAAnimation *_animation;	// 8 = 0x8
	NSString *_key;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
}
@property(retain, nonatomic) CAAnimation *animation;	// G=0x329593e5; S=0x329593f5; @synthesize=_animation
@property(assign, nonatomic) double beginTime;	// G=0x32958ff1; S=0x32959029; 
@property(assign, nonatomic) double duration;	// G=0x32959049; S=0x32959081; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32959429; S=0x32959441; @synthesize=_enabled
@property(copy, nonatomic) NSString *key;	// G=0x32959405; S=0x32959419; @synthesize=_key
@property(assign, nonatomic) CALayer *target;	// G=0x329593c5; S=0x329593d5; @synthesize=_target
- (id)init;	// 0x32958f49
- (id)initWithCoder:(id)coder;	// 0x32959165
// declared property getter: - (id)animation;	// 0x329593e5
// declared property getter: - (double)beginTime;	// 0x32958ff1
- (id)copyWithZone:(NSZone *)zone;	// 0x32959289
- (void)dealloc;	// 0x32958f89
- (id)debugDescription;	// 0x32959341
// declared property getter: - (double)duration;	// 0x32959049
- (void)encodeWithCoder:(id)coder;	// 0x329590a1
// declared property getter: - (BOOL)isEnabled;	// 0x32959429
// declared property getter: - (id)key;	// 0x32959405
// declared property setter: - (void)setAnimation:(id)animation;	// 0x329593f5
// declared property setter: - (void)setBeginTime:(double)time;	// 0x32959029
// declared property setter: - (void)setDuration:(double)duration;	// 0x32959081
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32959441
// declared property setter: - (void)setKey:(id)key;	// 0x32959419
// declared property setter: - (void)setTarget:(id)target;	// 0x329593d5
// declared property getter: - (id)target;	// 0x329593c5
@end

