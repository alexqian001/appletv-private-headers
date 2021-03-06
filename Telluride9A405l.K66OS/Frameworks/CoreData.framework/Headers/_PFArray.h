/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFArray : NSArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	id *_array;	// 12 = 0xc
	PFArrayFlags _flags;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x33f575c5; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33f768a1
+ (void)initialize;	// 0x33f76e09
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x33f76aad
- (id)initWithObjects:(id *)objects count:(unsigned)count andFlags:(unsigned)flags;	// 0x33f5738d
- (unsigned)_flags;	// 0x33f7698d
- (BOOL)_isDeallocating;	// 0x33f78029
- (id *)_objectsPointer;	// 0x33f768a5
- (void)_setShouldRelease:(BOOL)_set;	// 0x33f769d5
- (void)_setShouldUseExtendedRelease:(BOOL)_set;	// 0x33f76a0d
- (BOOL)_tryRetain;	// 0x33f78051
- (id)arrayFromObjectIDs;	// 0x33f76ad1
- (id)copyWithZone:(NSZone *)zone;	// 0x33f76d59
// converted property getter: - (unsigned)count;	// 0x33f575c5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33f768f9
- (void)dealloc;	// 0x33f5e04d
- (void)getObjects:(id *)objects;	// 0x33f78151
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x33f780ad
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x33f76c11
- (unsigned)indexOfObject:(id)object;	// 0x33f76af9
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x33f76b49
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x33f76be1
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x33f768b5
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x33f76cd9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33f76db1
- (id)newArrayFromObjectIDs;	// 0x33f7817d
- (id)objectAtIndex:(unsigned)index;	// 0x33f575d5
- (oneway void)release;	// 0x33f57545
- (id)retain;	// 0x33f5750d
- (unsigned)retainCount;	// 0x33f76979
- (id)subarrayWithRange:(NSRange)range;	// 0x33f77f6d
@end

