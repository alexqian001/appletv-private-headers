/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString, NSMutableArray, CPLRUDictionary, UIKeyboardCandidate, TIWordTokenizer, TIKeyboardInputManagerConfig;

@interface TIKeyboardInputManagerZephyr : XXUnknownSuperclass {
	TIInputManagerZephyr *m_impl;	// 4 = 0x4
	NSMutableString *m_composedText;	// 8 = 0x8
	unsigned m_defaultCandidateIndex;	// 12 = 0xc
	TIWordTokenizer *m_wordTokenizer;	// 16 = 0x10
	RefPtr<TIAutoshiftRegularExpression> m_autoshift_regex;	// 20 = 0x14
	TIKeyboardInputManagerConfig *_config;	// 24 = 0x18
	NSMutableArray *_inputHistory;	// 28 = 0x1c
	CPLRUDictionary *_autocorrectionHistory;	// 32 = 0x20
	int _autocapitalizationType;	// 36 = 0x24
	UIKeyboardCandidate *_revisitedCandidate;	// 40 = 0x28
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x34915b05; S=0x34915b15; @synthesize=_autocapitalizationType
@property(retain, nonatomic) CPLRUDictionary *autocorrectionHistory;	// G=0x34915ae5; S=0x34915af5; @synthesize=_autocorrectionHistory
@property(readonly, assign, nonatomic) TIKeyboardInputManagerConfig *config;	// G=0x34915ac5; @synthesize=_config
@property(readonly, assign) unsigned defaultCandidateIndex;	// G=0x3491587d; converted property
@property(assign) BOOL inHardwareKeyboardMode;	// G=0x3491319d; S=0x34913179; converted property
@property(readonly, assign, nonatomic) NSMutableArray *inputHistory;	// G=0x34915ad5; @synthesize=_inputHistory
@property(assign) unsigned inputIndex;	// G=0x349139c5; S=0x34913969; converted property
@property(retain, nonatomic) UIKeyboardCandidate *revisitedCandidate;	// G=0x34915b25; S=0x34915b35; @synthesize=_revisitedCandidate
- (id)init;	// 0x34912c99
- (TIInputManagerZephyr *)initImplementation;	// 0x34912ebd
- (id)initWithConfig:(id)config;	// 0x34912a11
- (id).cxx_construct;	// 0x34915b61
- (void).cxx_destruct;	// 0x34915b45
- (void)acceptInput;	// 0x34913821
- (BOOL)acceptsCharacter:(unsigned short)character;	// 0x349159f5
- (id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned *)aDelete fromVariantKey:(BOOL)variantKey;	// 0x349131dd
- (void)appendToInputContext:(id)inputContext;	// 0x349138c9
// declared property getter: - (int)autocapitalizationType;	// 0x34915b05
- (id)autocorrection;	// 0x34914c99
- (id)autocorrectionCandidateForInput:(id)input withWord:(const Word *)word;	// 0x34914e0d
// declared property getter: - (id)autocorrectionHistory;	// 0x34915ae5
- (BOOL)canHandleKeyHitTest;	// 0x349158dd
- (BOOL)canStartSentenceAfterString:(id)string;	// 0x349147c1
- (void)candidateRejected:(id)rejected;	// 0x34913dd1
- (id)candidates;	// 0x349156e5
- (id)candidatesForString:(id)string;	// 0x349155e9
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x34914a39
- (void)checkAutocorrectionDictionaries;	// 0x34914a3d
- (void)clearAllCentroids;	// 0x349158d9
- (void)clearDynamicDictionary;	// 0x349131c5
- (void)clearInput;	// 0x3491379d
- (void)clearInputContext;	// 0x34913955
- (void)clearKeyAreas;	// 0x349158e1
// declared property getter: - (id)config;	// 0x34915ac5
- (void)configureInputModeSpecificFeatures:(id)features withLayout:(id)layout;	// 0x349131bd
- (void)dealloc;	// 0x34912cd5
- (void)decreaseUserFrequency:(id)frequency usageFlags:(unsigned)flags;	// 0x34913d81
- (id)defaultCandidate;	// 0x34913b01
// converted property getter: - (unsigned)defaultCandidateIndex;	// 0x3491587d
- (id)deleteFromInput:(unsigned *)input;	// 0x34913559
- (void)deleteFromStrokeHistory;	// 0x349159dd
- (unsigned)deleteLengthForString:(id)string;	// 0x34913545
- (BOOL)doesComposeText;	// 0x34912db1
- (unsigned)externalIndexToInternal:(unsigned)internal;	// 0x34912e39
- (id)externalStringToInternal:(id)internal;	// 0x34912db5
// converted property getter: - (BOOL)inHardwareKeyboardMode;	// 0x3491319d
- (void)increaseUserFrequency:(id)frequency usageFlags:(unsigned)flags;	// 0x34913d31
- (id)inputContext;	// 0x34913891
- (unsigned)inputCount;	// 0x349139ed
- (BOOL)inputEmpty;	// 0x34913a25
// declared property getter: - (id)inputHistory;	// 0x34915ad5
// converted property getter: - (unsigned)inputIndex;	// 0x349139c5
- (void)inputLocationChanged;	// 0x34913e55
- (id)inputString;	// 0x34913a45
- (unsigned)internalIndexToExternal:(unsigned)external;	// 0x34912dbd
- (id)internalStringToExternal:(id)external;	// 0x34912db9
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x34915961
- (void)loadDictionaries;	// 0x34912ee5
- (void)loadFavoniusLanguageModel;	// 0x34913019
- (unsigned)maximumShortcutLengthAllowed;	// 0x34915039
- (BOOL)nextInputWouldStartSentence;	// 0x34914791
- (id)phraseCandidateCompletedByWord:(const String *)word allowNoSuggest:(BOOL)suggest;	// 0x34914a6d
- (void)registerCentroid:(CGPoint)centroid forKey:(id)key;	// 0x3491588d
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x349158fd
- (BOOL)removeSuffixOfInputContext:(id)inputContext;	// 0x3491390d
- (void)reviseInputHistoryForRetroCorrectionCandidates:(id)retroCorrectionCandidates forInputs:(id)inputs;	// 0x34914039
// declared property getter: - (id)revisitedCandidate;	// 0x34915b25
- (id)sentenceDelimitingCharacters;	// 0x34914779
- (id)sentencePrefixingCharacters;	// 0x3491476d
- (id)sentenceTrailingCharacters;	// 0x34914785
- (void)setAutoCorrects:(BOOL)corrects;	// 0x34913119
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x34915b15
// declared property setter: - (void)setAutocorrectionHistory:(id)history;	// 0x34915af5
- (void)setAutoshiftFromInputContext;	// 0x349149c9
- (void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;	// 0x349131c1
- (void)setCollatorLocale;	// 0x34913109
// converted property setter: - (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x34913179
- (void)setInput:(id)input;	// 0x34913491
// converted property setter: - (void)setInputIndex:(unsigned)index;	// 0x34913969
- (void)setKeyboardEventsLagging:(BOOL)lagging;	// 0x3491315d
- (void)setLearnsCorrection:(BOOL)correction;	// 0x34913139
- (void)setOriginalInput:(id)input;	// 0x34913b61
// declared property setter: - (void)setRevisitedCandidate:(id)candidate;	// 0x34915b35
- (void)setTypologyRecorder:(id)recorder;	// 0x34915a69
- (id)shadowTyping;	// 0x3491468d
- (id)shortcutConversionForInput:(id)input andExistingString:(id)string existingStringStartsInMiddleOfWord:(BOOL)word;	// 0x34915575
- (id)shortcutConversionForString:(id)string stringStartsInMiddleOfWord:(BOOL)word;	// 0x34915055
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)terminator;	// 0x34914fdd
- (BOOL)stringIsExemptFromChecker:(id)checker;	// 0x34913aad
- (BOOL)supportsShortcutConversion;	// 0x34915035
- (void)textAccepted:(id)accepted;	// 0x34913bed
- (id)textPrecedingNextInput;	// 0x349146dd
- (void)updateForRevisitedString:(id)revisitedString;	// 0x34914301
- (id)updateInputHistoryForAcceptedText:(id)acceptedText;	// 0x34913e91
- (BOOL)usesCandidateSelection;	// 0x349155d1
- (unsigned)wordHistoryDepth;	// 0x349139a9
@end

