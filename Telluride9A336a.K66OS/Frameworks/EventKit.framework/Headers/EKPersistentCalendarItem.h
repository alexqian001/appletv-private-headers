/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSURL, NSTimeZone, NSData, NSSet, NSString, EKPersistentLocation, EKPersistentCalendar, NSDate, EKPersistentOrganizer, EKPersistentAttendee;

__attribute__((visibility("hidden")))
@interface EKPersistentCalendarItem : EKPersistentObject {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x313e65a1; S=0x313e65bd; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31383a65; 
@property(copy, nonatomic) NSURL *action;	// G=0x313e6569; S=0x313e6585; 
@property(copy, nonatomic) NSSet *alarms;	// G=0x3138426d; S=0x313e65d9; 
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x3137d715; S=0x31394769; 
@property(copy, nonatomic) NSSet *attachments;	// G=0x31385dc5; S=0x313e6a85; 
@property(copy, nonatomic) NSSet *attendees;	// G=0x31385f05; S=0x313e66ed; 
@property(retain, nonatomic) EKPersistentCalendar *calendar;	// G=0x31380299; S=0x3138ced9; 
@property(copy, nonatomic) NSDate *creationDate;	// G=0x31396e81; S=0x31396e9d; 
@property(readonly, assign, nonatomic, getter=isDetached) BOOL detached;	// G=0x31387bf9; 
@property(copy, nonatomic) NSSet *detachedItems;	// G=0x3138f0fd; S=0x313e6ba1; 
@property(copy, nonatomic) NSSet *exceptionDates;	// G=0x313e6665; S=0x3138f0e1; 
@property(copy, nonatomic) NSData *externalData;	// G=0x313e69ad; S=0x313e69c9; 
@property(copy, nonatomic) NSString *externalID;	// G=0x313e6975; S=0x313e6991; 
@property(copy, nonatomic) NSString *externalModTag;	// G=0x313e69e5; S=0x313e6a01; 
@property(assign, nonatomic) int externalTrackingStatus;	// G=0x313e6a1d; S=0x313e6a39; 
@property(readonly, assign, nonatomic) BOOL hasAlarms;	// G=0x3138fa61; 
@property(readonly, assign, nonatomic) BOOL hasAttendees;	// G=0x31380039; 
@property(readonly, assign, nonatomic) BOOL hasNotes;	// G=0x313e64bd; 
@property(readonly, assign, nonatomic) BOOL hasRecurrenceRules;	// G=0x31387ab9; 
@property(copy, nonatomic) NSDate *lastModifiedDate;	// G=0x313e6531; S=0x313e654d; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x3137f475; S=0x3138ea89; 
@property(copy, nonatomic) NSString *notes;	// G=0x3138607d; S=0x3138df05; 
@property(retain, nonatomic) EKPersistentOrganizer *organizer;	// G=0x313e693d; S=0x313e6959; 
@property(retain, nonatomic) EKPersistentCalendarItem *originalItem;	// G=0x31387c19; S=0x313e6ad9; 
@property(assign, nonatomic) int priority;	// G=0x31392dad; S=0x31394d01; 
@property(copy, nonatomic) NSSet *recurrenceRules;	// G=0x31387141; S=0x31396f0d; 
@property(retain, nonatomic) EKPersistentAttendee *selfAttendee;	// G=0x313865a1; S=0x313e67d5; 
@property(assign, nonatomic) int sequenceNumber;	// G=0x31396eb9; S=0x31396ed5; 
@property(copy, nonatomic) NSDate *startDate;	// G=0x3137de8d; S=0x3138eeb9; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x3137d3c1; S=0x3138ee5d; 
@property(copy, nonatomic) NSString *title;	// G=0x3137ee65; S=0x3138ee41; 
@property(copy, nonatomic) NSString *uniqueID;	// G=0x31385cd1; S=0x3138fbfd; 
+ (id)defaultPropertiesToLoad;	// 0x3137d4cd
+ (id)relations;	// 0x3137f92d
- (id)init;	// 0x31386715
// declared property getter: - (id)URL;	// 0x313e65a1
// declared property getter: - (id)UUID;	// 0x31383a65
// declared property getter: - (id)action;	// 0x313e6569
- (void)addAlarm:(id)alarm;	// 0x313e65f5
- (void)addAttachment:(id)attachment;	// 0x313e6aa1
- (void)addAttendee:(id)attendee;	// 0x313e6765
- (void)addDetachedItem:(id)item;	// 0x313e6bbd
- (void)addExceptionDate:(id)date;	// 0x313e6681
- (void)addRecurrenceRule:(id)rule;	// 0x313e662d
// declared property getter: - (id)alarms;	// 0x3138426d
// declared property getter: - (id)attachments;	// 0x31385dc5
- (int)attendeeCount;	// 0x313e66b9
// declared property getter: - (id)attendees;	// 0x31385f05
// declared property getter: - (id)calendar;	// 0x31380299
// declared property getter: - (id)creationDate;	// 0x31396e81
- (void)deleteSelfAndDetached;	// 0x3139241d
// declared property getter: - (id)detachedItems;	// 0x3138f0fd
// declared property getter: - (id)exceptionDates;	// 0x313e6665
// declared property getter: - (id)externalData;	// 0x313e69ad
// declared property getter: - (id)externalID;	// 0x313e6975
// declared property getter: - (id)externalModTag;	// 0x313e69e5
// declared property getter: - (int)externalTrackingStatus;	// 0x313e6a1d
// declared property getter: - (BOOL)hasAlarms;	// 0x3138fa61
- (BOOL)hasAttachments;	// 0x313e6a55
// declared property getter: - (BOOL)hasAttendees;	// 0x31380039
// declared property getter: - (BOOL)hasNotes;	// 0x313e64bd
// declared property getter: - (BOOL)hasRecurrenceRules;	// 0x31387ab9
// declared property getter: - (BOOL)isAllDay;	// 0x3137d715
// declared property getter: - (BOOL)isDetached;	// 0x31387bf9
- (void)itemDidReplicateInNewCalendar:(id)item;	// 0x313e6fb1
// declared property getter: - (id)lastModifiedDate;	// 0x313e6531
// declared property getter: - (id)location;	// 0x3137f475
- (id)moveToCalendar:(id)calendar;	// 0x313e6fb5
- (id)moveToCalendar:(id)calendar skipItem:(id)item;	// 0x313e6d4d
// declared property getter: - (id)notes;	// 0x3138607d
// declared property getter: - (id)organizer;	// 0x313e693d
// declared property getter: - (id)originalItem;	// 0x31387c19
- (void)primitiveValueChangedForKey:(id)key;	// 0x31386aed
// declared property getter: - (int)priority;	// 0x31392dad
// declared property getter: - (id)recurrenceRules;	// 0x31387141
- (void)removeAlarm:(id)alarm;	// 0x313e6611
- (void)removeAttachment:(id)attachment;	// 0x313e6abd
- (void)removeAttendee:(id)attendee;	// 0x313e6781
- (void)removeDetachedItem:(id)item;	// 0x313e6c85
- (void)removeExceptionDate:(id)date;	// 0x313e669d
- (void)removeRecurrenceRule:(id)rule;	// 0x313e6649
// declared property getter: - (id)selfAttendee;	// 0x313865a1
// declared property getter: - (int)sequenceNumber;	// 0x31396eb9
// declared property setter: - (void)setAction:(id)action;	// 0x313e6585
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x313e65d9
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x31394769
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x313e6a85
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x313e66ed
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x3138ced9
// declared property setter: - (void)setCreationDate:(id)date;	// 0x31396e9d
// declared property setter: - (void)setDetachedItems:(id)items;	// 0x313e6ba1
// declared property setter: - (void)setExceptionDates:(id)dates;	// 0x3138f0e1
// declared property setter: - (void)setExternalData:(id)data;	// 0x313e69c9
// declared property setter: - (void)setExternalID:(id)anId;	// 0x313e6991
// declared property setter: - (void)setExternalModTag:(id)tag;	// 0x313e6a01
// declared property setter: - (void)setExternalTrackingStatus:(int)status;	// 0x313e6a39
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x313e654d
// declared property setter: - (void)setLocation:(id)location;	// 0x3138ea89
// declared property setter: - (void)setNotes:(id)notes;	// 0x3138df05
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x313e6959
// declared property setter: - (void)setOriginalItem:(id)item;	// 0x313e6ad9
// declared property setter: - (void)setPriority:(int)priority;	// 0x31394d01
// declared property setter: - (void)setRecurrenceRules:(id)rules;	// 0x31396f0d
// declared property setter: - (void)setSelfAttendee:(id)attendee;	// 0x313e67d5
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x31396ed5
// declared property setter: - (void)setStartDate:(id)date;	// 0x3138eeb9
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3138ee5d
// declared property setter: - (void)setTitle:(id)title;	// 0x3138ee41
// declared property setter: - (void)setURL:(id)url;	// 0x313e65bd
// declared property setter: - (void)setUniqueID:(id)anId;	// 0x3138fbfd
// declared property getter: - (id)startDate;	// 0x3137de8d
// declared property getter: - (id)timeZone;	// 0x3137d3c1
// declared property getter: - (id)title;	// 0x3137ee65
// declared property getter: - (id)uniqueID;	// 0x31385cd1
- (BOOL)validate:(id *)validate;	// 0x3138f559
@end

