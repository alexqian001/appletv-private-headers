/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol IMConnectionMonitorDelegate;

@interface IMConnectionMonitor : NSObject {
	NSString *_remoteHost;	// 4 = 0x4
	id<IMConnectionMonitorDelegate> _delegate;	// 8 = 0x8
}
@property(assign, nonatomic) id<IMConnectionMonitorDelegate> delegate;	// G=0x32d5d3d9; S=0x32d5d3e9; @synthesize=_delegate
@property(assign, nonatomic, setter=setDataConnectionActive:) BOOL isDataConnectionActive;	// G=0x32d5d3bd; S=0x32d5d3b5; 
@property(readonly, assign, nonatomic) BOOL isImmediatelyReachable;	// G=0x32d5d3c5; 
@property(readonly, assign, nonatomic) NSString *remoteHost;	// G=0x32d5d3c9; @synthesize=_remoteHost
@property(readonly, assign, nonatomic) BOOL requiresDataConnectionActivation;	// G=0x32d5d3c1; 
+ (id)alloc;	// 0x32d5d2b9
- (id)initWithRemoteHost:(id)remoteHost delegate:(id)delegate;	// 0x32d5d2e5
- (void)_setup;	// 0x32d5d3a9
- (void)clear;	// 0x32d5d3b9
- (void)dealloc;	// 0x32d5d35d
// declared property getter: - (id)delegate;	// 0x32d5d3d9
- (void)goConnectedWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address;	// 0x32d5d3ad
- (void)goDisconnected;	// 0x32d5d3b1
// declared property getter: - (BOOL)isDataConnectionActive;	// 0x32d5d3bd
// declared property getter: - (BOOL)isImmediatelyReachable;	// 0x32d5d3c5
// declared property getter: - (id)remoteHost;	// 0x32d5d3c9
// declared property getter: - (BOOL)requiresDataConnectionActivation;	// 0x32d5d3c1
// declared property setter: - (void)setDataConnectionActive:(BOOL)active;	// 0x32d5d3b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d5d3e9
@end

