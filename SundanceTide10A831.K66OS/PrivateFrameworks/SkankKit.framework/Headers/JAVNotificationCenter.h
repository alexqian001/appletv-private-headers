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
+ (id)sharedInstance;	// 0x35aaded5
- (id)init;	// 0x35aadfa5
- (void)acceptThread;	// 0x35aae18d
- (void)addObserverForNotificationsFromPort:(int)port;	// 0x35aae74d
- (void)dealloc;	// 0x35aae021
- (int)openConnectionToPort:(int)port;	// 0x35aae6c1
- (void)postNotification:(id)notification;	// 0x35aae431
- (void)postNotificationName:(id)name object:(id)object;	// 0x35aae58d
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x35aae5c9
- (void)processSocket:(int)socket;	// 0x35aae255
- (void)sendNotification:(id)notification toPort:(int)port;	// 0x35aae611
- (void)setPort:(int)port;	// 0x35aae001
- (void)startAcceptThread;	// 0x35aae151
- (void)startListeningThread;	// 0x35aae06d
@end
