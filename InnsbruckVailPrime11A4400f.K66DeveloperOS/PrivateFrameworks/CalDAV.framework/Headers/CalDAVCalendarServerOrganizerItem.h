/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 28 = 0x1c
	CoreDAVLeafItem *_commonName;	// 32 = 0x20
}
@property(retain) CoreDAVLeafItem *commonName;	// G=0x30275ab1; S=0x30275ac5; @synthesize=_commonName
@property(retain) CoreDAVHrefItem *href;	// G=0x30275a8d; S=0x30275aa1; @synthesize=_href
- (id)init;	// 0x302757d9
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x30275809
// declared property getter: - (id)commonName;	// 0x30275ab1
- (id)copyParseRules;	// 0x302758e9
- (void)dealloc;	// 0x30275865
- (id)description;	// 0x302758bd
// declared property getter: - (id)href;	// 0x30275a8d
// declared property setter: - (void)setCommonName:(id)name;	// 0x30275ac5
// declared property setter: - (void)setHref:(id)href;	// 0x30275aa1
@end

