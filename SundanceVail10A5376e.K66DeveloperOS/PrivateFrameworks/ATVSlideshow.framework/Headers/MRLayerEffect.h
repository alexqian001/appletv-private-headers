/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRLayer.h"

@class NSMutableDictionary, MCContainerEffect, NSDictionary, MREffect, NSString, NSArray, MRSlideProvider, MRImage;

@interface MRLayerEffect : MRLayer {
	MREffect *mEffect;	// 120 = 0x78
	NSMutableDictionary *mSlideProvidersForElementIDs;	// 124 = 0x7c
	NSArray *mSlideProviders;	// 128 = 0x80
	NSMutableDictionary *mSlideShowTimeScripts;	// 132 = 0x84
	NSMutableDictionary *mTextsForElementIDs;	// 136 = 0x88
	MRSlideProvider *mMultiImageModelInput;	// 140 = 0x8c
	unsigned long mIndexOfFirstMultiImageInput;	// 144 = 0x90
	NSRange mMultiImageSlideRange;	// 148 = 0x94
	BOOL mNeedsToUpdateEffect;	// 156 = 0x9c
	BOOL mNeedsToUpdateTiming;	// 157 = 0x9d
	BOOL mNeedsToUpdateSlides;	// 158 = 0x9e
	BOOL mNeedsToUpdateTexts;	// 159 = 0x9f
	BOOL mNeedsToUpdateEffectAttributes;	// 160 = 0xa0
	BOOL mNeedsToUpdateEffectLiveAttributes;	// 161 = 0xa1
	BOOL mSlidesAreReadonly;	// 162 = 0xa2
	BOOL mHasRequestedMoreSlides;	// 163 = 0xa3
	MRImage *mAccumulatedImage;	// 164 = 0xa4
	NSString *mTargetedElement;	// 168 = 0xa8
	NSString *mEditedElement;	// 172 = 0xac
	MCContainerEffect *mContainer;	// 176 = 0xb0
}
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x362b2d55; S=0x362b21cd; @synthesize=mAccumulatedImage
@property(assign, setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;	// G=0x362b2b95; S=0x362b2bbd; 
@property(readonly, assign) MCContainerEffect *container;	// G=0x362b2d8d; @synthesize=mContainer
@property(copy, nonatomic) NSString *editedElement;	// G=0x362b2d79; S=0x362b2161; @synthesize=mEditedElement
@property(readonly, assign) NSDictionary *slideProvidersForElementIDs;	// G=0x362b2da1; @synthesize=mSlideProvidersForElementIDs
@property(copy, nonatomic) NSString *targetedElement;	// G=0x362b2d65; S=0x362b20f5; @synthesize=mTargetedElement
@property(readonly, assign) NSDictionary *textsForElementIDs;	// G=0x362b2db5; @synthesize=mTextsForElementIDs
- (id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;	// 0x362b0bd9
- (void)_addAudioPlayer:(id)player;	// 0x362b2d15
- (void)_cleanupProviders;	// 0x362b36bd
- (id)_dumpLayerWithOptions:(unsigned)options;	// 0x362b2acd
- (id)_effectAttributes;	// 0x362b2c01
- (void)_effectTriggeredStop;	// 0x362b2c79
- (BOOL)_hideTextWhileEditing;	// 0x362b2c21
- (BOOL)_isNative3D;	// 0x362b2419
- (int)_maxLinesForTextElement:(id)textElement;	// 0x362b2a75
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x362b2a01
- (void)_observePlug;	// 0x362b4889
- (void)_observePlugOnPreactivate;	// 0x362b49b5
- (void)_rebuildEffect;	// 0x362b2dc9
- (void)_removeAudioPlayer:(id)player;	// 0x362b2d35
- (void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x362b4b01
- (CGSize)_rendererSize;	// 0x362b2c49
- (void)_requestRendering;	// 0x362b2bdd
- (id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x362b4bc5
- (BOOL)_setStateValue:(id)value forKey:(id)key;	// 0x362b2451
- (void)_stallRenderer;	// 0x362b2b75
- (void)_unobservePlug;	// 0x362b4931
- (void)_unobservePlugOnDepreactivate;	// 0x362b4a6d
- (void)_updateEffectAttributes;	// 0x362b4671
- (void)_updateSlides;	// 0x362b3b0d
- (void)_updateTexts;	// 0x362b43b9
- (void)_updateTiming;	// 0x362b3949
// declared property getter: - (id)accumulatedImage;	// 0x362b2d55
- (id)actionHitAtPoint:(CGPoint)point layer:(id *)layer;	// 0x362b298d
// declared property getter: - (BOOL)asynchronousOperationsAreSuspended;	// 0x362b2b95
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x362b1559
- (void)cleanup;	// 0x362b0df9
// declared property getter: - (id)container;	// 0x362b2d8d
// declared property getter: - (id)editedElement;	// 0x362b2d79
- (id)elementHitAtPoint:(CGPoint)point localPoint:(CGPoint *)point2;	// 0x362b267d
- (id)elementHitAtPoint:(CGPoint)point localPoint:(CGPoint *)point2 localTime:(double *)time;	// 0x362b2641
- (void)endMorphing;	// 0x362b163d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates forElement:(id)element;	// 0x362b2759
- (BOOL)hasAudio;	// 0x362b2291
- (BOOL)hasSomethingToRender;	// 0x362b20a9
- (BOOL)isAlphaFriendly;	// 0x362b18a9
- (BOOL)isLoadedForTime:(double)time;	// 0x362b1641
- (BOOL)isOpaque;	// 0x362b1885
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x362b0f35
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x362b1e09
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x362b18cd
- (double)pzrCancel:(id)cancel;	// 0x362b4e99
- (double)pzrEnd:(id)end;	// 0x362b4e09
- (double)pzrStart:(id)start;	// 0x362b4ce9
- (double)pzrUpdate:(id)update;	// 0x362b4d79
- (void)resumeOrPause:(BOOL)pause;	// 0x362b11f9
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x362b21cd
// declared property setter: - (void)setEditedElement:(id)element;	// 0x362b2161
- (void)setPixelSize:(CGSize)size;	// 0x362b1f49
// declared property setter: - (void)setTargetedElement:(id)element;	// 0x362b20f5
// declared property getter: - (id)slideProvidersForElementIDs;	// 0x362b2da1
- (BOOL)supportsDynamicExpansion;	// 0x362b1f25
// declared property setter: - (void)suspendAsynchronousOperations:(BOOL)operations;	// 0x362b2bbd
- (void)synchronizeTime;	// 0x362b1449
// declared property getter: - (id)targetedElement;	// 0x362b2d65
// declared property getter: - (id)textsForElementIDs;	// 0x362b2db5
- (void)unload;	// 0x362b1805
@end
