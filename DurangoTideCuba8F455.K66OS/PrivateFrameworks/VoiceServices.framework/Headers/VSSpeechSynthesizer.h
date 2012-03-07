/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject {
@private
	void *_speechJob;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSSpeechSynthesizerDelegate> _delegate;	// 12 = 0xc
	NSString *_voice;	// 16 = 0x10
	float _rate;	// 20 = 0x14
	float _pitch;	// 24 = 0x18
	float _volume;	// 28 = 0x1c
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 32 = 0x20
}
@property(readonly, assign) float pitch;	// G=0x33f3a87d; converted property
@property(readonly, assign) float rate;	// G=0x33f3a85d; converted property
@property(retain) NSString *voice;	// G=0x33f3ab61; S=0x33f3abbd; converted property
@property(readonly, assign) float volume;	// G=0x33f3a88d; converted property
+ (void)_localeDidChange;	// 0x33f3ab3d
+ (id)availableLanguageCodes;	// 0x33f3b50d
+ (id)availableVoices;	// 0x33f3b491
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x33f3b4e5
+ (BOOL)isSystemSpeaking;	// 0x33f3b525
- (id)init;	// 0x33f3a89d
- (id)initForInputFeedback;	// 0x33f3ade5
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed withError:(id)error;	// 0x33f3ae0d
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x33f3aa0d
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x33f3aa65
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x33f3aaad
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x33f3aaf5
- (id)continueSpeaking;	// 0x33f3b381
- (void)dealloc;	// 0x33f3ae7d
- (BOOL)isSpeaking;	// 0x33f3b3e5
- (float)maximumRate;	// 0x33f3a875
- (float)minimumRate;	// 0x33f3a86d
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x33f3abf9
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x33f3b30d
// converted property getter: - (float)pitch;	// 0x33f3a87d
// converted property getter: - (float)rate;	// 0x33f3a85d
- (void)setDelegate:(id)delegate;	// 0x33f3acf5
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x33f3b42d
- (id)setPitch:(float)pitch;	// 0x33f3aef9
- (id)setRate:(float)rate;	// 0x33f3af71
// converted property setter: - (void)setVoice:(id)voice;	// 0x33f3abbd
- (id)setVolume:(float)volume;	// 0x33f3afe9
- (id)speechString;	// 0x33f3b405
- (id)startSpeakingAttributedString:(id)string;	// 0x33f3ac75
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x33f3ac51
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x33f3ac29
- (id)startSpeakingString:(id)string;	// 0x33f3acd5
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x33f3b0a5
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x33f3acb1
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x33f3ac8d
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x33f3ac11
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x33f3b531
// converted property getter: - (id)voice;	// 0x33f3ab61
// converted property getter: - (float)volume;	// 0x33f3a88d
@end
