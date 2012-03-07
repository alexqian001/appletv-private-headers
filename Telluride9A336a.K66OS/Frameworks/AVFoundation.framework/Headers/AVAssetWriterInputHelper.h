/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetWriterInputConfigurationState, AVOutputSettings, AVWeakReference, NSDictionary, NSArray, NSString;

@interface AVAssetWriterInputHelper : NSObject {
@private
	AVAssetWriterInputConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriterInput;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVAssetWriterInputConfigurationState *configurationState;	// G=0x3146abbd; @synthesize=_configurationState
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x3146bbe9; S=0x3146cb99; 
@property(assign, nonatomic) int mediaTimeScale;	// G=0x3146bbc1; S=0x3146cc25; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3146bb21; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3146bb99; S=0x3146ccb1; 
@property(readonly, assign, nonatomic) AVOutputSettings *outputSettings;	// G=0x3146bb49; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x3146abb9; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x3146abad; 
@property(retain, nonatomic) opaqueCMFormatDescription *sampleBufferFormatHint;	// G=0x3146bb71; S=0x3146cdf9; 
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x3146bc11; S=0x3146c8fd; 
@property(readonly, assign, nonatomic) int status;	// G=0x3146ce85; 
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x3146cdc9; S=0x3146cd3d; 
@property(retain) AVWeakReference *weakReferenceToAssetWriterInput;	// G=0x3146c8e5; S=0x3146c8c1; @synthesize=_weakReferenceToAssetWriterInput
- (id)initWithConfigurationState:(id)configurationState;	// 0x3146ceb9
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x3146c9f5
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x3146ca81
// declared property getter: - (id)configurationState;	// 0x3146abbd
- (void)dealloc;	// 0x3146c861
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x3146bbe9
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x3146abad
- (void)markAsFinished;	// 0x3146c969
// declared property getter: - (int)mediaTimeScale;	// 0x3146bbc1
// declared property getter: - (id)mediaType;	// 0x3146bb21
// declared property getter: - (id)metadata;	// 0x3146bb99
// declared property getter: - (id)outputSettings;	// 0x3146bb49
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x3146abb9
- (void)prepareToEndSession;	// 0x3146abb1
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x3146abb5
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x3146cb0d
// declared property getter: - (opaqueCMFormatDescription *)sampleBufferFormatHint;	// 0x3146bb71
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x3146cb99
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x3146cc25
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3146ccb1
// declared property setter: - (void)setSampleBufferFormatHint:(opaqueCMFormatDescription *)hint;	// 0x3146cdf9
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x3146c8fd
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x3146cd3d
// declared property setter: - (void)setWeakReferenceToAssetWriterInput:(id)assetWriterInput;	// 0x3146c8c1
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x3146bc11
// declared property getter: - (int)status;	// 0x3146ce85
// declared property getter: - (CGAffineTransform)transform;	// 0x3146cdc9
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)error;	// 0x3146bae5
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x3146b6c9
// declared property getter: - (id)weakReferenceToAssetWriterInput;	// 0x3146c8e5
@end
