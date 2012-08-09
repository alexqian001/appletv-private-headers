/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"
#import "AFDictationDelegate.h"

@class AFPreferences, UIAlertView, AFDictationConnection, NSArray, AFDictationOptions, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <AFDictationDelegate> {
	AFDictationConnection *_connection;	// 4 = 0x4
	AFDictationOptions *_options;	// 8 = 0x8
	AFPreferences *_preferences;	// 12 = 0xc
	NSArray *_availableLanguages;	// 16 = 0x10
	NSTimer *_recordingLimitTimer;	// 20 = 0x14
	void *_callCenterFrameworkFileHandle;	// 24 = 0x18
	id _callCenter;	// 28 = 0x1c
	void *_facetimeCallFrameworkFileHandle;	// 32 = 0x20
	id _facetimeCallManager;	// 36 = 0x24
	BOOL _wasDisabledDueToTelephonyActivity;	// 40 = 0x28
	UIAlertView *_dictationAvailableSoonAlert;	// 44 = 0x2c
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;	// 48 = 0x30
	BOOL dictationStartedFromGesture;	// 49 = 0x31
}
@property(readonly, retain) AFDictationConnection *connection;	// G=0x33d8ae29; converted property
@property(assign, nonatomic) BOOL dictationStartedFromGesture;	// G=0x33d8c181; S=0x33d8c191; @synthesize
@property(assign) int state;	// G=0x33d8ab71; S=0x33d8a8c9; converted property
@property(readonly, assign) BOOL wasDisabledDueToTelephonyActivity;	// G=0x33d8aff1; converted property
+ (id)activeInstance;	// 0x33d87041
+ (void)applicationDidBecomeActive;	// 0x33d88865
+ (void)applicationDidChangeStatusBarFrame;	// 0x33d8897d
+ (void)applicationWillResignActive;	// 0x33d8889d
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x33d89891
+ (BOOL)dictationIsFunctional;	// 0x33d87c69
+ (void)disableGestureHandler;	// 0x33d88179
+ (void)enableGestureHandlerIfNecessary;	// 0x33d88465
+ (BOOL)fetchCurrentInputModeSupportsDictation;	// 0x33d87a9d
+ (id)inputModeNameForDictation;	// 0x33d870d5
+ (id)interpretation:(id)interpretation forPhraseIndex:(unsigned)phraseIndex isShiftLocked:(BOOL)locked autocapitalizationType:(int)type;	// 0x33d88bb1
+ (BOOL)isRunning;	// 0x33d870c1
+ (void)keyboardDidSetDelegate;	// 0x33d887f5
+ (void)keyboardDidSetInputMode;	// 0x33d887bd
+ (void)keyboardDidUpdateOnScreenStatus;	// 0x33d8882d
+ (void)logCorrectionStatistics;	// 0x33d87cd9
+ (void)networkReachableCallback;	// 0x33d88a25
+ (BOOL)openAssistantFrameworkIfNecessary;	// 0x33d86a01
+ (id)prunedDictationResultForSingleLineEditor:(id)singleLineEditor;	// 0x33d89a1d
+ (id)serializedDictationPhrases:(id)phrases;	// 0x33d89851
+ (id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x33d89265
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)tokenMatrix fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x33d870e1
+ (id)serializedInterpretationFromTokens:(id)tokens transform:(CFStringRef)transform;	// 0x33d88a65
+ (BOOL)setupForOpeningConnections;	// 0x33d86aad
+ (BOOL)setupForPhraseSerialization;	// 0x33d86a51
+ (id)sharedInstance;	// 0x33d87051
+ (BOOL)shouldEnableGestureHandler;	// 0x33d88611
+ (void)siriPreferencesChanged;	// 0x33d8891d
+ (void)testCapitization1;	// 0x33d891c5
+ (void)testCapitization2;	// 0x33d891fd
+ (void)testCapitization3;	// 0x33d89231
+ (void)testCapitizationForInterpretation:(id)interpretation forPhraseIndex:(unsigned)phraseIndex isShiftLocked:(BOOL)locked autocapitalizationType:(int)type keyboardIsShifted:(BOOL)shifted usesServerCapitalization:(BOOL)capitalization whereResultshouldBe:(id)be;	// 0x33d89121
+ (void)updateLandingView;	// 0x33d89ca5
+ (void)willEndEditingInTextView:(id)textView;	// 0x33d8875d
- (id)init;	// 0x33d86b41
- (id)assistantCompatibleLanguageCodeForLanguage:(id)language region:(id)region;	// 0x33d89cf9
- (float)audioLevel;	// 0x33d89f01
- (void)cancelDictation;	// 0x33d8b359
- (void)cancelRecordingLimitTimer;	// 0x33d8ad5d
// converted property getter: - (id)connection;	// 0x33d8ae29
- (id)connectionForStatisticsLogging;	// 0x33d8af01
- (void)dealloc;	// 0x33d8ab81
- (void)delayedTelephonyCheckingSetup;	// 0x33d86f09
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases correctionIdentifier:(id)identifier;	// 0x33d8bcc9
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier;	// 0x33d8b739
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;	// 0x33d8bf41
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;	// 0x33d8bdd1
- (void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;	// 0x33d8bd11
- (void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;	// 0x33d8bd75
- (void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;	// 0x33d8bd19
- (void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;	// 0x33d8bced
- (BOOL)dictationEnabled;	// 0x33d8af31
- (id)dictationPhraseArrayFromDictationResult:(id)dictationResult;	// 0x33d8b581
// declared property getter: - (BOOL)dictationStartedFromGesture;	// 0x33d8c181
- (void)disableAutorotation;	// 0x33d8823d
- (BOOL)disabledDueToTelephonyActivity;	// 0x33d86e89
- (void)enableProximity;	// 0x33d883bd
- (void)errorAnimationDidFinish;	// 0x33d8ab35
- (id)fieldIdentifierInputDelegate:(id)delegate;	// 0x33d89f99
- (id)inputModeThatInvokedDictation;	// 0x33d89e69
- (float)normalizedAudioLevel;	// 0x33d89f29
- (id)postfixTextForInputDelegate:(id)inputDelegate;	// 0x33d8a20d
- (id)prefixTextForInputDelegate:(id)inputDelegate;	// 0x33d8a0a1
- (void)proximityStateChanged:(id)changed;	// 0x33d88275
- (void)reenableAutorotation;	// 0x33d881d1
- (void)releaseConnection;	// 0x33d8ae8d
- (void)releaseConnectionAfterDictationRequest;	// 0x33d8aecd
- (void)releaseConnectionAfterStatisticsLogging;	// 0x33d8aedd
- (id)selectedTextForInputDelegate:(id)inputDelegate;	// 0x33d8a379
// declared property setter: - (void)setDictationStartedFromGesture:(BOOL)gesture;	// 0x33d8c191
// converted property setter: - (void)setState:(int)state;	// 0x33d8a8c9
- (void)setupConnectionOptions;	// 0x33d8a465
- (void)setupForDictationStart;	// 0x33d8b001
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x33d8a845
- (void)startConnectionForReason:(int)reason;	// 0x33d8a72d
- (void)startDictation;	// 0x33d8b2b5
- (void)startDictationForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x33d8b2c9
- (void)startDictationForReason:(int)reason;	// 0x33d8b281
- (void)startRecordingLimitTimer;	// 0x33d8ada1
// converted property getter: - (int)state;	// 0x33d8ab71
- (void)stopDictation;	// 0x33d8b3e1
- (BOOL)supportsInputMode:(id)mode error:(id *)error;	// 0x33d89d35
// converted property getter: - (BOOL)wasDisabledDueToTelephonyActivity;	// 0x33d8aff1
@end
