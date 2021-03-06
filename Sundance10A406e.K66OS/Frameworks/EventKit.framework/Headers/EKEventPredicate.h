/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPredicate.h"

@class NSString, NSDate, NSTimeZone;

@interface EKEventPredicate : EKPredicate {
	NSDate *_startDate;	// 12 = 0xc
	NSDate *_endDate;	// 16 = 0x10
	NSString *_uuid;	// 20 = 0x14
	NSTimeZone *_timeZone;	// 24 = 0x18
	BOOL _shouldLoadDefaultProperties;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x313b8999; 
@property(readonly, assign, nonatomic) NSString *eventUUID;	// G=0x313b89a9; 
@property(readonly, assign, nonatomic) BOOL shouldLoadDefaultProperties;	// G=0x313b89c9; 
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x313b8989; 
@property(readonly, assign, nonatomic) NSTimeZone *timeZone;	// G=0x313b89b9; 
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x313b87a9
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars loadDefaultProperties:(BOOL)properties;	// 0x3136d391
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x313b8805
- (id)initWithCoder:(id)coder;	// 0x313b8869
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x3136d429
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars loadDefaultProperties:(BOOL)properties;	// 0x3136d3f5
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x3136d459
- (id)copyWithZone:(NSZone *)zone;	// 0x313b8b5d
- (void)dealloc;	// 0x31372c49
- (void)encodeWithCoder:(id)coder;	// 0x3136df75
// declared property getter: - (id)endDate;	// 0x313b8999
- (BOOL)evaluateWithObject:(id)object;	// 0x313b89d9
// declared property getter: - (id)eventUUID;	// 0x313b89a9
- (BOOL)isEqual:(id)equal;	// 0x313b8c79
- (id)predicateFormat;	// 0x313b8b6d
// declared property getter: - (BOOL)shouldLoadDefaultProperties;	// 0x313b89c9
// declared property getter: - (id)startDate;	// 0x313b8989
// declared property getter: - (id)timeZone;	// 0x313b89b9
@end

