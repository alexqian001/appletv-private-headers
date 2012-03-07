/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CalDAVCalendarServerOrganizerItem, CoreDAVLeafItem, CalDAVSupportedCalendarComponentSet, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVHrefItem, CoreDAVItemWithHrefChildItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {
	CoreDAVLeafItem *_uid;	// 24 = 0x18
	CoreDAVHrefItem *_href;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_inviteStatus;	// 32 = 0x20
	CalDAVCalendarServerAccessItem *_access;	// 36 = 0x24
	CoreDAVItemWithHrefChildItem *_hostURL;	// 40 = 0x28
	CalDAVCalendarServerOrganizerItem *_organizer;	// 44 = 0x2c
	CoreDAVLeafItem *_summary;	// 48 = 0x30
	CalDAVSupportedCalendarComponentSet *_supportedCalendarComponentSet;	// 52 = 0x34
}
@property(retain) CalDAVCalendarServerAccessItem *access;	// G=0x338d3efd; S=0x338d3ed9; @synthesize=_access
@property(retain) CoreDAVItemWithHrefChildItem *hostURL;	// G=0x338d3f39; S=0x338d3f15; @synthesize=_hostURL
@property(retain) CoreDAVHrefItem *href;	// G=0x338d3e85; S=0x338d3e61; @synthesize=_href
@property(retain) CoreDAVItemWithNoChildren *inviteStatus;	// G=0x338d3ec1; S=0x338d3e9d; @synthesize=_inviteStatus
@property(retain) CalDAVCalendarServerOrganizerItem *organizer;	// G=0x338d3f75; S=0x338d3f51; @synthesize=_organizer
@property(retain) CoreDAVLeafItem *summary;	// G=0x338d3fb1; S=0x338d3f8d; @synthesize=_summary
@property(retain) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet;	// G=0x338d3fed; S=0x338d3fc9; @synthesize=_supportedCalendarComponentSet
@property(retain) CoreDAVLeafItem *uid;	// G=0x338d3e49; S=0x338d3e25; @synthesize=_uid
- (id)init;	// 0x338d344d
// declared property getter: - (id)access;	// 0x338d3efd
- (id)copyParseRules;	// 0x338d3489
- (void)dealloc;	// 0x338d3d59
- (id)description;	// 0x338d4005
// declared property getter: - (id)hostURL;	// 0x338d3f39
// declared property getter: - (id)href;	// 0x338d3e85
// declared property getter: - (id)inviteStatus;	// 0x338d3ec1
- (BOOL)isComponentSupportedForString:(id)string;	// 0x338d3d0d
// declared property getter: - (id)organizer;	// 0x338d3f75
// declared property setter: - (void)setAccess:(id)access;	// 0x338d3ed9
// declared property setter: - (void)setHostURL:(id)url;	// 0x338d3f15
// declared property setter: - (void)setHref:(id)href;	// 0x338d3e61
// declared property setter: - (void)setInviteStatus:(id)status;	// 0x338d3e9d
// declared property setter: - (void)setOrganizer:(id)organizer;	// 0x338d3f51
// declared property setter: - (void)setSummary:(id)summary;	// 0x338d3f8d
// declared property setter: - (void)setSupportedCalendarComponentSet:(id)set;	// 0x338d3fc9
// declared property setter: - (void)setUid:(id)uid;	// 0x338d3e25
// declared property getter: - (id)summary;	// 0x338d3fb1
// declared property getter: - (id)supportedCalendarComponentSet;	// 0x338d3fed
// declared property getter: - (id)uid;	// 0x338d3e49
@end
