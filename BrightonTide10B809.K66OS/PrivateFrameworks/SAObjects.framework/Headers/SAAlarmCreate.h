/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SAAlarmObject;

@interface SAAlarmCreate : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAAlarmObject *alarmToCreate;	// G=0x353c4d41; S=0x353c4d95; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c4c65; S=0x353c4ce1; 
+ (id)create;	// 0x353c4bd5
+ (id)createWithDictionary:(id)dictionary context:(id)context;	// 0x353c4c19
// declared property getter: - (id)alarmToCreate;	// 0x353c4d41
- (id)encodedClassName;	// 0x353c4bc9
- (id)groupIdentifier;	// 0x353c4bb9
- (BOOL)requiresResponse;	// 0x353c4dd1
// declared property setter: - (void)setAlarmToCreate:(id)create;	// 0x353c4d95
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c4ce1
// declared property getter: - (id)targetAppId;	// 0x353c4c65
@end

