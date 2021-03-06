/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSString, NSDictionary;
@protocol AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate, Endpointer;

@interface AVVoiceController : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(assign) float alertVolume;	// G=0x3034b1a9; S=0x3034b0b5; 
@property(assign, getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;	// G=0x30347b19; S=0x30347b31; 
@property(assign) id<Endpointer> endpointerDelegate;	// G=0x3034ad85; S=0x3034ad99; 
@property(readonly, assign) unsigned long long lastRecordStartTime;	// G=0x30347b05; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x3034b2c5; S=0x3034b2dd; 
@property(assign) id<AVVoiceControllerPlaybackDelegate> playbackDelegate;	// G=0x3034afd9; S=0x3034afed; @dynamic
@property(readonly, assign) NSDictionary *playbackSettings;	// G=0x3034b011; 
@property(assign) float playbackVolume;	// G=0x3034b2b1; S=0x3034b1bd; 
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x3034b079; 
@property(assign) id<AVVoiceControllerRecordDelegate> recordDelegate;	// G=0x3034a9ad; S=0x3034a9c1; @dynamic
@property(assign) double recordEndWaitTime;	// G=0x3034af61; S=0x3034af79; 
@property(assign) int recordEndpointMode;	// G=0x3034ae25; S=0x3034ae39; 
@property(assign) double recordInterspeechWaitTime;	// G=0x3034aee9; S=0x3034af01; 
@property(readonly, assign) NSString *recordRoute;	// G=0x30347af1; 
@property(readonly, assign) NSDictionary *recordSettings;	// G=0x3034a9e9; 
@property(assign) double recordStartWaitTime;	// G=0x3034ae71; S=0x3034ae89; 
@property(readonly, assign, getter=isRecording) BOOL recording;	// G=0x3034b091; 
@property(assign, getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;	// G=0x30347b4d; S=0x30347b65; 
@property(assign, getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;	// G=0x3034b5bd; S=0x3034b5d5; 
- (id)initWithContext:(id)context error:(id *)error;	// 0x30347c59
// declared property getter: - (float)alertVolume;	// 0x3034b1a9
- (float)averagePowerForChannel:(unsigned)channel;	// 0x3034b589
- (void)beganPlaying;	// 0x30347619
- (void)beganRecording;	// 0x30347245
- (void)beginPlaybackInterruption;	// 0x30347a91
- (void)beginRecordInterruption;	// 0x30347a31
- (void)dealloc;	// 0x303484e1
- (void)decodeError;	// 0x303479a1
- (void)encodeError;	// 0x30347589
- (void)endPlaybackInterruption;	// 0x30347ac1
- (void)endRecordInterruption;	// 0x30347a61
- (void)endpointDetected;	// 0x3034752d
// declared property getter: - (id)endpointerDelegate;	// 0x3034ad85
- (void)finalize;	// 0x30348325
- (void)finishedPlaying;	// 0x303476e5
- (void)finishedRecording;	// 0x30347315
- (double)getPlaybackBufferDuration;	// 0x3034b025
- (double)getRecordBufferDuration;	// 0x3034a9fd
- (void)hardwareConfigChanged;	// 0x30347035
- (ControllerImpl *)impl;	// 0x30347025
- (void)interspeechPointDetected;	// 0x303474cd
// declared property getter: - (BOOL)isBargeInDetectEnabled;	// 0x30347b19
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x3034b2c5
// declared property getter: - (BOOL)isPlaying;	// 0x3034b079
// declared property getter: - (BOOL)isRecording;	// 0x3034b091
// declared property getter: - (BOOL)isStopOnBargeInEnabled;	// 0x30347b4d
// declared property getter: - (BOOL)isStopOnEndpointEnabled;	// 0x3034b5bd
// declared property getter: - (unsigned long long)lastRecordStartTime;	// 0x30347b05
- (float)peakPowerForChannel:(unsigned)channel;	// 0x3034b555
- (BOOL)playAlertSoundForType:(int)type;	// 0x30349891
- (void)playbackBufferReceived:(MyAudioQueueBuffer *)received;	// 0x3034766d
// declared property getter: - (id)playbackDelegate;	// 0x3034afd9
// declared property getter: - (id)playbackSettings;	// 0x3034b011
// declared property getter: - (float)playbackVolume;	// 0x3034b2b1
- (BOOL)preparePlaybackFromURL:(id)url error:(id *)error;	// 0x3034a16d
- (BOOL)preparePlaybackWithSettings:(id)settings error:(id *)error;	// 0x30349cc9
- (BOOL)prepareRecordWithSettings:(id)settings error:(id *)error;	// 0x30348ce9
- (void)recordBufferReceived:(MyAudioQueueBuffer *)received;	// 0x303472a1
// declared property getter: - (id)recordDelegate;	// 0x3034a9ad
// declared property getter: - (double)recordEndWaitTime;	// 0x3034af61
// declared property getter: - (int)recordEndpointMode;	// 0x3034ae25
// declared property getter: - (double)recordInterspeechWaitTime;	// 0x3034aee9
// declared property getter: - (id)recordRoute;	// 0x30347af1
// declared property getter: - (id)recordSettings;	// 0x3034a9e9
// declared property getter: - (double)recordStartWaitTime;	// 0x3034ae71
- (void)releaseAudioSession;	// 0x30348a71
- (BOOL)setAlertSoundFromURL:(id)url forType:(int)type;	// 0x303497f5
// declared property setter: - (void)setAlertVolume:(float)volume;	// 0x3034b0b5
// declared property setter: - (void)setBargeInDetectEnabled:(BOOL)detectEnabled;	// 0x30347b31
- (BOOL)setCurrentContext:(id)context error:(id *)error;	// 0x30348b45
// declared property setter: - (void)setEndpointerDelegate:(id)delegate;	// 0x3034ad99
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x3034b2dd
- (BOOL)setPlaybackBufferDuration:(double)duration;	// 0x3034b041
// declared property setter: - (void)setPlaybackDelegate:(id)delegate;	// 0x3034afed
// declared property setter: - (void)setPlaybackVolume:(float)volume;	// 0x3034b1bd
- (BOOL)setRecordBufferDuration:(double)duration;	// 0x3034aa69
// declared property setter: - (void)setRecordDelegate:(id)delegate;	// 0x3034a9c1
// declared property setter: - (void)setRecordEndWaitTime:(double)time;	// 0x3034af79
// declared property setter: - (void)setRecordEndpointMode:(int)mode;	// 0x3034ae39
// declared property setter: - (void)setRecordInterspeechWaitTime:(double)time;	// 0x3034af01
// declared property setter: - (void)setRecordStartWaitTime:(double)time;	// 0x3034ae89
// declared property setter: - (void)setStopOnBargeInEnabled:(BOOL)enabled;	// 0x30347b65
// declared property setter: - (void)setStopOnEndpointEnabled:(BOOL)enabled;	// 0x3034b5d5
- (BOOL)startPlaying;	// 0x3034a7ad
- (BOOL)startRecording;	// 0x30349b0d
- (void)startpointDetected;	// 0x30347471
- (void)stopPlaying;	// 0x3034a999
- (void)stopRecording;	// 0x30349cb1
- (void)updateMeters;	// 0x3034b40d
@end

