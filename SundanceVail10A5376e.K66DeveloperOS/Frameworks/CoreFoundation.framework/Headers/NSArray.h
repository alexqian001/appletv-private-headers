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
+ (id)allocWithZone:(NSZone *)zone;	// 0x355a96b1
+ (id)array;	// 0x355a9675
+ (id)arrayWithArray:(id)array;	// 0x355bda11
+ (id)arrayWithArray:(id)array copyItems:(BOOL)items;	// 0x35655731
+ (id)arrayWithArray:(id)array range:(NSRange)range;	// 0x356556e5
+ (id)arrayWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x35655699
+ (id)arrayWithObject:(id)object;	// 0x355a9f2d
+ (id)arrayWithObjects:(id)objects;	// 0x355c8fe5
+ (id)arrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x355b7a25
+ (id)arrayWithOrderedSet:(id)orderedSet;	// 0x35655c79
+ (id)arrayWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x35655c11
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35655bc5
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x35655b79
+ (id)arrayWithSet:(id)set;	// 0x35655fb1
+ (id)arrayWithSet:(id)set copyItems:(BOOL)items;	// 0x35655f71
+ (id)newArrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x355d7931
+ (BOOL)supportsSecureCoding;	// 0x3565605d
- (id)initWithArray:(id)array;	// 0x355ddf2d
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x355afe55
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x35655671
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x355af709
- (id)initWithCoder:(id)coder;	// 0x35656061
- (id)initWithObject:(id)object;	// 0x3565564d
- (id)initWithObjects:(id)objects;	// 0x355bac65
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x35655629
- (id)initWithOrderedSet:(id)orderedSet;	// 0x35655b3d
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x35655af5
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35655ad1
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x35655799
- (id)initWithSet:(id)set;	// 0x35655f5d
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x35655cd9
- (unsigned long)_cfTypeID;	// 0x355caf85
- (BOOL)_hasObjects;	// 0x355ad2e9
- (BOOL)_hasStrongReferences;	// 0x356534a5
- (id)allObjects;	// 0x356095a5
- (id)arrayByAddingObject:(id)object;	// 0x355f6269
- (id)arrayByAddingObjectsFromArray:(id)array;	// 0x355c9229
- (id)arrayByApplyingSelector:(SEL)selector;	// 0x355f45e9
- (id)arrayByExcludingObjectsInArray:(id)array;	// 0x355e6839
- (id)arrayByExcludingToObjectsInArray:(id)array;	// 0x3565606d
- (id)componentsJoinedByString:(id)string;	// 0x355f5a49
- (BOOL)containsObject:(id)object;	// 0x355bb169
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x356534ad
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x356536e5
- (BOOL)containsObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x356535e9
- (id)copyWithZone:(NSZone *)zone;	// 0x35655ff1
- (unsigned)count;	// 0x3565345d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x355f645d
- (unsigned)countForObject:(id)object;	// 0x356538d9
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x35653799
- (id)description;	// 0x35655615
- (id)descriptionWithLocale:(id)locale;	// 0x355ee519
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x355ee52d
- (void)encodeWithCoder:(id)coder;	// 0x35656065
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x356539c5
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x355dfadd
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x355b600d
- (id)firstObject;	// 0x35653f79
- (id)firstObjectCommonWithArray:(id)array;	// 0x35653fb1
- (void)getObjects:(id *)objects;	// 0x355e793d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x355f6575
- (unsigned)hash;	// 0x355f39b9
- (unsigned)indexOfObject:(id)object;	// 0x355ad1f1
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x35654141
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x356546b5
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x356549c1
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x355dd3a9
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x355f8d9d
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x355f5c31
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x355f5cbd
- (id)indexesOfObject:(id)object;	// 0x3565442d
- (id)indexesOfObject:(id)object inRange:(NSRange)range;	// 0x3565428d
- (id)indexesOfObjectIdenticalTo:(id)to;	// 0x35654641
- (id)indexesOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x356544e9
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x35654e35
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x355b0579
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x355b0605
- (BOOL)isEqual:(id)equal;	// 0x355afbc1
- (BOOL)isEqualToArray:(id)array;	// 0x355afc0d
- (BOOL)isNSArray__;	// 0x355afc09
- (id)lastObject;	// 0x355ad169
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x355e5999
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x355e99b1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x355af6ad
- (id)objectAtIndex:(unsigned)index;	// 0x35653481
- (id)objectAtIndexedSubscript:(unsigned)indexedSubscript;	// 0x355fb981
- (id)objectEnumerator;	// 0x355f3221
- (id)objectsAtIndexes:(id)indexes;	// 0x355e4359
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x35655345
- (id)objectsPassingTest:(id)test;	// 0x356554fd
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x3565545d
- (id)reverseObjectEnumerator;	// 0x355df9e9
- (id)reversedArray;	// 0x35655589
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x355e47b1
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x355e4709
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x355f3a51
- (id)sortedArrayUsingSelector:(SEL)selector;	// 0x355f5e99
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x355f3b11
- (id)subarrayWithRange:(NSRange)range;	// 0x355f10f1
@end

