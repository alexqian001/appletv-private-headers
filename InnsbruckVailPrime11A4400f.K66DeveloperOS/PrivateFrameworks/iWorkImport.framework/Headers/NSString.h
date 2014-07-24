/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <Foundation/NSString.h>


@interface NSString (GQCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;	// 0x33cbce05
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33cbcd01
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33cbcd99
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33cbcc95
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x33cbcb3d
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x33cbcc05
+ (id)customNumberFormatTokenStringOfType:(int)type content:(id)content;	// 0x33cbc831
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// 0x33cbcefd
- (BOOL)customFormatIntegerTokenUsesSeparator;	// 0x33cbc9e1
- (id)digitPlaceholderStringInDigitToken;	// 0x33cbce7d
- (id)formatStringFromCustomNumberFormatScaleToken;	// 0x33cbcf7d
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// 0x33cbcf51
- (BOOL)isSpecialCustomNumberFormatToken;	// 0x33cbc8b1
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;	// 0x33cbc8f9
- (unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;	// 0x33cbcce9
- (unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;	// 0x33cbc981
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// 0x33cbcf91
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// 0x33cbcfa9
- (id)stringByInsertingGroupingSeparators;	// 0x33cbca19
@end

@interface NSString (GQFormatStringUtilities)
+ (id)numberSymbols;	// 0x33d1b9a1
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x33d1bd69
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x33d1b9f1
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x33d1c2d9
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x33d1c1e9
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x33d1bfd9
- (BOOL)isNumberFormatPattern;	// 0x33d1bcf1
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x33d1c159
- (id)numberPortionOfNumberFormatSubpattern;	// 0x33d1c19d
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x33d1c11d
- (id)prefixOfNumberFormatSubpattern;	// 0x33d1c3ad
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x33d1bec1
- (id)suffixOfNumberFormatSubpattern;	// 0x33d1c2a9
@end
