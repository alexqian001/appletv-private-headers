/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"
#import "NSCopying.h"

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying> {
	void *_head;	// 4 = 0x4
	void *_tail;	// 8 = 0x8
	GEOTileKeyMap *_map;	// 12 = 0xc
	unsigned _count;	// 16 = 0x10
	unsigned _maxCount;	// 20 = 0x14
}
@property(readonly, assign) unsigned count;	// G=0x30223ca1; converted property
+ (id)listFromXPCData:(id)xpcdata;	// 0x30284ad5
- (id)init;	// 0x3022398d
- (id)initWithMaxCapacity:(unsigned)maxCapacity;	// 0x30222cb1
- (void)_addKeyToBack:(const GEOTileKey *)back;	// 0x30223bfd
- (void)addKey:(const GEOTileKey *)key;	// 0x30225e9d
- (BOOL)addKey:(const GEOTileKey *)key lostKey:(GEOTileKey *)key2;	// 0x30222d49
- (unsigned)capacity;	// 0x3024f591
- (BOOL)containsKey:(const GEOTileKey *)key;	// 0x30222ed5
- (id)copyWithMaxCapacity:(unsigned)maxCapacity;	// 0x3024f31d
- (id)copyWithZone:(NSZone *)zone;	// 0x3024f229
// converted property getter: - (unsigned)count;	// 0x30223ca1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30223609
- (void)dealloc;	// 0x30226d25
- (id)description;	// 0x3024f3ad
- (GEOTileKey *)firstKey;	// 0x3024f579
- (BOOL)intersectsList:(id)list;	// 0x3024f7c5
- (id)listWithout:(id)without;	// 0x3024f5a1
- (id)newXPCData;	// 0x302244e9
- (BOOL)removeKey:(const GEOTileKey *)key;	// 0x302263a1
- (void)removeKeysMatchingPredicate:(id)predicate;	// 0x3024f77d
- (void)sort:(id)sort;	// 0x30223439
- (id)sublistWithRange:(NSRange)range;	// 0x3024f6cd
@end

