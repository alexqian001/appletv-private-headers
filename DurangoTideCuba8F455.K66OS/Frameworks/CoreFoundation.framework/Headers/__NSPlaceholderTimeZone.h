/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderTimeZone : NSTimeZone {
}
+ (id)immutablePlaceholder;	// 0x34256055
+ (void)initialize;	// 0x34255ff5
- (id)init;	// 0x342cda39
- (id)initWithName:(id)name;	// 0x34256061
- (id)initWithName:(id)name data:(id)data;	// 0x342cda51
- (id)__initWithName:(id)name cache:(BOOL)cache;	// 0x34256079
- (id)__initWithName:(id)name data:(id)data cache:(BOOL)cache;	// 0x34267a05
- (id)abbreviationForDate:(id)date;	// 0x342ce0c5
- (id)data;	// 0x342ce1c5
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x342cdfc5
- (void)dealloc;	// 0x342cd579
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x342ce045
- (id)name;	// 0x342ce245
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x342cdf45
- (oneway void)release;	// 0x342cd56d
- (id)retain;	// 0x342cd569
- (unsigned)retainCount;	// 0x342cd571
- (int)secondsFromGMTForDate:(id)date;	// 0x342ce145
@end
