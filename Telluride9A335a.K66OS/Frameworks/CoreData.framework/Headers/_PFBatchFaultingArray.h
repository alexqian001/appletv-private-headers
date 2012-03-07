/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSArray.h> // Unknown library

@class NSManagedObjectContext, NSFetchRequest, _PFArray;

__attribute__((visibility("hidden")))
@interface _PFBatchFaultingArray : NSArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	_PFArray *_array;	// 12 = 0xc
	unsigned *_entryFlags;	// 16 = 0x10
	NSManagedObjectContext *_moc;	// 20 = 0x14
	NSFetchRequest *_request;	// 24 = 0x18
	unsigned _batchSize;	// 28 = 0x1c
	unsigned *_LRUBatches;	// 32 = 0x20
	PFBatchFaultingArrayFlags _flags;	// 36 = 0x24
}
@property(readonly, assign) unsigned count;	// G=0x330fba3d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x330fba25
+ (id)alloc;	// 0x330fec31
+ (id)allocWithZone:(NSZone *)zone;	// 0x330fec29
+ (void)initialize;	// 0x330fc4d1
- (id)initWithPFArray:(id)pfarray andRequest:(id)request andContext:(id)context;	// 0x330fea2d
- (BOOL)_isDeallocating;	// 0x330fe7ed
- (id)_newSubArrayInRange:(NSRange)range asMutable:(BOOL)aMutable;	// 0x330fe2c1
- (BOOL)_tryRetain;	// 0x330fe8f5
- (void)_turnAllBatchesIntoFaults;	// 0x330fbfd9
- (id)arrayFromObjectIDs;	// 0x330fc4a9
- (id)copyWithZone:(NSZone *)zone;	// 0x330fbe25
// converted property getter: - (unsigned)count;	// 0x330fba3d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x330fed65
- (void)dealloc;	// 0x330feeed
- (id)description;	// 0x330fecdd
- (void)getObjects:(id *)objects;	// 0x330fc059
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x330fee1d
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x330fc28d
- (unsigned)indexOfObject:(id)object;	// 0x330fc089
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x330fc0b9
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x330fc0e9
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x330fc119
- (BOOL)isEqualToArray:(id)array;	// 0x330fef71
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x330fc3d1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x330fbe35
- (id)newArrayFromObjectIDs;	// 0x330fe549
- (id)objectAtIndex:(unsigned)index;	// 0x330fec39
- (oneway void)release;	// 0x330fe875
- (id)retain;	// 0x330fe7b5
- (unsigned)retainCount;	// 0x330fba29
- (id)subarrayWithRange:(NSRange)range;	// 0x330fc44d
@end
