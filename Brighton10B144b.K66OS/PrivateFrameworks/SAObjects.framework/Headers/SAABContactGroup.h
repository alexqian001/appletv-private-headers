/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject {
}
@property(copy, nonatomic) NSString *groupName;	// G=0x353ce185; S=0x353ce1a1; 
@property(retain, nonatomic) SASource *groupSource;	// G=0x353ce1f1; S=0x353ce245; 
+ (id)contactGroup;	// 0x353ce0f5
+ (id)contactGroupWithDictionary:(id)dictionary context:(id)context;	// 0x353ce139
- (id)encodedClassName;	// 0x353ce0e9
- (id)groupIdentifier;	// 0x353ce0d9
// declared property getter: - (id)groupName;	// 0x353ce185
// declared property getter: - (id)groupSource;	// 0x353ce1f1
// declared property setter: - (void)setGroupName:(id)name;	// 0x353ce1a1
// declared property setter: - (void)setGroupSource:(id)source;	// 0x353ce245
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353ce281
@end

