/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAReminderListObject : SADomainObject {
}
@property(copy, nonatomic) NSString *name;	// G=0x353e3f7d; S=0x353e3f99; 
+ (id)listObject;	// 0x353e3eed
+ (id)listObjectWithDictionary:(id)dictionary context:(id)context;	// 0x353e3f31
- (id)encodedClassName;	// 0x353e3ee1
- (id)groupIdentifier;	// 0x353e3ed1
// declared property getter: - (id)name;	// 0x353e3f7d
// declared property setter: - (void)setName:(id)name;	// 0x353e3f99
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353e3fe9
@end

