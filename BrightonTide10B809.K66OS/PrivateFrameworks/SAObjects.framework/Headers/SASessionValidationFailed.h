/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *errorCode;	// G=0x353e6dc1; S=0x353e6ddd; 
+ (id)sessionValidationFailed;	// 0x353e6d31
+ (id)sessionValidationFailedWithDictionary:(id)dictionary context:(id)context;	// 0x353e6d75
- (id)encodedClassName;	// 0x353e6d25
// declared property getter: - (id)errorCode;	// 0x353e6dc1
- (id)groupIdentifier;	// 0x353e6d15
- (BOOL)requiresResponse;	// 0x353e6e2d
// declared property setter: - (void)setErrorCode:(id)code;	// 0x353e6ddd
@end
