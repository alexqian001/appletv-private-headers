/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableArray, MRImageProvider, MRTextRenderer, NSMutableDictionary;

@interface MREffectReflectionsTitle : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	BOOL mFlipped;	// 116 = 0x74
	BOOL mSpeedUpRight;	// 117 = 0x75
	double mImageMain;	// 120 = 0x78
	double mTextMain;	// 128 = 0x80
	MRTextRenderer *mTextRenderer;	// 136 = 0x88
	MRTextRenderer *mWordRenderer;	// 140 = 0x8c
	NSMutableArray *mWordImages;	// 144 = 0x90
	NSMutableArray *mWordFrames;	// 148 = 0x94
	NSMutableArray *mCachedRenderedWords;	// 152 = 0x98
	float mTextYOffset;	// 156 = 0x9c
	CGSize mTextSize;	// 160 = 0xa0
	CGSize mTextImageSize;	// 168 = 0xa8
	MRImageProvider *mMaskProvider;	// 176 = 0xb0
	MRImageProvider *mShadingProvider;	// 180 = 0xb4
	MRImageProvider *mGroundShadowCenterProvider;	// 184 = 0xb8
	MRImageProvider *mGroundShadowLeftProvider;	// 188 = 0xbc
	MRImageProvider *mGroundShadowRightProvider;	// 192 = 0xc0
}
- (id)initWithEffectID:(id)effectID;	// 0x33d3dc61
- (void)_cleanup;	// 0x33d3e109
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d40239
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33d3e549
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33d3e531
- (void)_unload;	// 0x33d407fd
- (void)cacheRenderedWords;	// 0x33d40615
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d400b9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d401f9
- (BOOL)isLoadedForTime:(double)time;	// 0x33d3e54d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d3e455
- (void)render1SlideAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale tilt:(int)tilt phaseOutType:(int)type direction:(int)direction;	// 0x33d3f55d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d3e661
- (void)renderKey:(id)key size:(CGSize)size position:(CGPoint)position yRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments light:(BOOL)light shadow:(BOOL)shadow;	// 0x33d3fa75
- (void)renderTextAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x33d3eda9
- (void)setPixelSize:(CGSize)size;	// 0x33d3e37d
@end
