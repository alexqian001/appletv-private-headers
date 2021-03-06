/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableOrderedSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {
	int _cd_rc;	// 4 = 0x4
	NSFaultingMutableOrderedSetFlags _flags;	// 8 = 0x8
	id _realSet;	// 12 = 0xc
	NSManagedObject *_source;	// 16 = 0x10
	unsigned *_orderKeys;	// 20 = 0x14
	id _grottyHack;	// 24 = 0x18
}
@property(readonly, retain) NSManagedObject *source;	// G=0x35cd00a5; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x35cce959
+ (id)alloc;	// 0x35ccecdd
+ (id)allocWithZone:(NSZone *)zone;	// 0x35ccece5
- (id)initWithOrderedSet:(id)orderedSet;	// 0x35cce95d
- (id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;	// 0x35cceb61
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x35cce9fd
- (void)_assignOrderKeysUsingCount:(unsigned)count;	// 0x35ccf2e9
- (BOOL)_hasOrderKeys;	// 0x35ccffed
- (BOOL)_isDeallocating;	// 0x35ccecb1
- (BOOL)_isIdenticalFault:(id)fault;	// 0x35cd0d1d
- (id)_newOrderKeys;	// 0x35ccfe49
- (unsigned)_orderKeyForObject:(id)object;	// 0x35ccfd31
- (void)_populateOrderKeysUsingSnapshot:(id)snapshot orderKeys:(id)keys newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes4;	// 0x35ccf679
- (void)_setProcessingIdempotentKVO:(BOOL)kvo;	// 0x35ccf2c5
- (BOOL)_shouldProcessKVOChange;	// 0x35ccf2ad
- (BOOL)_tryRetain;	// 0x35ccec61
- (void)_updateOrderKeysFromOrderOfObjectIDs:(id)objectIDs;	// 0x35ccf32d
- (void)addObject:(id)object;	// 0x35cd0e1d
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x35cd0f0d
- (void)addObjectsFromArray:(id)array;	// 0x35cd1081
- (id)allObjects;	// 0x35cd224d
- (Class)classForArchiver;	// 0x35cd0a75
- (Class)classForCoder;	// 0x35cd0a31
- (BOOL)containsObject:(id)object;	// 0x35cd0de1
- (id)copyWithZone:(NSZone *)zone;	// 0x35cd00f5
- (unsigned)count;	// 0x35cd032d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35cd04c9
- (void)dealloc;	// 0x35cceced
- (id)description;	// 0x35ccedd5
- (id)descriptionWithLocale:(id)locale;	// 0x35ccee9d
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x35cd0551
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x35cd050d
- (void)getObjects:(id *)objects;	// 0x35cd0729
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35cd06e1
- (unsigned)indexOfObject:(id)object;	// 0x35cd03a9
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x35cd05d9
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x35cd0595
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x35cd0661
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x35cd061d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35cd03e9
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x35cd1345
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x35cd11b1
- (BOOL)isEqual:(id)equal;	// 0x35cd0cd9
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x35cd0a91
- (BOOL)isFault;	// 0x35ccedc1
- (void)minusOrderedSet:(id)set;	// 0x35cd1835
- (void)minusSet:(id)set;	// 0x35cd1a95
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35cd02d5
- (id)objectAtIndex:(unsigned)index;	// 0x35cd0369
- (id)objectEnumerator;	// 0x35cd06a5
- (id)relationship;	// 0x35cd00b5
- (oneway void)release;	// 0x35ccebd5
- (void)removeAllObjects;	// 0x35cd166d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35cd0781
- (void)removeObjectsInArray:(id)array;	// 0x35cd1705
- (void)removeObjectsInRange:(NSRange)range;	// 0x35cd1435
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35cd0831
- (id)replacementObjectForCoder:(id)coder;	// 0x35cd0a4d
- (id)retain;	// 0x35cceb9d
- (unsigned)retainCount;	// 0x35ccec4d
- (void)setValue:(id)value forKey:(id)key;	// 0x35cd0915
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x35cd1d41
- (void)sortUsingComparator:(id)comparator;	// 0x35cd1cf5
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x35cd1d1d
// converted property getter: - (id)source;	// 0x35cd00a5
- (void)turnIntoFault;	// 0x35cd0005
- (void)unionOrderedSet:(id)set;	// 0x35cd1965
- (void)unionSet:(id)set;	// 0x35cd1bc5
- (id)valueForKey:(id)key;	// 0x35cd09b1
- (id)valueForKeyPath:(id)keyPath;	// 0x35cd09f1
- (void)willChange;	// 0x35ccf23d
- (void)willRead;	// 0x35ccef69
@end

