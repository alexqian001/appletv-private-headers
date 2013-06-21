/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSArray, CalDAVScheduleResponseItem, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask {
	NSArray *_attendees;	// 168 = 0xa8
	NSString *_originator;	// 172 = 0xac
	CalDAVScheduleResponseItem *_scheduleResponse;	// 176 = 0xb0
}
@property(retain) NSArray *attendees;	// G=0x335a2005; S=0x335a2019; @synthesize=_attendees
@property(retain) NSString *originator;	// G=0x335a1fe1; S=0x335a1ff5; @synthesize=_originator
@property(retain) CalDAVScheduleResponseItem *scheduleResponse;	// G=0x335a1fbd; S=0x335a1fd1; @synthesize=_scheduleResponse
- (id)initWithOriginator:(id)originator attendees:(id)attendees outboxURL:(id)url payload:(id)payload;	// 0x335a1cd1
- (id)additionalHeaderValues;	// 0x335a1d51
// declared property getter: - (id)attendees;	// 0x335a2005
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x335a1e4d
- (void)dealloc;	// 0x335a1c59
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x335a1edd
// declared property getter: - (id)originator;	// 0x335a1fe1
// declared property getter: - (id)scheduleResponse;	// 0x335a1fbd
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x335a2019
// declared property setter: - (void)setOriginator:(id)originator;	// 0x335a1ff5
// declared property setter: - (void)setScheduleResponse:(id)response;	// 0x335a1fd1
@end
