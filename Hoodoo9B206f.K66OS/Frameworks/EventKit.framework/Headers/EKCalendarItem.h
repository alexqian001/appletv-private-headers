/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSURL, NSArray, NSString, EKCalendar, NSDate, NSTimeZone;

__attribute__((visibility("hidden")))
@interface EKCalendarItem : EKObject {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x31ef2fe5; S=0x31f34fc9; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31ef0a29; 
@property(retain) id action;	// G=0x31f34f91; S=0x31f34fad; converted property
@property(copy, nonatomic) NSArray *alarms;	// G=0x31ef0f21; S=0x31ef4869; 
@property(assign, getter=isAllDay) BOOL allDay;	// G=0x31f01e59; S=0x31ef4fdd; converted property
@property(readonly, assign, nonatomic) NSArray *attendees;	// G=0x31ef2ecd; 
@property(retain, nonatomic) EKCalendar *calendar;	// G=0x31eed261; S=0x31ef65fd; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x31f04655; 
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x31efffb9; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x31eecf91; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x31f34dc5; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x31ef4ab1; 
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x31f34e9d; 
@property(copy, nonatomic) NSString *location;	// G=0x31eebe7d; S=0x31ef6c51; 
@property(copy, nonatomic) NSString *notes;	// G=0x31ef3045; S=0x31ef81b9; 
@property(retain) id organizer;	// G=0x31ef2e2d; S=0x31f352c5; converted property
@property(assign) int priority;	// G=0x31f00255; S=0x31f0219d; converted property
@property(copy, nonatomic) NSArray *recurrenceRules;	// G=0x31ef4175; S=0x31f0214d; 
@property(retain) id structuredLocation;	// G=0x31eebea5; S=0x31ef6c91; converted property
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x31ef410d; S=0x31ef3e35; 
@property(copy, nonatomic) NSString *title;	// G=0x31eebdc5; S=0x31ef6c35; 
// declared property getter: - (id)URL;	// 0x31ef2fe5
// declared property getter: - (id)UUID;	// 0x31ef0a29
- (id)_alarmsRelation;	// 0x31ef0f7d
- (id)_attachmentsRelation;	// 0x31ef2d91
- (id)_attendeesRelation;	// 0x31eed009
- (id)_locationRelation;	// 0x31eebecd
- (void)_moveToCalendarInternal:(id)calendarInternal;	// 0x31f35a29
- (id)_organizerRelation;	// 0x31ef2e55
- (id)_persistentItem;	// 0x31eebe51
- (id)_recurrencesRelation;	// 0x31ef41ad
- (id)_selfAttendeeRelation;	// 0x31ef35a9
// converted property getter: - (id)action;	// 0x31f34f91
- (void)addAlarm:(id)alarm;	// 0x31ef7f85
- (void)addAttendee:(id)attendee;	// 0x31f3526d
- (void)addRecurrenceRule:(id)rule;	// 0x31ef7951
// declared property getter: - (id)alarms;	// 0x31ef0f21
- (BOOL)allowsAlarmModifications;	// 0x31ef9561
- (BOOL)allowsAttendeeModifications;	// 0x31f350fd
- (BOOL)allowsCalendarModifications;	// 0x31f350a5
- (BOOL)allowsRecurrenceModifications;	// 0x31f002cd
- (id)attachments;	// 0x31ef2d39
// declared property getter: - (id)attendees;	// 0x31ef2ecd
// declared property getter: - (id)calendar;	// 0x31eed261
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x31f352f1
// declared property getter: - (id)creationDate;	// 0x31f04655
- (id)description;	// 0x31f34c59
// declared property getter: - (BOOL)hasAlarms;	// 0x31efffb9
// declared property getter: - (BOOL)hasAttendees;	// 0x31eecf91
// declared property getter: - (BOOL)hasNotes;	// 0x31f34dc5
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x31ef4ab1
// converted property getter: - (BOOL)isAllDay;	// 0x31f01e59
- (BOOL)isEditable;	// 0x31ef35e1
- (BOOL)isExternallyOrganizedInvitation;	// 0x31eecf51
- (BOOL)isFloating;	// 0x31ef4df1
- (BOOL)isSelfOrganized;	// 0x31f35025
- (BOOL)isSelfOrganizedInvitation;	// 0x31f35065
// declared property getter: - (id)lastModifiedDate;	// 0x31f34e9d
- (id)lazyLoadRelationForKey:(id)key;	// 0x31eebfa1
// declared property getter: - (id)location;	// 0x31eebe7d
- (void)moveToCalendar:(id)calendar;	// 0x31f35c85
// declared property getter: - (id)notes;	// 0x31ef3045
// converted property getter: - (id)organizer;	// 0x31ef2e2d
- (id)originalItem;	// 0x31f35c4d
// converted property getter: - (int)priority;	// 0x31f00255
- (void)rebase;	// 0x31f353f5
// declared property getter: - (id)recurrenceRules;	// 0x31ef4175
- (void)removeAlarm:(id)alarm;	// 0x31f351c5
- (void)removeAttendee:(id)attendee;	// 0x31f35299
- (void)removeRecurrenceRule:(id)rule;	// 0x31f351f1
- (BOOL)requiresDetach;	// 0x31f021e1
- (id)selfAttendee;	// 0x31ef3581
// converted property setter: - (void)setAction:(id)action;	// 0x31f34fad
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x31ef4869
// converted property setter: - (void)setAllDay:(BOOL)day;	// 0x31ef4fdd
- (void)setAttendees:(id)attendees;	// 0x31f3521d
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x31ef65fd
- (void)setLastModifiedDate:(id)date;	// 0x31f34eb9
// declared property setter: - (void)setLocation:(id)location;	// 0x31ef6c51
// declared property setter: - (void)setNotes:(id)notes;	// 0x31ef81b9
// converted property setter: - (void)setOrganizer:(id)organizer;	// 0x31f352c5
// converted property setter: - (void)setPriority:(int)priority;	// 0x31f0219d
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x31f0214d
// converted property setter: - (void)setStructuredLocation:(id)location;	// 0x31ef6c91
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x31ef3e35
// declared property setter: - (void)setTitle:(id)title;	// 0x31ef6c35
// declared property setter: - (void)setURL:(id)url;	// 0x31f34fc9
// converted property getter: - (id)structuredLocation;	// 0x31eebea5
// declared property getter: - (id)timeZone;	// 0x31ef410d
// declared property getter: - (id)title;	// 0x31eebdc5
- (void)updatePersistentObject;	// 0x31f353e1
- (void)updatePersistentObjectSkippingProperties:(id)properties;	// 0x31ef9e39
- (BOOL)validate:(id *)validate;	// 0x31ef89dd
@end
