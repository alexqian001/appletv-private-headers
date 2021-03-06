/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSIndexSet.h"
#import "Foundation-Structs.h"


@interface NSMutableIndexSet : NSIndexSet {
	void *_reserved;	// 16 = 0x10
}
- (void)_addRangeToArray:(NSRange)array;	// 0x37327add
- (void)_ensureRangeCapacity:(unsigned)capacity;	// 0x37327b89
- (void)_incrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x37382ec9
- (void)_insertRange:(NSRange)range inArrayAtIndex:(unsigned)index;	// 0x3734f429
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned)index;	// 0x37327c91
- (void)_removeAndDecrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x373830b5
- (void)_removeRangeInArrayAtIndex:(unsigned)index;	// 0x3734f69d
- (void)_replaceRangeInArrayAtIndex:(unsigned)index withRange:(NSRange)range;	// 0x3732de0d
- (void)addIndex:(unsigned)index;	// 0x37327869
- (void)addIndexes:(id)indexes;	// 0x37348575
- (void)addIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x37382c99
- (void)addIndexesFromIndexSet:(id)indexSet;	// 0x37382c89
- (void)addIndexesInRange:(NSRange)range;	// 0x3732787d
- (Class)classForCoder;	// 0x37382c79
- (void)removeAllIndexes;	// 0x3734851d
- (void)removeIndex:(unsigned)index;	// 0x3734f54d
- (void)removeIndexes:(id)indexes;	// 0x37382d81
- (void)removeIndexesFromIndexSet:(id)indexSet;	// 0x37382eb9
- (void)removeIndexesInRange:(NSRange)range;	// 0x3734f561
- (void)shiftIndexesStartingAtIndex:(unsigned)index by:(int)by;	// 0x37383201
@end

