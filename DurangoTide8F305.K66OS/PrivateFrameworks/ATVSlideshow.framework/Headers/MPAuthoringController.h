/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSLock, MPDocument, MPWeighter, NSMutableDictionary;

@interface MPAuthoringController : NSObject {
	BOOL _isAuthoring;	// 4 = 0x4
	MPDocument *_authoredDocument;	// 8 = 0x8
	unsigned _seed;	// 12 = 0xc
	NSRecursiveLock *_beatLock;	// 16 = 0x10
	NSMutableDictionary *_cachedROIInformation;	// 20 = 0x14
	NSLock *_cachedROILock;	// 24 = 0x18
	MPWeighter *_weighter;	// 28 = 0x1c
	MPWeighter *_transitionWeighter;	// 32 = 0x20
	NSMutableDictionary *_stats;	// 36 = 0x24
	id _delegate;	// 40 = 0x28
	int _logLevel;	// 44 = 0x2c
	double _logTiming;	// 48 = 0x30
	float _placesDistanceSeperation;	// 56 = 0x38
	BOOL _placesDebug;	// 60 = 0x3c
	BOOL _cancelAuthoring;	// 61 = 0x3d
	BOOL _skipApplyingSettings;	// 62 = 0x3e
}
@property(assign) id delegate;	// G=0x331f3339; S=0x331f3349; converted property
+ (void)releaseSharedController;	// 0x331f2ed5
+ (id)sharedController;	// 0x331f2e8d
+ (id)transitionAnimatedSetsBetween:(id)between and:(id)anAnd;	// 0x331ebb71
+ (id)transitionAnimatedSetsBetween:(id)between and:(id)anAnd;	// 0x332053c9
- (id)init;	// 0x331f2f19
- (void)_addVideoPaths:(id)paths toEndOfLayer:(id)layer inDocument:(id)document withOptions:(id)options;	// 0x3320bafd
- (void)_addVideoPaths:(id)paths toEndOfLayer:(id)layer inDocument:(id)document withOptions:(id)options;	// 0x331f10b5
- (void)_checkForEmptyLayersInDocument:(id)document;	// 0x331f19d5
- (void)_checkForEmptyLayersInDocument:(id)document;	// 0x3320c421
- (id)_collectVersionInformationFromStyle:(id)style;	// 0x331f781d
- (int)_countOfEmptyContainersInIntroOfLayer:(id)layer withOptions:(id)options;	// 0x331f1bc5
- (int)_countOfEmptyContainersInIntroOfLayer:(id)layer withOptions:(id)options;	// 0x3320c611
- (id)_createMapsWithImages:(id)images withOptions:(id)options;	// 0x3320c771
- (void)_gatherLocationInfoForMaps:(id)maps;	// 0x3320e491
- (id)_grabAndRemoveTitleEffectFromDocument:(id)document withOptions:(id)options;	// 0x331f16bd
- (id)_grabAndRemoveTitleEffectFromDocument:(id)document withOptions:(id)options;	// 0x3320c109
- (id)_mapsSortedByCity:(id)city hasCities:(BOOL *)cities;	// 0x3320ed09
- (id)_mapsSortedByState:(id)state;	// 0x3320f8f1
- (int)_numberOfSlidesForOutroInLayer:(id)layer withOptions:(id)options;	// 0x331f1a91
- (int)_numberOfSlidesForOutroInLayer:(id)layer withOptions:(id)options;	// 0x3320c4dd
- (id)_placeEffectContainersForPhotos:(id)photos options:(id)options;	// 0x33217c1d
- (void)_readdTitleEffect:(id)effect toDocument:(id)document withOptions:(id)options;	// 0x3320c379
- (void)_readdTitleEffect:(id)effect toDocument:(id)document withOptions:(id)options;	// 0x331f192d
- (void)_renameMapsAndPins:(id)pins withOptions:(id)options;	// 0x332102f1
- (void)_reorderImagesInDocument:(id)document withOptions:(id)options;	// 0x3320ad89
- (void)_reorderImagesInDocument:(id)document withOptions:(id)options;	// 0x331f0349
- (BOOL)_tryAndCollapseMaps:(id)maps;	// 0x3320e93d
- (void)addStyledCaptionToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x331ee1e9
- (void)addStyledCaptionToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x33208c0d
- (unsigned)authorDocument:(id)document withOptions:(id)options;	// 0x331f3359
- (unsigned)authorLayerGroup:(id)group inDocument:(id)document withOptions:(id)options;	// 0x331f339d
- (void)authorPlacesWithImages:(id)images forLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x331f813d
- (void)beatAlignEffectContainers:(id)containers toBeats:(id)beats withOptions:(id)options;	// 0x331fe281
- (void)beatAlignLayer:(id)layer toBeats:(id)beats withOptions:(id)options;	// 0x331fc82d
- (void)beatAlignLayers:(id)layers toAudioPlaylist:(id)audioPlaylist forDocument:(id)document withOptions:(id)options;	// 0x331f58bd
- (id)beatsForAudioPlaylist:(id)audioPlaylist withOptions:(id)options;	// 0x331f1c25
- (id)beatsForAudioPlaylist:(id)audioPlaylist withOptions:(id)options;	// 0x332054dd
- (int)bestCountFromClusterForEffectWithImages:(id)images atStartIndex:(int)startIndex withWeighter:(id)weighter usedIndex:(int *)index;	// 0x331fa185
- (void)cacheROIInformationForImages:(id)images withOptions:(id)options;	// 0x331f82e5
- (BOOL)canDocumentFitToAudio:(id)audio withOptions:(id)options requiredAudioDuration:(double *)duration;	// 0x331f705d
- (BOOL)canLayerGroupFitToAudio:(id)audio inDocument:(id)document withOptions:(id)options requiredAudioDuration:(double *)duration;	// 0x331f70a5
- (BOOL)canScaleToAudioInDocument:(id)document withOptions:(id)options;	// 0x331f7391
- (void)checkForOffsetsForLayers:(id)layers withOptions:(id)options;	// 0x331fc6fd
- (void)cleanup;	// 0x331f73b1
- (void)cleanup:(BOOL)cleanup;	// 0x331f73c9
- (void)cleanupClusters;	// 0x331f2471
- (void)cleanupClusters;	// 0x33205d35
- (void)combineEffectsNearSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x331efbad
- (void)combineEffectsNearSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x3320a5ed
- (void)combineSlides:(id)slides inDocument:(id)document withOptions:(id)options;	// 0x331ef965
- (void)combineSlides:(id)slides inDocument:(id)document withOptions:(id)options;	// 0x3320a3a5
- (void)configureFiltersInDocument:(id)document withOptions:(id)options;	// 0x331fea31
- (void)configureTransitionsInDocument:(id)document withOptions:(id)options;	// 0x331fef0d
- (void)createAnimatedSetsInLayer2:(id)layer2 withOptions:(id)options;	// 0x332047ed
- (void)createAnimatedSetsInLayer2:(id)layer2 withOptions:(id)options;	// 0x331eaf95
- (void)createAnimatedSetsInLayer:(id)layer withOptions:(id)options;	// 0x33203949
- (void)createAnimatedSetsInLayer:(id)layer withOptions:(id)options;	// 0x331ea0f1
- (id)createAudioPlayListFromAudioPaths:(id)audioPaths andOptions:(id)options;	// 0x33202dc1
- (void)createBeatsThreaded:(id)threaded;	// 0x331f21a5
- (void)createBeatsThreaded:(id)threaded;	// 0x33205a65
- (id)createEffectToTransitionMapWithOptions:(id)options;	// 0x33201429
- (id)createLayerWithImages:(id)images effects:(id)effects andOptions:(id)options;	// 0x331ff319
- (id)createLayersForPlacesForImages:(id)images forDocument:(id)document withOptions:(id)options;	// 0x332123c9
- (void)dealloc;	// 0x331f3291
// converted property getter: - (id)delegate;	// 0x331f3339
- (BOOL)determineIfSlideDisplayesForTheWholeDurationForEffect:(id)effect presetID:(id)anId atIndex:(int)index;	// 0x331fb275
- (id)effectContainersWithImages:(id)images effects:(id)effects andOptions:(id)options;	// 0x331ff569
- (id)effectContainersWithPaths:(id)paths forDocument:(id)document withOptions:(id)options;	// 0x331f5781
- (id)effectsForImages:(id)images withOptions:(id)options;	// 0x331f8b29
- (id)exportTransitionFromOptions:(id)options;	// 0x332016a5
- (void)fillDurationsForLayers:(id)layers withOptions:(id)options;	// 0x331fc461
- (id)filtersForEffectFromOptions:(id)options;	// 0x332029b1
- (id)filtersForLayerFromOptions:(id)options;	// 0x33202835
- (id)filtersForSlideFromOptions:(id)options;	// 0x33202ba5
- (double)findClosestBeatForTime:(double)time inBeats:(id)beats atIndex:(int *)index;	// 0x3320580d
- (double)findClosestBeatForTime:(double)time inBeats:(id)beats atIndex:(int *)index;	// 0x331f1f4d
- (id)findEffectIDInPresetArray:(id)presetArray forImages:(id)images withOptions:(id)options;	// 0x331fa319
- (id)findEffectIDInWeighter:(id)weighter images:(id)images startingIndex:(int)index count:(int)count triesToFind:(int *)find;	// 0x331faef1
- (void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)userDefinedSlideOrderPresentation inClusters:(id)clusters;	// 0x331f2491
- (void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)userDefinedSlideOrderPresentation inClusters:(id)clusters;	// 0x33205d55
- (void)finishLogging;	// 0x331f2911
- (void)finishLogging;	// 0x332061dd
- (id)frameFromOptions:(id)options;	// 0x33202ce5
- (BOOL)imagesHaveMovie:(id)movie start:(int)start count:(int)count;	// 0x331fa0ed
- (int)indexOfBeatWithTimestamp:(double)timestamp inBeats:(id)beats inRange:(NSRange)range;	// 0x3320596d
- (int)indexOfBeatWithTimestamp:(double)timestamp inBeats:(id)beats inRange:(NSRange)range;	// 0x331f20ad
- (void)insertVideoPaths:(id)paths atIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x331ec351
- (void)insertVideoPaths:(id)paths atIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x33206d65
- (id)loopTransitionFromOptions:(id)options;	// 0x332015d5
- (int)mapTypeForPoint0:(CGPoint)point0 point1:(CGPoint)a1 point2:(CGPoint)a2 map:(id)map flight:(id)flight;	// 0x33216ef5
- (void)matchDurationsForLayers:(id)layers withOptions:(id)options;	// 0x331fc1a1
- (void)moveSlidesFromIndicies:(id)indicies toIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x331ebc85
- (void)moveSlidesFromIndicies:(id)indicies toIndex:(int)index inDocument:(id)document withOptions:(id)options;	// 0x33206695
- (id)orderImages:(id)images withOptions:(id)options;	// 0x331f7c1d
- (id)pickRandomPathsInArray:(id)array excludingPaths:(id)paths count:(int)count;	// 0x33202f15
- (void)populateWeighter:(id)weighter withEffects:(id)effects andOptions:(id)options;	// 0x331fa5b9
- (void)populateWeighter:(id)weighter withTransitions:(id)transitions andOptions:(id)options;	// 0x331fac25
- (BOOL)prepareDocumentForExport:(id)export withOptions:(id)options;	// 0x331f6361
- (void)prepareDocumentForPlayback:(id)playback withOptions:(id)options;	// 0x331f68e1
- (void)reconfigureColorSchemeForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x331f611d
- (void)reconfigureColorSchemeInDocument:(id)document withOptions:(id)options;	// 0x331f60d9
- (void)reconfigureImagesInDocument:(id)document withOptions:(id)options;	// 0x331f5e35
- (void)reconfigureTitleEffectForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x331f5ef1
- (void)reconfigureTitleEffectInDocument:(id)document withOptions:(id)options;	// 0x331f5ead
- (void)recreateMapsInDocument:(id)document;	// 0x3321857d
- (BOOL)rect:(CGRect)rect intersectsRects:(id)rects index:(int *)index;	// 0x33216e15
- (void)removeAllMapsInDocument:(id)document;	// 0x33218391
- (void)removeSlidesAtIndicies:(id)indicies inDocument:(id)document withOptions:(id)options;	// 0x331ed4ed
- (void)removeSlidesAtIndicies:(id)indicies inDocument:(id)document withOptions:(id)options;	// 0x33207f09
- (void)removeStyledCaptionFromSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x331eef01
- (void)removeStyledCaptionFromSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x33209935
- (void)scaleDurationsForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x331f5a35
- (void)scaleDurationsInDocument:(id)document withOptions:(id)options;	// 0x331f59f1
- (void)scaleDurationsInEffectContainers:(id)effectContainers withOptions:(id)options;	// 0x331fb669
- (void)scaleDurationsInLayer:(id)layer withOptions:(id)options;	// 0x331fb541
- (void)scaleDurationsInPlacesForDocument:(id)document withOptions:(id)options;	// 0x33217341
- (void)scaleLayerToMatchAudio:(id)matchAudio withBeats:(id)beats withOptions:(id)options;	// 0x331fd701
- (void)scaleLayerToMatchAudio:(id)matchAudio withOptions:(id)options;	// 0x331fcb71
- (void)setAuthoredDocument:(id)document;	// 0x331f77c5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x331f3349
- (void)setTitleTextToColor:(CGColorRef)color forLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x331f749d
- (void)setTitleTextToColor:(CGColorRef)color inDocument:(id)document withOptions:(id)options;	// 0x331f7451
- (void)setupClustersWithPaths:(id)paths withOptions:(id)options;	// 0x33205c39
- (void)setupClustersWithPaths:(id)paths withOptions:(id)options;	// 0x331f2379
- (id)sortImagePaths:(id)paths toAspectRatiosInEffectPresetID:(id)effectPresetID withOptions:(id)options;	// 0x33201731
- (void)startLogging;	// 0x33206005
- (void)startLogging;	// 0x331f2741
- (int)tileSetForMap1:(int)map1 map2:(int)a2 needsWater:(BOOL)water;	// 0x332172e1
- (id)transitionFromOptions:(id)options;	// 0x331f58a1
- (id)transitionFromOptions:(id)options firstEffectContainer:(id)container nextEffectContainer:(id)container3;	// 0x33203079
- (void)upgradeDocument:(id)document withOptions:(id)options;	// 0x331f50bd
- (void)upgradeLayerGroup:(id)group inDocument:(id)document withOptions:(id)options;	// 0x331f5101
@end
