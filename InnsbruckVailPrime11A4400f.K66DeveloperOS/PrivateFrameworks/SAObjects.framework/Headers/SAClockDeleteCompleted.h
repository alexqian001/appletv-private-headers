/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString;

@interface SAClockDeleteCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)deleteCompleted;	// 0x326b1219
+ (id)deleteCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326b125d
- (id)encodedClassName;	// 0x326b120d
- (id)groupIdentifier;	// 0x326b11fd
@end
