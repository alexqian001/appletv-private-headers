/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSExpression.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSFetchRequestExpression : NSExpression {
@private
	void *_reserved1;	// 12 = 0xc
	void *_reserved2;	// 16 = 0x10
	void *_reserved3;	// 20 = 0x14
	void *_reserved4;	// 24 = 0x18
	NSExpression *_fetchRequest;	// 28 = 0x1c
	NSExpression *_managedObjectContext;	// 32 = 0x20
	fetchExpressionFlags _flags;	// 36 = 0x24
}
+ (id)expressionForFetch:(id)fetch context:(id)context countOnly:(BOOL)only;	// 0x342fb7b9
- (id)initForFetch:(id)fetch context:(id)context countOnly:(BOOL)only;	// 0x342fb865
- (id)initWithCoder:(id)coder;	// 0x342fb649
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x342fb8fd
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x342fb271
- (id)contextExpression;	// 0x342fb249
- (id)copyWithZone:(NSZone *)zone;	// 0x342fb5e1
- (void)dealloc;	// 0x342fb809
- (id)description;	// 0x342fb44d
- (void)encodeWithCoder:(id)coder;	// 0x342fb721
- (unsigned)expressionType;	// 0x342fb26d
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x342fb4d5
- (unsigned)hash;	// 0x342fb335
- (BOOL)isCountOnlyRequest;	// 0x342fb259
- (BOOL)isEqual:(id)equal;	// 0x342fb375
- (id)predicateFormat;	// 0x342fb461
- (id)requestExpression;	// 0x342fb239
@end
