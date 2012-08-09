/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPropFindTask.h> // Unknown library

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {
	BOOL _syncEvents;	// 144 = 0x90
	BOOL _syncTodos;	// 145 = 0x91
	NSDateComponents *_eventFilterStartDate;	// 148 = 0x94
	NSDateComponents *_eventFilterEndDate;	// 152 = 0x98
	NSDateComponents *_todoFilterStartDate;	// 156 = 0x9c
	NSDateComponents *_todoFilterEndDate;	// 160 = 0xa0
}
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x3142c2f1; S=0x3142c305; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x3142c2cd; S=0x3142c2e1; @synthesize=_eventFilterStartDate
@property(assign) BOOL syncEvents;	// G=0x3142c26d; S=0x3142c285; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x3142c29d; S=0x3142c2b5; @synthesize=_syncTodos
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x3142c339; S=0x3142c34d; @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x3142c315; S=0x3142c329; @synthesize=_todoFilterStartDate
- (void)_appendComponentFiltersToXMLData:(id)xmldata;	// 0x3142bdb5
- (void)_appendTimeRangeFilterToXMLData:(id)xmldata startDate:(id)date endDate:(id)date3;	// 0x3142bca1
- (id)_icsDateStringForNSDateComponents:(id)nsdateComponents;	// 0x3142bb7d
- (void)dealloc;	// 0x3142b799
- (id)description;	// 0x3142b825
// declared property getter: - (id)eventFilterEndDate;	// 0x3142c2f1
// declared property getter: - (id)eventFilterStartDate;	// 0x3142c2cd
- (id)httpMethod;	// 0x3142bb71
- (id)requestBody;	// 0x3142c009
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x3142c305
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x3142c2e1
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x3142c285
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x3142c2b5
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x3142c34d
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x3142c329
// declared property getter: - (BOOL)syncEvents;	// 0x3142c26d
// declared property getter: - (BOOL)syncTodos;	// 0x3142c29d
// declared property getter: - (id)todoFilterEndDate;	// 0x3142c339
// declared property getter: - (id)todoFilterStartDate;	// 0x3142c315
@end
