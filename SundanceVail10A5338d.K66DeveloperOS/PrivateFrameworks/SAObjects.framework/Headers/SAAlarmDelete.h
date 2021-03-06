/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAAlarmDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *alarmIds;	// G=0x3794de51; S=0x3794def1; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3794dd75; S=0x3794ddf1; 
+ (id)delete;	// 0x3794dce5
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x3794dd29
// declared property getter: - (id)alarmIds;	// 0x3794de51
- (id)encodedClassName;	// 0x3794dcd9
- (id)groupIdentifier;	// 0x3794dcc9
- (BOOL)requiresResponse;	// 0x3794df71
// declared property setter: - (void)setAlarmIds:(id)ids;	// 0x3794def1
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3794ddf1
// declared property getter: - (id)targetAppId;	// 0x3794dd75
@end

