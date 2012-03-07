/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSDateComponents : NSObject <NSCopying, NSCoding> {
}
@property(retain) id calendar;	// G=0x34896e35; S=0x34896e41; converted property
@property(assign) int day;	// G=0x34896fa1; S=0x34896b5d; converted property
@property(assign) int era;	// G=0x34896f61; S=0x34896b2d; converted property
@property(assign) int hour;	// G=0x34896fad; S=0x34896fb9; converted property
@property(assign) int minute;	// G=0x34896fc9; S=0x34896fd5; converted property
@property(assign) int month;	// G=0x34896f95; S=0x34896b4d; converted property
@property(assign) int nanosecond;	// G=0x34897001; S=0x3489700d; converted property
@property(assign) int quarter;	// G=0x34896f79; S=0x34896f85; converted property
@property(assign) int second;	// G=0x34896fe5; S=0x34896ff1; converted property
@property(retain) id timeZone;	// G=0x34896ec9; S=0x34896ed5; converted property
@property(assign) int week;	// G=0x3489701d; S=0x34897029; converted property
@property(assign) int weekOfMonth;	// G=0x34897055; S=0x34897061; converted property
@property(assign) int weekOfYear;	// G=0x34897039; S=0x34897045; converted property
@property(assign) int weekday;	// G=0x3489708d; S=0x34897099; converted property
@property(assign) int weekdayOrdinal;	// G=0x348970a9; S=0x348970b5; converted property
@property(assign) int year;	// G=0x34896f6d; S=0x34896b3d; converted property
@property(assign) int yearForWeekOfYear;	// G=0x34897071; S=0x3489707d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34896ae5
- (id)init;	// 0x34896aed
- (id)initWithCoder:(id)coder;	// 0x3490a899
// converted property getter: - (id)calendar;	// 0x34896e35
- (id)copyWithZone:(NSZone *)zone;	// 0x34896b6d
- (id)date;	// 0x3490a8a1
// converted property getter: - (int)day;	// 0x34896fa1
- (void)dealloc;	// 0x348974c5
- (id)description;	// 0x3490a909
- (void)encodeWithCoder:(id)coder;	// 0x3490a89d
// converted property getter: - (int)era;	// 0x34896f61
- (unsigned)hash;	// 0x3490a735
// converted property getter: - (int)hour;	// 0x34896fad
- (BOOL)isEqual:(id)equal;	// 0x34897815
// converted property getter: - (int)minute;	// 0x34896fc9
// converted property getter: - (int)month;	// 0x34896f95
// converted property getter: - (int)nanosecond;	// 0x34897001
// converted property getter: - (int)quarter;	// 0x34896f79
// converted property getter: - (int)second;	// 0x34896fe5
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x34896e41
// converted property setter: - (void)setDay:(int)day;	// 0x34896b5d
// converted property setter: - (void)setEra:(int)era;	// 0x34896b2d
// converted property setter: - (void)setHour:(int)hour;	// 0x34896fb9
// converted property setter: - (void)setMinute:(int)minute;	// 0x34896fd5
// converted property setter: - (void)setMonth:(int)month;	// 0x34896b4d
// converted property setter: - (void)setNanosecond:(int)nanosecond;	// 0x3489700d
// converted property setter: - (void)setQuarter:(int)quarter;	// 0x34896f85
// converted property setter: - (void)setSecond:(int)second;	// 0x34896ff1
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x34896ed5
// converted property setter: - (void)setWeek:(int)week;	// 0x34897029
// converted property setter: - (void)setWeekOfMonth:(int)month;	// 0x34897061
// converted property setter: - (void)setWeekOfYear:(int)year;	// 0x34897045
// converted property setter: - (void)setWeekday:(int)weekday;	// 0x34897099
// converted property setter: - (void)setWeekdayOrdinal:(int)ordinal;	// 0x348970b5
// converted property setter: - (void)setYear:(int)year;	// 0x34896b3d
// converted property setter: - (void)setYearForWeekOfYear:(int)year;	// 0x3489707d
// converted property getter: - (id)timeZone;	// 0x34896ec9
// converted property getter: - (int)week;	// 0x3489701d
// converted property getter: - (int)weekOfMonth;	// 0x34897055
// converted property getter: - (int)weekOfYear;	// 0x34897039
// converted property getter: - (int)weekday;	// 0x3489708d
// converted property getter: - (int)weekdayOrdinal;	// 0x348970a9
// converted property getter: - (int)year;	// 0x34896f6d
// converted property getter: - (int)yearForWeekOfYear;	// 0x34897071
@end
