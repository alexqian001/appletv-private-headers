/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSRunLoop.h> // Unknown library


@interface NSRunLoop (NSRunLoop)
+ (id)_new:(id)aNew;	// 0x318c350d
+ (id)currentRunLoop;	// 0x318a93e9
+ (id)mainRunLoop;	// 0x318eb0a1
- (id)init;	// 0x3194ee69
- (void)_addPort:(id)port forMode:(id)mode;	// 0x3194e8ed
- (BOOL)_containsPort:(id)port forMode:(id)mode;	// 0x3194e739
- (void)_enumerateInfoPairsWithBlock:(id)block;	// 0x3194e289
- (void)_invalidateTimers;	// 0x3194f4b1
- (void)_portInvalidated:(id)invalidated;	// 0x3194e371
- (void)_removePort:(id)port forMode:(id)mode;	// 0x3194eb11
- (void)_wakeup;	// 0x3194f5d9
- (void)acceptInputForMode:(id)mode beforeDate:(id)date;	// 0x3194f605
- (void)addPort:(id)port forMode:(id)mode;	// 0x3194eee5
- (void)addTimer:(id)timer forMode:(id)mode;	// 0x318cd9a9
- (id)allModes;	// 0x3194f459
- (void)cancelPerformSelector:(SEL)selector target:(id)target argument:(id)argument;	// 0x3194fad9
- (void)cancelPerformSelectorsWithTarget:(id)target;	// 0x3194fdad
- (BOOL)containsPort:(id)port forMode:(id)mode;	// 0x3194f129
- (BOOL)containsTimer:(id)timer forMode:(id)mode;	// 0x3194f365
- (id)copyWithZone:(NSZone *)zone;	// 0x3194ee55
- (id)currentMode;	// 0x318b11ed
- (void)dealloc;	// 0x318b4ed1
- (id)description;	// 0x3194ee81
- (CFRunLoopRef)getCFRunLoop;	// 0x318aa47d
- (id)limitDateForMode:(id)mode;	// 0x3194f4b5
- (void)performSelector:(SEL)selector target:(id)target argument:(id)argument order:(unsigned)order modes:(id)modes;	// 0x318f3e45
- (id)portsForMode:(id)mode;	// 0x3194f22d
- (void)removePort:(id)port forMode:(id)mode;	// 0x3194f01d
- (void)removeTimer:(id)timer forMode:(id)mode;	// 0x3194f24d
- (void)run;	// 0x3194f815
- (BOOL)runBeforeDate:(id)date;	// 0x3194f875
- (BOOL)runMode:(id)mode beforeDate:(id)date;	// 0x318abe99
- (BOOL)runMode:(id)mode untilDate:(id)date;	// 0x3194f715
- (void)runUntilDate:(id)date;	// 0x318b4d01
- (id)timersForMode:(id)mode;	// 0x3194f349
@end
