/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class MRCAMLBezierData, NSMutableArray, NSDictionary, MRImage, NSMutableDictionary;

@interface MREffectHyperGrid : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableArray *mLayouts;	// 120 = 0x78
	int mSlideStartIndex;	// 124 = 0x7c
	int mIterationStartIndex;	// 128 = 0x80
	int mLastSlideIndex;	// 132 = 0x84
	MRImage *mSavedImage;	// 136 = 0x88
	int mLastIteration;	// 140 = 0x8c
	MRCAMLBezierData *mCurves[2];	// 144 = 0x90
	MRCAMLBezierData *mBreakCurves[2];	// 152 = 0x98
	BOOL mNeedsToRecalculateIterations;	// 160 = 0xa0
	float mAspectRatio;	// 164 = 0xa4
	NSDictionary *mBreakInformation;	// 168 = 0xa8
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x3356d871
+ (BOOL)hasCustomTiming;	// 0x3356d869
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x3356d931
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x3356d935
- (id)initWithEffectID:(id)effectID;	// 0x3356d4a5
- (void)_applyTimingToSlideProviders:(int)slideProviders;	// 0x3356dd75
- (float)_aspectRatioForLayout:(int)layout atIndex:(int)index inAspectRatio:(float)aspectRatio;	// 0x33570d21
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x3356ed19
- (double)_calculateMainDuration;	// 0x3356e8f1
- (void)_cleanup;	// 0x3356d6f5
- (void)_drawSlideAtIndex:(int)index size:(CGSize)size position:(CGPoint)position atTime:(double)time iterationTime:(double)time5 iterationDuration:(double)duration inContext:(id)context withArguments:(id)arguments;	// 0x33572151
- (int)_findLandscape:(BOOL)landscape inIndicies:(id)indicies withSlideInformation:(id)slideInformation;	// 0x3356edb5
- (int)_findLandscape:(BOOL)landscape inIndicies:(id)indicies withSlideInformation:(id)slideInformation iterations:(id)iterations neededAspectRatio:(float)ratio;	// 0x3356ede9
- (int)_iterationForTime:(double)time;	// 0x33571209
- (BOOL)_layoutAtIndexHasBreak:(int)indexHasBreak;	// 0x335711b5
- (int)_layoutCount:(int)count;	// 0x3356dd51
- (int)_lowestDisplayIteration;	// 0x3356daed
- (void)_renderIteration:(id)iteration atTime:(double)time relativeTime:(double)time3 inContext:(id)context withArguments:(id)arguments;	// 0x3357185d
- (void)_setupLayoutsWithSlideInfo:(id)slideInfo aspectRatio:(float)ratio;	// 0x3356f0d1
- (CGSize)_sizeForLayout:(int)layout atIndex:(int)index;	// 0x335720ad
- (id)_slideProviderWithAspectRatio:(BOOL)aspectRatio nearest:(int)nearest actual:(int *)actual;	// 0x335726f5
- (void)_unload;	// 0x33572921
- (void)_updateSizeScripts:(int)scripts;	// 0x3356e1e9
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x3356dcd9
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x3356eba9
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x3356ed01
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3357278d
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x3356d979
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x335728d9
- (id)layoutForSlideIndex:(int)slideIndex forIterations:(id)iterations atIndex:(int *)index;	// 0x3356ef65
- (double)lowestDisplayTime;	// 0x3356eb91
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33570df1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33571339
- (void)setAttributes:(id)attributes;	// 0x3356d7cd
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x3356dbc1
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x3356ea11
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x3356e7b9
- (BOOL)slideIndex:(int)index isInIteration:(id)iteration;	// 0x3356f081
- (BOOL)supportsDynamicExpansion;	// 0x3356d939
- (int)typicalSlideBatchSize;	// 0x3356d93d
@end
