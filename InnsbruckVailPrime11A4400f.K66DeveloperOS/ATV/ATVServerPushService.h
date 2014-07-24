/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVServerPushService : XXUnknownSuperclass {
	unsigned long _pushScheduled;	// 4 = 0x4
	NSMutableDictionary *_deviceTopicsRegistry;	// 8 = 0x8
	NSMutableDictionary *_requestRegistry;	// 12 = 0xc
	NSMutableDictionary *_notificationsQueue;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableDictionary *deviceTopicsRegistry;	// G=0x28581; S=0x28591; @synthesize=_deviceTopicsRegistry
@property(retain, nonatomic) NSMutableDictionary *notificationsQueue;	// G=0x285f1; S=0x28601; @synthesize=_notificationsQueue
@property(retain, nonatomic) NSMutableDictionary *requestRegistry;	// G=0x285b9; S=0x285c9; @synthesize=_requestRegistry
+ (id)sharedInstance;	// 0x27249
- (id)init;	// 0x272c5
- (void).cxx_destruct;	// 0x28629
- (void)_appsUpdated:(id)updated;	// 0x27ee9
- (void)_dataClientDataUpdated:(id)updated;	// 0x28061
- (void)_dataClientStatusChanged:(id)changed;	// 0x27f11
- (void)_favoritesUpdated:(id)updated;	// 0x28391
- (void)_homeSharesChanged:(id)changed;	// 0x28559
- (void)_playerStateChanged:(id)changed;	// 0x28369
- (void)_pushNotifications;	// 0x27aa9
- (void)_pushNotificationsForReal;	// 0x27b85
- (void)_registerHandlers;	// 0x27b89
- (void)_schedulePushWithTopic:(id)topic userInfo:(id)info;	// 0x27aa5
- (void)deregisterDevice:(id)device;	// 0x277d9
- (void)deregisterDevice:(id)device forTopic:(id)topic;	// 0x27659
// declared property getter: - (id)deviceTopicsRegistry;	// 0x28581
- (void)handleClientPushRequest:(ATVServerRequestRef)request forDevice:(id)device;	// 0x27979
// declared property getter: - (id)notificationsQueue;	// 0x285f1
- (void)registerDevice:(id)device forTopic:(id)topic;	// 0x27471
// declared property getter: - (id)requestRegistry;	// 0x285b9
// declared property setter: - (void)setDeviceTopicsRegistry:(id)registry;	// 0x28591
// declared property setter: - (void)setNotificationsQueue:(id)queue;	// 0x28601
// declared property setter: - (void)setRequestRegistry:(id)registry;	// 0x285c9
@end
