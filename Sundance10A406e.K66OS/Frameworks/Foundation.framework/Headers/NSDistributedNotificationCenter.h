/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSNotificationCenter.h"


@interface NSDistributedNotificationCenter : NSNotificationCenter {
}
@property(assign) BOOL suspended;	// G=0x35596845; S=0x35596829; converted property
+ (id)defaultCenter;	// 0x35596159
+ (id)notificationCenterForType:(id)type;	// 0x35596175
- (id)init;	// 0x35596235
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;	// 0x35596411
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object suspensionBehavior:(unsigned)behavior;	// 0x35596261
- (id)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id)block;	// 0x3559667d
- (id)addObserverForName:(id)name object:(id)object suspensionBehavior:(unsigned)behavior queue:(id)queue usingBlock:(id)block;	// 0x3559643d
- (void)postNotification:(id)notification;	// 0x35596775
- (void)postNotificationName:(id)name object:(id)object;	// 0x355967dd
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x35596805
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info deliverImmediately:(BOOL)immediately;	// 0x35596749
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info options:(unsigned)options;	// 0x355966e9
- (void)removeObserver:(id)observer name:(id)name object:(id)object;	// 0x355966b1
// converted property setter: - (void)setSuspended:(BOOL)suspended;	// 0x35596829
// converted property getter: - (BOOL)suspended;	// 0x35596845
@end
