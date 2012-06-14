/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDate, NSTimeZone;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
@private
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
}
@property(readonly, assign, nonatomic) NSURL *action;	// G=0x30c6a971; @synthesize=_action
@property(readonly, assign, nonatomic) BOOL allDay;	// G=0x30c6a981; @synthesize=_allDay
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x30c6a951; @synthesize=_endDate
@property(readonly, assign, nonatomic) NSURL *entityID;	// G=0x30c6a9a1; @synthesize=_entityID
@property(readonly, assign, nonatomic) NSDate *eventDate;	// G=0x30c6a941; @synthesize=_date
@property(readonly, assign, nonatomic) NSTimeZone *eventTimeZone;	// G=0x30c6a961; @synthesize=_timeZone
@property(readonly, assign, nonatomic) NSString *location;	// G=0x30c6a931; @synthesize=_location
@property(readonly, assign, nonatomic) int proximity;	// G=0x30c6a9b1; @synthesize=_proximity
@property(readonly, assign, nonatomic) BOOL tentative;	// G=0x30c6a991; @synthesize=_tentative
@property(readonly, assign, nonatomic) NSString *title;	// G=0x30c6a921; @synthesize=_title
+ (id)alertInfoWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity;	// 0x30c6a531
- (id)initWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity;	// 0x30c6a595
// declared property getter: - (id)action;	// 0x30c6a971
// declared property getter: - (BOOL)allDay;	// 0x30c6a981
- (id)copyWithZone:(NSZone *)zone;	// 0x30c6a815
- (void)dealloc;	// 0x30c6a6bd
- (id)description;	// 0x30c6a781
// declared property getter: - (id)endDate;	// 0x30c6a951
// declared property getter: - (id)entityID;	// 0x30c6a9a1
// declared property getter: - (id)eventDate;	// 0x30c6a941
// declared property getter: - (id)eventTimeZone;	// 0x30c6a961
- (unsigned)hash;	// 0x30c6a825
- (BOOL)isEqual:(id)equal;	// 0x30c6a865
// declared property getter: - (id)location;	// 0x30c6a931
// declared property getter: - (int)proximity;	// 0x30c6a9b1
// declared property getter: - (BOOL)tentative;	// 0x30c6a991
// declared property getter: - (id)title;	// 0x30c6a921
@end
