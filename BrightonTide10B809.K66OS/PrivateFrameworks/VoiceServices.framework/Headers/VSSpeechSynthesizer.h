/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject {
	void *_speechJob;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	void *_inactiveKeepAlive;	// 12 = 0xc
	id<VSSpeechSynthesizerDelegate> _delegate;	// 16 = 0x10
	NSString *_voice;	// 20 = 0x14
	int _footprint;	// 24 = 0x18
	float _rate;	// 28 = 0x1c
	float _pitch;	// 32 = 0x20
	float _volume;	// 36 = 0x24
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 40 = 0x28
}
@property(assign) int footprint;	// G=0x35c26e8d; S=0x35c26e7d; converted property
@property(readonly, assign) float pitch;	// G=0x35c26ced; converted property
@property(readonly, assign) float rate;	// G=0x35c26bed; converted property
@property(retain) NSString *voice;	// G=0x35c26e11; S=0x35c26dcd; converted property
@property(readonly, assign) float volume;	// G=0x35c26dbd; converted property
+ (void)_localeDidChange;	// 0x35c26f4d
+ (id)availableLanguageCodes;	// 0x35c263b1
+ (id)availableVoices;	// 0x35c262b5
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x35c26385
+ (BOOL)isSystemSpeaking;	// 0x35c263cd
- (id)init;	// 0x35c263d9
- (id)initForInputFeedback;	// 0x35c26441
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed phonemesSpoken:(CFStringRef)spoken withError:(id)error;	// 0x35c2705d
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x35c270f1
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x35c27011
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x35c26fc5
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x35c26f79
- (id)continueSpeaking;	// 0x35c26b25
- (void)dealloc;	// 0x35c26471
// converted property getter: - (int)footprint;	// 0x35c26e8d
- (BOOL)isSpeaking;	// 0x35c26b91
- (float)maximumRate;	// 0x35c26c75
- (float)minimumRate;	// 0x35c26c6d
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x35c26a95
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x35c26aa9
// converted property getter: - (float)pitch;	// 0x35c26ced
// converted property getter: - (float)rate;	// 0x35c26bed
- (void)setDelegate:(id)delegate;	// 0x35c26511
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x35c26e7d
- (void)setMaintainInactivePersistentConnection:(BOOL)connection;	// 0x35c26ef5
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x35c26e9d
- (id)setPitch:(float)pitch;	// 0x35c26c7d
- (id)setRate:(float)rate;	// 0x35c26bfd
// converted property setter: - (void)setVoice:(id)voice;	// 0x35c26dcd
- (id)setVolume:(float)volume;	// 0x35c26cfd
- (id)speechString;	// 0x35c26bb9
- (id)startSpeakingAttributedString:(id)string;	// 0x35c269a1
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x35c269b5
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x35c269dd
- (id)startSpeakingString:(id)string;	// 0x35c26629
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x35c2668d
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x35c26649
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x35c2697d
- (id)startSpeakingString:(id)string withLanguageCode:(id)languageCode;	// 0x35c2666d
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x35c26a05
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x35c26a19
// converted property getter: - (id)voice;	// 0x35c26e11
// converted property getter: - (float)volume;	// 0x35c26dbd
@end

