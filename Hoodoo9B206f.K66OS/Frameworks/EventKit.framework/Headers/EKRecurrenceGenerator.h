/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface EKRecurrenceGenerator : NSObject {
@private
	NSCalendar *_calendar;	// 4 = 0x4
	NSDate *_eventStartDate;	// 8 = 0x8
	NSDate *_eventEndDate;	// 12 = 0xc
	NSTimeZone *_eventTimeZone;	// 16 = 0x10
	unsigned _duration;	// 20 = 0x14
	BOOL _allDay;	// 24 = 0x18
	int _interval;	// 28 = 0x1c
	int _frequency;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
	int _weekStart;	// 40 = 0x28
	BOOL _shouldPinMonthDays;	// 44 = 0x2c
	NSArray *_daysOfTheWeek;	// 48 = 0x30
	NSArray *_daysOfTheMonth;	// 52 = 0x34
	NSArray *_daysOfTheYear;	// 56 = 0x38
	NSArray *_weeksOfTheYear;	// 60 = 0x3c
	NSArray *_monthsOfTheYear;	// 64 = 0x40
	NSArray *_setPositions;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL allDay;	// G=0x31f47a11; S=0x31f02c1d; @synthesize=_allDay
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x31f47a31; S=0x31f02f19; @synthesize=_daysOfTheMonth
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x31f47a21; S=0x31f02ef5; @synthesize=_daysOfTheWeek
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x31f47a41; S=0x31f02f3d; @synthesize=_daysOfTheYear
@property(copy, nonatomic) NSDate *endDate;	// G=0x31f02ff1; S=0x31f02fcd; @synthesize=_endDate
@property(copy, nonatomic) NSDate *eventEndDate;	// G=0x31f479f1; S=0x31f02bd5; @synthesize=_eventEndDate
@property(copy, nonatomic) NSDate *eventStartDate;	// G=0x31f479e1; S=0x31f02bb1; @synthesize=_eventStartDate
@property(copy, nonatomic) NSTimeZone *eventTimeZone;	// G=0x31f47a01; S=0x31f02bf9; @synthesize=_eventTimeZone
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x31f47a61; S=0x31f02f85; @synthesize=_monthsOfTheYear
@property(copy, nonatomic) NSArray *setPositions;	// G=0x31f47a71; S=0x31f02fa9; @synthesize=_setPositions
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x31f47a51; S=0x31f02f61; @synthesize=_weeksOfTheYear
+ (id)generator;	// 0x31f440ed
- (id)init;	// 0x31f44125
- (id)_computeRecurrenceEndDate:(int)date;	// 0x31f45c35
- (double)_convertAbsoluteTime:(double)time fromTimeZone:(id)timeZone toTimeZone:(id)timeZone3;	// 0x31f45ddd
- (id)_copyDailyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x31f45e09
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x31f04735
- (id)_copyOccurrenceDatesBetweenStartDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date2 timeZone:(id)zone limit:(int)limit;	// 0x31f030e5
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x31f46bd9
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x31f037d1
- (id)_copyYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x31f46dc1
- (BOOL)_isSimpleYearlyRecurrence;	// 0x31f45d2d
- (void)_prepareForCalRecurrence:(void *)calRecurrence locked:(BOOL)locked;	// 0x31f45501
- (void)_prepareForEKRecurrence:(id)ekrecurrence;	// 0x31f02c2d
- (void)_prepareForPersistentRecurrence:(id)persistentRecurrence;	// 0x31f45309
- (void)_setupForCalEvent:(void *)calEvent locked:(BOOL)locked;	// 0x31f4448d
- (void)_setupForEKEvent:(id)ekevent;	// 0x31f441a1
- (void)_setupForPersistentEvent:(id)persistentEvent;	// 0x31f44375
- (BOOL)_validateCalDate:(XXStruct_lQVxyC)date pinned:(BOOL)pinned;	// 0x31f46ba9
// declared property getter: - (BOOL)allDay;	// 0x31f47a11
- (id)copyOccurrenceDatesWithCalEvent:(void *)calEvent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit locked:(BOOL)locked;	// 0x31f44789
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x31f448e1
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x31f445f5
- (id)copyOccurrenceDatesWithEvent:(id)event recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x31f44b7d
- (id)copyOccurrenceDatesWithEvent:(id)event startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x31f449e9
- (id)copyOccurrenceDatesWithInitialDate:(id)initialDate calRecurrences:(id)recurrences rangeStart:(id)start rangeEnd:(id)end timeZone:(id)zone;	// 0x31f44c85
// declared property getter: - (id)daysOfTheMonth;	// 0x31f47a31
// declared property getter: - (id)daysOfTheWeek;	// 0x31f47a21
// declared property getter: - (id)daysOfTheYear;	// 0x31f47a41
- (void)dealloc;	// 0x31f04541
// declared property getter: - (id)endDate;	// 0x31f02ff1
// declared property getter: - (id)eventEndDate;	// 0x31f479f1
// declared property getter: - (id)eventStartDate;	// 0x31f479e1
// declared property getter: - (id)eventTimeZone;	// 0x31f47a01
- (BOOL)isOccurrenceDate:(id)date validForEvent:(id)event;	// 0x31f44fbd
// declared property getter: - (id)monthsOfTheYear;	// 0x31f47a61
- (id)nextOccurrenceDateWithEKRecurrences:(id)ekrecurrences initialDate:(id)date afterDate:(id)date3;	// 0x31f027e9
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x31f02c1d
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x31f02f19
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x31f02ef5
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x31f02f3d
// declared property setter: - (void)setEndDate:(id)date;	// 0x31f02fcd
// declared property setter: - (void)setEventEndDate:(id)date;	// 0x31f02bd5
// declared property setter: - (void)setEventStartDate:(id)date;	// 0x31f02bb1
// declared property setter: - (void)setEventTimeZone:(id)zone;	// 0x31f02bf9
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x31f02f85
// declared property getter: - (id)setPositions;	// 0x31f47a71
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x31f02fa9
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x31f02f61
// declared property getter: - (id)weeksOfTheYear;	// 0x31f47a51
@end

