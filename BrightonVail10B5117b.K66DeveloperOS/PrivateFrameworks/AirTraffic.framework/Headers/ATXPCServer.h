/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSSet, NSMutableDictionary, NSMutableSet;

@interface ATXPCServer : NSObject {
	xpc_connection_s *_conn;	// 4 = 0x4
	NSMutableSet *_connections;	// 8 = 0x8
	NSMutableDictionary *_handlerMap;	// 12 = 0xc
	id _lockdownHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	id _shutdownHandler;	// 24 = 0x18
	id _defaultMessageHandler;	// 28 = 0x1c
	dispatch_queue_s *_timerQueue;	// 32 = 0x20
	dispatch_source_s *_idleTimerSource;	// 36 = 0x24
	BOOL _timerHasFiredSinceLastMessage;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSSet *connections;	// G=0x335c7f1d; @synthesize=_connections
@property(copy, nonatomic) id defaultMessageHandler;	// G=0x335c7f65; S=0x335c7f79; @synthesize=_defaultMessageHandler
@property(copy, nonatomic) id disconnectHandler;	// G=0x335c7f9d; S=0x335c7fb1; @synthesize=_disconnectHandler
@property(copy, nonatomic) id lockdownHandler;	// G=0x335c7f2d; S=0x335c7f41; @synthesize=_lockdownHandler
@property(copy, nonatomic) id shutdownHandler;	// G=0x335c7fd5; S=0x335c7fe9; @synthesize=_shutdownHandler
- (id)initListenerWithServiceName:(id)serviceName;	// 0x335c77fd
- (id)_connections;	// 0x335c7305
- (BOOL)_doingWork;	// 0x335c7c81
- (void)_handleNewConnection:(xpc_connection_s *)connection;	// 0x335c73a1
- (id)_handlerForMessageName:(id)messageName;	// 0x335c7365
- (dispatch_queue_s *)_highAvailabilityQueue;	// 0x335c7355
- (void)_rescheduleIdleTimerSourceWithInterval:(double)interval;	// 0x335c7d51
- (void)_resetMessageFlag;	// 0x335c7c05
- (void)_runShutdownHandler;	// 0x335c7bed
// declared property getter: - (id)connections;	// 0x335c7f1d
- (void)dealloc;	// 0x335c7a55
// declared property getter: - (id)defaultMessageHandler;	// 0x335c7f65
// declared property getter: - (id)disconnectHandler;	// 0x335c7f9d
// declared property getter: - (id)lockdownHandler;	// 0x335c7f2d
// declared property setter: - (void)setDefaultMessageHandler:(id)handler;	// 0x335c7f79
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x335c7fb1
- (void)setHandlerForMessageName:(id)messageName handler:(id)handler;	// 0x335c7b35
- (void)setIdleTimerInterval:(double)interval;	// 0x335c7e85
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x335c7f41
// declared property setter: - (void)setShutdownHandler:(id)handler;	// 0x335c7fe9
// declared property getter: - (id)shutdownHandler;	// 0x335c7fd5
@end
