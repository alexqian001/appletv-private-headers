/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryM : NSMutableDictionary {
	unsigned _used : 26;	// 4 = 0x4
	unsigned _kvo : 1;	// 7 = 0x7
	unsigned _size;	// 8 = 0x8
	unsigned long _mutations;	// 12 = 0xc
	id *_objs;	// 16 = 0x10
	id *_keys;	// 20 = 0x14
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3 :(BOOL)arg4 :(BOOL)arg5;	// 0x310c1675
+ (id)allocWithZone:(NSZone *)zone;	// 0x31153f19
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31153f15
+ (void)initialize;	// 0x310c7141
- (void)__setObject:(id)object forKey:(id)key;	// 0x310c1a4d
- (void)_mutate;	// 0x310c1fd1
- (id)copyWithZone:(NSZone *)zone;	// 0x310b9595
- (unsigned)count;	// 0x310b20bd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x310cf0f1
- (void)dealloc;	// 0x310b2e15
- (void)finalize;	// 0x31153e6d
- (void)getObjects:(id *)objects andKeys:(id *)keys count:(unsigned)count;	// 0x310b21a9
- (id)keyEnumerator;	// 0x310eb53d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310ee2bd
- (id)objectForKey:(id)key;	// 0x310a79bd
- (void)removeAllObjects;	// 0x310d4151
- (void)removeObjectForKey:(id)key;	// 0x310c2c51
- (void)setObject:(id)object forKey:(id)key;	// 0x310b9285
- (void)setObservationInfo:(void *)info;	// 0x31153f35
@end
