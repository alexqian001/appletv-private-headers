/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSArray;

@interface MPStyleManager : NSObject {
	NSMutableDictionary *mStyles;	// 4 = 0x4
	NSArray *mPaths;	// 8 = 0x8
	NSString *mCurrentLocale;	// 12 = 0xc
}
+ (void)loadStyleManagerWithPaths:(id)paths;	// 0x3331b7a9
+ (void)releaseSharedManager;	// 0x33319c01
+ (id)sharedManager;	// 0x33319b0d
- (id)initWithPaths:(id)paths;	// 0x3331d031
- (id)_containerDescriptionForLayerAtIndex:(int)index ofStyle:(id)style;	// 0x3331da69
- (id)allStyleIDs;	// 0x33319d5d
- (double)allowUserDefinedDurationForStyleID:(id)styleID;	// 0x3331cf89
- (int)antialiasLevelForStyleID:(id)styleID;	// 0x3331bb7d
- (BOOL)authorOnAspectRatioChangeForStyleID:(id)styleID;	// 0x3331b4e9
- (CGColorRef)backgroundCGColorForStyleID:(id)styleID;	// 0x3331a659
- (id)backgroundColorLayersForStyleID:(id)styleID;	// 0x3331cd9d
- (double)basePeriodForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x3331cbbd
- (BOOL)canCancelAuthoringForStyleID:(id)styleID;	// 0x3331ce49
- (void)dealloc;	// 0x33319ccd
- (int)defaultAutoKenBurnsLevelForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x3331c705
- (int)defaultAutoKenBurnsLevelForZIndex:(int)zindex ofStyle:(id)style;	// 0x3331c419
- (float)defaultAutoKenBurnsLikelihoodForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x3331c555
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x3331c2b9
- (id)defaultColorSchemeForStyleID:(id)styleID;	// 0x3331b495
- (double)defaultEffectDurationForLayer:(int)layer ofStyle:(id)style;	// 0x3331ca9d
- (float)defaultFilterLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x3331c16d
- (id)defaultPositionForZIndex:(int)zindex ofStyle:(id)style;	// 0x3331c051
- (CGSize)defaultSizeForZIndex:(int)zindex ofStyle:(id)style;	// 0x3331be25
- (double)defaultTransitionDurationForLayer:(int)layer ofStyle:(id)style withAspectRatio:(float)aspectRatio;	// 0x3331cb05
- (double)delayFaceDetectionForStyleID:(id)styleID;	// 0x33319e51
- (id)demoDocumentWithImages:(id)images properties:(id)properties count:(int)count options:(id)options;	// 0x3331b851
- (id)descriptionForStyleID:(id)styleID;	// 0x33319da9
- (float)displayDurationFactorForEffectID:(id)effectID inStyleID:(id)styleID;	// 0x3331bd21
- (float)displayDurationFactorForStyleID:(id)styleID;	// 0x3331bbcd
- (int)dynamicBatchSizeForStyleID:(id)styleID;	// 0x33319f51
- (BOOL)easeKenBurnsForStyleID:(id)styleID;	// 0x3331bddd
- (id)effectIDsForStyleID:(id)styleID;	// 0x3331a731
- (id)effectPresetIDsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x3331c8a5
- (id)effectPresetIDsForStyleID:(id)styleID;	// 0x3331a3f1
- (id)effectPresetsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x3331a515
- (id)framesForStyleID:(id)styleID;	// 0x3331a2cd
- (BOOL)hasImagesForLayerID:(id)layerID forStyleID:(id)styleID;	// 0x3331ce89
- (int)indexOfMainLayerForStyleID:(id)styleID;	// 0x3331abf9
- (int)indexOfTitleEffectLayerForStyleID:(id)styleID;	// 0x3331ac7d
- (id)interstitialEffectLayoutForStyleID:(id)styleID;	// 0x3331ada9
- (id)interstitialEffectLayoutsForStyleID:(id)styleID;	// 0x3331ad75
- (BOOL)isDynamicForStyleID:(id)styleID;	// 0x33319f01
- (int)kenBurnsOffsetTypeForStyleID:(id)styleID;	// 0x3331bd91
- (id)layerIDForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x3331cc8d
- (int)layerIndexForLayerID:(id)layerID ofStyle:(id)style;	// 0x3331cc0d
- (id)localizedNameForStyleID:(id)styleID;	// 0x33319fa1
- (id)localizedNameForStyleID:(id)styleID withLanguage:(id)language;	// 0x3331a07d
- (BOOL)machineMeetsRequirementsForStyleID:(id)styleID;	// 0x3331b429
- (int)mediaPresentationOrderForStyleID:(id)styleID;	// 0x3331b805
- (double)minimumDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x3331b1c9
- (double)minimumEffectDurationForStyleID:(id)styleID;	// 0x3331b299
- (double)navigationIncrementForStyleID:(id)styleID;	// 0x3331cf19
- (BOOL)needsFaceDetectionForStyleID:(id)styleID;	// 0x33319e01
- (BOOL)needsReauthorOnAspectRatioChange:(id)change;	// 0x3331b6f1
- (BOOL)needsStyleUpdateOnSlideChangeForStyleID:(id)styleID;	// 0x3331b689
- (BOOL)needsTimingUpdateOnSlideChangeForStyleID:(id)styleID;	// 0x3331b621
- (BOOL)needsToBeLiveForStyleID:(id)styleID;	// 0x33319eb1
- (int)numberOfSlidesToPreloadForStyleID:(id)styleID;	// 0x3331b5b5
- (double)posterTimeForStyleID:(id)styleID;	// 0x3331b759
- (id)previewPathForStyleID:(id)styleID;	// 0x3331a25d
- (int)regionOfInterestPickModeForStyleID:(id)styleID;	// 0x3331ce05
- (void)reloadBundles;	// 0x3331d189
- (int)reorderModeForStyleID:(id)styleID;	// 0x3331bfe5
- (id)resourcePathForStyleID:(id)styleID;	// 0x3331a295
- (double)shortestDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x3331b0a1
- (double)shortestEffectDurationForStyleID:(id)styleID;	// 0x3331ae81
- (id)songPathsForStyleID:(id)styleID;	// 0x3331aba5
- (int)subtitleOrderForStyleID:(id)styleID;	// 0x3331b549
- (BOOL)supportsRandomTransitionForStyleID:(id)styleID;	// 0x3331b42d
- (id)thumbnailPathForStyleID:(id)styleID;	// 0x3331a14d
- (id)thumbnailPathForStyleID:(id)styleID scaleFactor:(float)factor;	// 0x3331a185
- (id)titleEffectLayoutForStyleID:(id)styleID;	// 0x3331ae15
- (id)titleEffectLayoutsForStyleID:(id)styleID;	// 0x3331ad41
- (id)transitionsForStyleID:(id)styleID;	// 0x3331a971
- (id)versionOfStyleID:(id)styleID;	// 0x33319dc9
@end

