/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import "ProofReader-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSData, NSString, NSArray, NSMutableArray, NSMutableSet;

@interface AppleSpell : NSObject {
	void *_proofReaderConnection;	// 4 = 0x4
	CFDictionaryRef _databaseConnections;	// 8 = 0x8
	NSMutableDictionary *_bindicts;	// 12 = 0xc
	NSData *_globalBindictData;	// 16 = 0x10
	NSData *_globalNegBindictData;	// 20 = 0x14
	NSMutableDictionary *_autocorrections;	// 24 = 0x18
	NSString *_lastLanguage;	// 28 = 0x1c
	NSArray *_userPreferredLanguages;	// 32 = 0x20
	NSMutableDictionary *_learnedResponses;	// 36 = 0x24
	NSMutableArray *_diagnosticInfo;	// 40 = 0x28
	NSMutableSet *_foundNames;	// 44 = 0x2c
	double _lastFindNames;	// 48 = 0x30
	NSMutableDictionary *_lastSampleCollected;	// 56 = 0x38
	unsigned _numberOfSamplesCollected;	// 60 = 0x3c
	double _lastSampleCollection;	// 64 = 0x40
	NSMutableArray *_retainedSamples;	// 72 = 0x48
	NSMutableDictionary *_lastSampleRecorded;	// 76 = 0x4c
	double _lastSampleRecording;	// 80 = 0x50
	BOOL _userPrefersUncheckedLatinLanguage;	// 88 = 0x58
}
@property(readonly, retain) NSData *globalBindictData;	// G=0x35348a61; converted property
- (id)init;	// 0x3533e061
- (BOOL)_checkEnglishGrammarInString:(id)string range:(NSRange)range indexIntoBuffer:(unsigned)buffer bufferLength:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io retval:(int *)retval errorRange:(NSRange *)range10 details:(id *)details;	// 0x3539e249
- (BOOL)_checkGrammarInString:(id)string range:(NSRange)range language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io errorRange:(NSRange *)range7 details:(id *)details;	// 0x35359fd9
- (id)_correctionForString:(id)string range:(NSRange)range inString:(id)string3 tagger:(id)tagger taggerIndex:(unsigned)index dictionary:(id)dictionary language:(id)language connection:(PR_DB_IO *)connection keyEventData:(id)data;	// 0x353a0ed1
- (id)_correctionForSuggestedPhrase:(const char *)suggestedPhrase originalBuffer:(const char *)buffer length:(unsigned)length;	// 0x3539df95
- (id)_crudeNextWordInString:(id)string inRange:(NSRange)range;	// 0x3539db1d
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range;	// 0x3539dd5d
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range precededBy:(id *)by;	// 0x3539dc09
- (id)_detailWithRange:(NSRange)range description:(id)description corrections:(id)corrections;	// 0x3539e1b5
- (unsigned)_getSplitIndexes:(unsigned *)indexes maxCount:(unsigned)count forPinyinInputString:(id)pinyinInputString;	// 0x353a70cd
- (id)_japaneseCorrectionForString:(id)string connection:(PR_DB_IO *)connection;	// 0x353a0d31
- (id)_modifiedGrammarDescriptionForDescription:(id)description;	// 0x3539dd81
- (id)_orthographyByModifyingOrthography:(id)orthography withLatinLanguage:(id)latinLanguage;	// 0x3535a555
- (id)_pinyinStringByCombiningPinyinString:(id)string withPinyinString:(id)pinyinString;	// 0x353a71dd
- (id)_primitiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString restricted:(BOOL)restricted;	// 0x353a6b09
- (id)_recursiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString depth:(unsigned)depth;	// 0x353a7615
- (id)_retainedAlternativesByCombiningAlternatives:(id)alternatives withAlternatives:(id)alternatives2;	// 0x353a7491
- (void)addModifiedPartialPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 prePrevPrevIndex:(unsigned)index6 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score12 prevPrevScore:(unsigned)score13 lastSyllableScore:(unsigned)score14;	// 0x353a62a5
- (void)addModifiedPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score11 prevPrevScore:(unsigned)score12 lastSyllableScore:(unsigned)score13 couldBeAbbreviatedPinyin:(BOOL)pinyin;	// 0x353a42e1
- (void)addSpecialModifiedPinyinToArray:(id)array inBuffer:(char *)buffer length:(unsigned)length atEnd:(BOOL)end;	// 0x353a3aa9
- (id)autocorrectionDictionaryForLanguage:(id)language;	// 0x353572d1
- (id)bindictDataForLanguage:(id)language index:(unsigned)index;	// 0x3534696d
- (id)bundle;	// 0x35340d79
- (BOOL)checkWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding index:(unsigned)index;	// 0x35348511
- (PR_DB_IO *)databaseConnectionForLanguage:(id)language;	// 0x35340579
- (unsigned long)encodingForLanguage:(id)language;	// 0x353404d9
- (id)englishStringFromWordBuffer:(char *)wordBuffer length:(unsigned)length connection:(PR_DB_IO *)connection ignoreLength:(BOOL)length4;	// 0x353a35d9
- (id)fallbackLocalizationForLanguage:(id)language;	// 0x35359a21
// converted property getter: - (id)globalBindictData;	// 0x35348a61
- (BOOL)globalCheckNegativeWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x35359db9
- (BOOL)globalCheckWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x35348979
- (id)globalNegativeBindictData;	// 0x35359d19
- (id)localizationForLanguage:(id)language;	// 0x353401d1
- (id)localizationsForLanguage:(id)language;	// 0x35359671
- (BOOL)looksLikeAdverb:(id)adverb language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x3539d589
- (BOOL)looksLikeArticledNoun:(id)noun language:(id)language connection:(PR_DB_IO *)connection;	// 0x3539d4d9
- (BOOL)looksLikeParticiple:(id)participle language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x3539d715
- (BOOL)onContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x3539d8e1
- (BOOL)onNoContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x3539daed
- (void)resetTimer;	// 0x3533f0f5
- (id)spellServer:(id)server _retainedAlternativesForPinyinInputString:(id)pinyinInputString extended:(BOOL)extended;	// 0x353a793d
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString;	// 0x353a7dc1
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3535b52d
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string language:(id)language details:(id *)details;	// 0x3535a4ed
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string range:(NSRange)range language:(id)language orthography:(id)orthography mutableResults:(id)results offset:(unsigned)offset details:(id *)details;	// 0x3535a209
- (id)spellServer:(id)server checkString:(id)string offset:(unsigned)offset types:(unsigned long long)types options:(id)options orthography:(id)orthography wordCount:(int *)count;	// 0x3535a741
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString;	// 0x353a7df5
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3535b53d
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only;	// 0x3535a609
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x3533f0fd
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string range:(NSRange)range languages:(id)languages orthography:(id)orthography checkOrthography:(BOOL)orthography6 mutableResults:(id)results offset:(unsigned)offset autocorrect:(BOOL)autocorrect keyEventData:(id)data appIdentifier:(id)identifier wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x3533f245
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString;	// 0x353a7e29
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3535b54d
- (id)spellServer:(id)server stringForInputString:(id)inputString language:(id)language;	// 0x3535b17d
- (id)spellServer:(id)server suggestCompletionsForPartialWord:(id)partialWord inLanguage:(id)language;	// 0x353a2cd1
- (id)spellServer:(id)server suggestCompletionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;	// 0x3535b10d
- (id)spellServer:(id)server suggestGuessesForWord:(id)word inLanguage:(id)language;	// 0x35354701
- (id)spellServer:(id)server suggestGuessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x353546b9
- (id)spellServer:(id)server suggestWordWithLengthInRange:(NSRange)range language:(id)language;	// 0x3535b151
- (id)spellServer:(id)server suggestWordWithMinimumLength:(unsigned)minimumLength maximumLength:(unsigned)length language:(id)language;	// 0x353a2fd1
- (void)timeout:(id)timeout;	// 0x35359669
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x35348211
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x35348b01
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender checkBase:(BOOL)base checkDict:(BOOL)dict checkNames:(BOOL)names checkHyphens:(BOOL)hyphens checkIntercaps:(BOOL)intercaps checkOptions:(BOOL)options depth:(unsigned)depth;	// 0x35346df5
- (BOOL)validateWordPrefixBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x35359f15
@end
