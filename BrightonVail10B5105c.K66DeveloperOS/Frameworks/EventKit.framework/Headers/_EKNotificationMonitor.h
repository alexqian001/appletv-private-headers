/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKEventStore, NSMutableArray, NSArray, PCPersistentTimer, NSDate;
@protocol OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject {
	EKEventStore *_eventStore;	// 4 = 0x4
	id _eventStoreGetter;	// 8 = 0x8
	BOOL _running;	// 12 = 0xc
	PCPersistentTimer *_timer;	// 16 = 0x10
	NSDate *_nextFireTime;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_timerQueue;	// 28 = 0x1c
	int _lastCount;	// 32 = 0x20
	NSMutableArray *_notifications;	// 36 = 0x24
	BOOL _initialCheck;	// 40 = 0x28
	BOOL _shouldInstallPersistentTimer;	// 41 = 0x29
}
@property(readonly, assign, nonatomic) unsigned notificationCount;	// G=0x35b20001; 
@property(readonly, assign, nonatomic) NSArray *notifications;	// G=0x35b78dd5; 
- (id)init;	// 0x35b1c6ad
- (id)initForBulletinBoardWithEventStoreGetter:(id)eventStoreGetter;	// 0x35b78ac1
- (id)initWithEventStore:(id)eventStore;	// 0x35b1c66d
- (unsigned)_checkForNotifications:(id)notifications;	// 0x35b1c961
- (void)_checkForUpdates;	// 0x35b1c90d
- (void)_databaseChanged;	// 0x35b2fbe1
- (id)_eventStore;	// 0x35b1c8b5
- (void)_notifyForUnalertedNotifications:(id)unalertedNotifications;	// 0x35b1e571
- (void)_resetTimer;	// 0x35b1c815
- (void)_timerFired;	// 0x35b79259
- (void)adjust;	// 0x35b78efd
- (void)dealloc;	// 0x35b78b09
- (void)killTimer;	// 0x35b78bc5
// declared property getter: - (unsigned)notificationCount;	// 0x35b20001
// declared property getter: - (id)notifications;	// 0x35b78dd5
- (void)start;	// 0x35b1c74d
- (void)stop;	// 0x35b78c3d
@end
