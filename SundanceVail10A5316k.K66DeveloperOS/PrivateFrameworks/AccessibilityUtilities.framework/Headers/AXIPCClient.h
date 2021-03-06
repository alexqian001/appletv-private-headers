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
@private
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
@property(readonly, assign, nonatomic) unsigned clientCallbackPort;	// G=0x30a774f9; @synthesize
@property(readonly, assign, nonatomic) CFRunLoopSourceRef clientCallbackSource;	// G=0x30a774e9; @synthesize
@property(retain, nonatomic) NSString *clientIdentifier;	// G=0x30a78589; S=0x30a77451; @synthesize=_clientIdentifier
@property(assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x30a784f5; S=0x30a78505; @synthesize=_connected
@property(copy, nonatomic) id portDeathHandler;	// G=0x30a78535; S=0x30a78459; @synthesize=_portDeathHandler
@property(assign, nonatomic) CFMachPortRef serverPort;	// G=0x30a78549; S=0x30a78559; @synthesize=_serverPort
@property(readonly, assign, nonatomic) unsigned serviceMachPort;	// G=0x30a77435; @synthesize
@property(retain, nonatomic) NSString *serviceName;	// G=0x30a78515; S=0x30a78525; @synthesize=_serviceName
@property(assign, nonatomic) float timeout;	// G=0x30a78569; S=0x30a78579; @synthesize=_timeout
+ (id)allClients;	// 0x30a771b5
+ (void)initialize;	// 0x30a77159
- (id)initWithPort:(unsigned)port;	// 0x30a772b1
- (id)initWithServiceName:(id)serviceName;	// 0x30a77211
- (void)_registerWithServer;	// 0x30a77549
- (void)_serverDied;	// 0x30a78481
- (BOOL)_verifyConnectionWithError:(id *)error;	// 0x30a77db9
// declared property getter: - (unsigned)clientCallbackPort;	// 0x30a774f9
// declared property getter: - (CFRunLoopSourceRef)clientCallbackSource;	// 0x30a774e9
// declared property getter: - (id)clientIdentifier;	// 0x30a78589
- (BOOL)connectWithError:(id *)error;	// 0x30a777ed
- (void)dealloc;	// 0x30a77349
- (BOOL)disconnectWithError:(id *)error;	// 0x30a77c99
// declared property getter: - (BOOL)isConnected;	// 0x30a784f5
// declared property getter: - (id)portDeathHandler;	// 0x30a78535
- (id)sendMessage:(id)message withError:(id *)error;	// 0x30a78101
- (void)sendSimpleMessage:(id)message;	// 0x30a77f01
- (BOOL)sendSimpleMessage:(id)message withError:(id *)error;	// 0x30a77f15
// declared property getter: - (CFMachPortRef)serverPort;	// 0x30a78549
// declared property getter: - (unsigned)serviceMachPort;	// 0x30a77435
// declared property getter: - (id)serviceName;	// 0x30a78515
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x30a77451
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x30a78505
// declared property setter: - (void)setPortDeathHandler:(id)handler;	// 0x30a78459
// declared property setter: - (void)setServerPort:(CFMachPortRef)port;	// 0x30a78559
// declared property setter: - (void)setServiceName:(id)name;	// 0x30a78525
// declared property setter: - (void)setTimeout:(float)timeout;	// 0x30a78579
// declared property getter: - (float)timeout;	// 0x30a78569
- (BOOL)verifyConnectionExists;	// 0x30a77775
@end

