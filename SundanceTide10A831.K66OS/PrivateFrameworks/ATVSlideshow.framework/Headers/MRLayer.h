/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library
#import "MRLoadable.h"
#import "MRRenderable.h"

@class MCPlugSerial, NSDictionary, MRLayerClock, MRAudioPlayer, NSString, NSMutableDictionary, MCPlug, NSMutableArray, MRRenderer, MCPlugHaven, MCPlugParallel;

@interface MRLayer : NSObject <MRLoadable, MRRenderable> {
	MRLayer *mSuperlayer;	// 4 = 0x4
	MCPlug *mPlug;	// 8 = 0x8
	MCPlugSerial *mPlugAsSerial;	// 12 = 0xc
	MCPlugParallel *mPlugAsParallel;	// 16 = 0x10
	MCPlugHaven *mPlugAsHaven;	// 20 = 0x14
	NSString *mUUID;	// 24 = 0x18
	NSString *mIDInSupercontainer;	// 28 = 0x1c
	unsigned mIndex;	// 32 = 0x20
	CGSize mPixelSize;	// 36 = 0x24
	double mTimeStamp;	// 44 = 0x2c
	double mTimeIn;	// 52 = 0x34
	MRLayerClock *mClock;	// 60 = 0x3c
	MRLayerRenderingStateOpaque *mRenderingState;	// 64 = 0x40
	NSMutableDictionary *mAnimationTriggers;	// 68 = 0x44
	NSMutableDictionary *mMotions;	// 72 = 0x48
	NSMutableDictionary *mPersistentState;	// 76 = 0x4c
	NSMutableArray *mLayerCommandQueue;	// 80 = 0x50
	NSDictionary *mParameters;	// 84 = 0x54
	MRRenderer *mRenderer;	// 88 = 0x58
	MRAudioPlayer *mAudioPlayer;	// 92 = 0x5c
	id mParentHelper;	// 96 = 0x60
	BOOL mIsPreactivated;	// 100 = 0x64
	BOOL mIsActivated;	// 101 = 0x65
	BOOL mOkToDeferKenBurns;	// 102 = 0x66
	BOOL mIsPrecomputing;	// 103 = 0x67
	BOOL mIsReadonly;	// 104 = 0x68
	BOOL mDoAudio;	// 105 = 0x69
	BOOL mIsSelected;	// 106 = 0x6a
	BOOL mIsDimmed;	// 107 = 0x6b
	BOOL mNeedsRendering;	// 108 = 0x6c
	BOOL mNeedsToUpdateGeometry;	// 109 = 0x6d
	BOOL mNeedsToUpdateInitialState;	// 110 = 0x6e
	BOOL mNeedsToRequestRebuildAudio;	// 111 = 0x6f
	BOOL mNeedsToRequestRebuildVolume;	// 112 = 0x70
	BOOL mNeedsToSynchronizeTime;	// 113 = 0x71
	BOOL mLayerCommandQueueNeedsAttention;	// 114 = 0x72
	BOOL mIsScheduledForDestruction;	// 115 = 0x73
	BOOL mSupportsAccumulation;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) BOOL _isNative3D;	// G=0x33a147d9; 
