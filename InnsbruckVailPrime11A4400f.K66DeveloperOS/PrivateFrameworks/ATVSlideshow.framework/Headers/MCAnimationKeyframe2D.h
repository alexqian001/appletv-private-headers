/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MCAnimationKeyframe2D : MCAnimationKeyframe {
	CGPoint mPoint;	// 32 = 0x20
	CGPoint mC1;	// 40 = 0x28
	CGPoint mC2;	// 48 = 0x30
}
@property(assign, nonatomic) CGPoint c1;	// G=0x2fcbc76d; S=0x2fcbc4ad; @synthesize=mC1
@property(assign, nonatomic) CGPoint c2;	// G=0x2fcbc785; S=0x2fcbc555; @synthesize=mC2
@property(assign, nonatomic) CGPoint point;	// G=0x2fcbc755; S=0x2fcbc405; @synthesize=mPoint
+ (id)keyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x2fcbbf39
+ (id)keyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x2fcbbf65
- (id)initWithImprint:(id)imprint;	// 0x2fcbc01d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x2fcbc6dd
// declared property getter: - (CGPoint)c1;	// 0x2fcbc76d
// declared property getter: - (CGPoint)c2;	// 0x2fcbc785
- (id)description;	// 0x2fcbc5fd
- (id)imprint;	// 0x2fcbc1d5
// declared property getter: - (CGPoint)point;	// 0x2fcbc755
// declared property setter: - (void)setC1:(CGPoint)a1;	// 0x2fcbc4ad
// declared property setter: - (void)setC2:(CGPoint)a2;	// 0x2fcbc555
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x2fcbc405
@end

