/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSData;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSData *sessionInfo;	// G=0x32f505b1; S=0x32f505cd; 
@property(retain, nonatomic) NSNumber *validityDuration;	// G=0x32f5061d; S=0x32f50639; 
+ (id)createSessionInfoResponse;	// 0x32f50521
+ (id)createSessionInfoResponseWithDictionary:(id)dictionary context:(id)context;	// 0x32f50565
- (id)encodedClassName;	// 0x32f50515
- (id)groupIdentifier;	// 0x32f50505
- (BOOL)requiresResponse;	// 0x32f50655
// declared property getter: - (id)sessionInfo;	// 0x32f505b1
// declared property setter: - (void)setSessionInfo:(id)info;	// 0x32f505cd
// declared property setter: - (void)setValidityDuration:(id)duration;	// 0x32f50639
// declared property getter: - (id)validityDuration;	// 0x32f5061d
@end

