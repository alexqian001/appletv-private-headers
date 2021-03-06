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
@property(retain) id formatName;	// G=0x31e85b21; S=0x31e85ae5; converted property
@property(assign) BOOL ignoreDecimalPlacesForZeroValue;	// G=0x31e85d71; S=0x31e85d81; converted property
@property(assign) BOOL useScientificFormattingAutomatically;	// G=0x31e85d51; S=0x31e85d61; converted property
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x31e83d49
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x31e83e19
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom formatName:(id)name;	// 0x31e83f21
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor isCustom:(BOOL)custom formatName:(id)name;	// 0x31e83e91
+ (id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x31e83dad
- (id)init;	// 0x31e83fc1
- (id)initCustomFormatWithFormatString:(id)formatString currencyCode:(id)code showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy scaleFactor:(double)factor interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x31e83ffd
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy;	// 0x31e8407d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy base:(unsigned short)base basePlaces:(unsigned short)places10 baseUseMinusSign:(BOOL)sign;	// 0x31e840c1
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy prefixString:(id)string9 suffixString:(id)string10 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places13 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;	// 0x31e8419d
- (id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(id)string9;	// 0x31e84131
- (unsigned short)base;	// 0x31e85c3d
- (unsigned short)basePlaces;	// 0x31e85c4d
- (id)baseStringFromDouble:(double)aDouble;	// 0x31e880f5
- (BOOL)baseUseMinusSign;	// 0x31e85c5d
- (BOOL)canFormatText;	// 0x31e85c1d
- (id)chartLabelStringFromDouble:(double)aDouble;	// 0x31e85e71
- (id)chartLabelStringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x31e85f81
- (id)chartLabelStringNofixFromDouble:(double)aDouble;	// 0x31e85e05
- (id)copyWithZone:(NSZone *)zone;	// 0x31e878b5
- (id)currencyCode;	// 0x31e85ba5
- (BOOL)customFormatShouldAutoInsertPercentSymbol;	// 0x31e85c91
- (id)customNumberFormatTokens;	// 0x31e87145
- (void)dealloc;	// 0x31e859f5
- (unsigned short)decimalPlaces;	// 0x31e85b51
- (id)description;	// 0x31e876e5
// converted property getter: - (id)formatName;	// 0x31e85b21
- (id)formatString;	// 0x31e85b95
- (int)fractionAccuracy;	// 0x31e85bd5
- (id)fractionStringFromDouble:(double)aDouble;	// 0x31e880d9
- (BOOL)hasValidDecimalPlaces;	// 0x31e85c6d
- (unsigned)hash;	// 0x31e8715d
// converted property getter: - (BOOL)ignoreDecimalPlacesForZeroValue;	// 0x31e85d71
- (BOOL)isCustom;	// 0x31e85b31
- (BOOL)isEqual:(id)equal;	// 0x31e8735d
- (BOOL)isEquivalent:(id)equivalent;	// 0x31e86fd9
- (BOOL)isTextFormat;	// 0x31e85c0d
- (int)negativeStyle;	// 0x31e85bb5
- (id)numberFormatByIncrementingDecimalPlaces:(short)places;	// 0x31e84bbd
- (id)numberFormatBySettingBase:(unsigned short)base;	// 0x31e85599
- (id)numberFormatBySettingBasePlaces:(unsigned short)places;	// 0x31e8570d
- (id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)minus;	// 0x31e85881
- (id)numberFormatBySettingCurrencyCode:(id)code;	// 0x31e84d0d
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places;	// 0x31e84765
- (id)numberFormatBySettingDecimalPlaces:(unsigned short)places andNegativeStyle:(int)style;	// 0x31e84fed
- (id)numberFormatBySettingFractionAccuracy:(int)accuracy;	// 0x31e852b9
- (id)numberFormatBySettingNegativeStyle:(int)style;	// 0x31e84e7d
- (id)numberFormatBySettingPrefixString:(id)string;	// 0x31e848d5
- (id)numberFormatBySettingShowThousandsSeparator:(BOOL)separator;	// 0x31e85149
- (id)numberFormatBySettingSuffixString:(id)string;	// 0x31e84a49
- (id)numberFormatBySettingUseAccountingStyle:(BOOL)style;	// 0x31e85429
- (id)numberFormatBySettingValueType:(int)type;	// 0x31e8459d
- (id)prefixString;	// 0x31e85b75
- (BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)aDouble;	// 0x31e85dd1
- (double)scaleFactor;	// 0x31e85bf5
// converted property setter: - (void)setFormatName:(id)name;	// 0x31e85ae5
// converted property setter: - (void)setIgnoreDecimalPlacesForZeroValue:(BOOL)zeroValue;	// 0x31e85d81
// converted property setter: - (void)setUseScientificFormattingAutomatically:(BOOL)automatically;	// 0x31e85d61
- (BOOL)showThousandsSeparator;	// 0x31e85bc5
- (id)stringFromDouble:(double)aDouble;	// 0x31e860d5
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3;	// 0x31e86195
- (id)stringFromDouble:(double)aDouble decimalPlaces:(unsigned short)places minimumDecimalPlaces:(unsigned short)places3 forceSuppressMinusSign:(BOOL)sign;	// 0x31e861c1
- (id)stringFromDouble:(double)aDouble forceSuppressMinusSign:(BOOL)sign;	// 0x31e86095
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places;	// 0x31e86155
- (id)stringFromDouble:(double)aDouble minimumDecimalPlaces:(unsigned short)places forceSuppressMinusSign:(BOOL)sign;	// 0x31e86115
- (id)stringFromString:(id)string;	// 0x31e86eb1
- (id)suffixString;	// 0x31e85b85
// converted property getter: - (BOOL)useScientificFormattingAutomatically;	// 0x31e85d51
- (BOOL)usesAccountingStyle;	// 0x31e85be5
- (BOOL)usesTabs;	// 0x31e85d91
- (BOOL)usesTextFormatForValue:(double)value;	// 0x31e85c2d
- (int)valueType;	// 0x31e85b41
@end

