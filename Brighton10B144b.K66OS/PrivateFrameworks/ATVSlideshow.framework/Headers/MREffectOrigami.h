/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, NSMutableDictionary, MRCAMLBezierData, NSMutableArray, NSArray;

@interface MREffectOrigami : MREffect {
	NSArray *mPatchworkAtBeginning;	// 116 = 0x74
	NSArray *mPatchworkAtEnd;	// 120 = 0x78
	NSMutableDictionary *mSprites;	// 124 = 0x7c
	NSMutableArray *mSpriteKeysWatcher;	// 128 = 0x80
	NSArray *mAnimationTimeBounds;	// 132 = 0x84
	NSMutableArray *mItemInfos;	// 136 = 0x88
	double mDurationStretchFactor;	// 140 = 0x8c
	MRImage *mBackColorImage;	// 148 = 0x94
	float mBackColorForImage[3];	// 152 = 0x98
	float mDescriptionAspectRatio;	// 164 = 0xa4
	float mPixelUnit;	// 168 = 0xa8
	BOOL mIsOrigami2Effect;	// 172 = 0xac
	BOOL mIsHorizontal;	// 173 = 0xad
	BOOL mIsOriginallyHorizontal;	// 174 = 0xae
	MRCAMLBezierData *mBreakCurve;	// 176 = 0xb0
}
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x331a9d41
+ (BOOL)hasCustomTiming;	// 0x331a9d3d
+ (void)initialize;	// 0x331a48d1
- (id)initWithEffectID:(id)effectID;	// 0x331a4995
- (BOOL)_checkPanoramaAbsoluteSizeForImage:(id)image inRect:(CGRect *)rect;	// 0x331acbe1
- (void)_cleanup;	// 0x331a4bbd
- (BOOL)_needsRenderingAtTime:(double)time remainingStillDurationAfter:(double *)after;	// 0x331b8001
- (id)_retainedByUserBackColorImageInContext:(id)context;	// 0x331a9e21
- (void)_setTargetSizeOfImageProviders;	// 0x331a4ccd
- (void)_unload;	// 0x331a4c6d
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x331b8391
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x331aafe9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x331ab1e9
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331b5899
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331aa111
- (void)render1To3DownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331b1b71
- (void)render1To3LeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331b2b69
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x331aa389
- (void)renderBreakAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331acdf9
- (void)renderFallAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331ac1d9
- (void)renderFlipDiagonalAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331b4a29
- (void)renderFlipDownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331af475
- (void)renderFlipLeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331ae09d
- (void)renderFold4LeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331b3b31
- (void)renderFoldDownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331b155d
- (void)renderFoldLeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331b0c49
- (void)renderStillAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331ac501
- (void)renderUnfoldingFlowerAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x331b4f11
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x331ab231
- (void)setPixelSize:(CGSize)size;	// 0x331a7909
@end

