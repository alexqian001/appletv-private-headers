/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

#import "IDSCore-Structs.h"
#import "IDSProfileMessage.h"
#import "NSCopying.h"

@class NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface IDSProfileValidateHandleMessage : IDSProfileMessage <NSCopying> {
	NSString *_uri;	// 108 = 0x6c
	NSNumber *_responseVettingStatus;	// 112 = 0x70
	NSString *_deviceName;	// 116 = 0x74
}
@property(copy, setter=setURI:) NSString *URI;	// G=0x311b8a55; S=0x311b8a69; @synthesize=_uri
@property(copy) NSString *deviceName;	// G=0x311b8a9d; S=0x311b8ab1; @synthesize=_deviceName
@property(copy) NSNumber *responseVettingStatus;	// G=0x311b8a79; S=0x311b8a8d; @synthesize=_responseVettingStatus
- (id)init;	// 0x311b8661
// declared property getter: - (id)URI;	// 0x311b8a55
- (id)bagKey;	// 0x311b87d5
- (id)copyWithZone:(NSZone *)zone;	// 0x311b86b9
- (void)dealloc;	// 0x311b875d
// declared property getter: - (id)deviceName;	// 0x311b8a9d
- (void)handleResponseDictionary:(id)dictionary;	// 0x311b89c1
- (id)messageBody;	// 0x311b886d
- (id)requiredKeys;	// 0x311b87e1
// declared property getter: - (id)responseVettingStatus;	// 0x311b8a79
// declared property setter: - (void)setDeviceName:(id)name;	// 0x311b8ab1
// declared property setter: - (void)setResponseVettingStatus:(id)status;	// 0x311b8a8d
// declared property setter: - (void)setURI:(id)uri;	// 0x311b8a69
@end
