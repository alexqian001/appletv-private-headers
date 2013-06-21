/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUNumberFormatting.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSIndexSet, NSArray, NSString;

@interface TSUNumberFormat : NSObject <TSUNumberFormatting> {
	int mValueType;	// 4 = 0x4
	NSString *mFormatString;	// 8 = 0x8
	unsigned short mDecimalPlaces;	// 12 = 0xc
	NSString *mCurrencyCode;	// 16 = 0x10
	BOOL mUseAccountingStyle;	// 20 = 0x14
	int mNegativeStyle;	// 24 = 0x18
	BOOL mShowThousandsSeparator;	// 28 = 0x1c
	int mFractionAccuracy;	// 32 = 0x20
	BOOL mFormatStringRequiresSuppressionOfMinusSign;	// 36 = 0x24
	BOOL mUseScientificFormattingAutomatically;	// 37 = 0x25
	BOOL mIgnoreDecimalPlacesForZeroValue;	// 38 = 0x26
	NSString *mPrefixString;	// 40 = 0x28
	NSString *mSuffixString;	// 44 = 0x2c
	unsigned char mBase;	// 48 = 0x30
	unsigned short mBasePlaces;	// 50 = 0x32
	BOOL mBaseUseMinusSign;	// 52 = 0x34
	BOOL mIsCustom;	// 53 = 0x35
	double mScaleFactor;	// 56 = 0x38
	BOOL mFormatStringContainsTabCharacter;	// 64 = 0x40
	BOOL mFormatContainsSpecialTokens;	// 65 = 0x41
	BOOL mFormatContainsIntegerToken;	// 66 = 0x42
	unsigned char mNumberOfHashDecimalPlaceholders;	// 67 = 0x43
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;	// 68 = 0x44
	BOOL mRequiresFractionReplacement;	// 69 = 0x45
	NSArray *mInterstitialStrings;	// 72 = 0x48
	NSIndexSet *mInterstitialStringInsertionIndexes;	// 76 = 0x4c
	unsigned short mIndexFromRightOfLastDigitPlaceholder;	// 80 = 0x50
	BOOL mIsTextFormat;	// 82 = 0x52
	unsigned char mMinimumIntegerWidth;	// 83 = 0x53
	unsigned char mDecimalWidth;	// 84 = 0x54
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;	// 85 = 0x55
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;	// 86 = 0x56
	NSString *mFormatName;	// 88 = 0x58
}
@property(retain) id formatName;	// G=0x34cdebd1; S=0x34cdeb95; converted property
@property(assign) BOOL ignoreDecimalPlacesForZeroValue;	// G=0x34cdee21; S=0x34cdee31; converted property
@property(assign) BOOL useScientificFormattingAutomatically;	// G=0x34cdee01; S=0x34cdee11; converted property
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x34cdcdf9
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x34cdcec9
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom formatName:(id)name;	// 0x34cdcfd1
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor isCustom:(BOOL)custom formatName:(id)name;	// 0x34cdcf41
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x34cdce5d
- (id)init;	// 0x34cdd071
- (id)initCustomFormatWithFormatString:(id)formatString currencyCode:(id)code showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x34cdd0ad
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x34cdd12d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x34cdd171
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x34cdd24d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x34cdd1e1
- (unsigned short)base;	// 0x34cdeced
- (unsigned short)basePlaces;	// 0x34cdecfd
- (id)baseStringFromDouble:(double)aDouble;	// 0x34ce11a5
- (BOOL)baseUseMinusSign;	// 0x34cded0d
- (BOOL)canFormatText;	// 0x34cdeccd
- (id)chartLabelStringFromDouble:(double)aDouble;	// 0x34cdef21
- (id)chartLabelStringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x34cdf031
- (id)chartLabelStringNofixFromDouble:(double)aDouble;	// 0x34cdeeb5
- (id)copyWithZone:(NSZone *)zone;	// 0x34ce0965
- (id)currencyCode;	// 0x34cdec55
- (BOOL)customFormatShouldAutoInsertPercentSymbol;	// 0x34cded41
- (id)customNumberFormatTokens;	// 0x34ce01f5
- (void)dealloc;	// 0x34cdeaa5
- (unsigned short)decimalPlaces;	// 0x34cdec01
- (id)description;	// 0x34ce0795
// converted property getter: - (id)formatName;	// 0x34cdebd1
- (id)formatString;	// 0x34cdec45
- (int)fractionAccuracy;	// 0x34cdec85
- (id)fractionStringFromDouble:(double)aDouble;	// 0x34ce1189
- (BOOL)hasValidDecimalPlaces;	// 0x34cded1d
- (unsigned)hash;	// 0x34ce020d
// converted property getter: - (BOOL)ignoreDecimalPlacesForZeroValue;	// 0x34cdee21
- (BOOL)isCustom;	// 0x34cdebe1
- (BOOL)isEqual:(id)equal;	// 0x34ce040d
- (BOOL)isEquivalent:(id)equivalent;	// 0x34ce0089
- (BOOL)isTextFormat;	// 0x34cdecbd
- (int)negativeStyle;	// 0x34cdec65
- (id)numberFormatByIncrementingDecimalPlaces:(short)places;	// 0x34cddc6d
- (id)numberFormatBySettingBase:(unsigned short)base;	// 0x34cde649
- (id)numberFormatBySettingBasePlaces:(unsigned short)places;	// 0x34cde7bd
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)minus;	// 0x34cde931
- (id)numberFormatBySettingCurrencyCode:(id)code;	// 0x34cdddbd
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places;	// 0x34cdd815
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places andNegativeStyle:(int)style;	// 0x34cde09d
- (id)numberFormatBySettingFractionAccuracy:(int)accuracy;	// 0x34cde369
- (id)numberFormatBySettingNegativeStyle:(int)style;	// 0x34cddf2d
- (id)numberFormatBySettingPrefixString:(id)string;	// 0x34cdd985
- (id)numberFormatBySettingShowThousandsSeparator:(BOOL)separator;	// 0x34cde1f9
- (id)numberFormatBySettingSuffixString:(id)string;	// 0x34cddaf9
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)style;	// 0x34cde4d9
- (id)numberFormatBySettingValueType:(int)type;	// 0x34cdd64d
- (id)prefixString;	// 0x34cdec25
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)aDouble;	// 0x34cdee81
- (double)scaleFactor;	// 0x34cdeca5
// converted property setter: - (void)setFormatName:(id)name;	// 0x34cdeb95
// converted property setter: - (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)zeroValue;	// 0x34cdee31
// converted property setter: - (void)setUseScientificFormattingAutomatically:(BOOL)automatically;	// 0x34cdee11
- (BOOL)showThousandsSeparator;	// 0x34cdec75
- (id)stringFromDouble:(double)aDouble;	// 0x34cdf185
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3;	// 0x34cdf245
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3 forceSuppressMinusSign:(BOOL)sign;	// 0x34cdf271
- (id)stringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x34cdf145
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places;	// 0x34cdf205
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places forceSuppressMinusSign:(BOOL)sign;	// 0x34cdf1c5
- (id)stringFromString:(id)string;	// 0x34cdff61
- (id)suffixString;	// 0x34cdec35
// converted property getter: - (BOOL)useScientificFormattingAutomatically;	// 0x34cdee01
- (BOOL)usesAccountingStyle;	// 0x34cdec95
- (BOOL)usesTabs;	// 0x34cdee41
- (BOOL)usesTextFormatForValue:(double)value;	// 0x34cdecdd
- (int)valueType;	// 0x34cdebf1
@end
