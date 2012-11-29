/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableArray : NSKeyValueMutableArray {
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x360f52a5
- (id)_nonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x360f53fd
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x360f52b5
- (void)_proxyNonGCFinalize;	// 0x360f530d
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x360f5389
- (void)addObject:(id)object;	// 0x360f54d9
- (unsigned)count;	// 0x360f534d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x360f5441
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x360f5555
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x360f55fd
- (id)objectAtIndex:(unsigned)index;	// 0x360f5479
- (id)objectsAtIndexes:(id)indexes;	// 0x360f54a9
- (void)removeLastObject;	// 0x360f5791
- (void)removeObjectAtIndex:(unsigned)index;	// 0x360f57bd
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x360f57ed
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x360f581d
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x360f5851
@end
