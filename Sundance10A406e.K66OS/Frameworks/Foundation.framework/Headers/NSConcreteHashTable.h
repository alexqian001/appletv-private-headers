/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSHashTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
}
@property(readonly, assign) unsigned count;	// G=0x35533dc1; converted property
- (id)init;	// 0x35578769
- (id)initWithCoder:(id)coder;	// 0x35578951
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x355054c1
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x3551ba85
- (void)_initBlock;	// 0x355055ed
- (void)addObject:(id)object;	// 0x355045bd
- (id)allObjects;	// 0x35578f4d
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x35504631
- (Class)classForCoder;	// 0x35578935
- (id)copy;	// 0x3557877d
// converted property getter: - (unsigned)count;	// 0x35533dc1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35524dd1
- (void)dealloc;	// 0x355066a1
- (id)description;	// 0x355790e9
- (void)encodeWithCoder:(id)coder;	// 0x355789e5
- (void)finalize;	// 0x35579095
- (void *)getItem:(const void *)item;	// 0x35504421
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x35579021
- (unsigned)hash;	// 0x35578bc5
- (void)hashGrow;	// 0x35505979
- (void)insertItem:(const void *)item;	// 0x35578dd1
- (void)insertKnownAbsentItem:(const void *)item;	// 0x35578e45
- (BOOL)isEqual:(id)equal;	// 0x35578bed
- (id)objectEnumerator;	// 0x355791c1
- (id)pointerFunctions;	// 0x35578b61
- (void)raiseCountUnderflowException;	// 0x35578d1d
- (void)rehash;	// 0x35578d61
- (unsigned)rehashAround:(unsigned)around;	// 0x355064f1
- (void)removeAllItems;	// 0x35578f01
- (void)removeItem:(const void *)item;	// 0x35505a91
@end

