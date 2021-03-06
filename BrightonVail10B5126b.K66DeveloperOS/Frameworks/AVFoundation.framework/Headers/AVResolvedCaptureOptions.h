/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSMutableDictionary, AVCaptureDeviceFormat, NSString;

@interface AVResolvedCaptureOptions : NSObject {
	NSMutableDictionary *baseCaptureOptions;	// 4 = 0x4
	NSMutableDictionary *optionsOverrides;	// 8 = 0x8
	CFDictionaryRef outputSettingsOverrides;	// 12 = 0xc
	float minFrameRateOverride;	// 16 = 0x10
	float maxFrameRateOverride;	// 20 = 0x14
	BOOL usePreviewSizedCaptureBuffers;	// 24 = 0x18
	BOOL useStabilizationIfAvailable;	// 25 = 0x19
	NSString *faceDetectionMode;	// 28 = 0x1c
	BOOL faceDetectionNotificationsEnabled;	// 32 = 0x20
	AVCaptureDeviceFormat *resolvedVideoDeviceFormat;	// 36 = 0x24
}
@property(readonly, retain) NSMutableDictionary *baseCaptureOptions;	// G=0x302e39ed; converted property
@property(readonly, retain) AVCaptureDeviceFormat *resolvedVideoDeviceFormat;	// G=0x302e4069; converted property
+ (void)initialize;	// 0x302e37a9
+ (id)resolvedCaptureOptionsWithCaptureOptionsDictionary:(id)captureOptionsDictionary;	// 0x302e3901
- (id)initWithCaptureOptionsDictionary:(id)captureOptionsDictionary;	// 0x302e37ad
- (void)addFaceDetectionMode:(id)mode forConnection:(id)connection;	// 0x302e3b6d
- (void)addMaxFrameRate:(float)rate forConnection:(id)connection;	// 0x302e3a4d
- (void)addMinFrameRate:(float)rate forConnection:(id)connection;	// 0x302e3a11
- (void)addOutputSettings:(id)settings forConnection:(id)connection;	// 0x302e39fd
// converted property getter: - (id)baseCaptureOptions;	// 0x302e39ed
- (id)cameraForCaptureOptions:(id)captureOptions;	// 0x302e409d
- (void)dealloc;	// 0x302e394d
- (id)deviceFormatForCamera:(id)camera captureOptions:(id)options;	// 0x302e4a89
- (void)enableFaceDetectionNotificationsForConnection:(id)connection;	// 0x302e3bd9
- (BOOL)hasHeightOverrideInResolvedOptions:(id)resolvedOptions;	// 0x302e4275
- (BOOL)hasMaxFrameRateOverrideInResolvedOptions:(id)resolvedOptions;	// 0x302e4359
- (BOOL)hasMinFrameRateOverrideInResolvedOptions:(id)resolvedOptions;	// 0x302e42e1
- (BOOL)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)resolvedOptions withScalingMode:(id)scalingMode;	// 0x302e4451
- (BOOL)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)resolvedOptions withScalingMode:(id)scalingMode;	// 0x302e44cd
- (BOOL)hasOverridesAffectingSensorFormatInResolvedOptions:(id)resolvedOptions;	// 0x302e43d1
- (BOOL)hasWidthOverrideInResolvedOptions:(id)resolvedOptions;	// 0x302e4209
- (int)rankForFaceDetectionMode:(id)faceDetectionMode;	// 0x302e3ab1
- (void)resolveFrameRatesToCaptureOptions:(id)captureOptions;	// 0x302e4549
- (void)resolveOutputSettingsToCaptureOptions:(id)captureOptions resolvedScalingMode:(id *)mode;	// 0x302e4705
- (id)resolvedCaptureOptionsDictionary;	// 0x302e3d01
// converted property getter: - (id)resolvedVideoDeviceFormat;	// 0x302e4069
- (void)setBestCaptureResolutionForAVScalingMode:(id)avscalingMode captureOptions:(id)options;	// 0x302e5135
- (void)setBestPreviewResolutionForCaptureOptions:(id)captureOptions;	// 0x302e4fc1
- (void)setBestSensorResolutionForCamera:(id)camera captureOptions:(id)options chosenSensorFormat:(id *)format;	// 0x302e4e79
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x302e3bed
- (void)usePreviewSizedCaptureBuffersForConnection:(id)connection;	// 0x302e3a89
- (void)useStabilizationIfAvailableForConnection:(id)connection;	// 0x302e3a9d
- (void)validateResolvedOptions:(id)options againstSensorFormat:(id)format;	// 0x302e5369
@end

