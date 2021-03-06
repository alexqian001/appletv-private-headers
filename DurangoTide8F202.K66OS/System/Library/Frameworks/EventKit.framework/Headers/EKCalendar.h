/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString, EKEventStore, NSNumber;

@interface EKCalendar : NSObject {
@private
	EKEventStore *_store;	// 4 = 0x4
	void *_record;	// 8 = 0x8
	NSNumber *_calendarId;	// 12 = 0xc
	id _source;	// 16 = 0x10
	NSString *_title;	// 20 = 0x14
	CGColorRef _color;	// 24 = 0x18
	int _type;	// 28 = 0x1c
	BOOL _editable;	// 32 = 0x20
	int _maxAlarms;	// 36 = 0x24
	int _maxRecurrences;	// 40 = 0x28
	unsigned _constraints;	// 44 = 0x2c
	BOOL _isMain;	// 48 = 0x30
	unsigned _loadFlags;	// 52 = 0x34
	unsigned _dirtyFlags;	// 56 = 0x38
	int _order;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x316461dd; 
@property(assign) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval;	// G=0x31676399; S=0x31676561; converted property
@property(readonly, assign, nonatomic) BOOL allowsContentModifications;	// G=0x31648251; 
@property(readonly, assign) unsigned constraints;	// G=0x31648495; 
@property(assign) BOOL occurrencesMustOccurOnSeparateDays;	// G=0x3167637d; S=0x31676515; converted property
@property(readonly, retain) id source;	// G=0x31644785; converted property
@property(readonly, retain) EKEventStore *store;	// G=0x31676251; converted property
@property(readonly, assign, nonatomic) unsigned supportedEventAvailabilities;	// G=0x31648621; 
@property(assign) BOOL supportsOutgoingInvitations;	// G=0x31648479; S=0x316764c9; converted property
@property(readonly, assign, nonatomic) NSString *title;	// G=0x31645195; 
@property(readonly, assign, nonatomic) int type;	// G=0x31645e99; 
+ (id)calendar;	// 0x3167661d
+ (id)typeDescription:(int)description;	// 0x31676275
- (id)init;	// 0x316762b9
- (id)initWithStore:(id)store object:(void *)object recordId:(id)anId;	// 0x31644625
// declared property getter: - (CGColorRef)CGColor;	// 0x316461dd
- (id)accountName;	// 0x316768bd
- (id)accountTypeName;	// 0x31676925
// converted property getter: - (BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;	// 0x31676399
// declared property getter: - (BOOL)allowsContentModifications;	// 0x31648251
- (BOOL)commitToStore:(id)store error:(id *)error;	// 0x31676b91
// declared property getter: - (unsigned)constraints;	// 0x31648495
- (void)dealloc;	// 0x31676785
- (BOOL)declinedStatusChangeRequiresNoPendingStatus;	// 0x316763d1
- (BOOL)deliverySourceOrExternalIDRequiredForResponse;	// 0x31676409
- (id)description;	// 0x31676a19
- (int)displayOrder;	// 0x31645019
- (BOOL)eventDurationConstrainedToRecurrenceInterval;	// 0x316763b5
- (BOOL)futureStartDateLimitedToOccurrenceCacheBounds;	// 0x31648825
- (BOOL)hasEvents;	// 0x31649df1
- (BOOL)hasTasks;	// 0x31649f3d
- (BOOL)inviteesCanSeeAttendeeStatuses;	// 0x3164c165
- (BOOL)isDefaultCalendarForSource;	// 0x31676df9
- (BOOL)isEqual:(id)equal;	// 0x31649d79
- (BOOL)isHidden;	// 0x31676e89
- (BOOL)isSubscribed;	// 0x31645f8d
- (int)maxAlarmsAllowed;	// 0x316492fd
- (int)maxRecurrencesAllowed;	// 0x31648841
- (BOOL)mustAcknowledgeMasterEvent;	// 0x31676329
- (void *)object;	// 0x31676261
// converted property getter: - (BOOL)occurrencesMustOccurOnSeparateDays;	// 0x3167637d
- (BOOL)organizerCanSeeAttendeeStatuses;	// 0x3167645d
- (BOOL)proposedStatusRequiredForResponse;	// 0x316763ed
- (void)reconnectToServer;	// 0x31676835
- (id)recordId;	// 0x316483e5
- (BOOL)recurrencesShouldPinToMonthDays;	// 0x31676345
- (void)refresh;	// 0x3167664d
- (BOOL)requiresAttendeeSearchInSingleAccount;	// 0x31648b11
- (BOOL)requiresOutgoingInvitationsInDefaultCalendar;	// 0x31676425
- (void)revert;	// 0x3167671d
// converted property setter: - (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x31676561
- (void)setCGColor:(CGColorRef)color;	// 0x3167698d
// converted property setter: - (void)setOccurrencesMustOccurOnSeparateDays:(BOOL)days;	// 0x31676515
- (void)setStore:(id)store object:(void *)object;	// 0x31676235
// converted property setter: - (void)setSupportsOutgoingInvitations:(BOOL)invitations;	// 0x316764c9
- (void)setTitle:(id)title;	// 0x316765ad
// converted property getter: - (id)source;	// 0x31644785
- (BOOL)statusesAreAccurate;	// 0x3164c685
// converted property getter: - (id)store;	// 0x31676251
// declared property getter: - (unsigned)supportedEventAvailabilities;	// 0x31648621
- (BOOL)supportsIncomingInvitations;	// 0x31676441
- (BOOL)supportsInvitationModifications;	// 0x31676495
// converted property getter: - (BOOL)supportsOutgoingInvitations;	// 0x31648479
- (BOOL)supportsRecurrencesOnDetachedEvents;	// 0x31676361
- (BOOL)supportsResponseComments;	// 0x31676479
- (BOOL)supportsTriggerIntervals;	// 0x316764b1
// declared property getter: - (id)title;	// 0x31645195
// declared property getter: - (int)type;	// 0x31645e99
- (id)uid;	// 0x31676271
@end

