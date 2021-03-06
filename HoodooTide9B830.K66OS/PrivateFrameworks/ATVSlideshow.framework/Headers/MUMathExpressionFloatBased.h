/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionFloatBased : MUMathExpressionBase {
	FunctionInterpreter<float> *mInterpreter;	// 12 = 0xc
}
+ (float)evaluateString:(id)string error:(id *)error;	// 0x3219aded
+ (float)invalidResult;	// 0x3219b781
- (id)init;	// 0x3219b0e1
- (id)initWithString:(id)string error:(id *)error;	// 0x3219b0f5
- (void)cleanup;	// 0x3219b435
- (void)dealloc;	// 0x3219b3b5
- (float)evaluate;	// 0x3219b681
- (void)finalize;	// 0x3219b3f5
- (BOOL)isValueIllegal:(float)illegal;	// 0x3219b78d
- (void)resetAllVariables;	// 0x3219b639
- (void)setValue:(float)value forVariable:(id)variable;	// 0x3219b455
- (void)setVariableValues:(id)values;	// 0x3219b521
- (float)valueForVariable:(id)variable;	// 0x3219b4b9
@end

