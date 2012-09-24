/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSNotificationCenter : NSObject {
	void *_impl;	// 4 = 0x4
	void *_callback;	// 8 = 0x8
	void *_pad[11];	// 12 = 0xc
}
+ (id)defaultCenter;	// 0x354fcc05
- (id)init;	// 0x35514cdd
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;	// 0x3550722d
- (id)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id)block;	// 0x35507909
- (void)dealloc;	// 0x35596059
- (id)description;	// 0x3559609d
- (void)finalize;	// 0x35596015
- (BOOL)isEmpty;	// 0x35596139
- (void)postNotification:(id)notification;	// 0x355203f9
- (void)postNotificationName:(id)name object:(id)object;	// 0x35500835
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x354fcd49
- (void)removeObserver:(id)observer;	// 0x3550738d
- (void)removeObserver:(id)observer name:(id)name object:(id)object;	// 0x355073ad
@end
