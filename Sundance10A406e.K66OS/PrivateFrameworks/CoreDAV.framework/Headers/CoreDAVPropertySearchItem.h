/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSString, CoreDAVLeafItem;

@interface CoreDAVPropertySearchItem : CoreDAVItem {
	CoreDAVLeafItem *_prop;	// 28 = 0x1c
	NSString *_match;	// 32 = 0x20
	NSString *_matchTypeAttribute;	// 36 = 0x24
}
@property(retain) NSString *match;	// G=0x303da0cd; S=0x303da0e1; @synthesize=_match
@property(retain) NSString *matchTypeAttribute;	// G=0x303da0f1; S=0x303da105; @synthesize=_matchTypeAttribute
@property(retain) CoreDAVLeafItem *prop;	// G=0x303da0a9; S=0x303da0bd; @synthesize=_prop
- (id)init;	// 0x303d9d09
- (id)initWithSearchPropertyNameSpace:(id)searchPropertyNameSpace andName:(id)name;	// 0x303d9d35
- (void)dealloc;	// 0x303d9d95
- (id)description;	// 0x303d9e0d
// declared property getter: - (id)match;	// 0x303da0cd
// declared property getter: - (id)matchTypeAttribute;	// 0x303da0f1
// declared property getter: - (id)prop;	// 0x303da0a9
// declared property setter: - (void)setMatch:(id)match;	// 0x303da0e1
// declared property setter: - (void)setMatchTypeAttribute:(id)attribute;	// 0x303da105
// declared property setter: - (void)setProp:(id)prop;	// 0x303da0bd
- (void)write:(id)write;	// 0x303d9f0d
@end
