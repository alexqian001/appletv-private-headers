/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
	unsigned _flags;	// 12 = 0xc
	NSSubstringPredicateOperator *_stringVersion;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x324d3791; converted property
@property(readonly, retain) NSSubstringPredicateOperator *stringVersion;	// G=0x324d3989; converted property
- (id)initWithCoder:(id)coder;	// 0x324d38dd
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier options:(unsigned)options;	// 0x3241645d
- (void)_setOptions:(unsigned)options;	// 0x324d37a1
- (id)copyWithZone:(NSZone *)zone;	// 0x324d37c1
- (void)dealloc;	// 0x32418a81
- (void)encodeWithCoder:(id)coder;	// 0x324d3935
// converted property getter: - (unsigned)flags;	// 0x324d3791
- (BOOL)isEqual:(id)equal;	// 0x324d382d
- (unsigned)options;	// 0x324d37b1
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x32417151
// converted property getter: - (id)stringVersion;	// 0x324d3989
- (id)symbol;	// 0x324d3a45
@end
