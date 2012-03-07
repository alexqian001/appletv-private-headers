/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {
	NSMutableSet *_accessControlEntities;	// 24 = 0x18
}
@property(retain) NSMutableSet *accessControlEntities;	// G=0x3387beb5; S=0x3387becd; @synthesize=_accessControlEntities
- (id)init;	// 0x3387b809
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3387b931
// declared property getter: - (id)accessControlEntities;	// 0x3387beb5
- (void)addACE:(id)ace;	// 0x3387b6f1
- (id)copyParseRules;	// 0x3387b719
- (void)dealloc;	// 0x3387b8f5
- (id)description;	// 0x3387b835
- (id)liveACEs;	// 0x3387b68d
- (id)notGrantedSubsetOfACEs:(id)aces;	// 0x3387b995
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x3387becd
@end
