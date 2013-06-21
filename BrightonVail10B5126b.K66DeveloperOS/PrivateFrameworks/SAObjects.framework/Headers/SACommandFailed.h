/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SAClientBoundCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *appId;	// @dynamic
@property(copy, nonatomic) NSArray *callbacks;	// @dynamic
@property(assign, nonatomic) int errorCode;	// G=0x353dcf5d; S=0x353dcfcd; 
@property(copy, nonatomic) NSString *reason;	// G=0x353dd011; S=0x353dd02d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)commandFailed;	// 0x353dcdd5
+ (id)commandFailedWithDictionary:(id)dictionary context:(id)context;	// 0x353dce19
+ (id)commandFailedWithErrorCode:(int)errorCode;	// 0x353dce65
+ (id)commandFailedWithReason:(id)reason;	// 0x353dcead
- (id)initWithErrorCode:(int)errorCode;	// 0x353dcef5
- (id)initWithReason:(id)reason;	// 0x353dcf29
- (id)encodedClassName;	// 0x353dcdc9
// declared property getter: - (int)errorCode;	// 0x353dcf5d
- (id)groupIdentifier;	// 0x353dcdb9
// declared property getter: - (id)reason;	// 0x353dd011
- (BOOL)requiresResponse;	// 0x353dd07d
// declared property setter: - (void)setErrorCode:(int)code;	// 0x353dcfcd
// declared property setter: - (void)setReason:(id)reason;	// 0x353dd02d
@end
