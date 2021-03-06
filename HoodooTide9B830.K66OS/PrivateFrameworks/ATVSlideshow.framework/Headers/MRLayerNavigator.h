/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLayer.h"
#import "ATVSlideshow-Structs.h"

@class MCContainerNavigator, NSMutableDictionary, NSMutableArray, NSDictionary, NSArray, MRTransition;

@interface MRLayerNavigator : MRLayer {
	MCContainerNavigator *mContainer;	// 124 = 0x7c
	NSMutableArray *mSublayers;	// 128 = 0x80
	NSMutableDictionary *mSublayersForPlugs;	// 132 = 0x84
	MRLayer *mCurrentSublayer;	// 136 = 0x88
	MRLayer *mNextSublayer;	// 140 = 0x8c
	MRTransition *mCurrentTransition;	// 144 = 0x90
	BOOL mIsTransitioning;	// 148 = 0x94
	MRLayer *mSublayerToPrecompute;	// 152 = 0x98
	id mPrecomputingTarget;	// 156 = 0x9c
	unsigned mPrecomputingType;	// 160 = 0xa0
	double mTransitionStartTime;	// 164 = 0xa4
	double mTransitionDuration;	// 172 = 0xac
	BOOL mTransitionIsBackwards;	// 180 = 0xb4
	NSDictionary *mTransitionChanges;	// 184 = 0xb8
	NSMutableArray *mHistoryBack;	// 188 = 0xbc
	NSMutableArray *mHistoryForth;	// 192 = 0xc0
	BOOL mBackAndForthIsEnabled;	// 196 = 0xc4
	double mForcedTransitionTime;	// 200 = 0xc8
}
@property(assign) BOOL backAndForthIsEnabled;	// G=0x32130155; S=0x32130165; @synthesize=mBackAndForthIsEnabled
@property(readonly, assign) MRLayer *currentSublayer;	// G=0x32130145; @synthesize=mCurrentSublayer
@property(assign, nonatomic) double forcedTransitionTime;	// G=0x32130175; S=0x3213018d; @synthesize=mForcedTransitionTime
@property(readonly, assign) NSArray *sublayers;	// G=0x32130135; @synthesize=mSublayers
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x3212cf35
- (id)_createSublayerForPlug:(id)plug;	// 0x321304b5
- (id)_currentState;	// 0x3212fed9
- (void)_deleteSublayer:(id)sublayer;	// 0x321305ed
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x3212ffc5
- (void)_executeLayerCommandQueue;	// 0x321301a1
- (BOOL)_isNative3D;	// 0x3212ea39
- (void)_observePlug;	// 0x32130861
- (void)_observePlugOnPreactivate;	// 0x32130919
- (void)_observeSublayer:(id)sublayer;	// 0x3213076d
- (void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32130af5
- (void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32131815
- (void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3213102d
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32130d25
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32130e79
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x32130a31
- (void)_unobservePlug;	// 0x321308c1
- (void)_unobservePlugOnDepreactivate;	// 0x321309b1
- (void)_unobserveSublayer:(id)sublayer;	// 0x321307e5
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x3212ee9d
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x3212ed51
// declared property getter: - (BOOL)backAndForthIsEnabled;	// 0x32130155
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x3212d9b1
- (void)cleanup;	// 0x3212d10d
// declared property getter: - (id)currentSublayer;	// 0x32130145
- (void)deactivate;	// 0x3212da5d
- (void)depreactivate:(BOOL)depreactivate;	// 0x3212dc41
- (double)doTransition:(id)transition;	// 0x3212fb25
- (double)doTransition:(id)transition backwards:(BOOL)backwards;	// 0x3212efe5
- (double)doTransitionBackwards:(id)backwards;	// 0x3212fb39
- (void)endMorphing;	// 0x3212da1d
- (void)endTransitionToSublayer;	// 0x3212fe25
// declared property getter: - (double)forcedTransitionTime;	// 0x32130175
- (double)goBack;	// 0x3212fcb9
- (double)goForth;	// 0x3212fb4d
- (BOOL)hasAudio;	// 0x3212e941
- (BOOL)hasSomethingToRender;	// 0x3212d89d
- (BOOL)isAlphaFriendly;	// 0x3212df45
- (BOOL)isLoadedForTime:(double)time;	// 0x3212dd2d
- (BOOL)isOpaque;	// 0x3212decd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3212d3dd
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3212e5f9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3212dfbd
// declared property setter: - (void)setBackAndForthIsEnabled:(BOOL)enabled;	// 0x32130165
// declared property setter: - (void)setForcedTransitionTime:(double)time;	// 0x3213018d
- (void)setPixelSize:(CGSize)size;	// 0x3212d7a5
- (id)sublayerForID:(id)anId;	// 0x3212ea91
- (id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;	// 0x3212eb9d
- (id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint *)point3;	// 0x3212e789
// declared property getter: - (id)sublayers;	// 0x32130135
- (void)synchronizeTime;	// 0x3212d921
@end

