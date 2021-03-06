/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

#import "AITTarget-Structs.h"
#import "AITXPCConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, AITXPCConnection, NSMutableDictionary;

@interface AITTarget : NSObject <AITXPCConnectionDelegate> {
	int _notifyToken;	// 4 = 0x4
	NSMutableDictionary *_observerRecords;	// 8 = 0x8
	AITXPCConnection *_xpcConnection;	// 12 = 0xc
@private
	dispatch_queue_s *_clientQueue;	// 16 = 0x10
@protected
	double _startTime;	// 20 = 0x14
	NSMutableArray *_queuedProbes;	// 28 = 0x1c
	dispatch_queue_s *_rpcDispatchQueue;	// 32 = 0x20
@private
	NSString *_rpcSelectorPrefix;	// 36 = 0x24
@protected
	id _rpcTarget;	// 40 = 0x28
@private
	dispatch_source_s *_watchdogSource;	// 44 = 0x2c
}
@property(assign, nonatomic) dispatch_queue_s *rpcDispatchQueue;	// G=0x3312235d; S=0x331222ad; 
@property(copy, nonatomic) NSString *rpcSelectorPrefix;	// G=0x331221c1; S=0x3312209d; 
@property(retain, nonatomic) id rpcTarget;	// G=0x33121f91; S=0x33121e45; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x331236b1
+ (id)sharedTarget;	// 0x331235f9
- (id)init;	// 0x331210cd
- (BOOL)_appIsWhitelisted;	// 0x33121865
- (void)_fireProbe:(id)probe withArgumentDictionary:(id)argumentDictionary;	// 0x33122455
- (void)_flushQueuedProbes;	// 0x3312282d
- (void)_probeBarrier:(id)barrier;	// 0x33122635
- (BOOL)_probeIsEnabled:(id)enabled;	// 0x33122429
- (id)_rpcTarget;	// 0x33121f7d
- (void)_sendAckForToken:(id)token success:(BOOL)success returnValue:(id)value details:(id)details;	// 0x33122a6d
- (void)_setupXPCConnectionIfNeeded;	// 0x33121891
- (void)addObserver:(id)observer forMessage:(id)message dispatchQueue:(dispatch_queue_s *)queue block:(id)block;	// 0x331219b9
- (id)autorelease;	// 0x331236ed
- (id)copyWithZone:(NSZone *)zone;	// 0x331236d9
- (oneway void)release;	// 0x331236e9
- (void)removeObserver:(id)observer forMessage:(id)message;	// 0x33121b39
- (id)retain;	// 0x331236dd
- (unsigned)retainCount;	// 0x331236e1
// declared property getter: - (dispatch_queue_s *)rpcDispatchQueue;	// 0x3312235d
// declared property getter: - (id)rpcSelectorPrefix;	// 0x331221c1
// declared property getter: - (id)rpcTarget;	// 0x33121f91
// declared property setter: - (void)setRpcDispatchQueue:(dispatch_queue_s *)queue;	// 0x331222ad
// declared property setter: - (void)setRpcSelectorPrefix:(id)prefix;	// 0x3312209d
// declared property setter: - (void)setRpcTarget:(id)target;	// 0x33121e45
- (void)xpcConnection:(id)connection receivedMessage:(id)message userInfo:(id)info;	// 0x33122c41
- (void)xpcConnectionFailed:(id)failed;	// 0x3312359d
- (void)xpcConnectionUnhandledMessage:(void *)message;	// 0x33123599
@end

