/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUDateFormatter : NSObject {
@private
	NSString *mDateOnlyFormatString;	// 4 = 0x4
	NSString *mTimeOnlyFormatString;	// 8 = 0x8
	CFDateFormatterRef mFullDateFormatter;	// 12 = 0xc
}
+ (id)dateFormatStringSpecialSymbols;	// 0x312d72ed
+ (id)datePortionOfDateTimeFormatString:(id)dateTimeFormatString;	// 0x312d7315
+ (id)defaultDateTimeFormat;	// 0x312d6c71
+ (id)shortMonthNamesForNonCachedCurrentLocale;	// 0x312d7461
+ (id)supportedDateFormats;	// 0x312d6c99
+ (id)supportedTimeFormats;	// 0x312d6f41
+ (id)timePortionOfDateTimeFormatString:(id)dateTimeFormatString;	// 0x312d73c1
- (id)init;	// 0x312d74c1
- (id)appropriateOutputFormatStringForInputFormatString:(id)inputFormatString;	// 0x312d7659
- (void)dealloc;	// 0x312d75b1
- (id)fullDateString:(id)string;	// 0x312d7625
- (id)stringFromDate:(id)date format:(id)format;	// 0x312d7775
@end
