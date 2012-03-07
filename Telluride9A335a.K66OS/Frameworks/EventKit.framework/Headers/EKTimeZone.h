/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTimeZone : NSObject <NSCopying> {
@private
	NSString *_name;	// 4 = 0x4
	void *_internal;	// 8 = 0x8
	long _lastStart;	// 12 = 0xc
	long _lastEnd;	// 16 = 0x10
	unsigned _lastIndex;	// 20 = 0x14
	double _offset;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x31030b35; converted property
+ (id)timeZoneWithNSTimeZone:(id)nstimeZone;	// 0x30fd7711
+ (id)timeZoneWithName:(id)name;	// 0x30fd5aa1
- (id)initWithName:(id)name;	// 0x30fd5bfd
- (id)initWithOffset:(double)offset name:(id)name;	// 0x31030885
- (id)NSTimeZone;	// 0x30fe2fb9
- (id)_abbreviationForIndex:(unsigned)index;	// 0x31030b6d
- (unsigned)_indexForAbsoluteTime:(double)absoluteTime;	// 0x30fd65ad
- (id)abbreviation;	// 0x31030ca5
- (id)abbreviationForAbsoluteTime:(double)absoluteTime;	// 0x31030c41
- (id)abbreviationForDate:(id)date;	// 0x31030c0d
- (id)copyWithZone:(NSZone *)zone;	// 0x30fd6fc1
- (void)dealloc;	// 0x310309d9
- (id)description;	// 0x31030ad5
- (unsigned)hash;	// 0x31030ab5
- (BOOL)isEqual:(id)equal;	// 0x31030a3d
// converted property getter: - (id)name;	// 0x31030b35
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)time;	// 0x30fd6ecd
- (double)secondsFromGMT;	// 0x31030cc9
- (double)secondsFromGMTForAbsoluteTime:(double)absoluteTime;	// 0x30fd6545
- (double)secondsFromGMTForDate:(id)date;	// 0x31030bd9
@end
