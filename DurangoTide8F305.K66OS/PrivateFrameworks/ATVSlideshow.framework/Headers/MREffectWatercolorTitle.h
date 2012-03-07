/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectWatercolorTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	MRCroppingSprite *mTextSprite;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x332cccf9
- (void)_cleanup;	// 0x332ccd51
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332cd275
- (int)_maxLinesForTextElement:(id)textElement;	// 0x332cd271
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x332cd245
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x332ccdd1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x332cce15
- (BOOL)isLoadedForTime:(double)time;	// 0x332cce95
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332ccf05
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332ccf45
- (void)setPixelSize:(CGSize)size;	// 0x332cce61
@end
