/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library


@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x355efc71
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x355f1821
- (id)_getRetainedValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time copy:(BOOL)copy;	// 0x355f1d29
- (id)_getRetainedValueForKeyPathOnMainThread:(id)keyPathOnMainThread copy:(BOOL)copy;	// 0x355f09e1
- (void)_scr_safeGetValueForBlock:(id)block lock:(id)lock;	// 0x355f1c69
- (void)_scr_safeGetValueForKeyPath:(id)keyPath;	// 0x355f0aed
- (void)_scr_safeGetValueForKeyPath:(id)keyPath lock:(id)lock;	// 0x355f0b01
- (void)_scr_safeGetValueForSelector:(id)selector lock:(id)lock;	// 0x355f1af9
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x355f1f05
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x355f1f2d
- (id)copyValueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x355f0e6d
- (id)performSelector:(SEL)selector withObjectsAsArray:(id)objectsAsArray;	// 0x355f1871
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x355ee591
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x355f0539
- (id)threadDescription;	// 0x355f1805
- (id)valueForBlock:(id)block forThreadKey:(id)threadKey waitTime:(double)time;	// 0x355f2151
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x355f1ea1
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x355f1ec9
- (id)valueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x355f09b1
- (id)valueForSelector:(SEL)selector forThreadKey:(id)threadKey waitTime:(double)time copyValue:(BOOL)value withObjects:(id)objects;	// 0x355f1f59
@end
