/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray, MPReshuffledArrayIndexMap, NSArray, MPMediaQuery;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
	unsigned _activeShuffleType;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	NSMutableArray *_orderedArray;	// 12 = 0xc
	MPReshuffledArrayIndexMap *_indexMap;	// 16 = 0x10
	MPMediaQuery *_sourceMediaQuery;	// 20 = 0x14
	NSArray *_sourceMediaQueryItems;	// 24 = 0x18
}
@property(assign, nonatomic) NSRange focusedRange;	// G=0x36f56051; S=0x36f56031; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x36f55d15; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x36f55901; 
@property(readonly, assign, nonatomic) MPMediaQuery *sourceMediaQuery;	// G=0x36f56f8d; @synthesize=_sourceMediaQuery
- (id)initWithCoder:(id)coder;	// 0x36f55665
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery;	// 0x36f555b5
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery orderedItems:(id)items indexMap:(id)map shuffleType:(unsigned)type;	// 0x36f5548d
- (BOOL)_getFixedItemCount:(unsigned *)count;	// 0x36f55911
- (id)_includeInShuffleItemsForQuery:(id)query;	// 0x36f5642d
- (void)_rebuildCaches;	// 0x36f564a9
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned)initialSourceIndex;	// 0x36f564bd
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x36f5655d
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned)initialSourceItemIndex;	// 0x36f56b39
- (void)_resetCaches;	// 0x36f56e45
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned)initialIndex;	// 0x36f56e99
- (id)copyWithZone:(NSZone *)zone;	// 0x36f55879
- (unsigned)count;	// 0x36f55b75
- (void)dealloc;	// 0x36f555d9
- (void)encodeWithCoder:(id)coder;	// 0x36f557bd
// declared property getter: - (NSRange)focusedRange;	// 0x36f56051
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID;	// 0x36f55c19
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID greaterThanOrEqualToIndex:(unsigned)index;	// 0x36f55ba1
- (unsigned)indexOfObject:(id)object;	// 0x36f55cb5
- (unsigned)indexOfObject:(id)object greaterThanOrEqualToIndex:(unsigned)index;	// 0x36f55c3d
- (void)invalidateSourceMediaQueryAndLoadItems;	// 0x36f55cc9
// declared property getter: - (id)items;	// 0x36f55d15
- (unsigned)nonGrowingCount;	// 0x36f55b15
- (unsigned)nonRepeatingCount;	// 0x36f559e9
- (id)objectAtIndex:(unsigned)index;	// 0x36f55e7d
// declared property getter: - (unsigned)realShuffleType;	// 0x36f55901
// declared property setter: - (void)setFocusedRange:(NSRange)range;	// 0x36f56031
- (void)shuffleAlbumsWithInitialIndex:(unsigned)initialIndex;	// 0x36f56081
- (void)shuffleItemsWithInitialIndex:(unsigned)initialIndex;	// 0x36f56275
// declared property getter: - (id)sourceMediaQuery;	// 0x36f56f8d
- (void)unshuffle;	// 0x36f5640d
@end
