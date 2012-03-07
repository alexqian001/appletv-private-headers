/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
@private
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x32083a41
+ (id)_proxyShare;	// 0x32083a51
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32083a81
- (void)_proxyNonGCFinalize;	// 0x32083afd
- (void)addObject:(id)object;	// 0x32083bb1
- (void)addObjectsFromArray:(id)array;	// 0x32083c7d
- (unsigned)count;	// 0x32083b51
- (void)intersectSet:(id)set;	// 0x32083d4d
- (id)member:(id)member;	// 0x32083b71
- (void)minusSet:(id)set;	// 0x32083dd5
- (id)objectEnumerator;	// 0x32083b91
- (void)removeAllObjects;	// 0x32083e5d
- (void)removeObject:(id)object;	// 0x32083efd
- (void)setSet:(id)set;	// 0x32083fc9
- (void)unionSet:(id)set;	// 0x32084051
@end
