/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren, CalDAVCalendarServerUpdateItem, CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_create;	// 24 = 0x18
	CalDAVCalendarServerUpdateItem *_update;	// 28 = 0x1c
	CalDAVCalendarServerCancelItem *_cancel;	// 32 = 0x20
	CalDAVCalendarServerReplyItem *_reply;	// 36 = 0x24
}
@property(retain) CalDAVCalendarServerCancelItem *cancel;	// G=0x3147d629; S=0x3147d605; @synthesize=_cancel
@property(retain) CoreDAVItemWithNoChildren *create;	// G=0x3147d575; S=0x3147d551; @synthesize=_create
@property(retain) CalDAVCalendarServerReplyItem *reply;	// G=0x3147d5ed; S=0x3147d5c9; @synthesize=_reply
@property(retain) CalDAVCalendarServerUpdateItem *update;	// G=0x3147d5b1; S=0x3147d58d; @synthesize=_update
- (id)init;	// 0x3147d16d
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3147d4c9
// declared property getter: - (id)cancel;	// 0x3147d629
- (id)copyParseRules;	// 0x3147d1a9
// declared property getter: - (id)create;	// 0x3147d575
- (void)dealloc;	// 0x3147d66d
- (id)description;	// 0x3147d641
// declared property getter: - (id)reply;	// 0x3147d5ed
// declared property setter: - (void)setCancel:(id)cancel;	// 0x3147d605
// declared property setter: - (void)setCreate:(id)create;	// 0x3147d551
// declared property setter: - (void)setReply:(id)reply;	// 0x3147d5c9
// declared property setter: - (void)setUpdate:(id)update;	// 0x3147d58d
// declared property getter: - (id)update;	// 0x3147d5b1
@end
