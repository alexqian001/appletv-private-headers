/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSCompoundPredicateOperator : NSPredicateOperator {
}
+ (id)andPredicateOperator;	// 0x30289ebd
+ (id)notPredicateOperator;	// 0x3032b645
+ (id)orPredicateOperator;	// 0x3028b8ed
- (id)initWithCoder:(id)coder;	// 0x3032b70d
- (id)copyWithZone:(NSZone *)zone;	// 0x3032b78d
- (void)encodeWithCoder:(id)coder;	// 0x3032b68d
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object;	// 0x3032b831
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;	// 0x3028b935
- (id)predicateFormat;	// 0x3032b79d
- (id)symbol;	// 0x3032b7ad
@end

