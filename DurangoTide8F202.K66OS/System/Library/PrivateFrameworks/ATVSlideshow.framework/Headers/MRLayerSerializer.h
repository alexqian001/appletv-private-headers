/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableArray, NSArray, MRTransition, NSMutableDictionary, MCContainerSerializer;

@interface MRLayerSerializer : MRLayer {
	MCContainerSerializer *mContainer;	// 96 = 0x60
	NSMutableArray *mSublayers;	// 100 = 0x64
	NSMutableDictionary *mSublayersForPlugs;	// 104 = 0x68
	BOOL mNeedsToUpdateSublayersTiming;	// 108 = 0x6c
	BOOL mNeedsToUpdateTransitionAttributes;	// 109 = 0x6d
	MRLayer *mCurrentSublayer;	// 112 = 0x70
	MRLayer *mNextSublayer;	// 116 = 0x74
	MRTransition *mCurrentTransition;	// 120 = 0x78
	MRLayer *mSublayerForTransition;	// 124 = 0x7c
	BOOL mIsTransitioning;	// 128 = 0x80
	MRLayer *mSublayerToPrecompute;	// 132 = 0x84
	id mPrecomputingTarget;	// 136 = 0x88
	unsigned mPrecomputingType;	// 140 = 0x8c
	MRLayer *mLiveSourceSublayer;	// 144 = 0x90
	MRLayer *mLiveTargetSublayer;	// 148 = 0x94
	BOOL mLiveTransitionIsBackwards;	// 152 = 0x98
	BOOL mHasWarnedDelegateAboutNearingEnd;	// 153 = 0x99
}
@property(readonly, assign) NSArray *sublayers;	// G=0x315048fd; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x31501f19
- (id)_createSublayerForPlug:(id)plug;	// 0x31504e51
- (void)_deleteSublayer:(id)sublayer;	// 0x31504fc9
- (void)_executeLayerCommandQueue;	// 0x3150490d
- (BOOL)_isNative3D;	// 0x31503d51
- (void)_observePlug;	// 0x31505385
- (void)_observePlugOnPreactivate;	// 0x31505479
- (void)_observeSublayer:(id)sublayer;	// 0x315051a5
- (void)_observeSublayerOnPreactivate:(id)preactivate;	// 0x315052f5
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31505669
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31506509
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31505be1
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x315058a5
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31505a0d
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x31505595
- (void)_unobservePlug;	// 0x3150540d
- (void)_unobservePlugOnDepreactivate;	// 0x31505511
- (void)_unobserveSublayer:(id)sublayer;	// 0x3150524d
- (void)_unobserveSublayerOnDepreactivate:(id)depreactivate;	// 0x31505341
- (void)_updateSublayersTiming;	// 0x31504c9d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x31504111
- (void)cleanup;	// 0x3150208d
- (void)deactivate;	// 0x31502b15
- (void)depreactivate:(BOOL)depreactivate;	// 0x31502ce5
- (void)endTransitionToSublayer;	// 0x31504899
- (BOOL)hasAudio;	// 0x31503c55
- (BOOL)hasSomethingToRender;	// 0x31502979
- (BOOL)isAlphaFriendly;	// 0x31502fc5
- (BOOL)isLoadedForTime:(double)time;	// 0x31502df9
- (BOOL)isOpaque;	// 0x31502f51
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31502395
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31503909
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31503039
- (void)resumeOrPause:(BOOL)pause;	// 0x31502a11
- (void)setPixelSize:(CGSize)size;	// 0x31502865
- (id)sublayerAtIndex:(unsigned)index;	// 0x31503d9d
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x31503ee5
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x31503ab1
// declared property getter: - (id)sublayers;	// 0x315048fd
- (void)synchronizeTime;	// 0x31502a95
- (double)transitionToNextSublayer;	// 0x315042b1
- (double)transitionToPreviousSublayer;	// 0x31504361
- (double)transitionToSublayerAtIndex:(unsigned)index;	// 0x3150440d
@end

