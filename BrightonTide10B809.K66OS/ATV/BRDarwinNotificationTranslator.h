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
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x3a0a2d
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x3a0a65
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x3a09f1
+ (void)setSingleton:(id)singleton;	// 0x3a0859
+ (id)singleton;	// 0x3a0849
- (id)init;	// 0x3a0869
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x3a0db9
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x3a0ad1
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x3a0ec9
- (id)_registrationForToken:(int)token;	// 0x3a0f11
- (void)dealloc;	// 0x3a08cd
@end

