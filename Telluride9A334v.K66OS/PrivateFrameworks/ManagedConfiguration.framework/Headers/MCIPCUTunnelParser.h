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
- (id)_commandGetEncryptionKey:(id)key;	// 0x3475cfd1
- (id)_commandGetProfileList:(id)list;	// 0x3475d259
- (id)_commandHello:(id)hello;	// 0x3475cfb1
- (id)_commandInstallProfile:(id)profile;	// 0x3475d9f5
- (id)_commandRemoveProfile:(id)profile;	// 0x3475d6f1
- (id)_commandSetCertificate:(id)certificate;	// 0x3475dbfd
- (void)dealloc;	// 0x3475dde9
- (id)processRequest:(id)request;	// 0x3475de49
@end
