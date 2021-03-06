/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x33670b15; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x33670bad; S=0x33670bc1; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x33670b25; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x33670b59; S=0x33670b6d; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x33670b9d; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x33670b7d; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x33670b8d; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x33670b35; S=0x33670b49; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3367011d
+ (id)typeStrings;	// 0x336700f5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x336701a5
- (void).cxx_destruct;	// 0x33670bd1
// declared property getter: - (id)accountDescription;	// 0x33670b15
// declared property getter: - (id)accountPersistentUUID;	// 0x33670bad
- (id)description;	// 0x336707c9
// declared property getter: - (id)hostname;	// 0x33670b25
// declared property getter: - (id)password;	// 0x33670b59
// declared property getter: - (int)port;	// 0x33670b9d
// declared property getter: - (id)principalURL;	// 0x33670b7d
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x33670bc1
// declared property setter: - (void)setPassword:(id)password;	// 0x33670b6d
// declared property setter: - (void)setUsername:(id)username;	// 0x33670b49
- (id)stubDictionary;	// 0x33670989
- (id)subtitle1Description;	// 0x33670ae5
- (id)subtitle1Label;	// 0x33670ad5
- (id)subtitle2Description;	// 0x33670b05
- (id)subtitle2Label;	// 0x33670af5
- (id)title;	// 0x33670a79
// declared property getter: - (BOOL)useSSL;	// 0x33670b8d
// declared property getter: - (id)username;	// 0x33670b35
@end

