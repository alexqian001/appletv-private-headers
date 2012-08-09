/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRTextRenderer, MRCroppingSprite, MRImage;

@interface MREffectHangingPicturesTitle : MREffect {
	MRImageProvider *mRopeImageProvider;	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 120 = 0x78
	CGSize mTextSize;	// 124 = 0x7c
	CGSize mEditedTextSize;	// 132 = 0x84
	MRCroppingSprite *mSprite;	// 140 = 0x8c
	float mMatrix[16];	// 144 = 0x90
	MRImage *mTextImage;	// 208 = 0xd0
}
+ (void)initialize;	// 0x36248d11
- (id)initWithEffectID:(id)effectID;	// 0x36248d8d
- (void)_cleanup;	// 0x36248f29
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x36249329
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3624976d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3624972d
- (void)_unload;	// 0x36249659
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x36249225
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x362492bd
- (BOOL)isLoadedForTime:(double)time;	// 0x36248f8d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x36249045
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x36249221
@end
