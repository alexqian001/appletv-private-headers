/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectWatercolorPanel : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x30a72509
- (void)_cleanup;	// 0x30a72575
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a73e09
- (int)_maxLinesForTextElement:(id)textElement;	// 0x30a73e05
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x30a73dd1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x30a73bc9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x30a73d3d
- (BOOL)isLoadedForTime:(double)time;	// 0x30a725a1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a72625
- (void)renderEffect2AtTime:(double)time isSquare:(BOOL)square inContext:(id)context withArguments:(id)arguments;	// 0x30a7273d
- (void)renderEffect3AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a72fed
- (void)renderEffectSubtitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30a734fd
@end
