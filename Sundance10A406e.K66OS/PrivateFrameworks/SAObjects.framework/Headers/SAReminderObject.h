/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SAReminderTrigger, NSDate, NSString, NSArray, SAReminderRecurrence;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject {
}
@property(copy, nonatomic) NSString *alternateSubject;	// G=0x325236d1; S=0x325236ed; 
@property(assign, nonatomic) BOOL completed;	// G=0x3252373d; S=0x325237b5; 
@property(copy, nonatomic) NSDate *dueDate;	// G=0x325237f9; S=0x32523815; 
@property(copy, nonatomic) NSString *dueDateTimeZoneId;	// G=0x32523865; S=0x32523881; 
@property(assign, nonatomic) BOOL important;	// G=0x325238d1; S=0x32523949; 
@property(copy, nonatomic) NSArray *lists;	// G=0x3252398d; S=0x32523a09; 
@property(retain, nonatomic) id<SAReminderPayload> payload;	// G=0x32523a71; S=0x32523ac5; 
@property(retain, nonatomic) SAReminderRecurrence *recurrence;	// G=0x32523b01; S=0x32523b55; 
@property(copy, nonatomic) NSString *subject;	// G=0x32523b91; S=0x32523bad; 
@property(retain, nonatomic) SAReminderTrigger *trigger;	// G=0x32523bfd; S=0x32523c51; 
+ (id)object;	// 0x32523641
+ (id)objectWithDictionary:(id)dictionary context:(id)context;	// 0x32523685
// declared property getter: - (id)alternateSubject;	// 0x325236d1
// declared property getter: - (BOOL)completed;	// 0x3252373d
// declared property getter: - (id)dueDate;	// 0x325237f9
// declared property getter: - (id)dueDateTimeZoneId;	// 0x32523865
- (id)encodedClassName;	// 0x32523635
- (id)groupIdentifier;	// 0x32523625
// declared property getter: - (BOOL)important;	// 0x325238d1
// declared property getter: - (id)lists;	// 0x3252398d
// declared property getter: - (id)payload;	// 0x32523a71
// declared property getter: - (id)recurrence;	// 0x32523b01
// declared property setter: - (void)setAlternateSubject:(id)subject;	// 0x325236ed
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x325237b5
// declared property setter: - (void)setDueDate:(id)date;	// 0x32523815
// declared property setter: - (void)setDueDateTimeZoneId:(id)anId;	// 0x32523881
// declared property setter: - (void)setImportant:(BOOL)important;	// 0x32523949
// declared property setter: - (void)setLists:(id)lists;	// 0x32523a09
// declared property setter: - (void)setPayload:(id)payload;	// 0x32523ac5
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x32523b55
// declared property setter: - (void)setSubject:(id)subject;	// 0x32523bad
// declared property setter: - (void)setTrigger:(id)trigger;	// 0x32523c51
// declared property getter: - (id)subject;	// 0x32523b91
// declared property getter: - (id)trigger;	// 0x32523bfd
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32523c8d
@end
