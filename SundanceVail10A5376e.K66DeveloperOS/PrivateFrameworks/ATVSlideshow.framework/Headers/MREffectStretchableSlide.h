/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"


@interface MREffectStretchableSlide : MREffect {
	CGRect mSpriteInnerRect;	// 116 = 0x74
	CGRect mImageInnerRect;	// 132 = 0x84
	BOOL mDontDrawInner;	// 148 = 0x94
}
- (BOOL)isNative3D;	// 0x363b9edd
- (BOOL)isOpaque;	// 0x363b9ee1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x363b9ee5
- (void)setAttributes:(id)attributes;	// 0x363b9c35
@end

