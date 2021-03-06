/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
	NSMutableArray *mObjects;	// 4 = 0x4
}
+ (id)collection;	// 0x379684fd
+ (id)collectionWithObject:(id)object;	// 0x37acc60d
- (id)init;	// 0x37936ef5
- (id)initWithObject:(id)object;	// 0x37a28cc5
- (unsigned)addObject:(id)object;	// 0x37937735
- (unsigned)addOrEquivalentObject:(id)object;	// 0x3793c205
- (id)copyWithZone:(NSZone *)zone;	// 0x37a5bab5
- (unsigned)count;	// 0x37937b11
- (void)dealloc;	// 0x379401ed
- (unsigned)hash;	// 0x37acc659
- (unsigned)indexOfObject:(id)object;	// 0x3793c241
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3794e495
- (BOOL)isEqual:(id)equal;	// 0x37a26941
- (BOOL)isEqualToCollection:(id)collection;	// 0x37a29055
- (id)objectAtIndex:(unsigned)index;	// 0x37947f71
- (void)removeAllObjects;	// 0x37acc679
- (void)removeObjectAtIndex:(unsigned)index;	// 0x37a7a421
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x37acc699
@end

