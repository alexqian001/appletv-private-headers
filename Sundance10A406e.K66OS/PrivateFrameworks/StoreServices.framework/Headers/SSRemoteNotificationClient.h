/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface SSRemoteNotificationClient : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
}
+ (id)sharedClient;	// 0x312c7e71
- (id)init;	// 0x312c7dcd
- (void)dealloc;	// 0x312c7e1d
- (id)popQueuedNotifications;	// 0x312c7f21
- (void)registerForRemoteNotifications;	// 0x312c8169
- (void)unregisterForRemoteNotifications;	// 0x312c843d
@end

