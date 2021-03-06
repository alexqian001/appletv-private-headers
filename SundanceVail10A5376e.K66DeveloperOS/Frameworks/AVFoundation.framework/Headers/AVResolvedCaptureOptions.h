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
@property(readonly, retain) NSMutableDictionary *baseCaptureOptions;	// G=0x36939b85; converted property
@property(readonly, retain) AVCaptureDeviceFormat *resolvedVideoDeviceFormat;	// G=0x3693a239; converted property
+ (void)initialize;	// 0x36939921
+ (id)resolvedCaptureOptionsWithCaptureOptionsDictionary:(id)captureOptionsDictionary;	// 0x36939a99
- (id)initWithCaptureOptionsDictionary:(id)captureOptionsDictionary;	// 0x36939945
- (void)addFaceDetectionMode:(id)mode forConnection:(id)connection;	// 0x36939d05
- (void)addMaxFrameRate:(float)rate forConnection:(id)connection;	// 0x36939be5
- (void)addMinFrameRate:(float)rate forConnection:(id)connection;	// 0x36939ba9
- (void)addOutputSettings:(id)settings forConnection:(id)connection;	// 0x36939b95
// converted property getter: - (id)baseCaptureOptions;	// 0x36939b85
- (id)cameraForCaptureOptions:(id)captureOptions;	// 0x3693a26d
- (void)dealloc;	// 0x36939ae5
- (id)deviceFormatForCamera:(id)camera captureOptions:(id)options;	// 0x3693ad71
- (void)enableFaceDetectionNotificationsForConnection:(id)connection;	// 0x36939d71
- (BOOL)hasHeightOverrideInResolvedOptions:(id)resolvedOptions;	// 0x3693a485
- (BOOL)hasMaxFrameRateOverrideInResolvedOptions:(id)resolvedOptions;	// 0x3693a5f5
- (BOOL)hasMinFrameRateOverrideInResolvedOptions:(id)resolvedOptions;	// 0x3693a531
- (BOOL)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)resolvedOptions withScalingMode:(id)scalingMode;	// 0x3693a739
- (BOOL)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)resolvedOptions withScalingMode:(id)scalingMode;	// 0x3693a7b5
- (BOOL)hasOverridesAffectingSensorFormatInResolvedOptions:(id)resolvedOptions;	// 0x3693a6b9
- (BOOL)hasWidthOverrideInResolvedOptions:(id)resolvedOptions;	// 0x3693a3d9
- (int)rankForFaceDetectionMode:(id)faceDetectionMode;	// 0x36939c49
- (void)resolveFrameRatesToCaptureOptions:(id)captureOptions;	// 0x3693a831
- (void)resolveOutputSettingsToCaptureOptions:(id)captureOptions resolvedScalingMode:(id *)mode;	// 0x3693a9ed
- (id)resolvedCaptureOptionsDictionary;	// 0x36939e99
// converted property getter: - (id)resolvedVideoDeviceFormat;	// 0x3693a239
- (void)setBestCaptureResolutionForAVScalingMode:(id)avscalingMode captureOptions:(id)options;	// 0x3693b615
- (void)setBestPreviewResolutionForCaptureOptions:(id)captureOptions;	// 0x3693b459
- (void)setBestSensorResolutionForCamera:(id)camera captureOptions:(id)options chosenSensorFormat:(id *)format;	// 0x3693b2a5
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x36939d85
- (void)usePreviewSizedCaptureBuffersForConnection:(id)connection;	// 0x36939c21
- (void)useStabilizationIfAvailableForConnection:(id)connection;	// 0x36939c35
- (void)validateResolvedOptions:(id)options againstSensorFormat:(id)format;	// 0x3693b849
@end

