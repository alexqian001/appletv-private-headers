/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableSet, NSMutableDictionary, EKDaemonConnection, EKCalendar, NSNumber, NSString, NSTimeZone;
@protocol OS_dispatch_queue;

@interface EKEventStore : NSObject {
	NSMutableDictionary *_registeredObjects;	// 4 = 0x4
	NSMutableDictionary *_publicRegisteredObjects;	// 8 = 0x8
	NSMutableSet *_insertedObjects;	// 12 = 0xc
	NSMutableSet *_deletedObjects;	// 16 = 0x10
	NSMutableSet *_updatedObjects;	// 20 = 0x14
	NSNumber *_defaultTimedAlarmOffset;	// 24 = 0x18
	NSNumber *_defaultAllDayAlarmOffset;	// 28 = 0x1c
	EKCalendar *_defaultCalendarForNewEvents;	// 32 = 0x20
	EKCalendar *_defaultCalendarForNewReminders;	// 36 = 0x24
	EKDaemonConnection *_database;	// 40 = 0x28
	double _lastDatabaseNotificationTimestamp;	// 44 = 0x2c
	unsigned long _flags;	// 52 = 0x34
	NSTimeZone *_timeZone;	// 56 = 0x38
	NSMutableDictionary *_calendars;	// 60 = 0x3c
	NSMutableDictionary *_sources;	// 64 = 0x40
	NSMutableSet *_objectsPendingCommit;	// 68 = 0x44
	NSObject<OS_dispatch_queue> *_calendarQueue;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_registeredQueue;	// 76 = 0x4c
	NSObject<OS_dispatch_queue> *_unsavedChangesQueue;	// 80 = 0x50
	NSObject<OS_dispatch_queue> *_dbChangedQueue;	// 84 = 0x54
	NSMutableDictionary *_cachedValidatedEmails;	// 88 = 0x58
}
@property(retain, nonatomic) NSMutableDictionary *_cachedValidatedEmails;	// G=0x313b4295; S=0x313b42a5; @synthesize
@property(retain, nonatomic) NSMutableDictionary *_calendars;	// G=0x313b41b5; S=0x313b41c5; @synthesize
@property(retain, nonatomic) EKCalendar *_defaultCalendarForNewEvents;	// G=0x313b4129; S=0x3136b551; @synthesize
@property(retain, nonatomic) EKCalendar *_defaultCalendarForNewReminders;	// G=0x313b4139; S=0x31374329; @synthesize
@property(retain, nonatomic) NSMutableDictionary *_sources;	// G=0x313b41d5; S=0x313b41e5; @synthesize
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *calendarQueue;	// G=0x313b4215; S=0x313b4225; @synthesize=_calendarQueue
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x313ac8b1; 
@property(retain, nonatomic) EKDaemonConnection *database;	// G=0x313b4149; S=0x313b4159; @synthesize=_database
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *dbChangedQueue;	// G=0x313b4275; S=0x313b4285; @synthesize=_dbChangedQueue
@property(retain, nonatomic) NSNumber *defaultAllDayAlarmOffset;	// G=0x3137b4b5; S=0x313b3f79; @synthesize=_defaultAllDayAlarmOffset
@property(readonly, assign, nonatomic) EKCalendar *defaultCalendarForNewEvents;	// G=0x3136b2d1; 
@property(retain) EKCalendar *defaultCalendarForNewReminders;	// G=0x31373fbd; S=0x313aedfd; converted property
@property(retain, nonatomic) NSNumber *defaultTimedAlarmOffset;	// G=0x31379591; S=0x313b3f35; @synthesize=_defaultTimedAlarmOffset
@property(assign, nonatomic) NSMutableSet *deletedObjects;	// G=0x313b40e9; S=0x313b40f9; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSString *eventStoreIdentifier;	// G=0x313ac30d; 
@property(assign, nonatomic) unsigned long flags;	// G=0x313b4195; S=0x313b41a5; @synthesize=_flags
@property(assign, nonatomic) NSMutableSet *insertedObjects;	// G=0x313b40c9; S=0x313b40d9; @synthesize=_insertedObjects
@property(assign, nonatomic) double lastDatabaseNotificationTimestamp;	// G=0x313b4169; S=0x313b4181; @synthesize=_lastDatabaseNotificationTimestamp
@property(assign, nonatomic) NSMutableSet *objectsPendingCommit;	// G=0x313b41f5; S=0x313b4205; @synthesize=_objectsPendingCommit
@property(assign, nonatomic) NSMutableDictionary *publicRegisteredObjects;	// G=0x313b40a9; S=0x313b40b9; @synthesize=_publicRegisteredObjects
@property(assign, nonatomic) NSMutableDictionary *registeredObjects;	// G=0x313b4089; S=0x313b4099; @synthesize=_registeredObjects
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *registeredQueue;	// G=0x313b4235; S=0x313b4245; @synthesize=_registeredQueue
@property(readonly, retain) NSMutableDictionary *sources;	// G=0x3136a061; converted property
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x3136b565; S=0x31366709; @synthesize=_timeZone
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *unsavedChangesQueue;	// G=0x313b4255; S=0x313b4265; @synthesize=_unsavedChangesQueue
@property(assign, nonatomic) NSMutableSet *updatedObjects;	// G=0x313b4109; S=0x313b4119; @synthesize=_updatedObjects
+ (BOOL)_isAuthorizationRestrictedForService:(CFStringRef)service;	// 0x313aaea9
+ (int)authorizationStatusForEntityType:(unsigned)entityType;	// 0x313664bd
+ (Class)classForEntityName:(id)entityName;	// 0x313675d1
+ (Class)publicClassForEntityName:(id)entityName;	// 0x313727c9
- (id)init;	// 0x313aa8bd
- (id)initWithOptions:(unsigned long)options path:(id)path;	// 0x313aa8d1
- (void)_accessStatusChanged;	// 0x313ab095
- (id)_addFetchedObjectWithID:(id)anId;	// 0x31367311
- (void)_addObjectToPendingCommits:(id)pendingCommits;	// 0x31380c71
- (id)_allCalendars;	// 0x31366955
// declared property getter: - (id)_cachedValidatedEmails;	// 0x313b4295
- (BOOL)_calendar:(id)calendar supportsEntityType:(unsigned)type;	// 0x3136b165
- (id)_calendarItemsMatchingPredicate:(id)predicate;	// 0x313af4b5
- (id)_calendarWithID:(id)anId;	// 0x3136b429
// declared property getter: - (id)_calendars;	// 0x313b41b5
- (void)_databaseChangedExternally;	// 0x31382a09
// declared property getter: - (id)_defaultCalendarForNewEvents;	// 0x313b4129
// declared property getter: - (id)_defaultCalendarForNewReminders;	// 0x313b4139
- (void)_deleteObject:(id)object;	// 0x313b1c4d
- (id)_eventWithURI:(id)uri checkValid:(BOOL)valid;	// 0x313ad921
- (void)_forgetRegisteredObjects;	// 0x313b1385
- (void)_insertObject:(id)object;	// 0x3137de65
- (BOOL)_parseURI:(id)uri expectedScheme:(id)scheme identifier:(id *)identifier options:(id *)options;	// 0x313ad5e1
- (void)_performServerFunction:(id)function replyHandler:(id)handler;	// 0x313ae229
- (id)_predicateForRemindersWithDate:(id)date useAsCompletionDate:(BOOL)date2 calendars:(id)calendars limitToCompletedOrIncomplete:(BOOL)completedOrIncomplete completed:(BOOL)completed includeDatesBefore:(BOOL)before sortOrder:(int)order;	// 0x313745a9
- (void)_protectedDataDidBecomeAvailable;	// 0x313b3f2d
- (void)_protectedDataWillBecomeUnavailable;	// 0x313b3f29
- (void)_refreshDASource:(id)source isUserRequested:(BOOL)requested;	// 0x313b0f41
- (void)_refreshDASubscribedCalendar:(id)calendar isUserRequested:(BOOL)requested;	// 0x313b0cd1
- (void)_refreshSource:(id)source accountsManager:(id)manager isUserRequested:(BOOL)requested;	// 0x31376045
- (void)_refreshSubscribedCalendar:(id)calendar accountsManager:(id)manager isUserRequested:(BOOL)requested;	// 0x313b0e0d
- (void)_registerObject:(id)object;	// 0x3137916d
- (void)_registerObjectImmediate:(id)immediate;	// 0x31367a2d
- (void)_requestAccessForEntityType:(unsigned)entityType;	// 0x313aaf0d
- (void)_reregisterObject:(id)object oldID:(id)anId;	// 0x3138243d
- (void)_saveWithoutNotify;	// 0x313ac36d
// declared property getter: - (id)_sources;	// 0x313b41d5
- (void)_trackModifiedObject:(id)object;	// 0x313b1935
- (void)_unregisterObject:(id)object;	// 0x31379445
- (void)_validateObjectIDs:(id)ids completion:(id)completion;	// 0x31382bed
- (void)alarmOccurrencesBetweenStartDate:(id)date endDate:(id)date2 completion:(id)completion;	// 0x313b3679
- (id)alarmWithUUID:(id)uuid;	// 0x313b358d
- (void)cacheValidationStatusForEmail:(id)email status:(int)status;	// 0x313b3fbd
- (id)calendarItemWithIdentifier:(id)identifier;	// 0x313af231
- (id)calendarItemsWithExternalIdentifier:(id)externalIdentifier;	// 0x313af351
// declared property getter: - (id)calendarQueue;	// 0x313b4215
- (id)calendarWithExternalURI:(id)externalURI;	// 0x313b018d
- (id)calendarWithID:(id)anId;	// 0x3137198d
- (id)calendarWithIdentifier:(id)identifier;	// 0x3136ab41
// declared property getter: - (id)calendars;	// 0x313ac8b1
- (id)calendarsForEntityType:(unsigned)entityType;	// 0x31366751
- (void)cancelFetchRequest:(id)request;	// 0x313b3531
- (id)changesSinceSequenceNumber:(int)number;	// 0x313ab149
- (id)closestCachedOccurrenceToDate:(double)date forEventUID:(int)eventUID;	// 0x313b00a1
- (BOOL)commit:(id *)commit;	// 0x31380ce1
- (id)connection;	// 0x3136e151
- (CGColorRef)copyCGColorForNewCalendar;	// 0x313ae9cd
- (int)countOfRemindersMatchingPredicate:(id)remindersMatchingPredicate;	// 0x31374801
- (void)daemonRestarted;	// 0x313ac2c1
// declared property getter: - (id)database;	// 0x313b4149
// declared property getter: - (id)dbChangedQueue;	// 0x313b4275
- (void)dealloc;	// 0x313aabb9
- (id)defaultAllDayAlarm;	// 0x3137b441
// declared property getter: - (id)defaultAllDayAlarmOffset;	// 0x3137b4b5
// declared property getter: - (id)defaultCalendarForNewEvents;	// 0x3136b2d1
// converted property getter: - (id)defaultCalendarForNewReminders;	// 0x31373fbd
- (id)defaultTimedAlarm;	// 0x3137951d
// declared property getter: - (id)defaultTimedAlarmOffset;	// 0x31379591
- (BOOL)deleteCalendar:(id)calendar forEntityType:(int)entityType error:(id *)error;	// 0x313ad3b9
// declared property getter: - (id)deletedObjects;	// 0x313b40e9
- (id)earliestExpiringNotifiableEventEndDateAfterDate:(id)date timeZone:(id)zone;	// 0x313b0539
- (int)emailAddressValidationStatus:(id)status;	// 0x313b4051
- (void)enumerateEventsMatchingPredicate:(id)predicate usingBlock:(id)block;	// 0x313b32c5
- (id)eventForUID:(id)uid occurrenceDate:(id)date;	// 0x313adb4d
- (id)eventForUID:(id)uid occurrenceDate:(id)date checkValid:(BOOL)valid;	// 0x31373eb1
// declared property getter: - (id)eventStoreIdentifier;	// 0x313ac30d
- (id)eventWithIdentifier:(id)identifier;	// 0x313ad4e9
- (id)eventWithUUID:(id)uuid;	// 0x313affb1
- (id)eventWithUniqueId:(id)uniqueId;	// 0x313adb75
- (id)eventsMatchingPredicate:(id)predicate;	// 0x3136d70d
- (id)fetchEventsMatchingPredicate:(id)predicate resultHandler:(id)handler;	// 0x3136d8c9
- (BOOL)fetchProperties:(id)properties forReminders:(id)reminders;	// 0x313afca1
- (id)fetchRemindersMatchingPredicate:(id)predicate completion:(id)completion;	// 0x313af735
// declared property getter: - (unsigned long)flags;	// 0x313b4195
- (BOOL)hideCalendarsFromNotificationCenter:(id)notificationCenter error:(id *)error;	// 0x313ac9fd
- (id)importICS:(id)ics intoCalendar:(id)calendar options:(unsigned)options;	// 0x313ae14d
- (id)importICSData:(id)data intoCalendar:(id)calendar options:(unsigned)options;	// 0x313ae789
- (void)importICSData:(id)data intoCalendar:(id)calendar options:(unsigned)options completion:(id)completion;	// 0x313ae325
- (id)insertNewEvent;	// 0x313b026d
- (id)insertNewExceptionDateWithDate:(id)date;	// 0x313b02c9
- (id)insertNewReminder;	// 0x313af675
// declared property getter: - (id)insertedObjects;	// 0x313b40c9
- (id)inviteReplyNotifications;	// 0x31370d21
- (int)inviteReplyNotificationsCount;	// 0x313b08d1
- (BOOL)isDataProtected;	// 0x3136f629
// declared property getter: - (double)lastDatabaseNotificationTimestamp;	// 0x313b4169
- (id)localSource;	// 0x313ac6a1
- (void)locationBasedAlarmOccurrencesWithCompletion:(id)completion;	// 0x313b3981
- (BOOL)markCalendarAlerted:(id)alerted;	// 0x313acbc5
- (void)markEventAlerted:(id)alerted;	// 0x313ae0c9
- (BOOL)markInviteReplyNotificationAlerted:(id)alerted;	// 0x313b0a49
- (void)markNotificationsAlertedAndSave:(id)save;	// 0x313b030d
- (BOOL)markResourceChangeAlerted:(id)alerted error:(id *)error;	// 0x313b0639
- (int)notifiableEventCount;	// 0x313b050d
- (id)objectWithObjectID:(id)objectID;	// 0x31374111
// declared property getter: - (id)objectsPendingCommit;	// 0x313b41f5
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)calendars;	// 0x313735b9
- (id)occurrenceCacheGetOccurrencesForCalendars:(id)calendars onDay:(double)day;	// 0x31373bed
- (BOOL)occurrenceCacheOccurrencesAreBeingGenerated;	// 0x31373b01
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)allRemindersDueBeforeOrOnDueDate calendars:(id)calendars;	// 0x313afa8d
- (id)predicateForAllRemindersWithDueDate:(id)dueDate calendars:(id)calendars;	// 0x313afa59
- (id)predicateForCompletedRemindersWithCalendars:(id)calendars;	// 0x313afb21
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)completionDateStarting ending:(id)ending calendars:(id)calendars;	// 0x313af939
- (id)predicateForCompletedRemindersWithDueDate:(id)dueDate calendars:(id)calendars sortOrder:(int)order;	// 0x31375201
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)dueDateOrCompletionDate calendars:(id)calendars sortOrder:(int)order;	// 0x313afa21
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date calendars:(id)calendars;	// 0x313b3c65
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date calendars:(id)calendars loadDefaultProperties:(BOOL)properties;	// 0x3136d209
- (id)predicateForEventsWithStartDate:(id)startDate endDate:(id)date eventUUID:(id)uuid calendars:(id)calendars;	// 0x313b3d75
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)incompleteRemindersDueBeforeOrOnDueDate calendars:(id)calendars sortOrder:(int)order;	// 0x313af9ed
- (id)predicateForIncompleteRemindersWithDueDate:(id)dueDate calendars:(id)calendars sortOrder:(int)order;	// 0x3137456d
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)dueDateStarting ending:(id)ending calendars:(id)calendars;	// 0x313af889
- (id)predicateForNotifiableEvents;	// 0x31370abd
- (id)predicateForNotificationCenterVisibleEvents;	// 0x313b3eb9
- (id)predicateForRemindersInCalendars:(id)calendars;	// 0x313af841
- (id)predicateForRemindersWithSearchTerm:(id)searchTerm;	// 0x313afb45
- (id)predicateForRemindersWithTitle:(id)title calendars:(id)calendars;	// 0x313afac5
- (id)predicateForRemindersWithTitle:(id)title listTitle:(id)title2 limitToCompletedOrIncomplete:(BOOL)completedOrIncomplete completed:(BOOL)completed dueAfter:(id)after dueBefore:(id)before searchTerm:(id)term sortOrder:(int)order;	// 0x313afb85
- (id)predicateForRemindersWithTitle:(id)title listTitle:(id)title2 limitToCompletedOrIncomplete:(BOOL)completedOrIncomplete completed:(BOOL)completed dueAfter:(id)after dueBefore:(id)before searchTerm:(id)term sortOrder:(int)order maxResults:(unsigned)results;	// 0x313afbc1
- (id)predicateForUnacknowledgedEvents;	// 0x313b3ed5
- (id)predicateForUnalertedEvents;	// 0x313b3ef1
- (id)predicateForUpcomingEventsWithLimit:(int)limit;	// 0x313b3f0d
- (id)publicObjectWithObjectID:(id)objectID;	// 0x313b1649
- (id)publicObjectWithPersistentObject:(id)persistentObject;	// 0x313696d1
// declared property getter: - (id)publicRegisteredObjects;	// 0x313b40a9
- (int)readWriteCalendarCountForEntityType:(unsigned)entityType;	// 0x3136b069
- (id)readWriteCalendarsForEntityType:(unsigned)entityType;	// 0x313ad035
- (void)refreshSourcesIfNecessary;	// 0x313b1181
- (void)refreshSourcesIfNecessary:(BOOL)necessary;	// 0x31375d89
- (id)registerFetchedObjectWithID:(id)anId;	// 0x3136834d
- (id)registerFetchedObjectWithID:(id)anId defaultLoadedProperties:(id)properties;	// 0x313671b1
// declared property getter: - (id)registeredObjects;	// 0x313b4089
// declared property getter: - (id)registeredQueue;	// 0x313b4235
- (oneway void)release;	// 0x3136af89
- (id)reminderWithExternalURI:(id)externalURI;	// 0x313af0f5
- (id)remindersMatchingPredicate:(id)predicate;	// 0x31375239
- (BOOL)removeCalendar:(id)calendar commit:(BOOL)commit error:(id *)error;	// 0x313ad2fd
- (BOOL)removeCalendar:(id)calendar error:(id *)error;	// 0x313ad209
- (BOOL)removeEvent:(id)event span:(int)span commit:(BOOL)commit error:(id *)error;	// 0x313adc8d
- (BOOL)removeEvent:(id)event span:(int)span error:(id *)error;	// 0x313adc65
- (BOOL)removeInviteReplyNotification:(id)notification error:(id *)error;	// 0x313b0b39
- (BOOL)removeInviteReplyNotifications:(id)notifications error:(id *)error;	// 0x313b0b75
- (BOOL)removeReminder:(id)reminder commit:(BOOL)commit error:(id *)error;	// 0x313af01d
- (BOOL)removeReminder:(id)reminder error:(id *)error;	// 0x313aeffd
- (BOOL)removeResourceChange:(id)change error:(id *)error;	// 0x313b0739
- (BOOL)removeResourceChanges:(id)changes error:(id *)error;	// 0x313b0775
- (BOOL)removeSource:(id)source error:(id *)error;	// 0x313ac829
- (void)requestAccessToEntityType:(unsigned)entityType completion:(id)completion;	// 0x313aafe1
- (void)reset;	// 0x313b2261
- (id)resourceChangesForEntityTypes:(unsigned)entityTypes;	// 0x31370f85
- (void)rollback;	// 0x313b1f61
- (BOOL)saveCalendar:(id)calendar commit:(BOOL)commit error:(id *)error;	// 0x313ad229
- (BOOL)saveCalendar:(id)calendar error:(id *)error;	// 0x313ad1e9
- (BOOL)saveEvent:(id)event span:(int)span commit:(BOOL)commit error:(id *)error;	// 0x3137cdb9
- (BOOL)saveEvent:(id)event span:(int)span error:(id *)error;	// 0x3137cd91
- (BOOL)saveReminder:(id)reminder commit:(BOOL)commit error:(id *)error;	// 0x313aef29
- (BOOL)saveReminder:(id)reminder error:(id *)error;	// 0x313aef09
- (BOOL)saveSource:(id)source error:(id *)error;	// 0x313ac781
- (int)sequenceNumber;	// 0x313ab0f1
- (unsigned)serverPort;	// 0x31366ae5
// declared property setter: - (void)setCalendarQueue:(id)queue;	// 0x313b4225
// declared property setter: - (void)setDatabase:(id)database;	// 0x313b4159
// declared property setter: - (void)setDbChangedQueue:(id)queue;	// 0x313b4285
// declared property setter: - (void)setDefaultAllDayAlarmOffset:(id)offset;	// 0x313b3f79
- (void)setDefaultCalendarForNewEvents:(id)newEvents;	// 0x313aec01
// converted property setter: - (void)setDefaultCalendarForNewReminders:(id)newReminders;	// 0x313aedfd
// declared property setter: - (void)setDefaultTimedAlarmOffset:(id)offset;	// 0x313b3f35
// declared property setter: - (void)setDeletedObjects:(id)objects;	// 0x313b40f9
// declared property setter: - (void)setFlags:(unsigned long)flags;	// 0x313b41a5
// declared property setter: - (void)setInsertedObjects:(id)objects;	// 0x313b40d9
- (BOOL)setInvitationStatus:(unsigned)status forEvent:(id)event error:(id *)error;	// 0x313add61
- (BOOL)setInvitationStatus:(unsigned)status forEvents:(id)events error:(id *)error;	// 0x313ade85
// declared property setter: - (void)setLastDatabaseNotificationTimestamp:(double)timestamp;	// 0x313b4181
// declared property setter: - (void)setObjectsPendingCommit:(id)commit;	// 0x313b4205
// declared property setter: - (void)setPublicRegisteredObjects:(id)objects;	// 0x313b40b9
// declared property setter: - (void)setRegisteredObjects:(id)objects;	// 0x313b4099
// declared property setter: - (void)setRegisteredQueue:(id)queue;	// 0x313b4245
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x31366709
// declared property setter: - (void)setUnsavedChangesQueue:(id)queue;	// 0x313b4265
// declared property setter: - (void)setUpdatedObjects:(id)objects;	// 0x313b4119
// declared property setter: - (void)set_cachedValidatedEmails:(id)emails;	// 0x313b42a5
// declared property setter: - (void)set_calendars:(id)calendars;	// 0x313b41c5
// declared property setter: - (void)set_defaultCalendarForNewEvents:(id)newEvents;	// 0x3136b551
// declared property setter: - (void)set_defaultCalendarForNewReminders:(id)newReminders;	// 0x31374329
// declared property setter: - (void)set_sources:(id)sources;	// 0x313b41e5
- (id)sharedCalendarInvitationsForEntityTypes:(unsigned)entityTypes;	// 0x3136aca1
- (id)sourceWithIdentifier:(id)identifier;	// 0x31369f75
// converted property getter: - (id)sources;	// 0x3136a061
// declared property getter: - (id)timeZone;	// 0x3136b565
- (int)unacknowledgedEventCount;	// 0x313b04e1
// declared property getter: - (id)unsavedChangesQueue;	// 0x313b4255
// declared property getter: - (id)updatedObjects;	// 0x313b4109
@end

