/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SATimerObject, NSString;

@interface SATimerGetCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x304dfa91; S=0x304dfae5; 
+ (id)getCompleted;	// 0x304dfa01
+ (id)getCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x304dfa45
- (id)encodedClassName;	// 0x304df9f5
- (id)groupIdentifier;	// 0x304df9e5
// declared property setter: - (void)setTimer:(id)timer;	// 0x304dfae5
// declared property getter: - (id)timer;	// 0x304dfa91
@end

