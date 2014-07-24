/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import </libobjc.A.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue, SSEventMonitorDelegate;

@interface SSEventMonitor : NSObject {
	id<SSEventMonitorDelegate> _delegate;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 12 = 0xc
	SSXPCConnection *_eventConnection;	// 16 = 0x10
}
@property(assign) id<SSEventMonitorDelegate> delegate;	// G=0x32835d35; S=0x32835ee9; 
- (id)init;	// 0x32835b71
- (void)_connectEventConnection;	// 0x32835f95
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x32836309
- (void)dealloc;	// 0x32835c7d
// declared property getter: - (id)delegate;	// 0x32835d35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32835ee9
@end
