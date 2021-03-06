/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSDictionary;
@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign) double currentTime;	// G=0x3468971d; @dynamic
@property(assign) id<AVAudioRecorderDelegate> delegate;	// G=0x34688be5; S=0x346896d5; @dynamic
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x34688bf9; S=0x346895ed; @dynamic
@property(readonly, assign, getter=isRecording) BOOL recording;	// G=0x34688ba1; @dynamic
@property(readonly, assign) NSDictionary *settings;	// G=0x34688bd1; @dynamic
@property(readonly, assign) NSURL *url;	// G=0x34688bbd; @dynamic
- (id)initWithURL:(id)url settings:(id)settings error:(id *)error;	// 0x34689af5
- (float)averagePowerForChannel:(unsigned)channel;	// 0x34688c41
- (id)baseInit;	// 0x3468a099
- (void)baseInitFailed;	// 0x34689079
- (void)beginInterruption;	// 0x34688e09
// declared property getter: - (double)currentTime;	// 0x3468971d
- (void)dealloc;	// 0x3468a0ed
// declared property getter: - (id)delegate;	// 0x34688be5
- (BOOL)deleteRecording;	// 0x34688ce5
- (void)endInterruption;	// 0x34688e55
- (void)endInterruptionWithFlags;	// 0x34688e2d
- (void)finalize;	// 0x346893f9
- (void)finishedRecording;	// 0x34688f8d
- (AudioRecorderImpl *)impl;	// 0x34688b91
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x34688bf9
// declared property getter: - (BOOL)isRecording;	// 0x34688ba1
- (void)pause;	// 0x34689805
- (float)peakPowerForChannel:(unsigned)channel;	// 0x34688c0d
- (BOOL)prepareToRecord;	// 0x34689a41
- (void)privCommonCleanup;	// 0x346890f1
- (BOOL)record;	// 0x34689989
- (BOOL)recordForDuration:(double)duration;	// 0x346898c5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x346896d5
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x346895ed
// declared property getter: - (id)settings;	// 0x34688bd1
- (void)stop;	// 0x34688ead
- (void)updateMeters;	// 0x346894e1
// declared property getter: - (id)url;	// 0x34688bbd
@end

