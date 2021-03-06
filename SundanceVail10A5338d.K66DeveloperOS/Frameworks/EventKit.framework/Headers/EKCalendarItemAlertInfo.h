/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSURL, NSDate, NSTimeZone, NSString;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
	NSString *_title;	// 4 = 0x4
	NSString *_location;	// 8 = 0x8
	NSDate *_date;	// 12 = 0xc
	NSDate *_endDate;	// 16 = 0x10
	NSTimeZone *_timeZone;	// 20 = 0x14
	NSURL *_action;	// 24 = 0x18
	BOOL _allDay;	// 28 = 0x1c
	BOOL _tentative;	// 29 = 0x1d
	NSURL *_entityID;	// 32 = 0x20
	int _proximity;	// 36 = 0x24
	NSString *_externalID;	// 40 = 0x28
	BOOL _acknowledged;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) BOOL acknowledged;	// G=0x34ba4679; @synthesize=_acknowledged
@property(readonly, assign, nonatomic) NSURL *action;	// G=0x34ba4619; @synthesize=_action
@property(readonly, assign, nonatomic) BOOL allDay;	// G=0x34ba4629; @synthesize=_allDay
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x34ba45f9; @synthesize=_endDate
@property(readonly, assign, nonatomic) NSURL *entityID;	// G=0x34ba4649; @synthesize=_entityID
@property(readonly, assign, nonatomic) NSDate *eventDate;	// G=0x34ba45e9; @synthesize=_date
@property(readonly, assign, nonatomic) NSTimeZone *eventTimeZone;	// G=0x34ba4609; @synthesize=_timeZone
@property(readonly, assign, nonatomic) NSString *externalID;	// G=0x34ba4669; @synthesize=_externalID
@property(readonly, assign, nonatomic) NSString *location;	// G=0x34ba45d9; @synthesize=_location
@property(readonly, assign, nonatomic) int proximity;	// G=0x34ba4659; @synthesize=_proximity
@property(readonly, assign, nonatomic) BOOL tentative;	// G=0x34ba4639; @synthesize=_tentative
@property(readonly, assign, nonatomic) NSString *title;	// G=0x34ba45c9; @synthesize=_title
+ (id)alertInfoWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity externalID:(id)anId11 acknowledged:(BOOL)acknowledged;	// 0x34ba4185
- (id)initWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity externalID:(id)anId11 acknowledged:(BOOL)acknowledged;	// 0x34ba4209
// declared property getter: - (BOOL)acknowledged;	// 0x34ba4679
// declared property getter: - (id)action;	// 0x34ba4619
// declared property getter: - (BOOL)allDay;	// 0x34ba4629
- (id)copyWithZone:(NSZone *)zone;	// 0x34ba44c1
- (void)dealloc;	// 0x34ba4351
- (id)description;	// 0x34ba442d
// declared property getter: - (id)endDate;	// 0x34ba45f9
// declared property getter: - (id)entityID;	// 0x34ba4649
// declared property getter: - (id)eventDate;	// 0x34ba45e9
// declared property getter: - (id)eventTimeZone;	// 0x34ba4609
// declared property getter: - (id)externalID;	// 0x34ba4669
- (unsigned)hash;	// 0x34ba44d1
- (BOOL)isEqual:(id)equal;	// 0x34ba4511
// declared property getter: - (id)location;	// 0x34ba45d9
// declared property getter: - (int)proximity;	// 0x34ba4659
// declared property getter: - (BOOL)tentative;	// 0x34ba4639
// declared property getter: - (id)title;	// 0x34ba45c9
@end

