/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderTrigger.h"

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger {
}
@property(retain, nonatomic) SAReminderDateTimeTrigger *dateTimeTrigger;	// G=0x3424dec9; S=0x3424df1d; 
@property(retain, nonatomic) SAReminderLocationTrigger *locationTrigger;	// G=0x3424df59; S=0x3424dfad; 
+ (id)compositeTrigger;	// 0x3424de39
+ (id)compositeTriggerWithDictionary:(id)dictionary context:(id)context;	// 0x3424de7d
// declared property getter: - (id)dateTimeTrigger;	// 0x3424dec9
- (id)encodedClassName;	// 0x3424de2d
- (id)groupIdentifier;	// 0x3424de1d
// declared property getter: - (id)locationTrigger;	// 0x3424df59
// declared property setter: - (void)setDateTimeTrigger:(id)trigger;	// 0x3424df1d
// declared property setter: - (void)setLocationTrigger:(id)trigger;	// 0x3424dfad
@end

