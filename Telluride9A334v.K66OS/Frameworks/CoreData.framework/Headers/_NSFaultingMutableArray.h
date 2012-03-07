/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableArray.h> // Unknown library

@class NSManagedObject, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableArray : NSMutableArray {
@private
	int _cd_rc;	// 4 = 0x4
	NSMutableArray *_realArray;	// 8 = 0x8
	NSManagedObject *_source;	// 12 = 0xc
	NSPropertyDescription *_relationship;	// 16 = 0x10
	NSFaultingMutableArrayFlags _flags;	// 20 = 0x14
}
@property(readonly, retain) NSPropertyDescription *relationship;	// G=0x31e70e91; converted property
@property(readonly, retain) NSManagedObject *source;	// G=0x31e70e81; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x31e70e55
+ (id)alloc;	// 0x31e7119d
+ (id)allocWithZone:(NSZone *)zone;	// 0x31e71195
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x31e718b9
- (BOOL)_isDeallocating;	// 0x31e70ed9
- (BOOL)_tryRetain;	// 0x31e70f01
- (void)addObject:(id)object;	// 0x31e71585
- (id)copyWithZone:(NSZone *)zone;	// 0x31e710f1
- (unsigned)count;	// 0x31e715fd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31e71545
- (void)dealloc;	// 0x31e71869
- (id)description;	// 0x31e717a5
- (id)descriptionWithLocale:(id)locale;	// 0x31e716ed
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x31e71635
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x31e714c5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x31e71505
- (void)getObjects:(id *)objects;	// 0x31e7125d
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x31e71445
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x31e71485
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x31e713c5
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x31e71405
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31e7134d
- (BOOL)isFault;	// 0x31e70e6d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31e71859
- (id)objectAtIndex:(unsigned)index;	// 0x31e715c1
- (id)objectEnumerator;	// 0x31e7138d
// converted property getter: - (id)relationship;	// 0x31e70e91
- (oneway void)release;	// 0x31e70f5d
- (void)removeLastObject;	// 0x31e71315
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31e712d9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31e71299
- (id)retain;	// 0x31e70ea1
- (unsigned)retainCount;	// 0x31e70e59
- (void)setValue:(id)value forKey:(id)key;	// 0x31e7121d
// converted property getter: - (id)source;	// 0x31e70e81
- (void)turnIntoFault;	// 0x31e710b1
- (id)valueForKey:(id)key;	// 0x31e711e1
- (id)valueForKeyPath:(id)keyPath;	// 0x31e711a5
- (void)willRead;	// 0x31e70fdd
@end
