/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet;

@interface ATXPCConnection : NSObject {
	xpc_connection_s *_conn;	// 4 = 0x4
	dispatch_queue_s *_eventQueue;	// 8 = 0x8
	id _lockdownHandler;	// 12 = 0xc
	id _messageHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	NSMutableSet *_outstandingMessages;	// 24 = 0x18
	BOOL _assertionHeld;	// 28 = 0x1c
	id _context;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL assertionHeld;	// G=0x3305c419; S=0x3305c429; @synthesize=_assertionHeld
@property(retain, nonatomic) id context;	// G=0x3305c439; S=0x3305c449; @synthesize=_context
@property(copy, nonatomic) id disconnectHandler;	// G=0x3305c3e1; S=0x3305c3f5; @synthesize=_disconnectHandler
@property(readonly, assign) dispatch_queue_s *eventQueue;	// G=0x3305b681; converted property
@property(copy, nonatomic) id lockdownHandler;	// G=0x3305c371; S=0x3305c385; @synthesize=_lockdownHandler
@property(copy, nonatomic) id messageHandler;	// G=0x3305c3a9; S=0x3305c3bd; @synthesize=_messageHandler
@property(readonly, assign) NSString *serviceName;	// G=0x3305b641; 
- (id)initWithServiceName:(id)serviceName onQueue:(dispatch_queue_s *)queue;	// 0x3305b379
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x3305b431
- (void)_handleLockdownMessage:(void *)message;	// 0x3305be09
- (void)_handleXPCError:(void *)error;	// 0x3305bb7d
- (void)_handleXPCMessage:(void *)message;	// 0x3305bd9d
- (int)_outstandingMessages;	// 0x3305c1f1
- (void)_registerMessage:(id)message;	// 0x3305c031
- (void)_removeMessage:(id)message;	// 0x3305c131
- (void)_sendMessage:(id)message handler:(id)handler;	// 0x3305b6b5
- (void)_setEventHandlerOnConnection:(xpc_connection_s *)connection;	// 0x3305be25
// declared property getter: - (BOOL)assertionHeld;	// 0x3305c419
// declared property getter: - (id)context;	// 0x3305c439
- (void)dealloc;	// 0x3305b53d
// declared property getter: - (id)disconnectHandler;	// 0x3305c3e1
// converted property getter: - (dispatch_queue_s *)eventQueue;	// 0x3305b681
// declared property getter: - (id)lockdownHandler;	// 0x3305c371
// declared property getter: - (id)messageHandler;	// 0x3305c3a9
- (void)sendMessage:(id)message;	// 0x3305b7e5
- (void)sendMessage:(id)message withReply:(id)reply;	// 0x3305b7f9
// declared property getter: - (id)serviceName;	// 0x3305b641
// declared property setter: - (void)setAssertionHeld:(BOOL)held;	// 0x3305c429
// declared property setter: - (void)setContext:(id)context;	// 0x3305c449
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x3305c3f5
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x3305c385
// declared property setter: - (void)setMessageHandler:(id)handler;	// 0x3305c3bd
- (void)shutdown;	// 0x3305bce5
@end
