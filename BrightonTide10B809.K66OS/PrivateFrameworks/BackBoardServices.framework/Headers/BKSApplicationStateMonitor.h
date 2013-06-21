/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSSignal, NSArray;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSApplicationStateMonitor : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	BKSSignal *_invalidationSignal;	// 8 = 0x8
	id _handler;	// 12 = 0xc
	unsigned _interestedStates;	// 16 = 0x10
	NSArray *_interestedBundleIDs;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_messageHandlingQueue;	// 28 = 0x1c
}
@property(copy, nonatomic) id handler;	// G=0x33509035; S=0x33508f85; @dynamic
@property(copy, nonatomic) NSArray *interestedBundleIDs;	// G=0x3350920d; S=0x3350915d; @dynamic
@property(assign, nonatomic) unsigned interestedStates;	// G=0x335093b9; S=0x33509335; @dynamic
- (id)init;	// 0x33508c21
- (id)initWithBundleIDs:(id)bundleIDs states:(unsigned)states;	// 0x33508c39
- (void)applicationInfoForApplication:(id)application completion:(id)completion;	// 0x335095d1
- (void)applicationInfoForPID:(int)pid completion:(id)completion;	// 0x33509939
- (unsigned)applicationStateForApplication:(id)application;	// 0x33509bf9
- (id)bundleInfoValueForKey:(id)key PID:(int)pid;	// 0x3350a3b5
- (void)dealloc;	// 0x33508e79
// declared property getter: - (id)handler;	// 0x33509035
// declared property getter: - (id)interestedBundleIDs;	// 0x3350920d
// declared property getter: - (unsigned)interestedStates;	// 0x335093b9
- (void)invalidate;	// 0x3350a749
- (BOOL)isNewsstandAppWakeQuotaReached:(id)reached;	// 0x3350a105
- (unsigned)mostElevatedApplicationStateForPID:(int)pid;	// 0x33509ea9
- (void)queue_connectionWasInvalidated;	// 0x3350af89
- (void)queue_handleMessage:(id)message;	// 0x3350ad95
- (void)queue_invalidate;	// 0x3350af2d
- (void)queue_registerWithServer;	// 0x3350a93d
- (void)queue_reregister;	// 0x3350aefd
- (void)queue_setHandler:(id)handler;	// 0x3350a7e1
- (void)queue_setInterestedBundleIDs:(id)ids;	// 0x3350a81d
- (void)queue_setInterestedStates:(unsigned)states;	// 0x3350a859
- (void)queue_updateInterestedStates;	// 0x3350a869
- (void)queue_updateInterestedStates:(BOOL)states;	// 0x3350a87d
// declared property setter: - (void)setHandler:(id)handler;	// 0x33508f85
// declared property setter: - (void)setInterestedBundleIDs:(id)ids;	// 0x3350915d
// declared property setter: - (void)setInterestedStates:(unsigned)states;	// 0x33509335
- (void)updateInterestedBundleIDs:(id)ids;	// 0x33509485
- (void)updateInterestedBundleIDs:(id)ids states:(unsigned)states;	// 0x335094ed
- (void)updateInterestedStates:(unsigned)states;	// 0x335094b9
@end
