/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class AXDialectMap, NSString, NSArray, NSLocale, NSCharacterSet;

@interface AXLanguageManager : NSObject {
	AXDialectMap *_dialectForSystemLanguage;	// 4 = 0x4
	AXDialectMap *_dialectForCurrentLocale;	// 8 = 0x8
	NSArray *_langMaps;	// 12 = 0xc
	NSCharacterSet *_commonCharacters;	// 16 = 0x10
	NSLocale *_userLocale;	// 20 = 0x14
}
@property(retain, nonatomic) NSCharacterSet *commonCharacters;	// G=0x33115f81; S=0x33115f91; @synthesize=_commonCharacters
@property(assign, nonatomic) AXDialectMap *dialectForCurrentLocale;	// G=0x33114e55; S=0x33114e89; 
@property(assign, nonatomic) AXDialectMap *dialectForSystemLanguage;	// G=0x33114dc9; S=0x33114dfd; 
@property(retain, nonatomic) NSArray *langMaps;	// G=0x33115f61; S=0x33115f71; @synthesize=_langMaps
@property(readonly, assign, nonatomic) NSString *systemLanguageID;	// G=0x33114d4d; 
@property(copy, nonatomic) NSLocale *userLocale;	// G=0x33115fa1; S=0x33115fb5; @synthesize=_userLocale
+ (id)commonPunctuationCharacters;	// 0x33114485
+ (id)nonlocalizedNameForLanguage:(id)language;	// 0x33114349
+ (id)sharedInstance;	// 0x331142dd
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)emojiDescriptions;	// 0x331144f9
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)basicCharacters;	// 0x33114521
- (id)init;	// 0x33114649
- (void)_handleUserLocaleDidChange:(id)_handleUserLocale;	// 0x33115f15
- (id)_loadLangMaps;	// 0x3311594d
- (id)_preferredLanguageIDsFromUserSelectedKeyboards;	// 0x33115741
- (id)ambiguousDialectsFromUserKeyboardPreferences;	// 0x33115289
- (id)basicDescription;	// 0x33114a71
// declared property getter: - (id)commonCharacters;	// 0x33115f81
- (void)dealloc;	// 0x33114995
- (id)debugDescription;	// 0x33114acd
- (id)description;	// 0x33114a61
- (id)descriptionOfWord:(id)word forLanguage:(id)language;	// 0x33115679
// declared property getter: - (id)dialectForCurrentLocale;	// 0x33114e55
- (id)dialectForLanguageID:(id)languageID;	// 0x33114ee1
// declared property getter: - (id)dialectForSystemLanguage;	// 0x33114dc9
- (id)dialectThatCanSpeakCharacter:(unsigned short)character;	// 0x33115151
- (BOOL)isCharacterCommon:(unsigned short)common;	// 0x331153bd
// declared property getter: - (id)langMaps;	// 0x33115f61
// declared property setter: - (void)setCommonCharacters:(id)characters;	// 0x33115f91
// declared property setter: - (void)setDialectForCurrentLocale:(id)currentLocale;	// 0x33114e89
// declared property setter: - (void)setDialectForSystemLanguage:(id)systemLanguage;	// 0x33114dfd
// declared property setter: - (void)setLangMaps:(id)maps;	// 0x33115f71
// declared property setter: - (void)setUserLocale:(id)locale;	// 0x33115fb5
// declared property getter: - (id)systemLanguageID;	// 0x33114d4d
- (void)updateCachedDialects;	// 0x331153e9
// declared property getter: - (id)userLocale;	// 0x33115fa1
@end

