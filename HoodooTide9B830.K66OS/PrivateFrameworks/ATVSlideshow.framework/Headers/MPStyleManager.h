/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSArray, NSMutableDictionary, NSString;

@interface MPStyleManager : NSObject {
	NSMutableDictionary *mStyles;	// 4 = 0x4
	NSArray *mPaths;	// 8 = 0x8
	NSString *mCurrentLocale;	// 12 = 0xc
}
+ (void)loadStyleManagerWithPaths:(id)paths;	// 0x320a8fa1
+ (void)releaseSharedManager;	// 0x320a77d9
+ (id)sharedManager;	// 0x320a7791
- (id)initWithPaths:(id)paths;	// 0x320aa599
- (id)_containerDescriptionForLayerAtIndex:(int)index ofStyle:(id)style;	// 0x320aafb5
- (id)allStyleIDs;	// 0x320a7899
- (int)antialiasLevelForStyleID:(id)styleID;	// 0x320a93e5
- (BOOL)authorOnAspectRatioChangeForStyleID:(id)styleID;	// 0x320a8e09
- (CGColorRef)backgroundCGColorForStyleID:(id)styleID;	// 0x320a805d
- (id)backgroundColorLayersForStyleID:(id)styleID;	// 0x320aa425
- (double)basePeriodForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x320aa269
- (BOOL)canCancelAuthoringForStyleID:(id)styleID;	// 0x320aa4cd
- (void)dealloc;	// 0x320a7805
- (int)defaultAutoKenBurnsLevelForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x320a9e29
- (int)defaultAutoKenBurnsLevelForZIndex:(int)zindex ofStyle:(id)style;	// 0x320a9b75
- (float)defaultAutoKenBurnsLikelihoodForEffect:(id)effect withPreset:(id)preset ofStyle:(id)style;	// 0x320a9ca1
- (float)defaultAutoKenBurnsLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x320a9a31
- (id)defaultColorSchemeForStyleID:(id)styleID;	// 0x320a8db5
- (double)defaultEffectDurationForLayer:(int)layer ofStyle:(id)style;	// 0x320aa191
- (float)defaultFilterLikelihoodForZIndex:(int)zindex ofStyle:(id)style;	// 0x320a9905
- (id)defaultPositionForZIndex:(int)zindex ofStyle:(id)style;	// 0x320a97f9
- (CGSize)defaultSizeForZIndex:(int)zindex ofStyle:(id)style;	// 0x320a9639
- (double)defaultTransitionDurationForLayer:(int)layer ofStyle:(id)style;	// 0x320aa1fd
- (double)delayFaceDetectionForStyleID:(id)styleID;	// 0x320a7989
- (id)demoDocumentWithImages:(id)images properties:(id)properties count:(int)count options:(id)options;	// 0x320a9045
- (id)descriptionForStyleID:(id)styleID;	// 0x320a78e5
- (float)displayDurationFactorForEffectID:(id)effectID inStyleID:(id)styleID;	// 0x320a957d
- (float)displayDurationFactorForStyleID:(id)styleID;	// 0x320a9431
- (int)dynamicBatchSizeForStyleID:(id)styleID;	// 0x320a7a7d
- (BOOL)easeKenBurnsForStyleID:(id)styleID;	// 0x320a95f1
- (id)effectIDsForStyleID:(id)styleID;	// 0x320a8115
- (id)effectPresetIDsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x320a9fa9
- (id)effectPresetIDsForStyleID:(id)styleID;	// 0x320a7e2d
- (id)effectPresetsForLayerIndex:(int)layerIndex ofStyleID:(id)styleID;	// 0x320a7f35
- (id)framesForStyleID:(id)styleID;	// 0x320a7d25
- (BOOL)hasImagesForLayerID:(id)layerID forStyleID:(id)styleID;	// 0x320aa50d
- (int)indexOfMainLayerForStyleID:(id)styleID;	// 0x320a85a5
- (int)indexOfTitleEffectLayerForStyleID:(id)styleID;	// 0x320a8629
- (id)interstitialEffectLayoutForStyleID:(id)styleID;	// 0x320a8759
- (id)interstitialEffectLayoutsForStyleID:(id)styleID;	// 0x320a8725
- (BOOL)isDynamicForStyleID:(id)styleID;	// 0x320a7a31
- (id)layerIDForLayerIndex:(int)layerIndex ofStyle:(id)style;	// 0x320aa335
- (int)layerIndexForLayerID:(id)layerID ofStyle:(id)style;	// 0x320aa2b9
- (id)localizedNameForStyleID:(id)styleID;	// 0x320a7ac9
- (id)localizedNameForStyleID:(id)styleID withLanguage:(id)language;	// 0x320a7ba5
- (BOOL)machineMeetsRequirementsForStyleID:(id)styleID;	// 0x320a8d49
- (int)mediaPresentationOrderForStyleID:(id)styleID;	// 0x320a8ffd
- (double)minimumDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x320a8b31
- (double)minimumEffectDurationForStyleID:(id)styleID;	// 0x320a8bf9
- (BOOL)needsFaceDetectionForStyleID:(id)styleID;	// 0x320a793d
- (BOOL)needsReauthorOnAspectRatioChange:(id)change;	// 0x320a8f39
- (BOOL)needsToBeLiveForStyleID:(id)styleID;	// 0x320a79e5
- (int)numberOfSlidesToPreloadForStyleID:(id)styleID;	// 0x320a8ed1
- (double)posterTimeForStyleID:(id)styleID;	// 0x320a9395
- (id)previewPathForStyleID:(id)styleID;	// 0x320a7cb5
- (int)regionOfInterestPickModeForStyleID:(id)styleID;	// 0x320aa489
- (void)reloadBundles;	// 0x320aa6f1
- (id)resourcePathForStyleID:(id)styleID;	// 0x320a7ced
- (double)shortestDurationForEffectID:(id)effectID forStyleID:(id)styleID;	// 0x320a8a19
- (double)shortestEffectDurationForStyleID:(id)styleID;	// 0x320a8831
- (id)songPathsForStyleID:(id)styleID;	// 0x320a8551
- (int)subtitleOrderForStyleID:(id)styleID;	// 0x320a8e69
- (BOOL)supportsRandomTransitionForStyleID:(id)styleID;	// 0x320a8d4d
- (id)thumbnailPathForStyleID:(id)styleID;	// 0x320a7c7d
- (id)titleEffectLayoutForStyleID:(id)styleID;	// 0x320a87c5
- (id)titleEffectLayoutsForStyleID:(id)styleID;	// 0x320a86f1
- (id)transitionsForStyleID:(id)styleID;	// 0x320a833d
- (id)versionOfStyleID:(id)styleID;	// 0x320a7905
@end

