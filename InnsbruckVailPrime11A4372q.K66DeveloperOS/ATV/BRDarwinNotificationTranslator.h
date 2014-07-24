/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRDarwinNotificationTranslator : BRSingleton {
	NSMutableDictionary *_registrations;	// 4 = 0x4
}
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x413ebd
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x413f09
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x413e55
+ (void)setSingleton:(id)singleton;	// 0x413ca9
+ (id)singleton;	// 0x413c99
- (id)init;	// 0x413ccd
- (void).cxx_destruct;	// 0x413fa1
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x414309
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x413fb5
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x41444d
- (id)_registrationForToken:(int)token;	// 0x4144b1
- (void)dealloc;	// 0x413d39
@end
