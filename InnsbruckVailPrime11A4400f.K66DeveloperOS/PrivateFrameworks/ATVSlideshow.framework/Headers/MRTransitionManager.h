/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {
	NSMutableDictionary *mTransitionSets;	// 4 = 0x4
	NSMutableDictionary *mTransitionPools;	// 8 = 0x8
}
+ (void)initialize;	// 0x2fca891d
+ (id)sharedManager;	// 0x2fca8989
- (id)initWithPaths:(id)paths;	// 0x2fca8999
- (BOOL)canHandleKenBurnsForTransitionID:(id)transitionID;	// 0x2fca91dd
- (void)cleanup;	// 0x2fca8a69
- (void)dealloc;	// 0x2fca8a29
- (id)descriptionForTransitionID:(id)transitionID;	// 0x2fca9155
- (BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x2fca925d
- (BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x2fca92dd
- (BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x2fca929d
- (BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x2fca92e9
- (BOOL)noContentsMotionForTransitionID:(id)transitionID;	// 0x2fca921d
- (void)recycleTransition:(id)transition;	// 0x2fca9001
- (void)releaseResources;	// 0x2fca8acd
- (id)resourcePathForTransitionID:(id)transitionID andResource:(id)resource;	// 0x2fca918d
- (id)transitionWithTransitionID:(id)transitionID;	// 0x2fca8c89
@end
