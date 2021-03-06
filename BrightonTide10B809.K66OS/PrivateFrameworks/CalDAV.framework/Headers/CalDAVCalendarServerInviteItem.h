/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem {
	NSMutableSet *_users;	// 28 = 0x1c
}
@property(retain) NSMutableSet *users;	// G=0x33595c61; S=0x33595c75; @synthesize=_users
- (id)init;	// 0x33595a29
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33595a55
- (void)addUser:(id)user;	// 0x33595c35
- (id)copyParseRules;	// 0x33595b31
- (void)dealloc;	// 0x33595ac1
- (id)description;	// 0x33595b05
// declared property setter: - (void)setUsers:(id)users;	// 0x33595c75
// declared property getter: - (id)users;	// 0x33595c61
@end

