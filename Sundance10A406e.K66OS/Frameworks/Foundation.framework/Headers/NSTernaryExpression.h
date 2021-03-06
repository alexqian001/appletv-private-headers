/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSPredicate;

@interface NSTernaryExpression : NSExpression {
	NSPredicate *_predicate;	// 12 = 0xc
	NSExpression *_trueExpression;	// 16 = 0x10
	NSExpression *_falseExpression;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *falseExpression;	// G=0x355e715d; converted property
@property(readonly, retain) NSPredicate *predicate;	// G=0x355e713d; converted property
@property(readonly, retain) NSExpression *trueExpression;	// G=0x355e714d; converted property
- (id)initWithCoder:(id)coder;	// 0x355e6da9
- (id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x355e6b89
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x355e7225
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x355e716d
- (id)copyWithZone:(NSZone *)zone;	// 0x355e6ec5
- (void)dealloc;	// 0x355e6c1d
- (void)encodeWithCoder:(id)coder;	// 0x355e6cad
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x355e7329
// converted property getter: - (id)falseExpression;	// 0x355e715d
- (BOOL)isEqual:(id)equal;	// 0x355e6f89
// converted property getter: - (id)predicate;	// 0x355e713d
- (id)predicateFormat;	// 0x355e709d
// converted property getter: - (id)trueExpression;	// 0x355e714d
@end

