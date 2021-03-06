/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRImage, MRTextRenderer, MRImageProvider;

@interface MREffectShatterTitle : MREffect {
	MRImageProvider *mMasks[9];	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 148 = 0x94
	MRImage *mTextImage;	// 152 = 0x98
	MRCroppingSprite *mTextSprite;	// 156 = 0x9c
}
- (id)initWithEffectID:(id)effectID;	// 0x31b31259
- (void)_cleanup;	// 0x31b31431
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b31f65
- (int)_maxLinesForTextElement:(id)textElement;	// 0x31b32205
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x31b321d1
- (void)_unload;	// 0x31b32179
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x31b3153d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x31b3158d
- (BOOL)isLoadedForTime:(double)time;	// 0x31b315e5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b316bd
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b31745
- (void)setPixelSize:(CGSize)size;	// 0x31b314c9
@end

