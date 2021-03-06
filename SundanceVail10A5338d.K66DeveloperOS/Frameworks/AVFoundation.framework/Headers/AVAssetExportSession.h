/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, AVVideoComposition, NSString, AVAssetExportSessionInternal, NSError, AVAudioMix, AVAsset, NSURL;

@interface AVAssetExportSession : NSObject {
	AVAssetExportSessionInternal *_exportSession;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x3177f3b5; 
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x31780d5d; S=0x31780d7d; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3177ffc5; 
@property(readonly, assign, nonatomic) long long estimatedOutputFileLength;	// G=0x31780b69; 
@property(assign, nonatomic) long long fileLengthLimit;	// G=0x31780cb9; S=0x31780cdd; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB maxDuration;	// G=0x31780aed; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x31780bed; S=0x31780c0d; 
@property(copy, nonatomic) NSString *outputFileType;	// G=0x3177fb51; S=0x3177fb71; 
@property(copy, nonatomic) NSURL *outputURL;	// G=0x3177fd41; S=0x3177fd61; 
@property(readonly, assign, nonatomic) NSString *presetName;	// G=0x3177f3d5; 
@property(readonly, assign, nonatomic) float progress;	// G=0x3178024d; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3178101d; S=0x3178103d; 
@property(readonly, assign, nonatomic) int status;	// G=0x3177fe45; 
@property(readonly, assign, nonatomic) NSArray *supportedFileTypes;	// G=0x3177f629; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x317809c5; S=0x31780a21; 
@property(assign) BOOL usesHardwareVideoEncoderIfAvailable;	// G=0x317810b9; S=0x317810d9; converted property
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x31780e29; S=0x31780e49; 
+ (id)_audioOnlyPresets;	// 0x31781155
+ (id)_audioVideoPresets;	// 0x317811e9
+ (BOOL)_canWriteMediaOfAsset:(id)asset toFileType:(id)fileType;	// 0x3177e9dd
+ (long long)_estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;	// 0x31782969
+ (id)_figRemakerNotificationNames;	// 0x317824ad
+ (int)_getPassthroughExportPolicyForAssetTrack:(id)assetTrack fileType:(id)type asChapterTrack:(BOOL)track;	// 0x3177f3f5
+ (BOOL)_isCompositionWithMultipleNonEmptyEdits:(id)multipleNonEmptyEdits;	// 0x3177f515
+ (BOOL)_isExportPreset:(id)preset compatibleWithAsset:(id)asset outputFileType:(id)type;	// 0x31781ca5
+ (BOOL)_isNonPassthroughExportPreset:(id)preset compatibleWithAsset:(id)asset outputFileType:(id)type;	// 0x31781c49
+ (BOOL)_isNonPassthroughExportPreset:(id)preset compatibleWithAssetContainingPlayableAudio:(BOOL)assetContainingPlayableAudio playableVideo:(BOOL)video outputFileType:(id)type;	// 0x31781a91
+ (BOOL)_isPassthroughExportPresetCompatibleWithAsset:(id)asset outputFileType:(id)type;	// 0x317817a5
+ (BOOL)_isPassthroughSupportedForAsset:(id)asset;	// 0x3177e9ad
+ (XXStruct_pwHToB)_maximumDurationForPreset:(id)preset fileSizeBytesLimit:(long long)limit properties:(id)properties;	// 0x3178254d
+ (id)_settingForPreset:(id)preset;	// 0x31781d0d
+ (id)_utTypesForAudioOnly;	// 0x317816c1
+ (id)_utTypesForDefaultPassthroughPreset;	// 0x31781585
+ (id)_utTypesForPresets;	// 0x317812bd
+ (id)allExportPresets;	// 0x3177e689
+ (void)determineCompatibilityOfExportPreset:(id)exportPreset withAsset:(id)asset outputFileType:(id)type completionHandler:(id)handler;	// 0x3177eaf9
+ (long long)estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;	// 0x3177ed35
+ (id)exportPresetsCompatibleWithAsset:(id)asset;	// 0x3177e875
+ (id)exportSessionWithAsset:(id)asset presetName:(id)name;	// 0x3177ec69
+ (XXStruct_pwHToB)maximumDurationForPreset:(id)preset properties:(id)properties;	// 0x3177ecb5
- (id)init;	// 0x3177ed79
- (id)initWithAsset:(id)asset presetName:(id)name;	// 0x3177ed8d
- (id)_actualPresetName;	// 0x31782e19
- (id)_actualSettingForPreset:(id)preset;	// 0x31781d51
- (void)_addListeners;	// 0x317834bd
- (BOOL)_canPassThroughAudio:(id)audio checkEnabled:(BOOL)enabled checkProtected:(BOOL)aProtected;	// 0x31783ce9
- (BOOL)_canPassThroughVideo:(id)video checkEnabled:(BOOL)enabled checkAll:(BOOL)all checkProtected:(BOOL)aProtected;	// 0x31784969
- (OpaqueFigRemaker *)_createFigRemaker;	// 0x317855e1
- (id)_determineCompatibleFileTypes;	// 0x3177f699
- (CGSize)_getSourceDimension;	// 0x31783615
- (int)_getTrackCountOfType:(id)type checkEnabled:(BOOL)enabled;	// 0x31783839
- (void)_handleFigRemakerNotification:(id)notification payload:(id)payload;	// 0x31782b95
- (void)_handleFigRemakerNotificationAsync:(id)async payload:(id)payload;	// 0x31782d41
- (BOOL)_hasProtectedNonAudioVideoTracks;	// 0x3178396d
- (BOOL)_isAudioMixdownRequired:(CFStringRef)required error:(id *)error;	// 0x317855a9
- (void)_removeListeners;	// 0x31783305
- (id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)audioTrack fromAudioSetting:(id)audioSetting;	// 0x31784691
- (id)_settingForFigRemaker;	// 0x317847fd
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)tracksIsWithinFileLengthLimit forSetting:(id)setting;	// 0x31783b4d
- (void)_transitionToStatus:(int)status error:(id)error;	// 0x31782e4d
- (void)_updateProgress;	// 0x317801a5
- (BOOL)_validateSettablePropertiesReturningError:(id *)error;	// 0x317803ed
// declared property getter: - (id)asset;	// 0x3177f3b5
// declared property getter: - (id)audioMix;	// 0x31780d5d
- (void)cancelExport;	// 0x317809b1
- (void)dealloc;	// 0x3177f039
- (id)description;	// 0x3177f311
- (void)determineCompatibleFileTypesWithCompletionHandler:(id)completionHandler;	// 0x3177fa35
// declared property getter: - (id)error;	// 0x3177ffc5
// declared property getter: - (long long)estimatedOutputFileLength;	// 0x31780b69
- (void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;	// 0x3178060d
// declared property getter: - (long long)fileLengthLimit;	// 0x31780cb9
- (void)finalize;	// 0x3177f231
// declared property getter: - (XXStruct_pwHToB)maxDuration;	// 0x31780aed
// declared property getter: - (id)metadata;	// 0x31780bed
// declared property getter: - (id)outputFileType;	// 0x3177fb51
// declared property getter: - (id)outputURL;	// 0x3177fd41
// declared property getter: - (id)presetName;	// 0x3177f3d5
// declared property getter: - (float)progress;	// 0x3178024d
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x31780d7d
// declared property setter: - (void)setFileLengthLimit:(long long)limit;	// 0x31780cdd
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x31780c0d
// declared property setter: - (void)setOutputFileType:(id)type;	// 0x3177fb71
// declared property setter: - (void)setOutputURL:(id)url;	// 0x3177fd61
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3178103d
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x31780a21
// converted property setter: - (void)setUsesHardwareVideoEncoderIfAvailable:(BOOL)available;	// 0x317810d9
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x31780e49
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3178101d
// declared property getter: - (int)status;	// 0x3177fe45
// declared property getter: - (id)supportedFileTypes;	// 0x3177f629
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x317809c5
// converted property getter: - (BOOL)usesHardwareVideoEncoderIfAvailable;	// 0x317810b9
// declared property getter: - (id)videoComposition;	// 0x31780e29
@end

