/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SATimerObject, NSString;

@interface SATimerCancelCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x3251c7c9; S=0x3251c81d; 
+ (id)cancelCompleted;	// 0x3251c739
+ (id)cancelCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3251c77d
- (id)encodedClassName;	// 0x3251c72d
- (id)groupIdentifier;	// 0x3251c71d
// declared property setter: - (void)setTimer:(id)timer;	// 0x3251c81d
// declared property getter: - (id)timer;	// 0x3251c7c9
@end
