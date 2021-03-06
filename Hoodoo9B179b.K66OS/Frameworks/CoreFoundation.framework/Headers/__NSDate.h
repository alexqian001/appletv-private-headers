/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDate.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSDate : NSDate {
@private
	double _time;	// 4 = 0x4
}
+ (id)__new:(double)aNew;	// 0x30ceaddd
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d3aed5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30d91ad5
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x30d91ad9
- (void)dealloc;	// 0x30cec5a1
- (double)timeIntervalSinceReferenceDate;	// 0x30ceadfd
@end

