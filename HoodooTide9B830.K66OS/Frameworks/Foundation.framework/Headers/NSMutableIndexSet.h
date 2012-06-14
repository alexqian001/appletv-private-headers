/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSIndexSet.h"


@interface NSMutableIndexSet : NSIndexSet {
	void *_reserved;	// 16 = 0x10
}
- (void)_addRangeToArray:(NSRange)array;	// 0x3158d4b5
- (void)_ensureRangeCapacity:(unsigned)capacity;	// 0x3158d575
- (void)_incrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x315e40a9
- (void)_insertRange:(NSRange)range inArrayAtIndex:(unsigned)index;	// 0x315b4d01
- (void)_mergeOverlappingRangesStartingAtIndex:(unsigned)index;	// 0x3158d675
- (void)_removeAndDecrementBy:(unsigned)by startingAtIndex:(unsigned)index;	// 0x315e4285
- (void)_removeRangeInArrayAtIndex:(unsigned)index;	// 0x315b4fa1
- (void)_replaceRangeInArrayAtIndex:(unsigned)index withRange:(NSRange)range;	// 0x315937e1
- (void)addIndex:(unsigned)index;	// 0x3158d221
- (void)addIndexes:(id)indexes;	// 0x315ae00d
- (void)addIndexes:(unsigned *)indexes count:(unsigned)count;	// 0x315e3e75
- (void)addIndexesFromIndexSet:(id)indexSet;	// 0x315e3e65
- (void)addIndexesInRange:(NSRange)range;	// 0x3158d235
- (Class)classForCoder;	// 0x315e3e55
- (void)removeAllIndexes;	// 0x315adfb5
- (void)removeIndex:(unsigned)index;	// 0x315b4e2d
- (void)removeIndexes:(id)indexes;	// 0x315e3f49
- (void)removeIndexesFromIndexSet:(id)indexSet;	// 0x315e4099
- (void)removeIndexesInRange:(NSRange)range;	// 0x315b4e41
- (void)shiftIndexesStartingAtIndex:(unsigned)index by:(int)by;	// 0x315e43f5
@end
