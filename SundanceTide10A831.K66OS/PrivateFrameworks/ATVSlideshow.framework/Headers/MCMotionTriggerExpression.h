/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCMotionTrigger.h"

@class NSString, NSDictionary;

@interface MCMotionTriggerExpression : MCMotionTrigger {
	NSString *_expression;	// 32 = 0x20
	NSDictionary *_attributes;	// 36 = 0x24
}
@property(copy) NSDictionary *attributes;	// G=0x33a60bd5; S=0x33a60be9; @synthesize=_attributes
@property(copy) NSString *expression;	// G=0x33a60bb1; S=0x33a60bc5; @synthesize=_expression
+ (id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key duration:(double)duration andExpression:(id)expression;	// 0x33a608e5
- (id)initWithImprint:(id)imprint;	// 0x33a6092d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33a60ad5
// declared property getter: - (id)attributes;	// 0x33a60bd5
- (void)demolish;	// 0x33a609d1
- (id)description;	// 0x33a60b49
// declared property getter: - (id)expression;	// 0x33a60bb1
- (id)imprint;	// 0x33a60a49
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x33a60be9
// declared property setter: - (void)setExpression:(id)expression;	// 0x33a60bc5
@end
