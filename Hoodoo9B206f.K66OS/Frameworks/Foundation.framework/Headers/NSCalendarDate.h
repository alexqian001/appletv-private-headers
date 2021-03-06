/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDate.h> // Unknown library

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {
@private
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x31d49171; S=0x31d12ced; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x31ced169; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x31d49161; S=0x31d12c8d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31cecfc5
+ (id)calendarDate;	// 0x31d2f3c1
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x31d4a711
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x31d49715
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x31d49761
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x31d2aed9
+ (id)distantFuture;	// 0x31d49071
+ (id)distantPast;	// 0x31d490e1
- (id)init;	// 0x31ced049
- (id)initWithCoder:(id)coder;	// 0x31d49599
- (id)initWithString:(id)string;	// 0x31d49045
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x31d3c489
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x31d3c4ad
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x31ced06d
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x31d2af3d
- (id)addTimeInterval:(double)interval;	// 0x31d12bfd
// converted property getter: - (id)calendarFormat;	// 0x31d49171
- (Class)classForCoder;	// 0x31d4947d
- (id)copyWithZone:(NSZone *)zone;	// 0x31d3c055
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x31d2f3fd
- (int)dayOfCommonEra;	// 0x31d49181
- (int)dayOfMonth;	// 0x31d4922d
- (int)dayOfWeek;	// 0x31d49265
- (int)dayOfYear;	// 0x31d492b1
- (void)dealloc;	// 0x31ced231
- (id)description;	// 0x31d496bd
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x31d49701
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x31d497ad
- (id)descriptionWithLocale:(id)locale;	// 0x31d496dd
- (void)encodeWithCoder:(id)coder;	// 0x31d49481
- (int)hourOfDay;	// 0x31d31dd9
- (int)microsecondOfSecond;	// 0x31d492dd
- (int)minuteOfHour;	// 0x31d12b75
- (int)monthOfYear;	// 0x31d491f5
- (oneway void)release;	// 0x31ced181
- (int)secondOfMinute;	// 0x31ced0e5
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x31d12ced
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x31d12c8d
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x31ced169
// converted property getter: - (id)timeZone;	// 0x31d49161
- (id)timeZoneDetail;	// 0x31d49151
- (int)yearOfCommonEra;	// 0x31d2aea1
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x31d4932d
@end

