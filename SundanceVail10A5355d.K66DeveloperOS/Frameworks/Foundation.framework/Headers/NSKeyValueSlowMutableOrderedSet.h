/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableOrderedSet.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptyOrderedSets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x34744445
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)selector;	// 0x34744a49
- (id)_nonNilOrderedSetValueWithSelector:(SEL)selector;	// 0x3474467d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x34744455
- (void)_proxyNonGCFinalize;	// 0x34744505
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x3474457d
- (unsigned)count;	// 0x34744615
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x347446c1
- (unsigned)indexOfObject:(id)object;	// 0x347446f9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x34744789
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x34744875
- (id)objectAtIndex:(unsigned)index;	// 0x34744729
- (id)objectsAtIndexes:(id)indexes;	// 0x34744759
- (void)removeObjectAtIndex:(unsigned)index;	// 0x34744aa1
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x34744b0d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34744b79
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x34744bf1
@end

