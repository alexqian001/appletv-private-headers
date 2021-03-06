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
+ (void)loadStyleManagerWithPaths:(id)paths;	// 0x33984bf1
+ (void)releaseSharedManager;	// 0x33983049
+ (id)sharedManager;	// 0x33982f55
- (id)initWithPaths:(id)paths;	// 0x33986479
- (id)_containerDescriptionForLayerAtIndex:(int)index ofStyle:(id)style;	// 0x33986eb1
- (id)allStyleIDs;	// 0x339831a5
- (double)allowUserDefinedDurationForStyleID:(id)styleID;	// 0x339863d1
- (int)antialiasLevelForStyleID:(id)styleID;	// 0x33984fc5
- (BOOL)authorOnAspectRatioChangeForStyleID:(id)styleID;	// 0x33984931
- (CGColorRef)backgroundCGColorForStyleID:(id)styleID;	// 0x33983aa1
- (id)backgroundColorLayersForStyleID:(id)styleID;	// 0x339861e5
- (double)basePeriodForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x33986005
- (BOOL)canCancelAuthoringForStyleID:(id)styleID;	// 0x33986291
- (void)dealloc;	// 0x33983115
- (int)defaultAutoKenBurnsLevelForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x33985b4d
- (int)defaultAutoKenBurnsLevelForZIndex:(int)zindex ofStyle:(id)style;	// 0x33985861
- (float)defaultAutoKenBurnsLikelihoodForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x3398599d
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x33985701
- (id)defaultColorSchemeForStyleID:(id)styleID;	// 0x339848dd
- (double)defaultEffectDurationForLayer:(int)layer ofStyle:(id)style;	// 0x33985ee5
- (float)defaultFilterLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x339855b5
- (id)defaultPositionForZIndex:(int)zindex ofStyle:(id)style;	// 0x33985499
- (CGSize)defaultSizeForZIndex:(int)zindex ofStyle:(id)style;	// 0x3398526d
- (double)defaultTransitionDurationForLayer:(int)layer ofStyle:(id)style withAspectRatio:(float)aspectRatio;	// 0x33985f4d
- (double)delayFaceDetectionForStyleID:(id)styleID;	// 0x33983299
- (id)demoDocumentWithImages:(id)images properties:(id)properties count:(int)count options:(id)options;	// 0x33984c99
- (id)descriptionForStyleID:(id)styleID;	// 0x339831f1
- (float)displayDurationFactorForEffectID:(id)effectID inStyleID:(id)styleID;	// 0x33985169
- (float)displayDurationFactorForStyleID:(id)styleID;	// 0x33985015
- (int)dynamicBatchSizeForStyleID:(id)styleID;	// 0x33983399
- (BOOL)easeKenBurnsForStyleID:(id)styleID;	// 0x33985225
- (id)effectIDsForStyleID:(id)styleID;	// 0x33983b79
- (id)effectPresetIDsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x33985ced
- (id)effectPresetIDsForStyleID:(id)styleID;	// 0x33983839
- (id)effectPresetsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x3398395d
- (id)framesForStyleID:(id)styleID;	// 0x33983715
- (BOOL)hasImagesForLayerID:(id)layerID forStyleID:(id)styleID;	// 0x339862d1
- (int)indexOfMainLayerForStyleID:(id)styleID;	// 0x33984041
- (int)indexOfTitleEffectLayerForStyleID:(id)styleID;	// 0x339840c5
- (id)interstitialEffectLayoutForStyleID:(id)styleID;	// 0x339841f1
- (id)interstitialEffectLayoutsForStyleID:(id)styleID;	// 0x339841bd
- (BOOL)isDynamicForStyleID:(id)styleID;	// 0x33983349
- (int)kenBurnsOffsetTypeForStyleID:(id)styleID;	// 0x339851d9
- (id)layerIDForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x339860d5
- (int)layerIndexForLayerID:(id)layerID ofStyle:(id)style;	// 0x33986055
- (id)localizedNameForStyleID:(id)styleID;	// 0x339833e9
- (id)localizedNameForStyleID:(id)styleID withLanguage:(id)language;	// 0x339834c5
- (BOOL)machineMeetsRequirementsForStyleID:(id)styleID;	// 0x33984871
- (int)mediaPresentationOrderForStyleID:(id)styleID;	// 0x33984c4d
- (double)minimumDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x33984611
- (double)minimumEffectDurationForStyleID:(id)styleID;	// 0x339846e1
- (double)navigationIncrementForStyleID:(id)styleID;	// 0x33986361
- (BOOL)needsFaceDetectionForStyleID:(id)styleID;	// 0x33983249
- (BOOL)needsReauthorOnAspectRatioChange:(id)change;	// 0x33984b39
- (BOOL)needsStyleUpdateOnSlideChangeForStyleID:(id)styleID;	// 0x33984ad1
- (BOOL)needsTimingUpdateOnSlideChangeForStyleID:(id)styleID;	// 0x33984a69
- (BOOL)needsToBeLiveForStyleID:(id)styleID;	// 0x339832f9
- (int)numberOfSlidesToPreloadForStyleID:(id)styleID;	// 0x339849fd
- (double)posterTimeForStyleID:(id)styleID;	// 0x33984ba1
- (id)previewPathForStyleID:(id)styleID;	// 0x339836a5
- (int)regionOfInterestPickModeForStyleID:(id)styleID;	// 0x3398624d
- (void)reloadBundles;	// 0x339865d1
- (int)reorderModeForStyleID:(id)styleID;	// 0x3398542d
- (id)resourcePathForStyleID:(id)styleID;	// 0x339836dd
- (double)shortestDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x339844e9
- (double)shortestEffectDurationForStyleID:(id)styleID;	// 0x339842c9
- (id)songPathsForStyleID:(id)styleID;	// 0x33983fed
- (int)subtitleOrderForStyleID:(id)styleID;	// 0x33984991
- (BOOL)supportsRandomTransitionForStyleID:(id)styleID;	// 0x33984875
- (id)thumbnailPathForStyleID:(id)styleID;	// 0x33983595
- (id)thumbnailPathForStyleID:(id)styleID scaleFactor:(float)factor;	// 0x339835cd
- (id)titleEffectLayoutForStyleID:(id)styleID;	// 0x3398425d
- (id)titleEffectLayoutsForStyleID:(id)styleID;	// 0x33984189
- (id)transitionsForStyleID:(id)styleID;	// 0x33983db9
- (id)versionOfStyleID:(id)styleID;	// 0x33983211
@end

