/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableOrderedSet.h> // Unknown library

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {
@private
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableOrderedSet *_mutableOrderedSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set;	// 0x32be8f4d
- (void)addObject:(id)object;	// 0x32be6cb9
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x32be8afd
- (void)addObjectsFromArray:(id)array;	// 0x32be89a5
- (id)allObjects;	// 0x32be8d99
- (id)array;	// 0x32be660d
- (BOOL)containsObject:(id)object;	// 0x32be64e5
- (id)copyWithZone:(NSZone *)zone;	// 0x32be6309
- (unsigned)count;	// 0x32be6921
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32be6941
- (void)dealloc;	// 0x32be7215
- (id)description;	// 0x32be683d
- (id)descriptionWithLocale:(id)locale;	// 0x32be685d
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x32be6881
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x32be669d
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x32be664d
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32be6671
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x32be88ed
- (id)firstObject;	// 0x32be647d
- (void)getObjects:(id *)objects;	// 0x32be640d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32be6399
- (unsigned)indexOfObject:(id)object;	// 0x32be63e9
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x32be67c1
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32be6719
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x32be66c9
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x32be66ed
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32be6795
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x32be6745
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32be6769
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32be696d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x32be6eb9
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x32be6dd9
- (void)intersectOrderedSet:(id)set;	// 0x32be8189
- (void)intersectSet:(id)set;	// 0x32be7ca5
- (BOOL)intersectsOrderedSet:(id)set;	// 0x32be650d
- (BOOL)intersectsSet:(id)set;	// 0x32be6535
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x32be64bd
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x32be6585
- (BOOL)isSubsetOfSet:(id)set;	// 0x32be655d
- (id)lastObject;	// 0x32be649d
- (void)minusOrderedSet:(id)set;	// 0x32be7fd1
- (void)minusSet:(id)set;	// 0x32be7ad1
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x32be8835
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32be6351
- (id)objectAtIndex:(unsigned)index;	// 0x32be63c5
- (id)objectEnumerator;	// 0x32be65ad
- (id)objectsAtIndexes:(id)indexes;	// 0x32be6459
- (void)removeAllObjects;	// 0x32be70dd
- (void)removeObject:(id)object;	// 0x32be8515
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32be6ad5
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32be703d
- (void)removeObjectsInArray:(id)array;	// 0x32be835d
- (void)removeObjectsInRange:(NSRange)range;	// 0x32be6f61
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32be6ba9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x32be8541
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x32be8571
- (id)reverseObjectEnumerator;	// 0x32be65cd
- (id)reversedOrderedSet;	// 0x32be65ed
- (id)set;	// 0x32be662d
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x32be8805
- (void)setValue:(id)value forKey:(id)key;	// 0x32be68ad
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x32be72a9
- (void)sortUsingComparator:(id)comparator;	// 0x32be71c5
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32be71f1
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x32be67ed
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32be6811
- (void)unionOrderedSet:(id)set;	// 0x32be7e79
- (void)unionSet:(id)set;	// 0x32be7979
- (id)valueForKey:(id)key;	// 0x32be68d9
- (id)valueForKeyPath:(id)keyPath;	// 0x32be68fd
@end

