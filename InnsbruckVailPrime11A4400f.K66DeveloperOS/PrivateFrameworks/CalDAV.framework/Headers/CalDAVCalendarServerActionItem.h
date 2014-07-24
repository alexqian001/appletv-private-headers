/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerCancelItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_create;	// 28 = 0x1c
	CalDAVCalendarServerUpdateItem *_update;	// 32 = 0x20
	CalDAVCalendarServerCancelItem *_cancel;	// 36 = 0x24
	CalDAVCalendarServerReplyItem *_reply;	// 40 = 0x28
}
@property(retain) CalDAVCalendarServerCancelItem *cancel;	// G=0x302707f1; S=0x30270805; @synthesize=_cancel
@property(retain) CoreDAVItemWithNoChildren *create;	// G=0x30270785; S=0x30270799; @synthesize=_create
@property(retain) CalDAVCalendarServerReplyItem *reply;	// G=0x302707cd; S=0x302707e1; @synthesize=_reply
@property(retain) CalDAVCalendarServerUpdateItem *update;	// G=0x302707a9; S=0x302707bd; @synthesize=_update
- (id)init;	// 0x30270395
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x302703c5
// declared property getter: - (id)cancel;	// 0x302707f1
- (id)copyParseRules;	// 0x302704f5
// declared property getter: - (id)create;	// 0x30270785
- (void)dealloc;	// 0x30270449
- (id)description;	// 0x302704c9
// declared property getter: - (id)reply;	// 0x302707cd
// declared property setter: - (void)setCancel:(id)cancel;	// 0x30270805
// declared property setter: - (void)setCreate:(id)create;	// 0x30270799
// declared property setter: - (void)setReply:(id)reply;	// 0x302707e1
// declared property setter: - (void)setUpdate:(id)update;	// 0x302707bd
// declared property getter: - (id)update;	// 0x302707a9
@end