@property(readonly, assign) NSDictionary *animationTriggers;	// G=0x33a14729; @synthesize=mAnimationTriggers
@property(readonly, assign) MRLayerClock *clock;	// G=0x33a1049d; 
@property(assign, nonatomic) double duration;	// G=0x33a10819; S=0x33a1087d; 
@property(readonly, assign, nonatomic) BOOL hasAudio;	// G=0x33a125ad; 
@property(readonly, assign) NSString *idInSupercontainer;	// G=0x33a14775; @synthesize=mIDInSupercontainer
@property(readonly, assign, nonatomic) unsigned index;	// G=0x33a14789; @synthesize=mIndex
@property(readonly, assign, nonatomic) BOOL isActivated;	// G=0x33a1468d; @synthesize=mIsActivated
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x33a10dad; 
@property(assign, nonatomic) BOOL isDimmed;	// G=0x33a146cd; S=0x33a14585; @synthesize=mIsDimmed
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x33a10da9; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x33a10d8d; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x33a10da5; 
@property(readonly, assign, nonatomic) BOOL isPreactivated;	// G=0x33a1469d; @synthesize=mIsPreactivated
@property(readonly, assign, nonatomic) BOOL isScheduledForDestruction;	// G=0x33a14705; @synthesize=mIsScheduledForDestruction
@property(assign, nonatomic) BOOL isSelected;	// G=0x33a146ad; S=0x33a146bd; @synthesize=mIsSelected
@property(readonly, assign) NSMutableDictionary *motions;	// G=0x33a1473d; @synthesize=mMotions
@property(assign, nonatomic) BOOL needsToSynchronizeTime;	// G=0x33a14799; S=0x33a147a9; @synthesize=mNeedsToSynchronizeTime
@property(assign, nonatomic) BOOL needsToUpdateGeometry;	// G=0x33a147b9; S=0x33a147c9; @synthesize=mNeedsToUpdateGeometry
@property(readonly, assign) NSDictionary *parameters;	// G=0x33a1464d; @synthesize=mParameters
@property(retain) id parentHelper;	// G=0x33a14751; S=0x33a14765; @synthesize=mParentHelper
@property(readonly, assign) NSDictionary *persistentState;	// G=0x33a14715; @synthesize=mPersistentState
@property(assign, nonatomic) CGSize pixelSize;	// G=0x33a14621; S=0x33a104bd; @synthesize=mPixelSize
@property(readonly, assign) MCPlug *plug;	// G=0x33a145d1; @synthesize=mPlug
@property(readonly, assign) MCPlugHaven *plugAsHaven;	// G=0x33a1460d; @synthesize=mPlugAsHaven
@property(readonly, assign) MCPlugParallel *plugAsParallel;	// G=0x33a145f9; @synthesize=mPlugAsParallel
@property(readonly, assign) MCPlugSerial *plugAsSerial;	// G=0x33a145e5; @synthesize=mPlugAsSerial
@property(readonly, assign) MRLayerRenderingStateOpaque *renderingState;	// G=0x33a104ad; 
@property(readonly, assign) MRLayer *superlayer;	// G=0x33a145bd; @synthesize=mSuperlayer
@property(readonly, assign, nonatomic) BOOL supportsAccumulation;	// G=0x33a146f5; @synthesize=mSupportsAccumulation
@property(readonly, assign, nonatomic) BOOL supportsDynamicExpansion;	// G=0x33a124f9; 
@property(assign, nonatomic) double timeIn;	// G=0x33a14661; S=0x33a14679; @synthesize=mTimeIn
@property(readonly, assign, nonatomic) double timeStamp;	// G=0x33a146dd; @synthesize=mTimeStamp
@property(readonly, assign) NSString *uuid;	// G=0x33a14639; @synthesize=mUUID
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x33a0f681
- (id)__retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a11889
- (void)_applyState:(id)state;	// 0x33a1273d
- (id)_currentState;	// 0x33a14421
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x33a14475
// declared property getter: - (BOOL)_isNative3D;	// 0x33a147d9
- (void)_observePlug;	// 0x33a1490d
- (void)_observePlugOnPreactivate;	// 0x33a14a1d
- (void)_queueLayerCommand:(int)command object:(id)object;	// 0x33a147e5
- (void)_rebuildAudio;	// 0x33a13f99
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a147dd
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a147e1
- (void)_sendAction:(id)action withStates:(id)states async:(BOOL)async yesterday:(BOOL)yesterday;	// 0x33a13d49
- (void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;	// 0x33a14bbd
- (void)_setScissorRectOnContext:(id)context saveTo:(int *)to;	// 0x33a10e59
- (BOOL)_setStateValue:(id)value forKey:(id)key;	// 0x33a13ec9
- (void)_unobservePlug;	// 0x33a149ad
- (void)_unobservePlugOnDepreactivate;	// 0x33a14b09
- (void)_updateStateWithContext:(id)context;	// 0x33a13b41
- (id)actionForKey:(id)key recursive:(BOOL)recursive;	// 0x33a12871
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x33a1286d
- (void)activate;	// 0x33a10995
// declared property getter: - (id)animationTriggers;	// 0x33a14729
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x33a10811
- (void)cancelLoading;	// 0x33a10d89
- (void)cleanup;	// 0x33a0fbdd
// declared property getter: - (id)clock;	// 0x33a1049d
- (CGPoint)convertGlobalPoint:(CGPoint)point;	// 0x33a12679
- (CGPoint)convertLocalPoint:(CGPoint)point;	// 0x33a125b1
- (void)deactivate;	// 0x33a10aa5
- (void)dealloc;	// 0x33a0fb5d
- (void)depreactivate:(BOOL)depreactivate;	// 0x33a10bc9
- (double)doActionTrigger:(id)trigger;	// 0x33a12c91
- (double)doAnimationTrigger:(id)trigger;	// 0x33a128a9
- (double)doGenericAction:(id)action;	// 0x33a133e1
- (double)doMotionTrigger:(id)trigger;	// 0x33a130a5
- (double)doStateOperation:(id)operation;	// 0x33a12d71
// declared property getter: - (double)duration;	// 0x33a10819
- (void)endMorphing;	// 0x33a10815
- (void)finalize;	// 0x33a0fb9d
// declared property getter: - (BOOL)hasAudio;	// 0x33a125ad
- (BOOL)hasSomethingToRender;	// 0x33a106fd
// declared property getter: - (id)idInSupercontainer;	// 0x33a14775
// declared property getter: - (unsigned)index;	// 0x33a14789
// declared property getter: - (BOOL)isActivated;	// 0x33a1468d
- (BOOL)isActivatedAtTime:(double)time;	// 0x33a10d31
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x33a10dad
// declared property getter: - (BOOL)isDimmed;	// 0x33a146cd
- (BOOL)isFlatAndSquare;	// 0x33a10db1
// declared property getter: - (BOOL)isInfinite;	// 0x33a10da9
- (BOOL)isLoadedForTime:(double)time;	// 0x33a10d71
// declared property getter: - (BOOL)isNative3D;	// 0x33a10d8d
// declared property getter: - (BOOL)isOpaque;	// 0x33a10da5
// declared property getter: - (BOOL)isPreactivated;	// 0x33a1469d
- (BOOL)isPreactivatedAtTime:(double)time;	// 0x33a10cd9
// declared property getter: - (BOOL)isScheduledForDestruction;	// 0x33a14705
// declared property getter: - (BOOL)isSelected;	// 0x33a146ad
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x33a10d81
// declared property getter: - (id)motions;	// 0x33a1473d
// declared property getter: - (BOOL)needsToSynchronizeTime;	// 0x33a14799
// declared property getter: - (BOOL)needsToUpdateGeometry;	// 0x33a147b9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33a0fe89
// declared property getter: - (id)parameters;	// 0x33a1464d
// declared property getter: - (id)parentHelper;	// 0x33a14751
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a12391
// declared property getter: - (id)persistentState;	// 0x33a14715
// declared property getter: - (CGSize)pixelSize;	// 0x33a14621
// declared property getter: - (id)plug;	// 0x33a145d1
// declared property getter: - (id)plugAsHaven;	// 0x33a1460d
// declared property getter: - (id)plugAsParallel;	// 0x33a145f9
// declared property getter: - (id)plugAsSerial;	// 0x33a145e5
- (void)preactivate;	// 0x33a108bd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a110e1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a11b31
// declared property getter: - (MRLayerRenderingStateOpaque *)renderingState;	// 0x33a104ad
- (void)resumeOrPause:(BOOL)pause;	// 0x33a1077d
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33a12205
- (void)scheduleForDestruction;	// 0x33a12561
// declared property setter: - (void)setDuration:(double)duration;	// 0x33a1087d
// declared property setter: - (void)setIsDimmed:(BOOL)dimmed;	// 0x33a14585
// declared property setter: - (void)setIsSelected:(BOOL)selected;	// 0x33a146bd
// declared property setter: - (void)setNeedsToSynchronizeTime:(BOOL)synchronizeTime;	// 0x33a147a9
// declared property setter: - (void)setNeedsToUpdateGeometry:(BOOL)updateGeometry;	// 0x33a147c9
- (void)setNeedsUpdateForPluggerOfSublayer:(id)sublayer;	// 0x33a10499
// declared property setter: - (void)setParentHelper:(id)helper;	// 0x33a14765
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x33a104bd
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x33a14679
- (void)stampTime;	// 0x33a124fd
- (id)sublayerForPrecomputingWithPlug:(id)plug;	// 0x33a10295
- (id)sublayerWithPlug:(id)plug;	// 0x33a1014d
// declared property getter: - (id)superlayer;	// 0x33a145bd
// declared property getter: - (BOOL)supportsAccumulation;	// 0x33a146f5
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x33a124f9
- (void)synchronizeTime;	// 0x33a107ed
// declared property getter: - (double)timeIn;	// 0x33a14661
// declared property getter: - (double)timeStamp;	// 0x33a146dd
- (void)unload;	// 0x33a10d85
- (void)updateGeometry;	// 0x33a10525
// declared property getter: - (id)uuid;	// 0x33a14639
@end

