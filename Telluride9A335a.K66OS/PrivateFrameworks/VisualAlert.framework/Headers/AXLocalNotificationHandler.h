/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import "AXNotificationHandler.h"


@interface AXLocalNotificationHandler : AXNotificationHandler {
	id _opaqueObserver;	// 24 = 0x18
}
@property(retain, nonatomic, setter=_setOpaqueObserver:) id _opaqueObserver;	// G=0x307a1385; S=0x307a1395; @synthesize
- (id)_notificationTypeDescription;	// 0x307a1379
// declared property getter: - (id)_opaqueObserver;	// 0x307a1385
// declared property setter: - (void)_setOpaqueObserver:(id)observer;	// 0x307a1395
- (void)_startObserving;	// 0x307a1351
- (void)_startObservingWithObject:(id)object;	// 0x307a1165
- (void)_stopObserving;	// 0x307a1365
- (void)_stopObservingWithObject:(id)object;	// 0x307a12c5
@end

