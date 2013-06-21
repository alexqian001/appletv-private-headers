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
+ (id)allocWithZone:(NSZone *)zone;	// 0x31107a05
+ (id)immutablePlaceholder;	// 0x3105a8c5
+ (void)initialize;	// 0x3107a745
+ (id)mutablePlaceholder;	// 0x3104c5f9
- (id)init;	// 0x3104c609
- (id)initWithCapacity:(unsigned)capacity;	// 0x3104c665
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3105ac0d
- (void)addObject:(id)object;	// 0x31107c95
- (unsigned)count;	// 0x31107a3d
- (void)dealloc;	// 0x31107a29
- (id)member:(id)member;	// 0x31107b05
- (id)objectEnumerator;	// 0x31107bcd
- (oneway void)release;	// 0x31107a1d
- (void)removeObject:(id)object;	// 0x31107d5d
- (id)retain;	// 0x31107a19
- (unsigned)retainCount;	// 0x31107a21
@end
