/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryI : NSDictionary {
	unsigned _used : 26;	// 4 = 0x4
	unsigned _szidx : 6;	// 7 = 0x7
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3 :(BOOL)arg4 :(BOOL)arg5;	// 0x2d1c6141
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d27b1bd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2d27b1b9
- (id)copyWithZone:(NSZone *)zone;	// 0x2d208a71
- (unsigned)count;	// 0x2d1d4b4d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d1ee801
- (void)dealloc;	// 0x2d1d4c8d
- (void)enumerateKeysAndObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x2d27afa9
- (void)finalize;	// 0x2d27b139
- (void)getObjects:(id *)objects andKeys:(id *)keys count:(unsigned)count;	// 0x2d1d4b61
- (id)keyEnumerator;	// 0x2d209671
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d1f5e29
- (id)objectForKey:(id)key;	// 0x2d1e933d
@end
