/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection;
@protocol SSEventMonitorDelegate, OS_dispatch_queue;

@interface SSEventMonitor : NSObject {
	id<SSEventMonitorDelegate> _delegate;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 12 = 0xc
	SSXPCConnection *_eventConnection;	// 16 = 0x10
}
@property(assign) id<SSEventMonitorDelegate> delegate;	// G=0x32381759; S=0x3238191d; 
- (id)init;	// 0x32381595
- (void)_connectEventConnection;	// 0x323819c9
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x32381d3d
- (void)dealloc;	// 0x323816a1
// declared property getter: - (id)delegate;	// 0x32381759
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3238191d
@end
