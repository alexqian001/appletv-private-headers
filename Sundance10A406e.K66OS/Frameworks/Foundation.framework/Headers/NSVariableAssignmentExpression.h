/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSVariableExpression;

__attribute__((visibility("hidden")))
@interface NSVariableAssignmentExpression : NSExpression {
	NSVariableExpression *_assignmentVariable;	// 12 = 0xc
	NSExpression *_subexpression;	// 16 = 0x10
}
@property(readonly, retain) NSVariableExpression *assignmentVariable;	// G=0x355e7799; converted property
@property(readonly, retain) NSExpression *subexpression;	// G=0x355e77c9; converted property
- (id)initWithAssignmentExpression:(id)assignmentExpression expression:(id)expression;	// 0x355e747d
- (id)initWithAssignmentVariable:(id)assignmentVariable expression:(id)expression;	// 0x355e73f9
- (id)initWithCoder:(id)coder;	// 0x355e75d1
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x355e7acd
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x355e7a35
// converted property getter: - (id)assignmentVariable;	// 0x355e7799
- (id)copyWithZone:(NSZone *)zone;	// 0x355e7705
- (void)dealloc;	// 0x355e7395
- (void)encodeWithCoder:(id)coder;	// 0x355e74f5
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x355e799d
- (unsigned)hash;	// 0x355e7955
- (BOOL)isEqual:(id)equal;	// 0x355e7899
- (id)predicateFormat;	// 0x355e77d9
// converted property getter: - (id)subexpression;	// 0x355e77c9
- (id)variable;	// 0x355e77a9
@end

