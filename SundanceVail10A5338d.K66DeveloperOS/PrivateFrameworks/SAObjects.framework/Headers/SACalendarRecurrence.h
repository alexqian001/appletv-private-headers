/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSDate;

@interface SACalendarRecurrence : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int endCount;	// G=0x3794924d; S=0x379492bd; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x37949301; S=0x3794931d; 
@property(assign, nonatomic) int frequency;	// G=0x3794936d; S=0x37949395; 
@property(assign, nonatomic) int interval;	// G=0x379493c5; S=0x37949435; 
+ (id)recurrence;	// 0x379491bd
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;	// 0x37949201
- (id)encodedClassName;	// 0x379491b1
// declared property getter: - (int)endCount;	// 0x3794924d
// declared property getter: - (id)endDate;	// 0x37949301
// declared property getter: - (int)frequency;	// 0x3794936d
- (id)groupIdentifier;	// 0x379491a1
// declared property getter: - (int)interval;	// 0x379493c5
// declared property setter: - (void)setEndCount:(int)count;	// 0x379492bd
// declared property setter: - (void)setEndDate:(id)date;	// 0x3794931d
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x37949395
// declared property setter: - (void)setInterval:(int)interval;	// 0x37949435
@end
