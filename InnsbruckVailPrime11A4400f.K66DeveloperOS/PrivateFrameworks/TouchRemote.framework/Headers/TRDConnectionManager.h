/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import "TRTCPConnectionDelegate.h"
#import </libobjc.A.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface TRDConnectionManager : NSObject <TRTCPConnectionDelegate> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_connectionDelegateQueue;	// 8 = 0x8
	NSMapTable *_connectionToXPCConnectionOwners;	// 12 = 0xc
	NSMapTable *_serviceToConnection;	// 16 = 0x10
	NSMapTable *_serviceToConnectionCompletionHandlers;	// 20 = 0x14
	NSMapTable *_XPCConnectionToConnectionToPacketEventClasses;	// 24 = 0x18
}
+ (id)sharedManager;	// 0x32c1f5f9
- (id)init;	// 0x32c1f6b1
- (void).cxx_destruct;	// 0x32c22499
- (void)TRXPCD_closeConnectionWithUniqueIdentifier:(int)uniqueIdentifier;	// 0x32c21afd
- (void)TRXPCD_connectToService:(id)service withCompletionHandler:(id)completionHandler;	// 0x32c21651
- (void)TRXPCD_connectionWithUniqueIdentifier:(int)uniqueIdentifier sendPacketEvent:(id)event withCompletionHandler:(id)completionHandler;	// 0x32c21ddd
- (void)TRXPCD_connectionWithUniqueIdentifier:(int)uniqueIdentifier setRelevantReceivedPacketEventTypes:(id)types;	// 0x32c21ff5
- (void)_XPCServerDidInvalidateClientConnectionNotification:(id)_XPCServer;	// 0x32c20b49
- (void)_callConnectionCompletionHandlersForService:(id)service withConnection:(id)connection error:(id)error;	// 0x32c20e5d
- (id)_existingConnectionForConnectionUniqueIdentifier:(int)connectionUniqueIdentifier;	// 0x32c21179
- (id)_existingConnectionForService:(id)service;	// 0x32c21379
- (id)_init;	// 0x32c1f6f1
- (id)_packetEventClassesForPacketEventTypes:(id)packetEventTypes;	// 0x32c214dd
- (void)connectToService:(id)service withCompletionHandler:(id)completionHandler;	// 0x32c20075
- (void)connection:(id)connection didReceivePacketEvent:(id)event;	// 0x32c1fd05
- (void)connectionDidClose:(id)connection;	// 0x32c1fa1d
- (void)dealloc;	// 0x32c1f805
@end
