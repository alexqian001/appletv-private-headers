/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x310fe869
- (BOOL)_isDeallocating;	// 0x310fe819
- (BOOL)_tryRetain;	// 0x310fe809
- (void)addObject:(id)object;	// 0x3107b805
- (Class)classForCoder;	// 0x310fe86d
- (id)copyWithZone:(NSZone *)zone;	// 0x3107bb3d
- (unsigned)count;	// 0x31064915
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31064705
- (void)finalize;	// 0x310fe829
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31068ce5
- (unsigned)hash;	// 0x310fe801
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3107b839
- (BOOL)isEqual:(id)equal;	// 0x31092ac5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3107b9e5
- (id)objectAtIndex:(unsigned)index;	// 0x3107bb79
- (oneway void)release;	// 0x3106e365
- (void)removeLastObject;	// 0x310fe8a9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31084df9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x3107ba09
- (id)retain;	// 0x3106ef05
- (unsigned)retainCount;	// 0x310fe825
@end
