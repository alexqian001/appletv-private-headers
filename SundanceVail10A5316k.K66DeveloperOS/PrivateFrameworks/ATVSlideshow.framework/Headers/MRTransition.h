/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import <NSObject.h> // Unknown library
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, MRLayer, MRImage, NSString;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	id mTransitioner;	// 8 = 0x8
	MRLayer *mSourceLayer;	// 12 = 0xc
	MRLayer *mTargetLayer;	// 16 = 0x10
	MRImage *mSourceLayerImage;	// 20 = 0x14
	MRImage *mTargetLayerImage;	// 24 = 0x18
	MRImage *mOutputImage;	// 28 = 0x1c
	NSString *mTransitionID;	// 32 = 0x20
	NSString *mPresetID;	// 36 = 0x24
	NSDictionary *mAttributes;	// 40 = 0x28
	NSDictionary *mFlattenedAttributes;	// 44 = 0x2c
	BOOL mNeedsToUpdateAttributes;	// 48 = 0x30
	CGSize mPixelSize;	// 52 = 0x34
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x3651ce51; S=0x3651c781; @synthesize=mAttributes
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x3651cad1; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x3651cb39; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x3651ca51; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x3651ca91; 
@property(readonly, assign, nonatomic) BOOL needsSourceLayerImageForPrecomputing;	// G=0x3651c701; 
@property(readonly, assign, nonatomic) BOOL needsTargetLayerImageForPrecomputing;	// G=0x3651c741; 
@property(readonly, assign, nonatomic) BOOL noContentsMotion;	// G=0x3651c6c1; 
@property(assign, nonatomic) CGSize pixelSize;	// G=0x3651ce61; S=0x3651ce79; @synthesize=mPixelSize
@property(copy) NSString *presetID;	// G=0x3651ce19; S=0x3651ce2d; @synthesize=mPresetID
@property(retain) MRLayer *sourceLayer;	// G=0x3651cd75; S=0x3651cd89; @synthesize=mSourceLayer
@property(retain, nonatomic) MRImage *sourceLayerImage;	// G=0x3651cde5; S=0x3651c951; @synthesize=mSourceLayerImage
@property(retain) MRLayer *targetLayer;	// G=0x3651cdad; S=0x3651cdc1; @synthesize=mTargetLayer
@property(retain, nonatomic) MRImage *targetLayerImage;	// G=0x3651cdf5; S=0x3651c991; @synthesize=mTargetLayerImage
@property(readonly, assign) NSString *transitionID;	// G=0x3651ce05; @synthesize=mTransitionID
+ (id)retainedTransitionWithTransitionID:(id)transitionID forTransitioner:(id)transitioner;	// 0x3651c321
- (id)initWithTransitionID:(id)transitionID;	// 0x3651c371
// declared property getter: - (id)attributes;	// 0x3651ce51
- (void)cancelLoading;	// 0x3651ca4d
- (void)cleanup;	// 0x3651c531
- (void)dealloc;	// 0x3651c4b1
- (void)finalize;	// 0x3651c4f1
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x3651cad1
// declared property getter: - (BOOL)isInfinite;	// 0x3651cb39
- (BOOL)isLoadedForTime:(double)time;	// 0x3651c9d1
// declared property getter: - (BOOL)isNative3D;	// 0x3651ca51
// declared property getter: - (BOOL)isOpaque;	// 0x3651ca91
- (BOOL)isRetainedByTransitioner;	// 0x3651c6a9
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x3651c9d5
// declared property getter: - (BOOL)needsSourceLayerImageForPrecomputing;	// 0x3651c701
// declared property getter: - (BOOL)needsTargetLayerImageForPrecomputing;	// 0x3651c741
// declared property getter: - (BOOL)noContentsMotion;	// 0x3651c6c1
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3651cc0d
// declared property getter: - (CGSize)pixelSize;	// 0x3651ce61
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3651cb3d
// declared property getter: - (id)presetID;	// 0x3651ce19
- (void)releaseByTransitioner:(id)transitioner;	// 0x3651c5cd
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3651cbe1
- (void)retainByTransitioner:(id)transitioner;	// 0x3651c5a5
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3651cbf5
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x3651c781
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x3651ce79
// declared property setter: - (void)setPresetID:(id)anId;	// 0x3651ce2d
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x3651cd89
// declared property setter: - (void)setSourceLayerImage:(id)image;	// 0x3651c951
// declared property setter: - (void)setTargetLayer:(id)layer;	// 0x3651cdc1
// declared property setter: - (void)setTargetLayerImage:(id)image;	// 0x3651c991
// declared property getter: - (id)sourceLayer;	// 0x3651cd75
// declared property getter: - (id)sourceLayerImage;	// 0x3651cde5
// declared property getter: - (id)targetLayer;	// 0x3651cdad
// declared property getter: - (id)targetLayerImage;	// 0x3651cdf5
// declared property getter: - (id)transitionID;	// 0x3651ce05
- (void)unload;	// 0x3651c9d9
@end

