/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"
#import "SAAceCommand.h"

@class NSString;

@interface SABaseCommand : AceObject <SAAceSerializable, SAAceCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// S=0x326eabb1; 
@property(copy, nonatomic) NSString *refId;	// S=0x326eac25; 
+ (id)baseCommand;	// 0x326eab21
+ (id)baseCommandWithDictionary:(id)dictionary context:(id)context;	// 0x326eab65
- (id)encodedClassName;	// 0x326eab15
- (id)groupIdentifier;	// 0x326eab05
// declared property setter: - (void)setAceId:(id)anId;	// 0x326eabb1
// declared property setter: - (void)setRefId:(id)anId;	// 0x326eac25
@end
