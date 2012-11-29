/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOrderedSet.h"


@interface NSMutableOrderedSet : NSOrderedSet {
}
+ (id)orderedSetWithCapacity:(unsigned)capacity;	// 0x34597dd9
- (id)initWithCapacity:(unsigned)capacity;	// 0x3462bfe9
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3462c00d
- (void)_mutate;	// 0x346259dd
- (void)addObject:(id)object;	// 0x34597ef9
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x346259e1
- (void)addObjectsFromArray:(id)array;	// 0x345a7895
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x34625b49
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x34625ea1
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x34625cf5
- (void)addObjectsFromSet:(id)set;	// 0x34625fa5
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x34626095
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x34625971
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x34626dcd
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x345a7cc9
- (void)insertObjectsFromArray:(id)array atIndex:(unsigned)index;	// 0x34626279
- (void)insertObjectsFromArray:(id)array range:(NSRange)range atIndex:(unsigned)index;	// 0x345a7999
- (void)insertObjectsFromOrderedSet:(id)orderedSet atIndex:(unsigned)index;	// 0x34626861
- (void)insertObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range atIndex:(unsigned)index;	// 0x34626531
- (void)insertObjectsFromSet:(id)set atIndex:(unsigned)index;	// 0x34626b19
- (void)intersectOrderedSet:(id)set;	// 0x346271d1
- (void)intersectSet:(id)set;	// 0x346274c1
- (void)minusOrderedSet:(id)set;	// 0x34627b71
- (void)minusSet:(id)set;	// 0x34627d25
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x346277a5
- (void)removeAllObjects;	// 0x34627ec1
- (void)removeFirstObject;	// 0x34627f15
- (void)removeLastObject;	// 0x34627f5d
- (void)removeObject:(id)object;	// 0x345a3af9
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x346280a1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x34625995
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x346281bd
- (void)removeObjectsInArray:(id)array;	// 0x34628a7d
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x34628895
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x34629325
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x34629175
- (void)removeObjectsInRange:(NSRange)range;	// 0x34627fa5
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array;	// 0x34628635
- (void)removeObjectsInRange:(NSRange)range inArray:(id)array range:(NSRange)range3;	// 0x346283cd
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet;	// 0x34628fc1
- (void)removeObjectsInRange:(NSRange)range inOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x34628c0d
- (void)removeObjectsInRange:(NSRange)range inSet:(id)set;	// 0x34629431
- (void)removeObjectsInSet:(id)set;	// 0x34629691
- (void)replaceObject:(id)object;	// 0x346299b1
- (void)replaceObject:(id)object inRange:(NSRange)range;	// 0x34629821
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x346259b9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x34629d15
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x34629a75
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x3462a4b5
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x3462a171
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet;	// 0x3462aaed
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range3;	// 0x3462a7a9
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromSet:(id)set;	// 0x3462ade1
- (void)rollObjectsInRange:(NSRange)range by:(int)by;	// 0x3462b0cd
- (void)setArray:(id)array;	// 0x3462b675
- (void)setObject:(id)object;	// 0x3462b595
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x3462b40d
- (void)setObject:(id)object atIndexedSubscript:(unsigned)indexedSubscript;	// 0x3462b585
- (void)setOrderedSet:(id)set;	// 0x3462b769
- (void)setSet:(id)set;	// 0x3462b861
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x3462b955
- (void)sortUsingComparator:(id)comparator;	// 0x3462bd95
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3462bcd1
- (void)unionOrderedSet:(id)set;	// 0x345a8311
- (void)unionSet:(id)set;	// 0x3462be4d
@end
