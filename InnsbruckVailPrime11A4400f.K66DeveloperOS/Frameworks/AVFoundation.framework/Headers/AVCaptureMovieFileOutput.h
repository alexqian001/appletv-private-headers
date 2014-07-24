/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureFileOutput.h"

@class NSArray, AVCaptureMovieFileOutputInternal;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
	AVCaptureMovieFileOutputInternal *_internal;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *metadata;	// G=0x2c2ceeb9; S=0x2c2cef01; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x2c2ce961; S=0x2c2ce991; 
@property(assign) BOOL sendsLastVideoPreviewFrame;	// G=0x2c2cea89; S=0x2c2cea69; converted property
+ (BOOL)consolidateMovieFragmentsInFile:(id)file error:(id *)error;	// 0x2c2cf00d
+ (void)initialize;	// 0x2c2ce295
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)avmetadataItemArray;	// 0x2c2ced35
+ (BOOL)updateMovieMetadataInFile:(id)file withMetadata:(id)metadata error:(id *)error;	// 0x2c2cef85
- (id)init;	// 0x2c2ce345
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x2c2d0ca5
- (id)_avErrorUserInfoDictionaryForError:(long)error wrapper:(id)wrapper;	// 0x2c2cf2bd
- (void)_handleStartRecordingError:(long)error info:(id)info;	// 0x2c2cf081
- (long)_startRecording:(id)recording;	// 0x2c2d046d
- (long)_stopRecording;	// 0x2c2d0c7d
- (id)connectionMediaTypes;	// 0x2c2ce411
- (void)dealloc;	// 0x2c2ce3c5
- (void)didStopForSession:(id)session error:(id)error;	// 0x2c2ce8d9
- (BOOL)getRecorderBoolForKey:(id)key withDefault:(BOOL)aDefault;	// 0x2c2ce2b9
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x2c2ce911
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x2c2cf429
- (BOOL)isRecording;	// 0x2c2ce479
- (BOOL)isRecordingPaused;	// 0x2c2ce4b5
// declared property getter: - (id)metadata;	// 0x2c2ceeb9
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x2c2ce961
- (id)outputFileURL;	// 0x2c2ce645
- (id)outputSettingsForConnection:(id)connection;	// 0x2c2ceaa9
- (void)pauseRecording;	// 0x2c2ce4dd
- (void)resumeRecording;	// 0x2c2ce591
// converted property getter: - (BOOL)sendsLastVideoPreviewFrame;	// 0x2c2cea89
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x2c2cef01
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x2c2ce991
// converted property setter: - (void)setSendsLastVideoPreviewFrame:(BOOL)frame;	// 0x2c2cea69
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x2c2ce6c9
- (void)stopRecording;	// 0x2c2ce8c9
@end
