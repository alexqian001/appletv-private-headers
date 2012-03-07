/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFormatter.h"

@class NSMutableDictionary;

@interface NSNumberFormatter : NSFormatter {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	CFNumberFormatterRef _formatter;	// 8 = 0x8
	unsigned _counter;	// 12 = 0xc
	void *_reserved[12];	// 16 = 0x10
}
@property(assign) BOOL allowsFloats;	// G=0x320bd971; S=0x32030c89; converted property
@property(assign) BOOL alwaysShowsDecimalSeparator;	// G=0x320bdb0d; S=0x320518cd; converted property
@property(retain) id currencyCode;	// G=0x320bec6d; S=0x320bed2d; converted property
@property(retain) id currencyDecimalSeparator;	// G=0x320bdbc1; S=0x320bdc81; converted property
@property(retain) id currencyGroupingSeparator;	// G=0x320c0701; S=0x320c07c1; converted property
@property(retain) id currencySymbol;	// G=0x320bedc9; S=0x320bee89; converted property
@property(retain) id decimalSeparator;	// G=0x320bd9b1; S=0x320bda71; converted property
@property(retain) id exponentSymbol;	// G=0x320bf5f1; S=0x320bf6b1; converted property
@property(assign) unsigned formatWidth;	// G=0x320bf981; S=0x320bfa5d; converted property
@property(assign) unsigned formatterBehavior;	// G=0x320bd39d; S=0x320516e1; converted property
@property(assign) BOOL generatesDecimalNumbers;	// G=0x320bd355; S=0x3204069d; converted property
@property(retain) id groupingSeparator;	// G=0x320bddd1; S=0x320bde91; converted property
@property(assign) unsigned groupingSize;	// G=0x320bf74d; S=0x3204c0fd; converted property
@property(retain) id internationalCurrencySymbol;	// G=0x320bef25; S=0x320befe5; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x320c085d; S=0x320c091d; converted property
@property(retain) id locale;	// G=0x320bd2e5; S=0x32040631; converted property
@property(retain) id maximum;	// G=0x320c0645; S=0x320c066d; converted property
@property(assign) unsigned maximumFractionDigits;	// G=0x320c04ad; S=0x32046849; converted property
@property(assign) unsigned maximumIntegerDigits;	// G=0x320c0279; S=0x320c0355; converted property
@property(assign) unsigned maximumSignificantDigits;	// G=0x320c0c35; S=0x320c0d11; converted property
@property(retain) id minimum;	// G=0x320c0589; S=0x320c05b1; converted property
@property(assign) unsigned minimumFractionDigits;	// G=0x320c03d1; S=0x3205194d; converted property
@property(assign) unsigned minimumIntegerDigits;	// G=0x320c019d; S=0x320519c9; converted property
@property(assign) unsigned minimumSignificantDigits;	// G=0x320c0add; S=0x320c0bb9; converted property
@property(retain) id minusSign;	// G=0x320bf339; S=0x320bf3f9; converted property
@property(retain) id multiplier;	// G=0x320bfad9; S=0x320bfb99; converted property
@property(retain) id negativeFormat;	// G=0x320bd3dd; S=0x320bd495; converted property
@property(retain) id negativeInfinitySymbol;	// G=0x320be59d; S=0x32030c31; converted property
@property(retain) id negativePrefix;	// G=0x320be9b5; S=0x320bea75; converted property
@property(retain) id negativeSuffix;	// G=0x320beb11; S=0x320bebd1; converted property
@property(retain) id nilSymbol;	// G=0x320be0a5; S=0x32030b81; converted property
@property(retain) id notANumberSymbol;	// G=0x320be205; S=0x320be2c5; converted property
@property(assign) unsigned numberStyle;	// G=0x320bd265; S=0x32035f51; converted property
@property(retain) id paddingCharacter;	// G=0x320bfc35; S=0x320bfcf5; converted property
@property(assign) unsigned paddingPosition;	// G=0x320bfd91; S=0x320bfe6d; converted property
@property(assign, getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;	// G=0x320c0d8d; S=0x320c0dd5; converted property
@property(retain) id perMillSymbol;	// G=0x320bf1dd; S=0x320bf29d; converted property
@property(retain) id percentSymbol;	// G=0x320bf081; S=0x320bf141; converted property
@property(retain) id plusSign;	// G=0x320bf495; S=0x320bf555; converted property
@property(retain) id positiveFormat;	// G=0x320bd6cd; S=0x320bd769; converted property
@property(retain) id positiveInfinitySymbol;	// G=0x320be43d; S=0x32030bd9; converted property
@property(retain) id positivePrefix;	// G=0x320be6fd; S=0x320be7bd; converted property
@property(retain) id positiveSuffix;	// G=0x320be859; S=0x320be919; converted property
@property(retain) id roundingIncrement;	// G=0x320c0041; S=0x320c0101; converted property
@property(assign) unsigned roundingMode;	// G=0x320bfee9; S=0x320bffc5; converted property
@property(assign) unsigned secondaryGroupingSize;	// G=0x320bf829; S=0x320bf905; converted property
@property(retain) id textAttributesForNegativeInfinity;	// G=0x320be621; S=0x320be6a5; converted property
@property(retain) id textAttributesForNegativeValues;	// G=0x320bd5f1; S=0x320bd675; converted property
@property(retain) id textAttributesForNil;	// G=0x320be129; S=0x320be1ad; converted property
@property(retain) id textAttributesForNotANumber;	// G=0x320be361; S=0x320be3e5; converted property
@property(retain) id textAttributesForPositiveInfinity;	// G=0x320be4c1; S=0x320be545; converted property
@property(retain) id textAttributesForPositiveValues;	// G=0x320bd895; S=0x320bd919; converted property
@property(retain) id textAttributesForZero;	// G=0x320bdfc9; S=0x320be04d; converted property
@property(assign) BOOL usesGroupingSeparator;	// G=0x320bdd1d; S=0x32034331; converted property
@property(assign) BOOL usesSignificantDigits;	// G=0x320c099d; S=0x320c0a5d; converted property
@property(retain) id zeroSymbol;	// G=0x32049365; S=0x320bdf2d; converted property
+ (unsigned)defaultFormatterBehavior;	// 0x32030b71
+ (void)initialize;	// 0x320307a1
+ (id)localizedStringFromNumber:(id)number numberStyle:(unsigned)style;	// 0x32051ac1
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x320307cd
- (id)init;	// 0x320307e5
- (id)initWithCoder:(id)coder;	// 0x320bc7ad
- (void *)__Keynote_NOOP;	// 0x320bc4dd
- (void)_regenerateFormatter;	// 0x32030ce5
- (void)_reset;	// 0x320bc4e1
// converted property getter: - (BOOL)allowsFloats;	// 0x320bd971
// converted property getter: - (BOOL)alwaysShowsDecimalSeparator;	// 0x320bdb0d
- (id)attributedStringForObjectValue:(id)objectValue withDefaultAttributes:(id)defaultAttributes;	// 0x320bc94d
- (id)copyWithZone:(NSZone *)zone;	// 0x320bc69d
// converted property getter: - (id)currencyCode;	// 0x320bec6d
// converted property getter: - (id)currencyDecimalSeparator;	// 0x320bdbc1
// converted property getter: - (id)currencyGroupingSeparator;	// 0x320c0701
// converted property getter: - (id)currencySymbol;	// 0x320bedc9
- (void)dealloc;	// 0x32040771
// converted property getter: - (id)decimalSeparator;	// 0x320bd9b1
- (void)encodeWithCoder:(id)coder;	// 0x320bc705
// converted property getter: - (id)exponentSymbol;	// 0x320bf5f1
- (void)finalize;	// 0x320bc659
// converted property getter: - (unsigned)formatWidth;	// 0x320bf981
// converted property getter: - (unsigned)formatterBehavior;	// 0x320bd39d
// converted property getter: - (BOOL)generatesDecimalNumbers;	// 0x320bd355
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x320bc951
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x320bd209
// converted property getter: - (id)groupingSeparator;	// 0x320bddd1
// converted property getter: - (unsigned)groupingSize;	// 0x320bf74d
// converted property getter: - (id)internationalCurrencySymbol;	// 0x320bef25
// converted property getter: - (BOOL)isLenient;	// 0x320c085d
// converted property getter: - (BOOL)isPartialStringValidationEnabled;	// 0x320c0d8d
// converted property getter: - (id)locale;	// 0x320bd2e5
// converted property getter: - (id)maximum;	// 0x320c0645
// converted property getter: - (unsigned)maximumFractionDigits;	// 0x320c04ad
// converted property getter: - (unsigned)maximumIntegerDigits;	// 0x320c0279
// converted property getter: - (unsigned)maximumSignificantDigits;	// 0x320c0c35
// converted property getter: - (id)minimum;	// 0x320c0589
// converted property getter: - (unsigned)minimumFractionDigits;	// 0x320c03d1
// converted property getter: - (unsigned)minimumIntegerDigits;	// 0x320c019d
// converted property getter: - (unsigned)minimumSignificantDigits;	// 0x320c0add
// converted property getter: - (id)minusSign;	// 0x320bf339
// converted property getter: - (id)multiplier;	// 0x320bfad9
// converted property getter: - (id)negativeFormat;	// 0x320bd3dd
// converted property getter: - (id)negativeInfinitySymbol;	// 0x320be59d
// converted property getter: - (id)negativePrefix;	// 0x320be9b5
// converted property getter: - (id)negativeSuffix;	// 0x320beb11
// converted property getter: - (id)nilSymbol;	// 0x320be0a5
// converted property getter: - (id)notANumberSymbol;	// 0x320be205
- (id)numberFromString:(id)string;	// 0x320bd229
// converted property getter: - (unsigned)numberStyle;	// 0x320bd265
// converted property getter: - (id)paddingCharacter;	// 0x320bfc35
// converted property getter: - (unsigned)paddingPosition;	// 0x320bfd91
// converted property getter: - (id)perMillSymbol;	// 0x320bf1dd
// converted property getter: - (id)percentSymbol;	// 0x320bf081
// converted property getter: - (id)plusSign;	// 0x320bf495
// converted property getter: - (id)positiveFormat;	// 0x320bd6cd
// converted property getter: - (id)positiveInfinitySymbol;	// 0x320be43d
// converted property getter: - (id)positivePrefix;	// 0x320be6fd
// converted property getter: - (id)positiveSuffix;	// 0x320be859
// converted property getter: - (id)roundingIncrement;	// 0x320c0041
// converted property getter: - (unsigned)roundingMode;	// 0x320bfee9
// converted property getter: - (unsigned)secondaryGroupingSize;	// 0x320bf829
// converted property setter: - (void)setAllowsFloats:(BOOL)floats;	// 0x32030c89
// converted property setter: - (void)setAlwaysShowsDecimalSeparator:(BOOL)separator;	// 0x320518cd
// converted property setter: - (void)setCurrencyCode:(id)code;	// 0x320bed2d
// converted property setter: - (void)setCurrencyDecimalSeparator:(id)separator;	// 0x320bdc81
// converted property setter: - (void)setCurrencyGroupingSeparator:(id)separator;	// 0x320c07c1
// converted property setter: - (void)setCurrencySymbol:(id)symbol;	// 0x320bee89
// converted property setter: - (void)setDecimalSeparator:(id)separator;	// 0x320bda71
// converted property setter: - (void)setExponentSymbol:(id)symbol;	// 0x320bf6b1
// converted property setter: - (void)setFormatWidth:(unsigned)width;	// 0x320bfa5d
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x320516e1
// converted property setter: - (void)setGeneratesDecimalNumbers:(BOOL)numbers;	// 0x3204069d
// converted property setter: - (void)setGroupingSeparator:(id)separator;	// 0x320bde91
// converted property setter: - (void)setGroupingSize:(unsigned)size;	// 0x3204c0fd
// converted property setter: - (void)setInternationalCurrencySymbol:(id)symbol;	// 0x320befe5
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x320c091d
// converted property setter: - (void)setLocale:(id)locale;	// 0x32040631
// converted property setter: - (void)setMaximum:(id)maximum;	// 0x320c066d
// converted property setter: - (void)setMaximumFractionDigits:(unsigned)digits;	// 0x32046849
// converted property setter: - (void)setMaximumIntegerDigits:(unsigned)digits;	// 0x320c0355
// converted property setter: - (void)setMaximumSignificantDigits:(unsigned)digits;	// 0x320c0d11
// converted property setter: - (void)setMinimum:(id)minimum;	// 0x320c05b1
// converted property setter: - (void)setMinimumFractionDigits:(unsigned)digits;	// 0x3205194d
// converted property setter: - (void)setMinimumIntegerDigits:(unsigned)digits;	// 0x320519c9
// converted property setter: - (void)setMinimumSignificantDigits:(unsigned)digits;	// 0x320c0bb9
// converted property setter: - (void)setMinusSign:(id)sign;	// 0x320bf3f9
// converted property setter: - (void)setMultiplier:(id)multiplier;	// 0x320bfb99
// converted property setter: - (void)setNegativeFormat:(id)format;	// 0x320bd495
// converted property setter: - (void)setNegativeInfinitySymbol:(id)symbol;	// 0x32030c31
// converted property setter: - (void)setNegativePrefix:(id)prefix;	// 0x320bea75
// converted property setter: - (void)setNegativeSuffix:(id)suffix;	// 0x320bebd1
// converted property setter: - (void)setNilSymbol:(id)symbol;	// 0x32030b81
// converted property setter: - (void)setNotANumberSymbol:(id)symbol;	// 0x320be2c5
// converted property setter: - (void)setNumberStyle:(unsigned)style;	// 0x32035f51
// converted property setter: - (void)setPaddingCharacter:(id)character;	// 0x320bfcf5
// converted property setter: - (void)setPaddingPosition:(unsigned)position;	// 0x320bfe6d
// converted property setter: - (void)setPartialStringValidationEnabled:(BOOL)enabled;	// 0x320c0dd5
// converted property setter: - (void)setPerMillSymbol:(id)symbol;	// 0x320bf29d
// converted property setter: - (void)setPercentSymbol:(id)symbol;	// 0x320bf141
// converted property setter: - (void)setPlusSign:(id)sign;	// 0x320bf555
// converted property setter: - (void)setPositiveFormat:(id)format;	// 0x320bd769
// converted property setter: - (void)setPositiveInfinitySymbol:(id)symbol;	// 0x32030bd9
// converted property setter: - (void)setPositivePrefix:(id)prefix;	// 0x320be7bd
// converted property setter: - (void)setPositiveSuffix:(id)suffix;	// 0x320be919
// converted property setter: - (void)setRoundingIncrement:(id)increment;	// 0x320c0101
// converted property setter: - (void)setRoundingMode:(unsigned)mode;	// 0x320bffc5
// converted property setter: - (void)setSecondaryGroupingSize:(unsigned)size;	// 0x320bf905
// converted property setter: - (void)setTextAttributesForNegativeInfinity:(id)negativeInfinity;	// 0x320be6a5
// converted property setter: - (void)setTextAttributesForNegativeValues:(id)negativeValues;	// 0x320bd675
// converted property setter: - (void)setTextAttributesForNil:(id)aNil;	// 0x320be1ad
// converted property setter: - (void)setTextAttributesForNotANumber:(id)notANumber;	// 0x320be3e5
// converted property setter: - (void)setTextAttributesForPositiveInfinity:(id)positiveInfinity;	// 0x320be545
// converted property setter: - (void)setTextAttributesForPositiveValues:(id)positiveValues;	// 0x320bd919
// converted property setter: - (void)setTextAttributesForZero:(id)zero;	// 0x320be04d
// converted property setter: - (void)setUsesGroupingSeparator:(BOOL)separator;	// 0x32034331
// converted property setter: - (void)setUsesSignificantDigits:(BOOL)digits;	// 0x320c0a5d
// converted property setter: - (void)setZeroSymbol:(id)symbol;	// 0x320bdf2d
- (id)stringForObjectValue:(id)objectValue;	// 0x320343d1
- (id)stringFromNumber:(id)number;	// 0x320343b1
// converted property getter: - (id)textAttributesForNegativeInfinity;	// 0x320be621
// converted property getter: - (id)textAttributesForNegativeValues;	// 0x320bd5f1
// converted property getter: - (id)textAttributesForNil;	// 0x320be129
// converted property getter: - (id)textAttributesForNotANumber;	// 0x320be361
// converted property getter: - (id)textAttributesForPositiveInfinity;	// 0x320be4c1
// converted property getter: - (id)textAttributesForPositiveValues;	// 0x320bd895
// converted property getter: - (id)textAttributesForZero;	// 0x320bdfc9
// converted property getter: - (BOOL)usesGroupingSeparator;	// 0x320bdd1d
// converted property getter: - (BOOL)usesSignificantDigits;	// 0x320c099d
// converted property getter: - (id)zeroSymbol;	// 0x32049365
@end
