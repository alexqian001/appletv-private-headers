/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_canBePublished;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_canBeShared;	// 28 = 0x1c
}
@property(retain) CoreDAVItemWithNoChildren *canBePublished;	// G=0x35fae361; S=0x35fae33d; @synthesize=_canBePublished
@property(retain) CoreDAVItemWithNoChildren *canBeShared;	// G=0x35fae39d; S=0x35fae379; @synthesize=_canBeShared
- (id)init;	// 0x35fae0d5
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35fae2dd
// declared property getter: - (id)canBePublished;	// 0x35fae361
// declared property getter: - (id)canBeShared;	// 0x35fae39d
- (id)copyParseRules;	// 0x35fae111
- (void)dealloc;	// 0x35fae3e1
- (id)description;	// 0x35fae3b5
// declared property setter: - (void)setCanBePublished:(id)published;	// 0x35fae33d
// declared property setter: - (void)setCanBeShared:(id)shared;	// 0x35fae379
@end

