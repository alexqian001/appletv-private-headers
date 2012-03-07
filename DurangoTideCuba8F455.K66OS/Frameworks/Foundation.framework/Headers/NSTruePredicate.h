/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPredicate.h"
#import "Foundation-Structs.h"


@interface NSTruePredicate : NSPredicate {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x310b4739
+ (id)defaultInstance;	// 0x3100e339
+ (void)initialize;	// 0x31026cc1
- (id)initWithCoder:(id)coder;	// 0x310b478d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x310b4771
- (id)autorelease;	// 0x310b4755
- (id)copyWithZone:(NSZone *)zone;	// 0x310b4759
- (void)encodeWithCoder:(id)coder;	// 0x310b47e1
- (BOOL)evaluateWithObject:(id)object substitutionVariables:(id)variables;	// 0x310b476d
- (unsigned)hash;	// 0x310b475d
- (BOOL)isEqual:(id)equal;	// 0x3100e345
- (id)predicateFormat;	// 0x310b4761
- (void)release;	// 0x310b4751
- (id)retain;	// 0x310b4745
- (unsigned)retainCount;	// 0x310b4749
@end
