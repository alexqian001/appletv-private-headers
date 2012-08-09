/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface JAVNotificationCenter : NSObject {
	int _fd;	// 4 = 0x4
	int _listeningPort;	// 8 = 0x8
	NSMutableArray *_listenerArray;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x34f3e14d
- (id)init;	// 0x34f3e21d
- (void)acceptThread;	// 0x34f3e405
- (void)addObserverForNotificationsFromPort:(int)port;	// 0x34f3e9c5
- (void)dealloc;	// 0x34f3e299
- (int)openConnectionToPort:(int)port;	// 0x34f3e939
- (void)postNotification:(id)notification;	// 0x34f3e6a9
- (void)postNotificationName:(id)name object:(id)object;	// 0x34f3e805
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x34f3e841
- (void)processSocket:(int)socket;	// 0x34f3e4cd
- (void)sendNotification:(id)notification toPort:(int)port;	// 0x34f3e889
- (void)setPort:(int)port;	// 0x34f3e279
- (void)startAcceptThread;	// 0x34f3e3c9
- (void)startListeningThread;	// 0x34f3e2e5
@end
