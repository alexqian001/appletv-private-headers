/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, NSMutableArray, NSDictionary, NSThread, NSObject;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : XXUnknownSuperclass {
	NSMutableArray *_speechQueue;	// 4 = 0x4
	NSObject<VSSpeechHiddenProtocol> *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	NSDictionary *_pronunciationGuide;	// 16 = 0x10
	NSString *_systemLanguage;	// 20 = 0x14
	BOOL _runLoopEnabled;	// 24 = 0x18
	BOOL _didInitialize;	// 25 = 0x19
	BOOL _isSpeaking;	// 26 = 0x1a
	BOOL _speechEnabled;	// 27 = 0x1b
}
@property(readonly, assign) BOOL isSpeaking;	// G=0x25bb65; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x25bd71; S=0x25b721; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x25bbd5; S=0x25bc89; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x25bd81; S=0x25bd95; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x25ac85
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x25aced
- (id)init;	// 0x25a8d5
- (void)_clearSpeechQueue;	// 0x25b89d
- (void)_continueSpeaking;	// 0x25ba4d
- (void)_dispatchSpeechAction:(id)action;	// 0x25b749
- (void)_initialize;	// 0x25ab25
- (void)_isSpeaking:(id)speaking;	// 0x25bb0d
- (void)_pauseSpeaking;	// 0x25b9ed
- (id)_preprocessString:(id)string language:(id)language;	// 0x25b535
- (id)_processDurationStrings:(id)strings;	// 0x25b149
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x25b3c9
- (void)_setSpeechRate:(id)rate;	// 0x25bc19
- (void)_speechJobFinished:(BOOL)finished;	// 0x25ae11
- (void)_startNextSpeechJob;	// 0x25af95
- (void)_stopSpeaking;	// 0x25baad
- (void)clearSpeechQueue;	// 0x25b8bd
- (void)continueSpeaking;	// 0x25ba6d
- (void)dealloc;	// 0x25aa4d
- (void)dispatchSpeechAction:(id)action;	// 0x25b951
// converted property getter: - (BOOL)isSpeaking;	// 0x25bb65
- (void)pauseSpeaking;	// 0x25ba0d
- (void)setMaintainConnection:(BOOL)connection;	// 0x25adf1
- (void)setPitch:(id)pitch;	// 0x25aed5
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x25b721
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x25bc89
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x25bd95
// declared property getter: - (BOOL)speechEnabled;	// 0x25bd71
// declared property getter: - (float)speechRate;	// 0x25bbd5
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x25bd41
- (void)stopSpeaking;	// 0x25bacd
// declared property getter: - (id)systemLanguage;	// 0x25bd81
- (void)terminate;	// 0x25b8fd
@end

