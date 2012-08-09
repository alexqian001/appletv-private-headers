/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "NSFastEnumeration.h"


@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x35ca9e11
+ (id)array;	// 0x35cae3fd
+ (id)arrayWithArray:(id)array;	// 0x35cc5c09
+ (id)arrayWithArray:(id)array copyItems:(BOOL)items;	// 0x35d53f09
+ (id)arrayWithArray:(id)array range:(NSRange)range;	// 0x35d53ebd
+ (id)arrayWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x35d53e71
+ (id)arrayWithObject:(id)object;	// 0x35cac5a5
+ (id)arrayWithObjects:(id)objects;	// 0x35cd6f1d
+ (id)arrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x35ca9dcd
+ (id)arrayWithOrderedSet:(id)orderedSet;	// 0x35d54451
+ (id)arrayWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x35d543e9
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35d5439d
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x35d54351
+ (id)arrayWithSet:(id)set;	// 0x35d54789
+ (id)arrayWithSet:(id)set copyItems:(BOOL)items;	// 0x35d54749
+ (id)newArrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x35d53c81
+ (BOOL)supportsSecureCoding;	// 0x35d54835
- (id)initWithArray:(id)array;	// 0x35cd7835
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x35cb128d
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x35d53e49
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x35cb12d9
- (id)initWithCoder:(id)coder;	// 0x35d54839
- (id)initWithObject:(id)object;	// 0x35d53c5d
- (id)initWithObjects:(id)objects;	// 0x35cc0c3d
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x35d53c39
- (id)initWithOrderedSet:(id)orderedSet;	// 0x35d54315
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x35d542cd
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35d542a9
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x35d53f71
- (id)initWithSet:(id)set;	// 0x35d54735
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x35d544b1
- (unsigned long)_cfTypeID;	// 0x35ce6a7d
- (BOOL)_hasObjects;	// 0x35cd33f1
- (BOOL)_hasStrongReferences;	// 0x35d518fd
- (id)allObjects;	// 0x35d51905
- (id)arrayByAddingObject:(id)object;	// 0x35ce8fe1
- (id)arrayByAddingObjectsFromArray:(id)array;	// 0x35cf1b41
- (id)arrayByApplyingSelector:(SEL)selector;	// 0x35ce7ca9
- (id)arrayByExcludingObjectsInArray:(id)array;	// 0x35ce0239
- (id)arrayByExcludingToObjectsInArray:(id)array;	// 0x35d54845
- (id)componentsJoinedByString:(id)string;	// 0x35cc5751
- (BOOL)containsObject:(id)object;	// 0x35cb6921
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x35d51aa5
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x35d51cdd
- (BOOL)containsObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x35d51be1
- (id)copyWithZone:(NSZone *)zone;	// 0x35d547c9
- (unsigned)count;	// 0x35d518b5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35ce9f5d
- (unsigned)countForObject:(id)object;	// 0x35d51ed1
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x35d51d91
- (id)description;	// 0x35d53c25
- (id)descriptionWithLocale:(id)locale;	// 0x35ce0f19
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x35ce0f2d
- (void)encodeWithCoder:(id)coder;	// 0x35d5483d
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x35d51fbd
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x35cdb03d
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x35cb1075
- (id)firstObject;	// 0x35d52571
- (id)firstObjectCommonWithArray:(id)array;	// 0x35d525a9
- (void)getObjects:(id *)objects;	// 0x35cdf32d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35cea075
- (unsigned)hash;	// 0x35ce9b81
- (unsigned)indexOfObject:(id)object;	// 0x35cb6a21
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x35d52739
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x35d52cad
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x35d52fb9
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x35cd7611
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x35ceea75
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x35ce91d1
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x35ce925d
- (id)indexesOfObject:(id)object;	// 0x35d52a25
- (id)indexesOfObject:(id)object inRange:(NSRange)range;	// 0x35d52885
- (id)indexesOfObjectIdenticalTo:(id)to;	// 0x35d52c39
- (id)indexesOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x35d52ae1
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x35d5342d
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x35cd7d69
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x35cd7df5
- (BOOL)isEqual:(id)equal;	// 0x35ce0ed1
- (BOOL)isEqualToArray:(id)array;	// 0x35cd8a65
- (BOOL)isNSArray__;	// 0x35cd33e9
- (id)lastObject;	// 0x35ca1d09
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x35cb7bb1
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x35cf2df9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35cc60ed
- (id)objectAtIndex:(unsigned)index;	// 0x35d518d9
- (id)objectAtIndexedSubscript:(unsigned)indexedSubscript;	// 0x35d53941
- (id)objectEnumerator;	// 0x35cf2589
- (id)objectsAtIndexes:(id)indexes;	// 0x35cd7ea9
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x35d53955
- (id)objectsPassingTest:(id)test;	// 0x35d53b0d
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x35d53a6d
- (id)reverseObjectEnumerator;	// 0x35cdaef9
- (id)reversedArray;	// 0x35d53b99
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x35ce7969
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x35ce85c1
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x35ce77f9
- (id)sortedArrayUsingSelector:(SEL)selector;	// 0x35ce8a99
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x35ce78b9
- (id)subarrayWithRange:(NSRange)range;	// 0x35ce5c39
@end
