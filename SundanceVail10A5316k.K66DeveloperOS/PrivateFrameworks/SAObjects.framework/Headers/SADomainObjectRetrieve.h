/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SADomainObjectCommand.h"

@class NSArray;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(copy, nonatomic) NSArray *identifiers;	// G=0x32f51355; S=0x32f513d1; 
+ (id)domainObjectRetrieve;	// 0x32f512c5
+ (id)domainObjectRetrieveWithDictionary:(id)dictionary context:(id)context;	// 0x32f51309
- (id)encodedClassName;	// 0x32f512b9
- (id)groupIdentifier;	// 0x32f512a9
// declared property getter: - (id)identifiers;	// 0x32f51355
- (BOOL)requiresResponse;	// 0x32f51439
// declared property setter: - (void)setIdentifiers:(id)identifiers;	// 0x32f513d1
@end
