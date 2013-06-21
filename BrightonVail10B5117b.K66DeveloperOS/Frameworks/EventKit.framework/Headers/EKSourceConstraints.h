/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


__attribute__((visibility("hidden")))
@interface EKSourceConstraints : NSObject {
	int _maxAlarms;	// 4 = 0x4
	int _maxRecurrences;	// 8 = 0x8
	XXStruct_R691tD _flags;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval;	// G=0x3189b381; S=0x3190df1d; 
@property(assign, nonatomic) BOOL allowsCalendarAddDeleteModify;	// G=0x318937c1; S=0x3190e161; 
@property(assign, nonatomic) BOOL allowsEvents;	// G=0x318899c1; S=0x3190e1a9; 
@property(assign, nonatomic) BOOL allowsTasks;	// G=0x318937a9; S=0x3190e185; 
@property(assign, nonatomic) BOOL canSetAvailability;	// G=0x318973e5; S=0x3190e015; 
@property(assign, nonatomic) BOOL declinedStatusChangeRequiresNoPendingStatus;	// G=0x3190ded9; S=0x3190deed; 
@property(assign, nonatomic) BOOL deliverySourceOrExternalIDRequiredForResponse;	// G=0x3190de81; S=0x3190de95; 
@property(assign, nonatomic) BOOL eventAvalabilityLimited;	// G=0x318973fd; S=0x3190e02d; 
@property(assign, nonatomic) BOOL eventDurationConstrainedToRecurrenceInterval;	// G=0x3189b369; S=0x3190df05; 
@property(assign, nonatomic) XXStruct_R691tD flags;	// G=0x3190e2e9; S=0x3190e305; @synthesize=_flags
@property(assign, nonatomic) BOOL futureStartDateLimitedToOccurrenceCacheBounds;	// G=0x3189d085; S=0x3190df4d; 
@property(assign, nonatomic) BOOL inviteesCanSeeAttendeeStatuses;	// G=0x3190ddb1; S=0x3190ddc5; 
@property(assign, nonatomic) BOOL isFacebook;	// G=0x31891191; S=0x3190e269; 
@property(assign, nonatomic) int maxAlarmsAllowed;	// G=0x3189944d; S=0x3190e2c9; @synthesize=_maxAlarms
@property(assign, nonatomic) int maxRecurrencesAllowed;	// G=0x3189905d; S=0x3190e2d9; @synthesize=_maxRecurrences
@property(assign, nonatomic) BOOL mustAcknowledgeMasterEvent;	// G=0x3190dfe9; S=0x3190dffd; 
@property(assign, nonatomic) BOOL occurrencesMustOccurOnSeparateDays;	// G=0x3189d099; S=0x3190df35; 
@property(assign, nonatomic) BOOL organizerCanSeeAttendeeStatuses;	// G=0x3189687d; S=0x3190dd99; 
@property(assign, nonatomic) BOOL proposedStatusRequiredForResponse;	// G=0x3190dead; S=0x3190dec1; 
@property(assign, nonatomic) BOOL recurrenceSeriesMustIncludeMoreThanFirstOccurrence;	// G=0x3190e28d; S=0x3190e2a5; 
@property(assign, nonatomic) BOOL recurrencesShouldPinToMonthDays;	// G=0x3190df91; S=0x3190dfa5; 
@property(assign, nonatomic) BOOL requiresAttendeeSearchInSingleAccount;	// G=0x3190dfbd; S=0x3190dfd1; 
@property(assign, nonatomic) BOOL requiresMSFormattedUID;	// G=0x318a0dc9; S=0x3190e045; 
@property(assign, nonatomic) BOOL requiresOutgoingInvitationsInDefaultCalendar;	// G=0x3189714d; S=0x3190de25; 
@property(assign, nonatomic) BOOL shouldCancelDeletedEvents;	// G=0x3190e05d; S=0x3190e071; 
@property(assign, nonatomic) BOOL shouldDeclineDeletedInvitations;	// G=0x3190e089; S=0x3190e09d; 
@property(assign, nonatomic) BOOL statusesAreAccurate;	// G=0x318921d9; S=0x3190dddd; 
@property(assign, nonatomic) BOOL supportsAlarmProximity;	// G=0x3190e129; S=0x3190e141; 
@property(assign, nonatomic) BOOL supportsAlarmTriggerDates;	// G=0x3190dd41; S=0x3190dd55; 
@property(assign, nonatomic) BOOL supportsAlarmTriggerIntervals;	// G=0x3190dd15; S=0x3190dd29; 
@property(assign, nonatomic) BOOL supportsAlarmsTriggeringAfterStartDate;	// G=0x3190dd6d; S=0x3190dd81; 
@property(assign, nonatomic) BOOL supportsAllDayDueDates;	// G=0x3190e1f1; S=0x3190e209; 
@property(assign, nonatomic) BOOL supportsIncomingInvitations;	// G=0x3188e439; S=0x3190ddf5; 
@property(assign, nonatomic) BOOL supportsInvitationModifications;	// G=0x31897a9d; S=0x3190de3d; 
@property(assign, nonatomic) BOOL supportsOutgoingInvitations;	// G=0x318993cd; S=0x3190de0d; 
@property(assign, nonatomic) BOOL supportsRecurrencesOnDetachedEvents;	// G=0x3190df65; S=0x3190df79; 
@property(assign, nonatomic) BOOL supportsReminderActions;	// G=0x3190e0cd; S=0x3190e0e1; 
@property(assign, nonatomic) BOOL supportsReminderLocations;	// G=0x3190e0f9; S=0x3190e10d; 
@property(assign, nonatomic) BOOL supportsResponseComments;	// G=0x3190de55; S=0x3190de69; 
@property(assign, nonatomic) BOOL supportsSharedCalendars;	// G=0x3190e22d; S=0x3190e245; 
@property(assign, nonatomic) BOOL supportsStructuredLocations;	// G=0x3189c8c5; S=0x3190e0b5; 
@property(assign, nonatomic) BOOL supportsURLField;	// G=0x31899435; S=0x3190e1cd; 
- (id)init;	// 0x31889975
- (id)initWithMaxAlarms:(int)maxAlarms maxRecurrences:(int)recurrences constraintFlags:(unsigned long long)flags;	// 0x31889729
// declared property getter: - (BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;	// 0x3189b381
// declared property getter: - (BOOL)allowsCalendarAddDeleteModify;	// 0x318937c1
// declared property getter: - (BOOL)allowsEvents;	// 0x318899c1
// declared property getter: - (BOOL)allowsTasks;	// 0x318937a9
// declared property getter: - (BOOL)canSetAvailability;	// 0x318973e5
// declared property getter: - (BOOL)declinedStatusChangeRequiresNoPendingStatus;	// 0x3190ded9
// declared property getter: - (BOOL)deliverySourceOrExternalIDRequiredForResponse;	// 0x3190de81
// declared property getter: - (BOOL)eventAvalabilityLimited;	// 0x318973fd
// declared property getter: - (BOOL)eventDurationConstrainedToRecurrenceInterval;	// 0x3189b369
// declared property getter: - (XXStruct_R691tD)flags;	// 0x3190e2e9
// declared property getter: - (BOOL)futureStartDateLimitedToOccurrenceCacheBounds;	// 0x3189d085
// declared property getter: - (BOOL)inviteesCanSeeAttendeeStatuses;	// 0x3190ddb1
// declared property getter: - (BOOL)isFacebook;	// 0x31891191
// declared property getter: - (int)maxAlarmsAllowed;	// 0x3189944d
// declared property getter: - (int)maxRecurrencesAllowed;	// 0x3189905d
// declared property getter: - (BOOL)mustAcknowledgeMasterEvent;	// 0x3190dfe9
// declared property getter: - (BOOL)occurrencesMustOccurOnSeparateDays;	// 0x3189d099
// declared property getter: - (BOOL)organizerCanSeeAttendeeStatuses;	// 0x3189687d
// declared property getter: - (BOOL)proposedStatusRequiredForResponse;	// 0x3190dead
// declared property getter: - (BOOL)recurrenceSeriesMustIncludeMoreThanFirstOccurrence;	// 0x3190e28d
// declared property getter: - (BOOL)recurrencesShouldPinToMonthDays;	// 0x3190df91
// declared property getter: - (BOOL)requiresAttendeeSearchInSingleAccount;	// 0x3190dfbd
// declared property getter: - (BOOL)requiresMSFormattedUID;	// 0x318a0dc9
// declared property getter: - (BOOL)requiresOutgoingInvitationsInDefaultCalendar;	// 0x3189714d
// declared property setter: - (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x3190df1d
// declared property setter: - (void)setAllowsCalendarAddDeleteModify:(BOOL)modify;	// 0x3190e161
// declared property setter: - (void)setAllowsEvents:(BOOL)events;	// 0x3190e1a9
// declared property setter: - (void)setAllowsTasks:(BOOL)tasks;	// 0x3190e185
// declared property setter: - (void)setCanSetAvailability:(BOOL)availability;	// 0x3190e015
// declared property setter: - (void)setDeclinedStatusChangeRequiresNoPendingStatus:(BOOL)status;	// 0x3190deed
// declared property setter: - (void)setDeliverySourceOrExternalIDRequiredForResponse:(BOOL)response;	// 0x3190de95
// declared property setter: - (void)setEventAvalabilityLimited:(BOOL)limited;	// 0x3190e02d
// declared property setter: - (void)setEventDurationConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x3190df05
// declared property setter: - (void)setFlags:(XXStruct_R691tD)flags;	// 0x3190e305
// declared property setter: - (void)setFutureStartDateLimitedToOccurrenceCacheBounds:(BOOL)occurrenceCacheBounds;	// 0x3190df4d
// declared property setter: - (void)setInviteesCanSeeAttendeeStatuses:(BOOL)statuses;	// 0x3190ddc5
// declared property setter: - (void)setIsFacebook:(BOOL)facebook;	// 0x3190e269
// declared property setter: - (void)setMaxAlarmsAllowed:(int)allowed;	// 0x3190e2c9
// declared property setter: - (void)setMaxRecurrencesAllowed:(int)allowed;	// 0x3190e2d9
// declared property setter: - (void)setMustAcknowledgeMasterEvent:(BOOL)event;	// 0x3190dffd
// declared property setter: - (void)setOccurrencesMustOccurOnSeparateDays:(BOOL)days;	// 0x3190df35
// declared property setter: - (void)setOrganizerCanSeeAttendeeStatuses:(BOOL)statuses;	// 0x3190dd99
// declared property setter: - (void)setProposedStatusRequiredForResponse:(BOOL)response;	// 0x3190dec1
// declared property setter: - (void)setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:(BOOL)occurrence;	// 0x3190e2a5
// declared property setter: - (void)setRecurrencesShouldPinToMonthDays:(BOOL)pinToMonthDays;	// 0x3190dfa5
// declared property setter: - (void)setRequiresAttendeeSearchInSingleAccount:(BOOL)singleAccount;	// 0x3190dfd1
// declared property setter: - (void)setRequiresMSFormattedUID:(BOOL)uid;	// 0x3190e045
// declared property setter: - (void)setRequiresOutgoingInvitationsInDefaultCalendar:(BOOL)defaultCalendar;	// 0x3190de25
// declared property setter: - (void)setShouldCancelDeletedEvents:(BOOL)cancelDeletedEvents;	// 0x3190e071
// declared property setter: - (void)setShouldDeclineDeletedInvitations:(BOOL)declineDeletedInvitations;	// 0x3190e09d
// declared property setter: - (void)setStatusesAreAccurate:(BOOL)accurate;	// 0x3190dddd
// declared property setter: - (void)setSupportsAlarmProximity:(BOOL)proximity;	// 0x3190e141
// declared property setter: - (void)setSupportsAlarmTriggerDates:(BOOL)dates;	// 0x3190dd55
// declared property setter: - (void)setSupportsAlarmTriggerIntervals:(BOOL)intervals;	// 0x3190dd29
// declared property setter: - (void)setSupportsAlarmsTriggeringAfterStartDate:(BOOL)date;	// 0x3190dd81
// declared property setter: - (void)setSupportsAllDayDueDates:(BOOL)dates;	// 0x3190e209
// declared property setter: - (void)setSupportsIncomingInvitations:(BOOL)invitations;	// 0x3190ddf5
// declared property setter: - (void)setSupportsInvitationModifications:(BOOL)modifications;	// 0x3190de3d
// declared property setter: - (void)setSupportsOutgoingInvitations:(BOOL)invitations;	// 0x3190de0d
// declared property setter: - (void)setSupportsRecurrencesOnDetachedEvents:(BOOL)events;	// 0x3190df79
// declared property setter: - (void)setSupportsReminderActions:(BOOL)actions;	// 0x3190e0e1
// declared property setter: - (void)setSupportsReminderLocations:(BOOL)locations;	// 0x3190e10d
// declared property setter: - (void)setSupportsResponseComments:(BOOL)comments;	// 0x3190de69
// declared property setter: - (void)setSupportsSharedCalendars:(BOOL)calendars;	// 0x3190e245
// declared property setter: - (void)setSupportsStructuredLocations:(BOOL)locations;	// 0x3190e0b5
// declared property setter: - (void)setSupportsURLField:(BOOL)field;	// 0x3190e1cd
// declared property getter: - (BOOL)shouldCancelDeletedEvents;	// 0x3190e05d
// declared property getter: - (BOOL)shouldDeclineDeletedInvitations;	// 0x3190e089
// declared property getter: - (BOOL)statusesAreAccurate;	// 0x318921d9
// declared property getter: - (BOOL)supportsAlarmProximity;	// 0x3190e129
// declared property getter: - (BOOL)supportsAlarmTriggerDates;	// 0x3190dd41
// declared property getter: - (BOOL)supportsAlarmTriggerIntervals;	// 0x3190dd15
// declared property getter: - (BOOL)supportsAlarmsTriggeringAfterStartDate;	// 0x3190dd6d
// declared property getter: - (BOOL)supportsAllDayDueDates;	// 0x3190e1f1
// declared property getter: - (BOOL)supportsIncomingInvitations;	// 0x3188e439
// declared property getter: - (BOOL)supportsInvitationModifications;	// 0x31897a9d
// declared property getter: - (BOOL)supportsOutgoingInvitations;	// 0x318993cd
// declared property getter: - (BOOL)supportsRecurrencesOnDetachedEvents;	// 0x3190df65
// declared property getter: - (BOOL)supportsReminderActions;	// 0x3190e0cd
// declared property getter: - (BOOL)supportsReminderLocations;	// 0x3190e0f9
// declared property getter: - (BOOL)supportsResponseComments;	// 0x3190de55
// declared property getter: - (BOOL)supportsSharedCalendars;	// 0x3190e22d
// declared property getter: - (BOOL)supportsStructuredLocations;	// 0x3189c8c5
// declared property getter: - (BOOL)supportsURLField;	// 0x31899435
@end
