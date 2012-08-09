/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "_NSDNXPCObject.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_group;

@interface _NSDNXPCConnection : NSObject <_NSDNXPCObject> {
	NSObject<OS_xpc_object> *_conn;	// 4 = 0x4
	NSObject<OS_xpc_object> *_sconn;	// 8 = 0x8
	int _lock;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dq;	// 16 = 0x10
	NSObject<OS_dispatch_group> *_dgroup;	// 20 = 0x14
	NSString *_serviceName;	// 24 = 0x18
	id _handleMessage;	// 28 = 0x1c
	long long _mseqno;	// 32 = 0x20
	NSMutableArray *_invalidHandlers;	// 40 = 0x28
	NSMutableArray *_termImminentHandlers;	// 44 = 0x2c
	int _started;	// 48 = 0x30
	int _invalid;	// 52 = 0x34
	int _flavor;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *XPCConnection;	// G=0x35d93bfd; @dynamic
@property(retain) id dispatchQueue;	// G=0x35d93d05; S=0x35d93d15; converted property
@property(copy) id handleMessage;	// G=0x35d93c0d; S=0x35d93c65; @dynamic
@property(readonly, assign) NSString *serviceName;	// G=0x35d93ba5; @dynamic
- (id)initWithPeerConnection:(id)peerConnection;	// 0x35d93b91
- (id)initWithReceivedConnection:(id)receivedConnection;	// 0x35d93b7d
- (id)initWithServiceName:(id)serviceName privileged:(BOOL)privileged;	// 0x35d93a95
- (id)initWithXPCConnection:(id)xpcconnection type:(int)type;	// 0x35d938d1
// declared property getter: - (id)XPCConnection;	// 0x35d93bfd
- (void)__invalidate;	// 0x35d93d59
- (void)__terminationImminent;	// 0x35d93f05
- (void)addInvalidationHandler:(id)handler;	// 0x35d9412d
- (void)addTerminationImminentHandler:(id)handler;	// 0x35d941ad
- (void)dealloc;	// 0x35d93a0d
// converted property getter: - (id)dispatchQueue;	// 0x35d93d05
// declared property getter: - (id)handleMessage;	// 0x35d93c0d
- (void)invalidate;	// 0x35d94061
- (void)sendMessage:(id)message waitForAck:(BOOL)ack;	// 0x35d943dd
- (void)sendMessage:(id)message waitForSend:(BOOL)send;	// 0x35d94285
// declared property getter: - (id)serviceName;	// 0x35d93ba5
// converted property setter: - (void)setDispatchQueue:(id)queue;	// 0x35d93d15
// declared property setter: - (void)setHandleMessage:(id)message;	// 0x35d93c65
- (void)start;	// 0x35d94219
@end
