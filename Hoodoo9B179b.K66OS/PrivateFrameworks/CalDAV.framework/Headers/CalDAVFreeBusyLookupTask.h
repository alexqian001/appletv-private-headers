/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVScheduleTask.h"

@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask {
	NSString *_maskedUID;	// 176 = 0xb0
}
@property(retain) NSString *maskedUID;	// G=0x35a8a8cd; S=0x35a8a8a9; @synthesize=_maskedUID
+ (id)_icsDate:(id)date calendar:(id)calendar;	// 0x35a8a371
+ (id)freeBusyDocumentWithOrganizer:(id)organizer attendees:(id)attendees start:(id)start end:(id)end maskedUID:(id)uid;	// 0x35a8a54d
- (id)initWithOrganizer:(id)organizer originator:(id)originator attendees:(id)attendees start:(id)start end:(id)end outboxURL:(id)url maskedUID:(id)uid;	// 0x35a8a4a5
- (void)dealloc;	// 0x35a8a8e5
// declared property getter: - (id)maskedUID;	// 0x35a8a8cd
// declared property setter: - (void)setMaskedUID:(id)uid;	// 0x35a8a8a9
@end

