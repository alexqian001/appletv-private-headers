/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableOrderedSet.h"
#import "CoreData-Structs.h"

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {
	_NSFaultingMutableOrderedSetMutationMethods *_mutationMethods;	// 16 = 0x10
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set mutationMethods:(id)methods;	// 0x36674011
- (void)addObject:(id)object;	// 0x36674401
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x36674559
- (void)addObjectsFromArray:(id)array;	// 0x36674795
- (void)dealloc;	// 0x36673fc1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3667406d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x36674985
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x36674851
- (void)intersectOrderedSet:(id)set;	// 0x36675039
- (void)intersectSet:(id)set;	// 0x366753b9
- (void)minusOrderedSet:(id)set;	// 0x366751a5
- (void)minusSet:(id)set;	// 0x36675521
- (void)removeAllObjects;	// 0x36674dd9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x366741e1
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x36674c7d
- (void)removeObjectsInArray:(id)array;	// 0x36674ed5
- (void)removeObjectsInRange:(NSRange)range;	// 0x36674b95
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x36674291
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x366757a1
- (void)sortUsingComparator:(id)comparator;	// 0x36675745
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x36675771
- (void)unionOrderedSet:(id)set;	// 0x366752fd
- (void)unionSet:(id)set;	// 0x36675689
@end
