/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRImage, MRTextRenderer, NSMutableDictionary;

@interface MREffectSlidingPanels : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	CGContextRef mCachedRenderedText;	// 120 = 0x78
	NSMutableDictionary *mSprites;	// 124 = 0x7c
	MRCroppingSprite *mTextSprite;	// 128 = 0x80
	CGSize mMaxTextSize;	// 132 = 0x84
}
- (id)init;	// 0x33d50705
- (void)_cleanup;	// 0x33d507ad
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d50851
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33d50e35
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33d50e1d
- (void)_unload;	// 0x33d50e6d
- (void)computeAnimationForTime:(double)time direction:(id)direction rect:(CGRect *)rect justification:(CGPoint *)justification;	// 0x33d526f9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d524fd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d52671
- (BOOL)isLoadedForTime:(double)time;	// 0x33d507d5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d50f35
@end

