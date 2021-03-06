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
- (id)initWithCoder:(id)coder;	// 0x310b8c91
- (id)initWithString:(id)string;	// 0x310b8dcd
- (id)constantValue;	// 0x310b8bb9
- (id)copyWithZone:(NSZone *)zone;	// 0x310b8e6d
- (void)dealloc;	// 0x310b8c49
- (void)encodeWithCoder:(id)coder;	// 0x310b8d35
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x310b8bc9
- (unsigned)hash;	// 0x310b8bcd
- (BOOL)isEqual:(id)equal;	// 0x310b8bed
- (id)predicateFormat;	// 0x310b8ba9
@end

