/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AccessibilityUtilities-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface AXIPCClient : NSObject {
	CFMachPortRef _serverPort;	// 4 = 0x4
	unsigned _assignedServerMachPort;	// 8 = 0x8
	id _portDeathHandler;	// 12 = 0xc
	float _timeout;	// 16 = 0x10
	NSString *_clientIdentifier;	// 20 = 0x14
	CFRunLoopSourceRef _clientSource;	// 24 = 0x18
	unsigned serviceMachPort;	// 28 = 0x1c
	BOOL _connected;	// 32 = 0x20
	NSString *_serviceName;	// 36 = 0x24
	unsigned clientCallbackPort;	// 40 = 0x28
	CFRunLoopSourceRef clientCallbackSource;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) unsigned clientCallbackPort;	// G=0x3310d4f1; @synthesize
@property(readonly, assign, nonatomic) CFRunLoopSourceRef clientCallbackSource;	// G=0x3310d4e1; @synthesize
@property(retain, nonatomic) NSString *clientIdentifier;	// G=0x3310e585; S=0x3310d449; @synthesize=_clientIdentifier
@property(assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x3310e4f1; S=0x3310e501; @synthesize=_connected
@property(copy, nonatomic) id portDeathHandler;	// G=0x3310e531; S=0x3310e455; @synthesize=_portDeathHandler
@property(assign, nonatomic) CFMachPortRef serverPort;	// G=0x3310e545; S=0x3310e555; @synthesize=_serverPort
@property(readonly, assign, nonatomic) unsigned serviceMachPort;	// G=0x3310d42d; @synthesize
@property(retain, nonatomic) NSString *serviceName;	// G=0x3310e511; S=0x3310e521; @synthesize=_serviceName
@property(assign, nonatomic) float timeout;	// G=0x3310e565; S=0x3310e575; @synthesize=_timeout
+ (id)allClients;	// 0x3310d1ad
+ (void)initialize;	// 0x3310d151
- (id)initWithPort:(unsigned)port;	// 0x3310d2a9
- (id)initWithServiceName:(id)serviceName;	// 0x3310d209
- (void)_registerWithServer;	// 0x3310d541
- (void)_serverDied;	// 0x3310e47d
- (BOOL)_verifyConnectionWithError:(id *)error;	// 0x3310ddb1
// declared property getter: - (unsigned)clientCallbackPort;	// 0x3310d4f1
// declared property getter: - (CFRunLoopSourceRef)clientCallbackSource;	// 0x3310d4e1
// declared property getter: - (id)clientIdentifier;	// 0x3310e585
- (BOOL)connectWithError:(id *)error;	// 0x3310d7e5
- (void)dealloc;	// 0x3310d341
- (BOOL)disconnectWithError:(id *)error;	// 0x3310dc91
// declared property getter: - (BOOL)isConnected;	// 0x3310e4f1
// declared property getter: - (id)portDeathHandler;	// 0x3310e531
- (id)sendMessage:(id)message withError:(id *)error;	// 0x3310e0fd
- (void)sendSimpleMessage:(id)message;	// 0x3310def9
- (BOOL)sendSimpleMessage:(id)message withError:(id *)error;	// 0x3310df0d
// declared property getter: - (CFMachPortRef)serverPort;	// 0x3310e545
// declared property getter: - (unsigned)serviceMachPort;	// 0x3310d42d
// declared property getter: - (id)serviceName;	// 0x3310e511
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x3310d449
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x3310e501
// declared property setter: - (void)setPortDeathHandler:(id)handler;	// 0x3310e455
// declared property setter: - (void)setServerPort:(CFMachPortRef)port;	// 0x3310e555
// declared property setter: - (void)setServiceName:(id)name;	// 0x3310e521
// declared property setter: - (void)setTimeout:(float)timeout;	// 0x3310e575
// declared property getter: - (float)timeout;	// 0x3310e565
- (BOOL)verifyConnectionExists;	// 0x3310d76d
@end
