/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSPredicate;

@interface NSSubqueryExpression : NSExpression {
@private
	NSExpression *_collection;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSPredicate *_subpredicate;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *collection;	// G=0x327f61a5; converted property
@property(readonly, retain) NSExpression *variableExpression;	// G=0x327f61b5; converted property
- (id)initWithCoder:(id)coder;	// 0x327f647d
- (id)initWithExpression:(id)expression usingIteratorExpression:(id)expression2 predicate:(id)predicate;	// 0x327f66f9
- (id)initWithExpression:(id)expression usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x327f67dd
- (BOOL)_shouldUseParensWithDescription;	// 0x327f61d5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x327f61d9
// converted property getter: - (id)collection;	// 0x327f61a5
- (id)copyWithZone:(NSZone *)zone;	// 0x327f68a9
- (void)dealloc;	// 0x327f668d
- (void)encodeWithCoder:(id)coder;	// 0x327f65a9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x327f6955
- (unsigned)hash;	// 0x327f62d1
- (BOOL)isEqual:(id)equal;	// 0x327f6311
- (id)predicate;	// 0x327f61c5
- (id)predicateFormat;	// 0x327f63e5
- (id)variable;	// 0x327f63c1
// converted property getter: - (id)variableExpression;	// 0x327f61b5
@end
