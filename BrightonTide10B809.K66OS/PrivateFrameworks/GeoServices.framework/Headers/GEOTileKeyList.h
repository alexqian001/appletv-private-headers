/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying> {
	void *_head;	// 4 = 0x4
	void *_tail;	// 8 = 0x8
	GEOTileKeyMap *_map;	// 12 = 0xc
	unsigned _count;	// 16 = 0x10
	unsigned _maxCount;	// 20 = 0x14
}
@property(readonly, assign) unsigned count;	// G=0x33f52701; converted property
+ (id)listFromXPCData:(id)xpcdata;	// 0x33fb4a19
- (id)init;	// 0x33f523e5
- (id)initWithMaxCapacity:(unsigned)maxCapacity;	// 0x33f51701
- (void)_addKeyToBack:(const GEOTileKey *)back;	// 0x33f5265d
- (void)addKey:(const GEOTileKey *)key;	// 0x33f542f5
- (BOOL)addKey:(const GEOTileKey *)key lostKey:(GEOTileKey *)key2;	// 0x33f51799
- (unsigned)capacity;	// 0x33f7e231
- (BOOL)containsKey:(const GEOTileKey *)key;	// 0x33f51925
- (id)copyWithMaxCapacity:(unsigned)maxCapacity;	// 0x33f7dfbd
- (id)copyWithZone:(NSZone *)zone;	// 0x33f7dec9
// converted property getter: - (unsigned)count;	// 0x33f52701
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33f52059
- (void)dealloc;	// 0x33f55185
- (id)description;	// 0x33f7e04d
- (GEOTileKey *)firstKey;	// 0x33f7e219
- (BOOL)intersectsList:(id)list;	// 0x33f7e465
- (id)listWithout:(id)without;	// 0x33f7e241
- (id)newXPCData;	// 0x33f5293d
- (BOOL)removeKey:(const GEOTileKey *)key;	// 0x33f547f9
- (void)removeKeysMatchingPredicate:(id)predicate;	// 0x33f7e41d
- (void)sort:(id)sort;	// 0x33f51e89
- (id)sublistWithRange:(NSRange)range;	// 0x33f7e36d
@end
