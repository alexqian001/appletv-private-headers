/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression {
@private
	NSString *_token;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x337228f9
- (id)initWithString:(id)string;	// 0x337227a5
- (id)constantValue;	// 0x33722a49
- (id)copyWithZone:(NSZone *)zone;	// 0x337229ad
- (void)dealloc;	// 0x337229ed
- (void)encodeWithCoder:(id)coder;	// 0x33722851
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x33722ae1
- (unsigned)hash;	// 0x33722ac1
- (BOOL)isEqual:(id)equal;	// 0x33722a59
- (id)predicateFormat;	// 0x33722a39
@end

