/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSThread, NSMutableArray, NSDictionary, NSString;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : NSObject {
@private
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
@property(readonly, assign) BOOL isSpeaking;	// G=0x33a3df69; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x33a3e175; S=0x33a3db7d; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x33a3dfd9; S=0x33a3e089; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x33a3e185; S=0x33a3e195; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x33a3d0f5
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x33a3d15d
- (id)init;	// 0x33a3cd51
- (void)_clearSpeechQueue;	// 0x33a3dcf9
- (void)_continueSpeaking;	// 0x33a3de55
- (void)_dispatchSpeechAction:(id)action;	// 0x33a3dbad
- (void)_initialize;	// 0x33a3cf95
- (void)_isSpeaking:(id)speaking;	// 0x33a3df15
- (void)_pauseSpeaking;	// 0x33a3ddf5
- (id)_preprocessString:(id)string language:(id)language;	// 0x33a3d981
- (id)_processDurationStrings:(id)strings;	// 0x33a3d5c1
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x33a3d815
- (void)_setSpeechRate:(id)rate;	// 0x33a3e01d
- (void)_speechJobFinished:(BOOL)finished;	// 0x33a3d27d
- (void)_startNextSpeechJob;	// 0x33a3d3f5
- (void)_stopSpeaking;	// 0x33a3deb5
- (void)clearSpeechQueue;	// 0x33a3dd19
- (void)continueSpeaking;	// 0x33a3de75
- (void)dealloc;	// 0x33a3ceb5
- (void)dispatchSpeechAction:(id)action;	// 0x33a3dd59
// converted property getter: - (BOOL)isSpeaking;	// 0x33a3df69
- (void)pauseSpeaking;	// 0x33a3de15
- (void)setMaintainConnection:(BOOL)connection;	// 0x33a3d25d
- (void)setPitch:(id)pitch;	// 0x33a3d33d
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x33a3db7d
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x33a3e089
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x33a3e195
// declared property getter: - (BOOL)speechEnabled;	// 0x33a3e175
// declared property getter: - (float)speechRate;	// 0x33a3dfd9
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x33a3e145
- (void)stopSpeaking;	// 0x33a3ded5
// declared property getter: - (id)systemLanguage;	// 0x33a3e185
@end

