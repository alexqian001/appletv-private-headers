/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3713d3d1
- (BOOL)_isDeallocating;	// 0x3713d381
- (unsigned)_trueCount;	// 0x3713d3d5
- (BOOL)_tryRetain;	// 0x3713d371
- (void)addObject:(id)object;	// 0x37081ef9
- (Class)classForCoder;	// 0x370bbb05
- (id)copyWithZone:(NSZone *)zone;	// 0x370aeec9
- (unsigned)count;	// 0x3707f7a5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3707f8ed
- (void)finalize;	// 0x3713d391
- (void)getObjects:(id *)objects;	// 0x370bbb3d
- (unsigned)hash;	// 0x370cf425
- (BOOL)isEqual:(id)equal;	// 0x370b9d55
- (id)member:(id)member;	// 0x37097e35
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x37082221
- (id)objectEnumerator;	// 0x370c6a7d
- (oneway void)release;	// 0x3707f95d
- (void)removeAllObjects;	// 0x37081bf9
- (void)removeObject:(id)object;	// 0x370823e9
- (id)retain;	// 0x370975a1
- (unsigned)retainCount;	// 0x3713d38d
@end

