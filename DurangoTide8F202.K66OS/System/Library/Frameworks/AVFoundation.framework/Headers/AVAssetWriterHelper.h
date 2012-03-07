/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVMediaFileType, AVWeakReference, AVAssetWriterConfigurationState, NSError, NSURL, NSArray;

@interface AVAssetWriterHelper : NSObject {
@private
	AVAssetWriterConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriter;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *availableMediaTypes;	// G=0x303e614d; 
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState *configurationState;	// G=0x303e6089; @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError *error;	// G=0x303e607d; 
@property(readonly, assign, nonatomic) NSArray *inputs;	// G=0x303e60bd; 
@property(readonly, assign, nonatomic) AVMediaFileType *mediaFileType;	// G=0x303e617d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x303e60e1; S=0x303e7e01; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x303e79e9; S=0x303e7f99; 
@property(assign, nonatomic) int movieTimeScale;	// G=0x303e6105; S=0x303e7e89; 
@property(readonly, assign, nonatomic) NSURL *outputURL;	// G=0x303e61a1; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x303e6129; S=0x303e7f11; 
@property(readonly, assign, nonatomic) int status;	// G=0x303e8ae1; 
@property(retain) AVWeakReference *weakReferenceToAssetWriter;	// G=0x303e8d99; S=0x303e6c3d; @synthesize=_weakReferenceToAssetWriter
- (id)init;	// 0x303e61c5
- (id)initWithConfigurationState:(id)configurationState;	// 0x303e89b1
- (BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id *)reason;	// 0x303e8b11
- (void)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;	// 0x303e84dd
- (void)addInput:(id)input;	// 0x303e7d79
// declared property getter: - (id)availableMediaTypes;	// 0x303e614d
- (BOOL)canAddInput:(id)input;	// 0x303e6081
- (BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;	// 0x303e6099
- (void)cancelWriting;	// 0x303e6085
// declared property getter: - (id)configurationState;	// 0x303e6089
- (void)dealloc;	// 0x303e69d9
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x303e7bd1
// declared property getter: - (id)error;	// 0x303e607d
- (void)finishWriting;	// 0x303e7b49
// declared property getter: - (id)inputs;	// 0x303e60bd
// declared property getter: - (id)mediaFileType;	// 0x303e617d
// declared property getter: - (id)metadata;	// 0x303e60e1
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x303e79e9
// declared property getter: - (int)movieTimeScale;	// 0x303e6105
// declared property getter: - (id)outputURL;	// 0x303e61a1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x303e7e01
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x303e7f99
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x303e7e89
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x303e7f11
// declared property setter: - (void)setWeakReferenceToAssetWriter:(id)assetWriter;	// 0x303e6c3d
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x303e6129
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x303e7c61
- (void)startWriting;	// 0x303e7cf1
// declared property getter: - (int)status;	// 0x303e8ae1
- (void)transitionToFailedStatusWithError:(id)error;	// 0x303e83a5
// declared property getter: - (id)weakReferenceToAssetWriter;	// 0x303e8d99
@end
