/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSExpression : NSObject <NSCoding, NSCopying> {
	void *_reserved;	// 4 = 0x4
	unsigned _expressionType;	// 8 = 0x8
}
@property(readonly, assign) unsigned expressionType;	// G=0x360aa465; converted property
+ (id)_newKeyPathExpressionForString:(id)string;	// 0x360bf505
+ (id)expressionForAggregate:(id)aggregate;	// 0x36153989
+ (id)expressionForBlock:(id)block arguments:(id)arguments;	// 0x36153c15
+ (id)expressionForConstantValue:(id)constantValue;	// 0x361538b1
+ (id)expressionForEvaluatedObject;	// 0x360a6a21
+ (id)expressionForFunction:(id)function arguments:(id)arguments;	// 0x360ac415
+ (id)expressionForFunction:(id)function selectorName:(id)name arguments:(id)arguments;	// 0x36153a25
+ (id)expressionForIntersectSet:(id)intersectSet with:(id)with;	// 0x36153b6d
+ (id)expressionForKeyPath:(id)keyPath;	// 0x360bf499
+ (id)expressionForMinusSet:(id)minusSet with:(id)with;	// 0x36153bc1
+ (id)expressionForSubquery:(id)subquery usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x361539d1
+ (id)expressionForSymbolicString:(id)symbolicString;	// 0x36153941
+ (id)expressionForTernaryWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x36153ac5
+ (id)expressionForUnionSet:(id)unionSet with:(id)with;	// 0x36153b19
+ (id)expressionForVariable:(id)variable;	// 0x361538f9
+ (id)expressionForVariableNameAssignment:(id)variableNameAssignment expression:(id)expression;	// 0x36153a79
+ (id)expressionWithFormat:(id)format;	// 0x36153821
+ (id)expressionWithFormat:(id)format argumentArray:(id)array;	// 0x361537bd
+ (id)expressionWithFormat:(id)format arguments:(void *)arguments;	// 0x3615384d
- (id)initWithCoder:(id)coder;	// 0x36153cf1
- (id)initWithExpressionType:(unsigned)expressionType;	// 0x360a6acd
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x36154025
- (BOOL)_shouldUseParensWithDescription;	// 0x36154021
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x360aa78d
- (id)arguments;	// 0x36153edd
- (id)collection;	// 0x36153f6d
- (id)constantValue;	// 0x36153e29
- (id)copyWithZone:(NSZone *)zone;	// 0x36153d89
- (id)description;	// 0x36153dd1
- (void)encodeWithCoder:(id)coder;	// 0x36153c69
- (id)expressionBlock;	// 0x36153ffd
// converted property getter: - (unsigned)expressionType;	// 0x360aa465
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x36153dad
- (id)falseExpression;	// 0x36153fd9
- (id)function;	// 0x36153e71
- (id)keyPath;	// 0x36153e05
- (id)leftExpression;	// 0x36153f01
- (id)operand;	// 0x36153e95
- (id)predicate;	// 0x36153f49
- (id)predicateFormat;	// 0x36153de1
- (id)rightExpression;	// 0x36153f25
- (SEL)selector;	// 0x36153eb9
- (id)subexpression;	// 0x36153f91
- (id)trueExpression;	// 0x36153fb5
- (id)variable;	// 0x36153e4d
@end

