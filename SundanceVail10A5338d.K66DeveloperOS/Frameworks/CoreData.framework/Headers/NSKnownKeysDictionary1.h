/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysDictionary.h"

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
	int _cd_rc;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSKnownKeysMappingStrategy *_keySearch;	// 12 = 0xc
	id _values[0];	// 16 = 0x10
}
+ (id)init;	// 0x365d1339
+ (id)initForKeys:(id)keys;	// 0x365763e5
+ (id)initWithCapacity:(unsigned)capacity;	// 0x365d1395
+ (id)initWithCoder:(id)coder;	// 0x365d13f9
+ (id)initWithDictionary:(id)dictionary;	// 0x365d1841
+ (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x365d15a1
+ (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x3657095d
+ (id)initWithSearchStrategy:(id)searchStrategy;	// 0x36571245
+ (BOOL)accessInstanceVariablesDirectly;	// 0x365d1855
+ (id)alloc;	// 0x365d13f1
+ (id)allocWithZone:(NSZone *)zone;	// 0x365d13f5
- (unsigned)_countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count forKeys:(BOOL)keys;	// 0x36577fb5
- (BOOL)_isDeallocating;	// 0x365d18f9
- (void)_recount;	// 0x365713a9
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x365d1cc9
- (BOOL)_tryRetain;	// 0x365d18a9
- (unsigned)_valueCountByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x365d1e5d
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x365d21a9
- (id)allKeys;	// 0x365d1f11
- (id)allValues;	// 0x36573505
- (Class)classForArchiver;	// 0x365d1941
- (Class)classForCoder;	// 0x365d1925
- (id)copyWithZone:(NSZone *)zone;	// 0x365d1b19
- (unsigned)count;	// 0x36571375
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x36577f91
- (void)dealloc;	// 0x365791fd
- (void)encodeWithCoder:(id)coder;	// 0x365d195d
- (void)getKeys:(id *)keys;	// 0x365d2071
- (void)getObjects:(id *)objects;	// 0x36578b15
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x365d1fb9
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x365d20e5
- (id)keyEnumerator;	// 0x365d1db9
- (const id *)knownKeyValuesPointer;	// 0x365d1bdd
- (id)mapping;	// 0x3657335d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x365d1bcd
- (id)objectEnumerator;	// 0x365d2121
- (id)objectForKey:(id)key;	// 0x3657806d
- (oneway void)release;	// 0x36579189
- (void)removeAllObjects;	// 0x365d2439
- (void)removeObjectForKey:(id)key;	// 0x365d1e81
- (id)retain;	// 0x365d1859
- (unsigned)retainCount;	// 0x365d1895
- (void)setObject:(id)object forKey:(id)key;	// 0x36576845
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x365d1c01
- (void)setValues:(id *)values;	// 0x365d1da5
- (id)valueAtIndex:(unsigned)index;	// 0x365d1bed
- (const id *)values;	// 0x36571365
@end
