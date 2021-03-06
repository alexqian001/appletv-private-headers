/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"


@interface NSSubstringPredicateOperator : NSStringPredicateOperator {
@private
	unsigned _position;	// 16 = 0x10
}
@property(readonly, assign) unsigned position;	// G=0x327fa939; converted property
- (id)initWithCoder:(id)coder;	// 0x327faab1
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant position:(unsigned)position;	// 0x327fa949
- (void)encodeWithCoder:(id)coder;	// 0x327fab4d
- (BOOL)isEqual:(id)equal;	// 0x327fa9e1
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x327fabe5
// converted property getter: - (unsigned)position;	// 0x327fa939
- (SEL)selector;	// 0x327fa92d
- (id)symbol;	// 0x327fa989
@end

