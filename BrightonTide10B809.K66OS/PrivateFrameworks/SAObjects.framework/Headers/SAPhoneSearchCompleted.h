/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAPhoneSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *phoneLogIds;	// G=0x353c12cd; S=0x353c136d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)searchCompleted;	// 0x353c123d
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353c1281
- (id)encodedClassName;	// 0x353c1231
- (id)groupIdentifier;	// 0x353c1221
// declared property getter: - (id)phoneLogIds;	// 0x353c12cd
// declared property setter: - (void)setPhoneLogIds:(id)ids;	// 0x353c136d
@end

