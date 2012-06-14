/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSOrderedSet.h> // Unknown library


@interface NSOrderedSet (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x31d67a09
- (id)_countForKeyPath:(id)keyPath;	// 0x31d67a79
- (id)_maxForKeyPath:(id)keyPath;	// 0x31d67ab1
- (id)_minForKeyPath:(id)keyPath;	// 0x31d67b29
- (id)_sumForKeyPath:(id)keyPath;	// 0x31d6792d
- (void)setValue:(id)value forKey:(id)key;	// 0x31d67e51
- (id)valueForKey:(id)key;	// 0x31d67ba1
- (id)valueForKeyPath:(id)keyPath;	// 0x31d67eed
@end

@interface NSOrderedSet (NSKeyValueCodingPrivate)
- (id)_mutableArrayValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31d68ed5
- (id)_mutableOrderedSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31d68f05
- (id)_mutableSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31d68f35
- (void)_setValue:(id)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31d68f65
- (BOOL)_validateValue:(inout id *)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index error:(out id *)error;	// 0x31d68f99
- (id)_valueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x31d68ea5
@end

@interface NSOrderedSet (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x31d6f475
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x31d6f515
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x31d6f4c5
@end

@interface NSOrderedSet (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x31d89199
@end

@interface NSOrderedSet (NSPredicateSupport)
- (id)filteredOrderedSetUsingPredicate:(id)predicate;	// 0x31dc1785
@end
