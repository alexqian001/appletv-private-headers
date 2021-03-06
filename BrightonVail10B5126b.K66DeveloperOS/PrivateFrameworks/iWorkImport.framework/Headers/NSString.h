/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSString.h> // Unknown library


@interface NSString (GQCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;	// 0x368c3561
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x368c345d
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x368c34f5
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x368c33f1
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x368c3299
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x368c3361
+ (id)customNumberFormatTokenStringOfType:(int)type content:(id)content;	// 0x368c2f0d
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// 0x368c3659
- (BOOL)customFormatIntegerTokenUsesSeparator;	// 0x368c313d
- (id)digitPlaceholderStringInDigitToken;	// 0x368c35d9
- (id)formatStringFromCustomNumberFormatScaleToken;	// 0x368c36d9
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// 0x368c36ad
- (BOOL)isSpecialCustomNumberFormatToken;	// 0x368c2fc5
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;	// 0x368c300d
- (unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;	// 0x368c3445
- (unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;	// 0x368c30d9
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// 0x368c36ed
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// 0x368c3705
- (id)stringByInsertingGroupingSeparators;	// 0x368c3175
@end

@interface NSString (GQFormatStringUtilities)
+ (id)numberSymbols;	// 0x36922af1
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x36922eb9
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x36922b41
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x36923429
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x36923339
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x36923125
- (BOOL)isNumberFormatPattern;	// 0x36922e41
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x369232a9
- (id)numberPortionOfNumberFormatSubpattern;	// 0x369232ed
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x3692326d
- (id)prefixOfNumberFormatSubpattern;	// 0x369234fd
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x36923011
- (id)suffixOfNumberFormatSubpattern;	// 0x369233f9
@end

