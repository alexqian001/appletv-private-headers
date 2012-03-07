/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, AVCaptureDeviceInternal;

@interface AVCaptureDevice : NSObject {
	AVCaptureDeviceInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL automaticallyAdjustsImageControlMode;	// G=0x34764b0d; S=0x34764d39; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x34764a45; 
@property(assign) int exposureMode;	// G=0x34764ad9; S=0x34764ea5; converted property
@property(assign) CGPoint exposurePointOfInterest;	// G=0x34764ae5; S=0x34764e11; converted property
@property(assign) int flashMode;	// G=0x34764aad; S=0x34765101; converted property
@property(assign) int focusMode;	// G=0x34764ac9; S=0x34764fd1; converted property
@property(assign) CGPoint focusPointOfInterest;	// G=0x34765c05; S=0x34764f3d; converted property
@property(assign) int imageControlMode;	// G=0x34764b11; S=0x34764cf9; converted property
@property(readonly, assign, nonatomic) NSString *localizedName;	// G=0x3476526d; 
@property(readonly, assign, nonatomic) NSString *modelID;	// G=0x347649b9; 
@property(retain) id session;	// G=0x347649cd; S=0x347649e9; converted property
@property(assign, getter=isSubjectAreaChangeMonitoringEnabled) BOOL subjectAreaChangeMonitoringEnabled;	// G=0x34764a09; S=0x34764a25; converted property
@property(assign) int torchMode;	// G=0x34764ac1; S=0x34765069; converted property
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x347649ad; 
@property(assign) int whiteBalanceMode;	// G=0x34764af9; S=0x34764d79; converted property
+ (id)_devices;	// 0x34764c49
+ (id)defaultDeviceWithMediaType:(id)mediaType;	// 0x34764c69
+ (id)deviceWithUniqueID:(id)uniqueID;	// 0x34765771
+ (id)devices;	// 0x34765995
+ (id)devicesWithMediaType:(id)mediaType;	// 0x34765855
- (id)init;	// 0x34765199
- (void)_forceClosed;	// 0x347654d5
- (void)_sessionDidStart;	// 0x34764a05
- (BOOL)_startUsingDevice:(id *)device;	// 0x34765685
- (void)_stopUsingDevice;	// 0x34764b21
// converted property getter: - (BOOL)automaticallyAdjustsImageControlMode;	// 0x34764b0d
- (void)close;	// 0x34765541
- (void)dealloc;	// 0x34764c01
- (id)description;	// 0x34764bed
- (void)deviceConnectionDidChange;	// 0x34764b51
- (void)deviceConnectionWillChange;	// 0x34764bbd
- (BOOL)doesHandleNotification:(id)notification;	// 0x34764b19
// converted property getter: - (int)exposureMode;	// 0x34764ad9
// converted property getter: - (CGPoint)exposurePointOfInterest;	// 0x34764ae5
// converted property getter: - (int)flashMode;	// 0x34764aad
// converted property getter: - (int)focusMode;	// 0x34764ac9
// converted property getter: - (CGPoint)focusPointOfInterest;	// 0x34765c05
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x34764b1d
- (BOOL)hasFlash;	// 0x34764a9d
- (BOOL)hasMediaType:(id)type;	// 0x347649c5
- (BOOL)hasTorch;	// 0x34764ab1
// converted property getter: - (int)imageControlMode;	// 0x34764b11
- (BOOL)isAdjustingExposure;	// 0x34764af1
- (BOOL)isAdjustingWhiteBalance;	// 0x34764b01
- (BOOL)isAudioLevelMeteringSupported;	// 0x34764b05
// declared property getter: - (BOOL)isConnected;	// 0x34764a45
- (BOOL)isExposureModeSupported:(int)supported;	// 0x34764ad5
- (BOOL)isExposurePointOfInterestSupported;	// 0x34764ae1
- (BOOL)isFlashActive;	// 0x34764aa5
- (BOOL)isFlashAvailable;	// 0x34764aa1
- (BOOL)isFlashModeSupported:(int)supported;	// 0x34764aa9
- (BOOL)isFocusModeSupported:(int)supported;	// 0x34764ac5
- (BOOL)isFocusPointOfInterestSupported;	// 0x34764ad1
- (BOOL)isImageControlModeSupported:(int)supported;	// 0x34764b09
- (BOOL)isInUseByAnotherApplication;	// 0x34764a41
- (BOOL)isLockedForConfiguration;	// 0x34764a49
- (BOOL)isOpen;	// 0x34764a6d
// converted property getter: - (BOOL)isSubjectAreaChangeMonitoringEnabled;	// 0x34764a09
- (BOOL)isTorchAvailable;	// 0x34764abd
- (BOOL)isTorchModeSupported:(int)supported;	// 0x34764ab9
- (BOOL)isWhiteBalanceModeSupported:(int)supported;	// 0x34764af5
// declared property getter: - (id)localizedName;	// 0x3476526d
- (BOOL)lockForConfiguration:(id *)configuration;	// 0x34765365
// declared property getter: - (id)modelID;	// 0x347649b9
- (BOOL)open:(id *)open;	// 0x347655c9
- (int)position;	// 0x34764a99
// converted property getter: - (id)session;	// 0x347649cd
// converted property setter: - (void)setAutomaticallyAdjustsImageControlMode:(BOOL)mode;	// 0x34764d39
// converted property setter: - (void)setExposureMode:(int)mode;	// 0x34764ea5
// converted property setter: - (void)setExposurePointOfInterest:(CGPoint)interest;	// 0x34764e11
// converted property setter: - (void)setFlashMode:(int)mode;	// 0x34765101
// converted property setter: - (void)setFocusMode:(int)mode;	// 0x34764fd1
// converted property setter: - (void)setFocusPointOfInterest:(CGPoint)interest;	// 0x34764f3d
// converted property setter: - (void)setImageControlMode:(int)mode;	// 0x34764cf9
// converted property setter: - (void)setSession:(id)session;	// 0x347649e9
// converted property setter: - (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)enabled;	// 0x34764a25
// converted property setter: - (void)setTorchMode:(int)mode;	// 0x34765069
// converted property setter: - (void)setWhiteBalanceMode:(int)mode;	// 0x34764d79
- (BOOL)startUsingDevice:(id *)device;	// 0x34764a91
- (void)stopUsingDevice;	// 0x34764a95
- (BOOL)supportsAVCaptureSessionPreset:(id)preset;	// 0x347649c9
- (float)torchLevel;	// 0x34764ab5
// converted property getter: - (int)torchMode;	// 0x34764ac1
// declared property getter: - (id)uniqueID;	// 0x347649ad
- (void)unlockForConfiguration;	// 0x34765289
// converted property getter: - (int)whiteBalanceMode;	// 0x34764af9
@end
