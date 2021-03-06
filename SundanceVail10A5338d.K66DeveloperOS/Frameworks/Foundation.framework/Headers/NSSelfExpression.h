/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSSelfExpression : NSExpression {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3731d5cd
+ (id)defaultInstance;	// 0x373e509d
+ (void)initialize;	// 0x3733fc05
- (id)init;	// 0x3731d5dd
- (id)initWithCoder:(id)coder;	// 0x3733fdf1
- (id)_initPrivate;	// 0x3733fc39
- (BOOL)_isDeallocating;	// 0x373e50b5
- (BOOL)_tryRetain;	// 0x373e50b9
- (id)autorelease;	// 0x3733fc6d
- (id)copyWithZone:(NSZone *)zone;	// 0x37343ba9
- (void)encodeWithCoder:(id)coder;	// 0x373e50bd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x37342901
- (unsigned)hash;	// 0x373e513d
- (BOOL)isEqual:(id)equal;	// 0x3734015d
- (id)predicateFormat;	// 0x373e5145
- (oneway void)release;	// 0x3731d671
- (id)retain;	// 0x3731d66d
- (unsigned)retainCount;	// 0x373e50ad
@end

