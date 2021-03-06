/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import </libobjc.A.h>
#import "EventKit-Structs.h"
#import "NSCopying.h"


@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
	int _dayOfTheWeek;	// 4 = 0x4
	int _weekNumber;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int dayOfTheWeek;	// G=0x2daefc01; @synthesize=_dayOfTheWeek
@property(readonly, assign, nonatomic) int weekNumber;	// G=0x2daefc11; @synthesize=_weekNumber
+ (id)dayOfWeek:(int)week;	// 0x2daef7e5
+ (id)dayOfWeek:(int)week weekNumber:(int)number;	// 0x2daef825
- (id)initWithCoder:(id)coder;	// 0x2daef901
- (id)initWithDayOfTheWeek:(int)theWeek weekNumber:(int)number;	// 0x2daef865
- (id)copyWithZone:(NSZone *)zone;	// 0x2daefbf1
// declared property getter: - (int)dayOfTheWeek;	// 0x2daefc01
- (id)description;	// 0x2daefacd
- (void)encodeWithCoder:(id)coder;	// 0x2daef981
- (unsigned)hash;	// 0x2daefb39
- (id)iCalendarDescription;	// 0x2daefa4d
- (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x2daef9d9
- (BOOL)isEqual:(id)equal;	// 0x2daefb69
// declared property getter: - (int)weekNumber;	// 0x2daefc11
@end

