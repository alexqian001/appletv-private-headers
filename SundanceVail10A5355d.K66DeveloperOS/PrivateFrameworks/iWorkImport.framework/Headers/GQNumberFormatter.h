/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray;

@interface GQNumberFormatter : NSObject {
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;	// 32 = 0x20
	NSString *mCurrencyString;	// 36 = 0x24
	NSString *mPercentageString;	// 40 = 0x28
	NSString *mScientificString;	// 44 = 0x2c
	NSString *mDecimalString;	// 48 = 0x30
	NSString *mPercentSymbol;	// 52 = 0x34
	NSMutableArray *mTransformedDecimalStrings;	// 56 = 0x38
	NSMutableArray *mTransformedCurrencyStrings;	// 60 = 0x3c
	NSMutableArray *mTransformedPercentageStrings;	// 64 = 0x40
	NSMutableArray *mTransformedScientificStrings;	// 68 = 0x44
	CFStringRef mAdditionalCurrencyCode;	// 72 = 0x48
	CFArrayRef mAdditionalCurrencyCodeFormatters;	// 76 = 0x4c
}
+ (id)availableCurrencyCodes;	// 0x34c55ce1
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x34c55d2d
+ (id)currentLocaleCurrencyCode;	// 0x34c55d8d
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x34c55d5d
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x34c55e49
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x34c55e15
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x34c55cfd
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x34c55ad9
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x34c55819
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x34c560b9
+ (id)localizedPercentSymbol;	// 0x34c55e79
+ (id)numberFormatStringSpecialSymbols;	// 0x34c55db9
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34c55785
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34c557d1
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34c55729
+ (id)userVisibleCurrencyCodes;	// 0x34c55ea5
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x34c56131
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x34c56701
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x34c56ec5
- (id)currentLocaleCurrencyCode;	// 0x34c57055
- (void)dealloc;	// 0x34c564f5
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34c566c5
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x34c570f5
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x34c5709d
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x34c56e8d
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code successfulString:(const CFStringRef *)string3;	// 0x34c56ce1
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x34c568b1
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x34c56fc5
- (id)localizedPercentSymbol;	// 0x34c57139
- (void)numberPreferencesChanged:(id)changed;	// 0x34c566a5
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34c56835
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34c56871
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x34c56c49
@end

