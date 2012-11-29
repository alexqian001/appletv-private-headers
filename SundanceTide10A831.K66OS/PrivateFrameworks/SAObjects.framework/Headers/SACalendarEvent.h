/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSString, NSArray, NSNumber, NSURL;

@interface SACalendarEvent : SADomainObject {
}
@property(copy, nonatomic) NSArray *alerts;	// G=0x304cf8e9; S=0x304cf905; 
@property(assign, nonatomic) BOOL allDay;	// G=0x304cf955; S=0x304cf9cd; 
@property(copy, nonatomic) NSArray *attendees;	// G=0x304cfa11; S=0x304cfa8d; 
@property(copy, nonatomic) NSURL *calendarId;	// G=0x304cfaf5; S=0x304cfb71; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x304cfbd1; S=0x304cfbed; 
@property(retain, nonatomic) NSNumber *includeRecurrences;	// G=0x304cfc3d; S=0x304cfc59; 
@property(copy, nonatomic) NSString *location;	// G=0x304cfc75; S=0x304cfc91; 
@property(copy, nonatomic) NSString *notes;	// G=0x304cfce1; S=0x304cfcfd; 
@property(copy, nonatomic) NSArray *participants;	// G=0x304cfd4d; S=0x304cfd69; 
@property(retain, nonatomic) NSNumber *readOnly;	// G=0x304cfdb9; S=0x304cfdd5; 
@property(copy, nonatomic) NSArray *recurrences;	// G=0x304cfdf1; S=0x304cfe6d; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x304cfed5; S=0x304cfef1; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x304cff41; S=0x304cff5d; 
@property(copy, nonatomic) NSString *title;	// G=0x304cffad; S=0x304cffc9; 
+ (id)event;	// 0x304cf859
+ (id)eventWithDictionary:(id)dictionary context:(id)context;	// 0x304cf89d
// declared property getter: - (id)alerts;	// 0x304cf8e9
// declared property getter: - (BOOL)allDay;	// 0x304cf955
// declared property getter: - (id)attendees;	// 0x304cfa11
// declared property getter: - (id)calendarId;	// 0x304cfaf5
- (id)encodedClassName;	// 0x304cf84d
// declared property getter: - (id)endDate;	// 0x304cfbd1
- (id)groupIdentifier;	// 0x304cf83d
// declared property getter: - (id)includeRecurrences;	// 0x304cfc3d
// declared property getter: - (id)location;	// 0x304cfc75
// declared property getter: - (id)notes;	// 0x304cfce1
// declared property getter: - (id)participants;	// 0x304cfd4d
// declared property getter: - (id)readOnly;	// 0x304cfdb9
// declared property getter: - (id)recurrences;	// 0x304cfdf1
// declared property setter: - (void)setAlerts:(id)alerts;	// 0x304cf905
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x304cf9cd
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x304cfa8d
// declared property setter: - (void)setCalendarId:(id)anId;	// 0x304cfb71
// declared property setter: - (void)setEndDate:(id)date;	// 0x304cfbed
// declared property setter: - (void)setIncludeRecurrences:(id)recurrences;	// 0x304cfc59
// declared property setter: - (void)setLocation:(id)location;	// 0x304cfc91
// declared property setter: - (void)setNotes:(id)notes;	// 0x304cfcfd
// declared property setter: - (void)setParticipants:(id)participants;	// 0x304cfd69
// declared property setter: - (void)setReadOnly:(id)only;	// 0x304cfdd5
// declared property setter: - (void)setRecurrences:(id)recurrences;	// 0x304cfe6d
// declared property setter: - (void)setStartDate:(id)date;	// 0x304cfef1
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x304cff5d
// declared property setter: - (void)setTitle:(id)title;	// 0x304cffc9
// declared property getter: - (id)startDate;	// 0x304cfed5
// declared property getter: - (id)timeZoneId;	// 0x304cff41
// declared property getter: - (id)title;	// 0x304cffad
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x304d0019
@end
