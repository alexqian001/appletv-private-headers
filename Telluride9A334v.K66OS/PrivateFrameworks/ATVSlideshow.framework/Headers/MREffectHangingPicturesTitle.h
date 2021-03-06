/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRImage, MRTextRenderer, MRImageProvider;

@interface MREffectHangingPicturesTitle : MREffect {
	MRImageProvider *mRopeImageProvider;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	CGSize mTextSize;	// 120 = 0x78
	CGSize mEditedTextSize;	// 128 = 0x80
	MRCroppingSprite *mSprite;	// 136 = 0x88
	float mMatrix[16];	// 140 = 0x8c
	MRImage *mTextImage;	// 204 = 0xcc
}
+ (void)initialize;	// 0x32ef375d
- (id)initWithEffectID:(id)effectID;	// 0x32ef37d9
- (void)_cleanup;	// 0x32ef3981
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32ef3d45
- (int)_maxLinesForTextElement:(id)textElement;	// 0x32ef412d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x32ef40ed
- (void)_unload;	// 0x32ef4011
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x32ef3c85
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x32ef3cfd
- (BOOL)isLoadedForTime:(double)time;	// 0x32ef39e9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32ef3aa1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32ef3c81
@end

