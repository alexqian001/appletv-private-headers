/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableOrderedSet.h"
#import "CoreData-Structs.h"

@class _NSFaultingMutableOrderedSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {
@private
	_NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;	// 16 = 0x10
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set mutationMethods:(id)methods;	// 0x340454a5
- (void)addObject:(id)object;	// 0x34044fa9
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x34044d7d
- (void)addObjectsFromArray:(id)array;	// 0x34044ce9
- (void)dealloc;	// 0x34043df5
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x34045321
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x340449a1
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x34044bad
- (void)intersectOrderedSet:(id)set;	// 0x340443d9
- (void)intersectSet:(id)set;	// 0x340440bd
- (void)minusOrderedSet:(id)set;	// 0x3404429d
- (void)minusSet:(id)set;	// 0x34043f71
- (void)removeAllObjects;	// 0x34044679
- (void)removeObjectAtIndex:(unsigned)index;	// 0x34045271
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x34044775
- (void)removeObjectsInArray:(id)array;	// 0x34044529
- (void)removeObjectsInRange:(NSRange)range;	// 0x340448a5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34045101
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x34043e49
- (void)sortUsingComparator:(id)comparator;	// 0x34043eb1
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x34043e81
- (void)unionOrderedSet:(id)set;	// 0x34044209
- (void)unionSet:(id)set;	// 0x34043edd
@end

