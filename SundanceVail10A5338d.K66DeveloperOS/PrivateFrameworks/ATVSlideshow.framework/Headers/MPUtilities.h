/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPUtilities : NSObject {
}
+ (CGColorRef)CGColorFromString:(id)string;	// 0x333f32ed
+ (CGColorRef)CGColorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x333f34d1
+ (id)animationsPathsFromFilterID:(id)filterID andPresetID:(id)anId;	// 0x333f0acd
+ (float)aspectRatioOfLayerable:(id)layerable relativeToAspectRatio:(float)aspectRatio;	// 0x333f2ca5
+ (id)attributesFormMPFilter:(id)filter atTime:(double)time;	// 0x333f0549
+ (id)attributesFromAnimationPathsInFilter:(id)filter atTime:(double)time;	// 0x333f061d
+ (CGColorRef)blackCGColor;	// 0x333f3561
+ (void)collectAllActionableLayers:(id)layers inDictionary:(id)dictionary;	// 0x333f3ce1
+ (CGPoint)computePointValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(CGPoint)to;	// 0x333efab9
+ (float)computeScalarValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(float)to context:(id)context;	// 0x333ef271
+ (id)computeVectorValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(id)to;	// 0x333efd89
+ (id)createMCAction:(id)action forPlug:(id)plug withKey:(id)key;	// 0x333f39f1
+ (id)createPlugInContainer:(id)container forLayer:(id)layer key:(id)key inDocument:(id)document;	// 0x333f3eb9
+ (id)createPlugInSlide:(id)slide forLayer:(id)layer inDocument:(id)document;	// 0x333f41c5
+ (id)createPlugPathToContainer:(id)container inDocument:(id)document;	// 0x333f35ed
+ (id)createPlugPathToObject:(id)object inDocument:(id)document;	// 0x333f3775
+ (id)defaultAttributesForMPFilter:(id)mpfilter;	// 0x333f0541
+ (id)defaultAttributesForMPTransition:(id)mptransition;	// 0x333f0545
+ (id)effectContainersForTime:(double)time inDocument:(id)document;	// 0x333f17d5
+ (id)effectForMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x333f1b51
+ (id)effectForMCContainerWithObjectID:(id)objectID inDocument:(id)document;	// 0x333f1ac5
+ (id)executeScript:(id)script withHeader:(id)header andAttributes:(id)attributes;	// 0x333f2e8d
+ (id)idOfCombinedID:(id)combinedID;	// 0x333f287d
+ (id)layerForPlug:(id)plug inDocument:(id)document;	// 0x333f2791
+ (CGColorSpaceRef)newColorSpaceForDevice;	// 0x333f355d
+ (id)parentsOfObject:(id)object;	// 0x333f4285
+ (BOOL)pathIsRelative:(id)relative;	// 0x333f39cd
+ (id)placesPinLabelForSlideAssetPath:(id)slideAssetPath inDocument:(id)document;	// 0x333f2931
+ (id)presetIDOfCombinedID:(id)combinedID;	// 0x333f28d1
+ (void)registerUndoForDocument:(id)document toReceiver:(id)receiver withSelector:(SEL)selector object:(id)object;	// 0x333f35e9
+ (CGPoint)scaledFilterPresetPointValue:(CGPoint)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x333f0139
+ (float)scaledFilterPresetScalarValue:(float)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x333f0051
+ (XXStruct_Te64nB)scaledFilterPresetVectorValue:(XXStruct_Te64nB)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x333f0345
+ (id)slideForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x333f2645
+ (id)slideForPath:(id)path inDocument:(id)document;	// 0x333f20d5
+ (id)slideForSlide:(id)slide inDocument:(id)document;	// 0x333f2021
+ (id)stringFromCGColor:(CGColorRef)cgcolor;	// 0x333f3461
+ (id)stringWithNewUUID;	// 0x333f32a5
+ (void)syncAnimationPaths:(id)paths;	// 0x333f1139
+ (id)textForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x333f256d
+ (id)textForIndex:(int)index inMCContainerWithObjectID:(id)objectID inDocument:(id)document;	// 0x333f19ed
+ (id)textsDisplayedAtTime:(double)time inDocument:(id)document;	// 0x333f22d9
+ (int)timeOffSetFromString:(id)string;	// 0x333eefd1
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath;	// 0x333ef0c9
@end

