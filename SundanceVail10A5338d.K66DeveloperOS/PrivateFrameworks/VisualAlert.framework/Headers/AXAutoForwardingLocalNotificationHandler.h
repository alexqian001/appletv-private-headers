/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import "AXLocalNotificationHandler.h"


@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {
	SEL *_possibleHandlers;	// 28 = 0x1c
	unsigned long _possibleHandlersCount;	// 32 = 0x20
}
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher possibleHandlers:(SEL)handlers;	// 0x342c94ed
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x342c9435
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x342c93d1
- (id)_forwardDistributedNotificationNameForHandler:(SEL)handler;	// 0x342c97c9
- (BOOL)_handleForwardDistributedNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x342c9819
- (id)_notificationTypeDescription;	// 0x342c9add
- (id)_prefixForForwardDistributedNotificationName;	// 0x342c972d
- (void)_startObserving;	// 0x342c989d
- (void)_stopObserving;	// 0x342c99f1
- (void)dealloc;	// 0x342c9635
- (void)processHandler:(SEL)handler;	// 0x342c968d
@end
