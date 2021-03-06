/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithHrefChildItem, CoreDAVInvertItem, CoreDAVPrincipalItem, CoreDAVGrantItem, CoreDAVDenyItem, CoreDAVItemWithNoChildren;

@interface CoreDAVACEItem : CoreDAVItem {
	CoreDAVPrincipalItem *_principal;	// 24 = 0x18
	CoreDAVInvertItem *_invert;	// 28 = 0x1c
	CoreDAVGrantItem *_grant;	// 32 = 0x20
	CoreDAVDenyItem *_deny;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_protectedItem;	// 40 = 0x28
	CoreDAVItemWithHrefChildItem *_inherited;	// 44 = 0x2c
}
@property(retain) CoreDAVDenyItem *deny;	// G=0x31c4eaa5; S=0x31c4eab9; @synthesize=_deny
@property(retain) CoreDAVGrantItem *grant;	// G=0x31c4ea6d; S=0x31c4ea81; @synthesize=_grant
@property(retain) CoreDAVItemWithHrefChildItem *inherited;	// G=0x31c4eb15; S=0x31c4eb29; @synthesize=_inherited
@property(retain) CoreDAVInvertItem *invert;	// G=0x31c4ea35; S=0x31c4ea49; @synthesize=_invert
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x31c4e9fd; S=0x31c4ea11; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *protectedItem;	// G=0x31c4eadd; S=0x31c4eaf1; @synthesize=_protectedItem
+ (id)privilegeItemWithNameSpace:(id)nameSpace andName:(id)name;	// 0x31c4e93d
- (id)init;	// 0x31c4df95
- (id)initWithPrincipal:(id)principal shouldInvert:(BOOL)invert action:(int)action withPrivileges:(id)privileges;	// 0x31c4dfc1
- (id)copyParseRules;	// 0x31c4e4f5
- (void)dealloc;	// 0x31c4e1b5
// declared property getter: - (id)deny;	// 0x31c4eaa5
- (id)description;	// 0x31c4e265
// declared property getter: - (id)grant;	// 0x31c4ea6d
// declared property getter: - (id)inherited;	// 0x31c4eb15
// declared property getter: - (id)invert;	// 0x31c4ea35
// declared property getter: - (id)principal;	// 0x31c4e9fd
// declared property getter: - (id)protectedItem;	// 0x31c4eadd
// declared property setter: - (void)setDeny:(id)deny;	// 0x31c4eab9
// declared property setter: - (void)setGrant:(id)grant;	// 0x31c4ea81
// declared property setter: - (void)setInherited:(id)inherited;	// 0x31c4eb29
// declared property setter: - (void)setInvert:(id)invert;	// 0x31c4ea49
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x31c4ea11
// declared property setter: - (void)setProtectedItem:(id)item;	// 0x31c4eaf1
- (void)write:(id)write;	// 0x31c4e3d5
@end

