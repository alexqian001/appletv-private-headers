/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCTunnelParser.h"

@class NSString, NSMutableDictionary;

@interface MCIPCUTunnelParser : MCTunnelParser {
	NSMutableDictionary *_CSR;	// 4 = 0x4
	NSString *_hostIdentifier;	// 8 = 0x8
}
- (void).cxx_destruct;	// 0x357bbe15
- (id)_commandGetEncryptionKey:(id)key;	// 0x357ba92d
- (id)_commandGetProfileList:(id)list;	// 0x357bac31
- (id)_commandHello:(id)hello;	// 0x357ba90d
- (id)_commandInstallProfile:(id)profile;	// 0x357bb841
- (id)_commandRemoveProfile:(id)profile;	// 0x357bb18d
- (id)_commandSetCertificate:(id)certificate;	// 0x357bb5dd
- (id)processRequest:(id)request;	// 0x357bbae1
@end
