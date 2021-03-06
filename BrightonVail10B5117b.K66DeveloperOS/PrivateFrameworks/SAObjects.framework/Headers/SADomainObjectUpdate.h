/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *addFields;	// G=0x355ba8a5; S=0x355ba8f9; 
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x355ba935; S=0x355ba989; 
@property(retain, nonatomic) SADomainObject *removeFields;	// G=0x355ba9c5; S=0x355baa19; 
@property(retain, nonatomic) SADomainObject *setFields;	// G=0x355baa55; S=0x355baaa9; 
+ (id)domainObjectUpdate;	// 0x355ba815
+ (id)domainObjectUpdateWithDictionary:(id)dictionary context:(id)context;	// 0x355ba859
// declared property getter: - (id)addFields;	// 0x355ba8a5
- (id)encodedClassName;	// 0x355ba809
- (id)groupIdentifier;	// 0x355ba7f9
// declared property getter: - (id)identifier;	// 0x355ba935
// declared property getter: - (id)removeFields;	// 0x355ba9c5
- (BOOL)requiresResponse;	// 0x355baae5
// declared property setter: - (void)setAddFields:(id)fields;	// 0x355ba8f9
// declared property getter: - (id)setFields;	// 0x355baa55
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x355ba989
// declared property setter: - (void)setRemoveFields:(id)fields;	// 0x355baa19
// declared property setter: - (void)setSetFields:(id)fields;	// 0x355baaa9
@end

