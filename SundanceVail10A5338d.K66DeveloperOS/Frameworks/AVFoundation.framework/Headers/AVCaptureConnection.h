/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureVideoPreviewLayer, AVCaptureOutput, AVCaptureConnectionInternal, NSArray;

@interface AVCaptureConnection : NSObject {
	AVCaptureConnectionInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0x31789eb5; 
@property(readonly, assign, nonatomic) NSArray *audioChannels;	// G=0x3178a191; 
@property(assign, nonatomic) BOOL automaticallyAdjustsVideoMirroring;	// G=0x3178ab05; S=0x3178ab25; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x31789ef5; S=0x31789f15; 
@property(assign, nonatomic) BOOL enablesVideoStabilizationWhenAvailable;	// G=0x3178b861; S=0x3178b881; 
@property(readonly, assign, nonatomic) NSArray *inputPorts;	// G=0x31789e71; 
@property(readonly, assign, nonatomic) AVCaptureOutput *output;	// G=0x31789de9; 
@property(readonly, assign, nonatomic, getter=isVideoMaxFrameDurationSupported) BOOL supportsVideoMaxFrameDuration;	// G=0x3178b1f5; 
@property(readonly, assign, nonatomic, getter=isVideoMinFrameDurationSupported) BOOL supportsVideoMinFrameDuration;	// G=0x3178ac79; 
@property(readonly, assign, nonatomic, getter=isVideoMirroringSupported) BOOL supportsVideoMirroring;	// G=0x3178a92d; 
@property(readonly, assign, nonatomic, getter=isVideoOrientationSupported) BOOL supportsVideoOrientation;	// G=0x3178ab45; 
@property(readonly, assign, nonatomic, getter=isVideoStabilizationSupported) BOOL supportsVideoStabilization;	// G=0x3178b7cd; 
@property(assign, nonatomic) XXStruct_pwHToB videoMaxFrameDuration;	// G=0x3178b219; S=0x3178b36d; 
@property(readonly, assign, nonatomic) float videoMaxScaleAndCropFactor;	// G=0x3178b6b9; 
@property(assign, nonatomic) XXStruct_pwHToB videoMinFrameDuration;	// G=0x3178ad55; S=0x3178aea9; 
@property(assign, nonatomic, getter=isVideoMirrored) BOOL videoMirrored;	// G=0x3178a94d; S=0x3178a96d; 
@property(assign, nonatomic) int videoOrientation;	// G=0x3178ab65; S=0x3178ab85; 
@property(readonly, assign, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;	// G=0x31789e2d; 
@property(assign) int videoRetainedBufferCountHint;	// G=0x3178b9c9; S=0x3178ba45; converted property
@property(assign, nonatomic) float videoScaleAndCropFactor;	// G=0x3178b6d9; S=0x3178b6f9; 
@property(readonly, assign, nonatomic, getter=isVideoStabilizationEnabled) BOOL videoStabilizationEnabled;	// G=0x3178b841; 
+ (id)connectionWithInputPort:(id)inputPort videoPreviewLayer:(id)layer;	// 0x317890e1
+ (id)connectionWithInputPorts:(id)inputPorts output:(id)output;	// 0x31789091
+ (void)initialize;	// 0x3178906d
- (void)initCommonStorage;	// 0x31789131
- (id)initWithInputPort:(id)inputPort videoPreviewLayer:(id)layer;	// 0x31789869
- (id)initWithInputPorts:(id)inputPorts output:(id)output;	// 0x31789771
- (void)_setVideoMirrored:(BOOL)mirrored;	// 0x3178aaa9
- (void)addInputPort:(id)port;	// 0x31789aa5
// declared property getter: - (id)audioChannels;	// 0x3178a191
// declared property getter: - (BOOL)automaticallyAdjustsVideoMirroring;	// 0x3178ab05
- (void)dealloc;	// 0x3178994d
- (id)description;	// 0x317899ad
// declared property getter: - (BOOL)enablesVideoStabilizationWhenAvailable;	// 0x3178b861
- (float)getAvgAudioLevelForChannel:(id)channel;	// 0x3178a395
- (float)getPeakAudioLevelForChannel:(id)channel;	// 0x3178a511
- (void)inputPortFormatDescriptionChanged:(id)changed;	// 0x31789a49
// declared property getter: - (id)inputPorts;	// 0x31789e71
- (void)invalidate;	// 0x31789b7d
// declared property getter: - (BOOL)isActive;	// 0x31789eb5
// declared property getter: - (BOOL)isEnabled;	// 0x31789ef5
- (BOOL)isLive;	// 0x31789fcd
// declared property getter: - (BOOL)isVideoMaxFrameDurationSupported;	// 0x3178b1f5
// declared property getter: - (BOOL)isVideoMinFrameDurationSupported;	// 0x3178ac79
// declared property getter: - (BOOL)isVideoMirrored;	// 0x3178a94d
// declared property getter: - (BOOL)isVideoMirroringSupported;	// 0x3178a92d
// declared property getter: - (BOOL)isVideoOrientationSupported;	// 0x3178ab45
- (BOOL)isVideoRetainedBufferCountHintSupported;	// 0x3178b92d
// declared property getter: - (BOOL)isVideoStabilizationEnabled;	// 0x3178b841
// declared property getter: - (BOOL)isVideoStabilizationSupported;	// 0x3178b7cd
- (id)mediaType;	// 0x3178a14d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3178bc55
// declared property getter: - (id)output;	// 0x31789de9
- (void)removeInputPort:(id)port;	// 0x31789b11
- (id)session;	// 0x31789a59
- (void)setActive:(BOOL)active;	// 0x31789ed5
// declared property setter: - (void)setAutomaticallyAdjustsVideoMirroring:(BOOL)mirroring;	// 0x3178ab25
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31789f15
// declared property setter: - (void)setEnablesVideoStabilizationWhenAvailable:(BOOL)available;	// 0x3178b881
// declared property setter: - (void)setVideoMaxFrameDuration:(XXStruct_pwHToB)duration;	// 0x3178b36d
// declared property setter: - (void)setVideoMinFrameDuration:(XXStruct_pwHToB)duration;	// 0x3178aea9
// declared property setter: - (void)setVideoMirrored:(BOOL)mirrored;	// 0x3178a96d
// declared property setter: - (void)setVideoOrientation:(int)orientation;	// 0x3178ab85
// converted property setter: - (void)setVideoRetainedBufferCountHint:(int)hint;	// 0x3178ba45
// declared property setter: - (void)setVideoScaleAndCropFactor:(float)factor;	// 0x3178b6f9
- (id)sourceDevice;	// 0x3178bb09
- (BOOL)sourcesFromFrontFacingCamera;	// 0x3178bc25
- (void)updateAudioChannelsArray;	// 0x3178a691
- (void)updateAudioLevelsArray;	// 0x3178a27d
// declared property getter: - (XXStruct_pwHToB)videoMaxFrameDuration;	// 0x3178b219
- (BOOL)videoMaxFrameDurationIsSet;	// 0x3178b635
- (int)videoMaxFrameRate;	// 0x3178acf9
// declared property getter: - (float)videoMaxScaleAndCropFactor;	// 0x3178b6b9
// declared property getter: - (XXStruct_pwHToB)videoMinFrameDuration;	// 0x3178ad55
- (BOOL)videoMinFrameDurationIsSet;	// 0x3178b171
- (int)videoMinFrameRate;	// 0x3178ac9d
// declared property getter: - (int)videoOrientation;	// 0x3178ab65
// declared property getter: - (id)videoPreviewLayer;	// 0x31789e2d
// converted property getter: - (int)videoRetainedBufferCountHint;	// 0x3178b9c9
// declared property getter: - (float)videoScaleAndCropFactor;	// 0x3178b6d9
@end
