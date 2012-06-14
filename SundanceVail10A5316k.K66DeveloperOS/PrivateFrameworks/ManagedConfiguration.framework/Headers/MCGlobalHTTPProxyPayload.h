/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload {
@private
	int _proxyType;	// 40 = 0x28
	NSString *_proxyServer;	// 44 = 0x2c
	NSNumber *_proxyServerPort;	// 48 = 0x30
	NSString *_proxyUsername;	// 52 = 0x34
	NSString *_proxyPassword;	// 56 = 0x38
	NSString *_proxyPACURLString;	// 60 = 0x3c
	NSString *_credentialUUID;	// 64 = 0x40
}
@property(retain, nonatomic) NSString *credentialUUID;	// G=0x305f3a99; S=0x305f3aa9; @synthesize=_credentialUUID
@property(retain, nonatomic) NSString *proxyPACURLString;	// G=0x305f3a61; S=0x305f3a71; @synthesize=_proxyPACURLString
@property(retain, nonatomic) NSString *proxyPassword;	// G=0x305f3a29; S=0x305f3a39; @synthesize=_proxyPassword
@property(retain, nonatomic) NSString *proxyServer;	// G=0x305f3981; S=0x305f3991; @synthesize=_proxyServer
@property(retain, nonatomic) NSNumber *proxyServerPort;	// G=0x305f39b9; S=0x305f39c9; @synthesize=_proxyServerPort
@property(assign, nonatomic) int proxyType;	// G=0x305f3961; S=0x305f3971; @synthesize=_proxyType
@property(retain, nonatomic) NSString *proxyUsername;	// G=0x305f39f1; S=0x305f3a01; @synthesize=_proxyUsername
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x305f2c29
+ (id)typeStrings;	// 0x305f2c01
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305f2cb1
- (void).cxx_destruct;	// 0x305f3ad1
// declared property getter: - (id)credentialUUID;	// 0x305f3a99
- (id)description;	// 0x305f373d
// declared property getter: - (id)proxyPACURLString;	// 0x305f3a61
// declared property getter: - (id)proxyPassword;	// 0x305f3a29
// declared property getter: - (id)proxyServer;	// 0x305f3981
// declared property getter: - (id)proxyServerPort;	// 0x305f39b9
// declared property getter: - (int)proxyType;	// 0x305f3961
// declared property getter: - (id)proxyUsername;	// 0x305f39f1
// declared property setter: - (void)setCredentialUUID:(id)uuid;	// 0x305f3aa9
// declared property setter: - (void)setProxyPACURLString:(id)string;	// 0x305f3a71
// declared property setter: - (void)setProxyPassword:(id)password;	// 0x305f3a39
// declared property setter: - (void)setProxyServer:(id)server;	// 0x305f3991
// declared property setter: - (void)setProxyServerPort:(id)port;	// 0x305f39c9
// declared property setter: - (void)setProxyType:(int)type;	// 0x305f3971
// declared property setter: - (void)setProxyUsername:(id)username;	// 0x305f3a01
- (id)stubDictionary;	// 0x305f3541
- (id)subtitle1Description;	// 0x305f372d
- (id)subtitle1Label;	// 0x305f3719
@end
