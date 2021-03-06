/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 28 = 0x1c
}
@property(retain) NSMutableSet *privileges;	// G=0x3371568d; S=0x337156a1; @synthesize=_privileges
+ (id)copyParseRules;	// 0x33715471
- (id)init;	// 0x337151f1
- (void)addPrivilege:(id)privilege;	// 0x337155f5
- (void)dealloc;	// 0x3371521d
- (id)description;	// 0x33715269
// declared property getter: - (id)privileges;	// 0x3371568d
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x337156a1
- (void)write:(id)write;	// 0x3371532d
@end

