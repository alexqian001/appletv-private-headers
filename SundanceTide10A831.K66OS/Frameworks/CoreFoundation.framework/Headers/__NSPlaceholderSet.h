/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x34602a05
+ (id)immutablePlaceholder;	// 0x345558c5
+ (void)initialize;	// 0x34575745
+ (id)mutablePlaceholder;	// 0x345475f9
- (id)init;	// 0x34547609
- (id)initWithCapacity:(unsigned)capacity;	// 0x34547665
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x34555c0d
- (void)addObject:(id)object;	// 0x34602c95
- (unsigned)count;	// 0x34602a3d
- (void)dealloc;	// 0x34602a29
- (id)member:(id)member;	// 0x34602b05
- (id)objectEnumerator;	// 0x34602bcd
- (oneway void)release;	// 0x34602a1d
- (void)removeObject:(id)object;	// 0x34602d5d
- (id)retain;	// 0x34602a19
- (unsigned)retainCount;	// 0x34602a21
@end

