/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableSet : NSKeyValueMutableSet {
@private
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x302d0611
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x302d0621
- (void)_proxyNonGCFinalize;	// 0x302d0679
- (void)addObject:(id)object;	// 0x302d07a9
- (void)addObjectsFromArray:(id)array;	// 0x302d0821
- (unsigned)count;	// 0x302d06b9
- (void)intersectSet:(id)set;	// 0x302d0895
- (id)member:(id)member;	// 0x302d06f5
- (void)minusSet:(id)set;	// 0x302d08d5
- (id)objectEnumerator;	// 0x302d0735
- (void)removeAllObjects;	// 0x302d0915
- (void)removeObject:(id)object;	// 0x302d0951
- (void)setSet:(id)set;	// 0x302d0991
- (void)unionSet:(id)set;	// 0x302d09e9
@end
