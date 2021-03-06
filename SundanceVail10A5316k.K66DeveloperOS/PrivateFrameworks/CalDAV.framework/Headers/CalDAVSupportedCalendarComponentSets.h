/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
	NSMutableSet *_componentSets;	// 24 = 0x18
}
+ (BOOL)allowedCalendars:(id)calendars contains:(id)contains;	// 0x36e6679d
- (id)init;	// 0x36e6651d
- (void)addCompSet:(id)set;	// 0x36e668d5
- (id)childrenToWrite;	// 0x36e66941
- (id)componentsAsString;	// 0x36e66595
- (id)copyParseRules;	// 0x36e66419
- (void)dealloc;	// 0x36e66549
- (id)description;	// 0x36e66719
@end

