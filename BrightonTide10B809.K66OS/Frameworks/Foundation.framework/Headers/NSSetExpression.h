/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSSetExpression : NSExpression {
	NSExpression *_left;	// 12 = 0xc
	NSExpression *_right;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x31991cbd
- (id)initWithType:(unsigned)type leftExpression:(id)expression rightExpression:(id)expression3;	// 0x31991af5
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x319920d1
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x3199202d
- (id)copyWithZone:(NSZone *)zone;	// 0x31991db1
- (void)dealloc;	// 0x31991b6d
- (void)encodeWithCoder:(id)coder;	// 0x31991be5
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x319921c5
- (BOOL)isEqual:(id)equal;	// 0x31991e6d
- (id)leftExpression;	// 0x3199200d
- (id)predicateFormat;	// 0x31991f4d
- (id)rightExpression;	// 0x3199201d
@end
