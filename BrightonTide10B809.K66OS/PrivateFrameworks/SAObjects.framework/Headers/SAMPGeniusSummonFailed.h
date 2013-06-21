/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(assign, nonatomic) int errorCode;	// G=0x353c87c1; S=0x353c8831; 
@property(copy, nonatomic) NSString *reason;	// G=0x353c8875; S=0x353c8891; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)geniusSummonFailed;	// 0x353c8639
+ (id)geniusSummonFailedWithDictionary:(id)dictionary context:(id)context;	// 0x353c867d
+ (id)geniusSummonFailedWithErrorCode:(int)errorCode;	// 0x353c86c9
+ (id)geniusSummonFailedWithReason:(id)reason;	// 0x353c8711
- (id)initWithErrorCode:(int)errorCode;	// 0x353c8759
- (id)initWithReason:(id)reason;	// 0x353c878d
- (id)encodedClassName;	// 0x353c862d
// declared property getter: - (int)errorCode;	// 0x353c87c1
- (id)groupIdentifier;	// 0x353c861d
// declared property getter: - (id)reason;	// 0x353c8875
// declared property setter: - (void)setErrorCode:(int)code;	// 0x353c8831
// declared property setter: - (void)setReason:(id)reason;	// 0x353c8891
@end
