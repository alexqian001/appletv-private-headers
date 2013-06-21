/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"


@interface SAGetDeferredObjectResponse : SABaseClientBoundCommand {
}
@property(retain, nonatomic) id<SAAceSerializable> object;	// G=0x353fc1a1; S=0x353fc1f5; 
+ (id)getDeferredObjectResponse;	// 0x353fc111
+ (id)getDeferredObjectResponseWithDictionary:(id)dictionary context:(id)context;	// 0x353fc155
- (id)encodedClassName;	// 0x353fc105
- (id)groupIdentifier;	// 0x353fc0f5
// declared property getter: - (id)object;	// 0x353fc1a1
- (BOOL)requiresResponse;	// 0x353fc231
// declared property setter: - (void)setObject:(id)object;	// 0x353fc1f5
@end
