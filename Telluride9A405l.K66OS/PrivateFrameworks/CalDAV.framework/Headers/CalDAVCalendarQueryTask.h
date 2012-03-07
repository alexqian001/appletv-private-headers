/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPropFindTask.h> // Unknown library

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {
	BOOL _syncEvents;	// 128 = 0x80
	BOOL _syncTodos;	// 129 = 0x81
	NSDateComponents *_eventFilterStartDate;	// 132 = 0x84
	NSDateComponents *_eventFilterEndDate;	// 136 = 0x88
	NSDateComponents *_todoFilterStartDate;	// 140 = 0x8c
	NSDateComponents *_todoFilterEndDate;	// 144 = 0x90
}
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x35174c79; S=0x35174c55; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x35174c3d; S=0x35174c19; @synthesize=_eventFilterStartDate
@property(assign) BOOL syncEvents;	// G=0x351746cd; S=0x351746dd; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x351746ad; S=0x351746bd; @synthesize=_syncTodos
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x35174cf1; S=0x35174ccd; @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x35174cb5; S=0x35174c91; @synthesize=_todoFilterStartDate
- (void)_appendComponentFiltersToXMLData:(id)xmldata;	// 0x35174925
- (void)_appendTimeRangeFilterToXMLData:(id)xmldata startDate:(id)date endDate:(id)date3;	// 0x35174801
- (id)_icsDateStringForNSDateComponents:(id)nsdateComponents;	// 0x351746ed
- (void)dealloc;	// 0x35174b91
- (id)description;	// 0x35174f6d
// declared property getter: - (id)eventFilterEndDate;	// 0x35174c79
// declared property getter: - (id)eventFilterStartDate;	// 0x35174c3d
- (id)httpMethod;	// 0x351746a1
- (id)requestBody;	// 0x35174d09
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x35174c55
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x35174c19
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x351746dd
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x351746bd
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x35174ccd
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x35174c91
// declared property getter: - (BOOL)syncEvents;	// 0x351746cd
// declared property getter: - (BOOL)syncTodos;	// 0x351746ad
// declared property getter: - (id)todoFilterEndDate;	// 0x35174cf1
// declared property getter: - (id)todoFilterStartDate;	// 0x35174cb5
@end
