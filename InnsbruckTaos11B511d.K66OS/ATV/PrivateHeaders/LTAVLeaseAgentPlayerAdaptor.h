/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTAVLeaseAgentAdaptor.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class LTAVLeaseAgent;

__attribute__((visibility("hidden")))
@interface LTAVLeaseAgentPlayerAdaptor : XXUnknownSuperclass <LTAVLeaseAgentAdaptor> {
	LTAVLeaseAgent *_leaseAgent;	// 4 = 0x4
}
@property(assign, nonatomic) __weak LTAVLeaseAgent *leaseAgent;	// G=0x2a6e29; S=0x2a6d65; @synthesize=_leaseAgent
- (id)initWithPlayer:(id)player;	// 0x2a6899
- (void).cxx_destruct;	// 0x2a6e49
- (void)_assetDidChange:(id)_asset;	// 0x2a67f9
- (void)_deviceWillSleep:(id)_device;	// 0x2a6831
- (void)_playerWillStop:(id)_player;	// 0x2a67c1
- (void)dealloc;	// 0x2a6dbd
// declared property getter: - (id)leaseAgent;	// 0x2a6e29
- (BOOL)leaseAgent:(id)agent currentItemIsIdenticalToItem:(id)item;	// 0x2a6c8d
- (void)leaseAgent:(id)agent didAttemptToAcquireLeaseForItem:(id)item withError:(id)error wasCancelled:(BOOL)cancelled;	// 0x2a6999
- (void)leaseAgent:(id)agent failedToReacquireLeaseWithError:(id)error;	// 0x2a6b4d
// declared property setter: - (void)setLeaseAgent:(id)agent;	// 0x2a6d65
@end
