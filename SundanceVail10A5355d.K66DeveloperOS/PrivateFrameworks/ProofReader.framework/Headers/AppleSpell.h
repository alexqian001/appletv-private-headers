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
@property(readonly, retain) NSData *globalBindictData;	// G=0x37505a21; converted property
- (id)init;	// 0x374fc079
- (BOOL)_checkEnglishGrammarInString:(id)string range:(NSRange)range indexIntoBuffer:(unsigned)buffer bufferLength:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io retval:(int *)retval errorRange:(NSRange *)range10 details:(id *)details;	// 0x37559679
- (BOOL)_checkGrammarInString:(id)string range:(NSRange)range language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender bufIO:(PR_BUF_IO *)io errorRange:(NSRange *)range7 details:(id *)details;	// 0x3750dd51
- (id)_correctionForString:(id)string range:(NSRange)range inString:(id)string3 tagger:(id)tagger taggerIndex:(unsigned)index dictionary:(id)dictionary language:(id)language connection:(PR_DB_IO *)connection keyEventData:(id)data;	// 0x3755c301
- (id)_correctionForSuggestedPhrase:(const char *)suggestedPhrase originalBuffer:(const char *)buffer length:(unsigned)length;	// 0x375593c5
- (id)_crudeNextWordInString:(id)string inRange:(NSRange)range;	// 0x37558f4d
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range;	// 0x3755918d
- (id)_crudePreviousWordInString:(id)string inRange:(NSRange)range precededBy:(id *)by;	// 0x37559039
- (id)_detailWithRange:(NSRange)range description:(id)description corrections:(id)corrections;	// 0x375595e5
- (unsigned)_getSplitIndexes:(unsigned *)indexes maxCount:(unsigned)count forPinyinInputString:(id)pinyinInputString;	// 0x375650cd
- (id)_japaneseCorrectionForString:(id)string connection:(PR_DB_IO *)connection;	// 0x3755c161
- (id)_modifiedGrammarDescriptionForDescription:(id)description;	// 0x375591b1
- (id)_orthographyByModifyingOrthography:(id)orthography withLatinLanguage:(id)latinLanguage;	// 0x3750e2cd
- (id)_pinyinStringByCombiningPinyinString:(id)string withPinyinString:(id)pinyinString;	// 0x375651dd
- (id)_primitiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString restricted:(BOOL)restricted;	// 0x37564b09
- (id)_recursiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString depth:(unsigned)depth;	// 0x37565615
- (id)_retainedAlternativesByCombiningAlternatives:(id)alternatives withAlternatives:(id)alternatives2;	// 0x37565491
- (void)addModifiedPartialPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 prePrevPrevIndex:(unsigned)index6 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score12 prevPrevScore:(unsigned)score13 lastSyllableScore:(unsigned)score14;	// 0x375642a5
- (void)addModifiedPinyinToArray:(id)array connection:(PR_DB_IO *)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 startingModificationsAt:(unsigned)at inBuffer:(char *)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score11 prevPrevScore:(unsigned)score12 lastSyllableScore:(unsigned)score13 couldBeAbbreviatedPinyin:(BOOL)pinyin;	// 0x375622e1
- (void)addSpecialModifiedPinyinToArray:(id)array inBuffer:(char *)buffer length:(unsigned)length atEnd:(BOOL)end;	// 0x37561aa9
- (id)autocorrectionDictionaryForLanguage:(id)language;	// 0x3750d9e9
- (id)bindictDataForLanguage:(id)language index:(unsigned)index;	// 0x3750392d
- (id)bundle;	// 0x374fde01
- (BOOL)checkWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding index:(unsigned)index;	// 0x375054d1
- (PR_DB_IO *)databaseConnectionForLanguage:(id)language;	// 0x374fd601
- (unsigned long)encodingForLanguage:(id)language;	// 0x374fd561
- (id)englishStringFromWordBuffer:(char *)wordBuffer length:(unsigned)length connection:(PR_DB_IO *)connection ignoreLength:(BOOL)length4;	// 0x375615d9
- (id)fallbackLocalizationForLanguage:(id)language;	// 0x3750d651
// converted property getter: - (id)globalBindictData;	// 0x37505a21
- (BOOL)globalCheckNegativeWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x3750db31
- (BOOL)globalCheckWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;	// 0x37505939
- (id)globalNegativeBindictData;	// 0x3750d949
- (id)localizationForLanguage:(id)language;	// 0x374fd259
- (id)localizationsForLanguage:(id)language;	// 0x3750d2a1
- (BOOL)looksLikeAdverb:(id)adverb language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x375589b9
- (BOOL)looksLikeArticledNoun:(id)noun language:(id)language connection:(PR_DB_IO *)connection;	// 0x37558909
- (BOOL)looksLikeParticiple:(id)participle language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x37558b45
- (BOOL)onContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x37558d11
- (BOOL)onNoContractionList:(id)list language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x37558f1d
- (void)resetTimer;	// 0x374fd10d
- (id)spellServer:(id)server _retainedAlternativesForPinyinInputString:(id)pinyinInputString extended:(BOOL)extended;	// 0x3756593d
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString;	// 0x37565dc1
- (id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3751026d
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string language:(id)language details:(id *)details;	// 0x3750e265
- (NSRange)spellServer:(id)server checkGrammarInString:(id)string range:(NSRange)range language:(id)language orthography:(id)orthography mutableResults:(id)results offset:(unsigned)offset details:(id *)details;	// 0x3750df81
- (id)spellServer:(id)server checkString:(id)string offset:(unsigned)offset types:(unsigned long long)types options:(id)options orthography:(id)orthography wordCount:(int *)count;	// 0x3750f441
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString;	// 0x37565df5
- (id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3751027d
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only;	// 0x3750f309
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x374fd115
- (NSRange)spellServer:(id)server findMisspelledWordInString:(id)string range:(NSRange)range languages:(id)languages orthography:(id)orthography checkOrthography:(BOOL)orthography6 mutableResults:(id)results offset:(unsigned)offset autocorrect:(BOOL)autocorrect keyEventData:(id)data appIdentifier:(id)identifier wordCount:(int *)count countOnly:(BOOL)only correction:(id *)correction;	// 0x3750e37d
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString;	// 0x37565e29
- (id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString language:(id)language;	// 0x3751028d
- (id)spellServer:(id)server stringForInputString:(id)inputString language:(id)language;	// 0x3750febd
- (id)spellServer:(id)server suggestCompletionsForPartialWord:(id)partialWord inLanguage:(id)language;	// 0x37560cd1
- (id)spellServer:(id)server suggestCompletionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;	// 0x3750fe4d
- (id)spellServer:(id)server suggestGuessesForWord:(id)word inLanguage:(id)language;	// 0x3755e101
- (id)spellServer:(id)server suggestGuessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;	// 0x3750fe09
- (id)spellServer:(id)server suggestWordWithLengthInRange:(NSRange)range language:(id)language;	// 0x3750fe91
- (id)spellServer:(id)server suggestWordWithMinimumLength:(unsigned)minimumLength maximumLength:(unsigned)length language:(id)language;	// 0x37560fd1
- (void)timeout:(id)timeout;	// 0x3750d299
- (BOOL)validateAbbreviationOrNumberWordBuffer:(char *)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding connection:(PR_DB_IO *)connection sender:(id)sender;	// 0x375051d1
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x37505ac1
- (BOOL)validateWordBuffer:(char *)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO *)connection sender:(id)sender checkBase:(BOOL)base checkDict:(BOOL)dict checkNames:(BOOL)names checkHyphens:(BOOL)hyphens checkIntercaps:(BOOL)intercaps checkOptions:(BOOL)options depth:(unsigned)depth;	// 0x37503db5
- (BOOL)validateWordPrefixBuffer:(char *)buffer length:(unsigned)length connection:(PR_DB_IO *)connection;	// 0x3750dc8d
@end
