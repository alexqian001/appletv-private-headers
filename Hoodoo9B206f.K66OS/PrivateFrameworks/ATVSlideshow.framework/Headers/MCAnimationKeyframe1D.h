/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframe1D : MCAnimationKeyframe {
	float mValue;	// 32 = 0x20
}
@property(assign, nonatomic) float value;	// G=0x30ad3079; S=0x30ad2f39; @synthesize=mValue
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time;	// 0x30ad2d9d
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x30ad2dc1
- (id)initWithImprint:(id)imprint;	// 0x30ad2e4d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x30ad3029
- (id)description;	// 0x30ad2fbd
- (id)imprint;	// 0x30ad2ebd
// declared property setter: - (void)setValue:(float)value;	// 0x30ad2f39
// declared property getter: - (float)value;	// 0x30ad3079
@end
