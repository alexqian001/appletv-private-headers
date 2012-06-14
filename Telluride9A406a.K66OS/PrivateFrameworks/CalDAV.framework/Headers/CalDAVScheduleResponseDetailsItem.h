/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, NSString, CoreDAVItemWithHrefChildItem, ICSDocument, CoreDAVErrorItem;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {
	CoreDAVItemWithHrefChildItem *_recipientHREF;	// 24 = 0x18
	CoreDAVLeafItem *_requestStatus;	// 28 = 0x1c
	ICSDocument *_calendarData;	// 32 = 0x20
	CoreDAVErrorItem *_topLevelErrorItem;	// 36 = 0x24
	NSString *_responseDescription;	// 40 = 0x28
}
@property(retain) ICSDocument *calendarData;	// G=0x35fb0c1d; S=0x35fb0bf9; @synthesize=_calendarData
@property(retain) CoreDAVItemWithHrefChildItem *recipientHREF;	// G=0x35fb0ba5; S=0x35fb0b81; @synthesize=_recipientHREF
@property(readonly, assign) NSString *recipientString;	// G=0x35fb0d69; 
@property(retain) CoreDAVLeafItem *requestStatus;	// G=0x35fb0be1; S=0x35fb0bbd; @synthesize=_requestStatus
@property(retain) NSString *responseDescription;	// G=0x35fb0c95; S=0x35fb0c71; @synthesize=_responseDescription
@property(retain) CoreDAVErrorItem *topLevelErrorItem;	// G=0x35fb0c59; S=0x35fb0c35; @synthesize=_topLevelErrorItem
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35fb1251
- (void)_setCalendarDataWithLeafItem:(id)leafItem;	// 0x35fb11c9
// declared property getter: - (id)calendarData;	// 0x35fb0c1d
- (id)copyParseRules;	// 0x35fb0da1
- (void)dealloc;	// 0x35fb12ed
- (id)description;	// 0x35fb0cad
// declared property getter: - (id)recipientHREF;	// 0x35fb0ba5
// declared property getter: - (id)recipientString;	// 0x35fb0d69
// declared property getter: - (id)requestStatus;	// 0x35fb0be1
// declared property getter: - (id)responseDescription;	// 0x35fb0c95
// declared property setter: - (void)setCalendarData:(id)data;	// 0x35fb0bf9
// declared property setter: - (void)setRecipientHREF:(id)href;	// 0x35fb0b81
// declared property setter: - (void)setRequestStatus:(id)status;	// 0x35fb0bbd
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x35fb0c71
// declared property setter: - (void)setTopLevelErrorItem:(id)item;	// 0x35fb0c35
// declared property getter: - (id)topLevelErrorItem;	// 0x35fb0c59
@end
