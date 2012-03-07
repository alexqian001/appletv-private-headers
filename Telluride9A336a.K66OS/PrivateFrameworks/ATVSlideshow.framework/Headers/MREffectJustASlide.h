/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	BOOL mForceIsOpaque;	// 116 = 0x74
}
- (id)init;	// 0x3430d131
- (void)_cleanup;	// 0x3430d195
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3430dc35
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3430dc85
- (BOOL)isAlphaFriendly;	// 0x3430d2f5
- (BOOL)isNative3D;	// 0x3430d1c1
- (BOOL)isOpaque;	// 0x3430d251
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3430dbd9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3430d379
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3430d3f5
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3430db0d
@end
