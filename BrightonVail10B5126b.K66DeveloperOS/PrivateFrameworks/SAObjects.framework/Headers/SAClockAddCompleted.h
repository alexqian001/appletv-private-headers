/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) BOOL alreadyExists;	// G=0x353c9c39; S=0x353c9cb1; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *worldClockId;	// G=0x353c9cf5; S=0x353c9d71; 
+ (id)addCompleted;	// 0x353c9ba9
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353c9bed
// declared property getter: - (BOOL)alreadyExists;	// 0x353c9c39
- (id)encodedClassName;	// 0x353c9b9d
- (id)groupIdentifier;	// 0x353c9b8d
// declared property setter: - (void)setAlreadyExists:(BOOL)exists;	// 0x353c9cb1
// declared property setter: - (void)setWorldClockId:(id)anId;	// 0x353c9d71
// declared property getter: - (id)worldClockId;	// 0x353c9cf5
@end
