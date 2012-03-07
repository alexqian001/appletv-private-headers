/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "_NSNotifyingWrapperMutableSet.h"

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {
@private
	_NSFaultingMutableSetMutationMethods *_mutationMethods;	// 16 = 0x10
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set mutationMethods:(id)methods;	// 0x33e6b985
- (void)addObject:(id)object;	// 0x33e6bbbd
- (void)addObjectsFromArray:(id)array;	// 0x33e6bef9
- (void)dealloc;	// 0x33e6b9d5
- (void)intersectSet:(id)set;	// 0x33e6bc69
- (void)minusSet:(id)set;	// 0x33e6be95
- (void)removeAllObjects;	// 0x33e6bb59
- (void)removeObject:(id)object;	// 0x33e6baad
- (void)setSet:(id)set;	// 0x33e6ba21
- (void)unionSet:(id)set;	// 0x33e6be31
@end
