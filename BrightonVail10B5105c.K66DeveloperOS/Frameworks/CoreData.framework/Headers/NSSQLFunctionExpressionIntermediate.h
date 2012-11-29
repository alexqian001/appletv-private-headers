/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLExpressionIntermediate.h"


@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate {
}
+ (BOOL)functionIsAcceptableAsAggregate:(id)aggregate;	// 0x362f1e9d
- (id)_generateArgumentStringForCollection:(id)collection inContext:(id)context;	// 0x362f2039
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)symbol forExpression:(id)expression inContext:(id)context;	// 0x362f29fd
- (id)_generateDistinctStringInContext:(id)context;	// 0x362f5441
- (id)_generateMathStringWithSymbol:(id)symbol inContext:(id)context;	// 0x362f2251
- (id)_generateSQLForCountInContext:(id)context;	// 0x362f4081
- (id)_generateSelectForAggregateStringWithSymbol:(id)symbol argument:(id)argument inContext:(id)context;	// 0x362f30c9
- (id)_generateType4SQLForSymbol:(id)symbol inContext:(id)context;	// 0x362f4a19
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)symbol forAttribute:(id)attribute inContext:(id)context;	// 0x362f24fd
- (id)generateSQLStringInContext:(id)context;	// 0x362f5671
- (id)generateType1SQLString:(id)string inContext:(id)context;	// 0x362f3805
- (id)generateType2SQLString:(id)string inContext:(id)context;	// 0x362f3b09
- (id)generateType3SQLString:(id)string keypathOnly:(BOOL)only inContext:(id)context;	// 0x362f3dc9
- (BOOL)isFunctionScoped;	// 0x362f2035
@end
