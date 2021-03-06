/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library


@interface GEOTileCache : NSObject {
	mutex _lock;	// 4 = 0x4
	list<CacheItem, std::__1::allocator<CacheItem> > _list;	// 48 = 0x30
	unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>> > _map;	// 60 = 0x3c
	unsigned _maxCapacity;	// 80 = 0x50
	unsigned _maxCost;	// 84 = 0x54
	unsigned _currentCost;	// 88 = 0x58
	unsigned _currentCount;	// 92 = 0x5c
}
@property(assign) unsigned maxCapacity;	// G=0x3795efd9; S=0x3792e189; 
@property(assign) unsigned maxCost;	// G=0x3795f08d; S=0x3792dfc1; 
- (id)init;	// 0x3792de89
- (id).cxx_construct;	// 0x3792de25
- (void).cxx_destruct;	// 0x3795f959
- (id)_description;	// 0x3795ec21
- (void)_enteredBackground:(id)background;	// 0x37936ee1
- (void)_evictWithMaxCost:(unsigned)maxCost maxCapacity:(unsigned)capacity;	// 0x3792e0c5
- (void)_receivedMemoryNotification:(id)notification;	// 0x3795eed5
- (void)_removeTileForKey:(const GEOTileKey *)key;	// 0x3795f171
- (void)dealloc;	// 0x3795eb89
- (id)description;	// 0x3795edf5
- (void)enumerate:(id)enumerate;	// 0x3795f489
// declared property getter: - (unsigned)maxCapacity;	// 0x3795efd9
// declared property getter: - (unsigned)maxCost;	// 0x3795f08d
- (void)removeAllObjects;	// 0x37936ef1
- (void)removeTileForKey:(const GEOTileKey *)key;	// 0x3795f211
- (void)removeTilesMatchingPredicate:(id)predicate;	// 0x3795f701
- (void)removeTilesWithKeys:(id)keys;	// 0x3795f2f1
// declared property setter: - (void)setMaxCapacity:(unsigned)capacity;	// 0x3792e189
// declared property setter: - (void)setMaxCost:(unsigned)cost;	// 0x3792dfc1
- (void)setNullForKey:(const GEOTileKey *)key;	// 0x3795f141
- (void)setTile:(id)tile forKey:(const GEOTileKey *)key cost:(unsigned)cost;	// 0x37934d79
- (id)tileForKey:(const GEOTileKey *)key;	// 0x37931c81
@end

