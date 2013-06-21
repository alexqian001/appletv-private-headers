/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AXNotificationHandler : NSObject {
	NSString *_notificationName;	// 4 = 0x4
	id _target;	// 8 = 0x8
	id _dispatcher;	// 12 = 0xc
	unsigned _observerIdentifier;	// 16 = 0x10
	BOOL _valid;	// 20 = 0x14
}
@property(copy, nonatomic, setter=_setDispatcher:) id _dispatcher;	// G=0x35df0851; S=0x35df0861; 
@property(retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName;	// G=0x35df1129; S=0x35df1139; @synthesize
@property(retain, nonatomic, setter=_setTarget:) id _target;	// G=0x35df1149; S=0x35df1159; @synthesize
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x35df1119; @synthesize=_valid
+ (id)_safelyGetObserverForIdentifier:(unsigned)identifier;	// 0x35df0f35
+ (unsigned)_safelyRegisterObserver:(id)observer;	// 0x35df0c65
+ (void)_safelyRemoveObserverForIdentifier:(unsigned)identifier;	// 0x35df0e61
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher;	// 0x35df06a5
- (id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;	// 0x35df06c9
- (id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;	// 0x35df0649
// declared property getter: - (id)_dispatcher;	// 0x35df0851
- (void)_handleNotificationWithName:(id)name object:(const void *)object userInfo:(id)info;	// 0x35df0c21
// declared property getter: - (id)_notificationName;	// 0x35df1129
- (id)_notificationTypeDescription;	// 0x35df0921
// declared property setter: - (void)_setDispatcher:(id)dispatcher;	// 0x35df0861
// declared property setter: - (void)_setNotificationName:(id)name;	// 0x35df1139
// declared property setter: - (void)_setTarget:(id)target;	// 0x35df1159
- (void)_startObserving;	// 0x35df0ad5
- (void)_stopObserving;	// 0x35df0b09
// declared property getter: - (id)_target;	// 0x35df1149
- (void)dealloc;	// 0x35df0811
- (id)description;	// 0x35df0895
- (void)invalidate;	// 0x35df0955
// declared property getter: - (BOOL)isValid;	// 0x35df1119
- (void)processHandler:(SEL)handler;	// 0x35df0b3d
@end
