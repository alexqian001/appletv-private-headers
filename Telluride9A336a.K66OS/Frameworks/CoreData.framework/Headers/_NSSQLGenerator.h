/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableArray, NSMutableString, NSSQLAdapter, NSMutableDictionary, NSSQLStatement, NSSQLStoreMappingGenerator;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : NSObject {
@private
	NSSQLStatement *_statement;	// 4 = 0x4
	NSSQLAdapter *_adapter;	// 8 = 0x8
	NSMutableString *_sqlString;	// 12 = 0xc
	NSMutableDictionary *_aliasMap;	// 16 = 0x10
	NSSQLStoreMappingGenerator *_aliasNamer;	// 20 = 0x14
	NSMutableString *_joinClause;	// 24 = 0x18
	NSMutableString *_whereClause;	// 28 = 0x1c
	NSMutableString *_selectList;	// 32 = 0x20
	NSMutableString *_orderByClause;	// 36 = 0x24
	BOOL _allowToManyKeyPath;	// 40 = 0x28
	BOOL _useDistinct;	// 41 = 0x29
	BOOL _autoDistinct;	// 42 = 0x2a
	unsigned _scopedByORPredicate;	// 44 = 0x2c
	NSMutableArray *_comparisonPredicateScopedItem;	// 48 = 0x30
}
@property(assign) BOOL autoDistinct;	// G=0x323341d9; S=0x323341e9; converted property
@property(readonly, retain) NSMutableString *sqlString;	// G=0x323341b9; converted property
@property(readonly, retain) NSMutableString *whereClause;	// G=0x323341c9; converted property
+ (void)initialize;	// 0x32338021
- (id)initWithStatement:(id)statement forAdapter:(id)adapter;	// 0x3233b595
- (void)_addBindVarForConstVal1:(id)constVal1;	// 0x32334b91
- (void)_addBindVarForConstVal2:(id)constVal2;	// 0x32334979
- (void)_appendWhereClauseForConstVal:(id)constVal;	// 0x32334e61
- (void)_appendWhereClauseForConstantCollection:(id)constantCollection;	// 0x32339f85
- (void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;	// 0x3233a08d
- (BOOL)_isForeignObjectExpression:(id)expression;	// 0x32337e21
- (BOOL)_isNullExpression:(id)expression;	// 0x32337dc5
- (id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;	// 0x32337065
- (id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x323379f5
- (void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;	// 0x32337915
- (void)_prepareConst:(id)aConst inManyToMany:(id)many;	// 0x323376f1
- (void)_prepareConst:(id)aConst inToMany:(id)many;	// 0x3233778d
- (BOOL)_prepareFunctionExpression:(id)expression;	// 0x32337d0d
- (void)_preparePredicate:(id)predicate;	// 0x32338079
- (void)_preparePredicateExpression:(id)expression;	// 0x32339da9
- (void)_preparePredicateOperator:(id)anOperator;	// 0x3233b4d1
- (void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;	// 0x32337b35
- (void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;	// 0x32338ed1
- (id)_reducedSubpredicates:(id)subpredicates;	// 0x32338845
- (id)_retainedPrimaryKeyNumberForObject:(id)object;	// 0x323347b5
- (id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID *)objectID;	// 0x32334759
- (void)_startSQL:(id)sql;	// 0x3233435d
- (id)addJoinForDirectToManyToMany:(id)many;	// 0x323369d9
- (void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x32336685
- (void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x3233648d
- (void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;	// 0x323362b1
- (void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;	// 0x3233acc1
- (void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;	// 0x32336bdd
- (void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;	// 0x32336205
- (void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;	// 0x3233b169
- (void)appendJoinClauseToSQL;	// 0x32334659
- (void)appendLimitClauseToSQL:(unsigned)sql;	// 0x323346e9
- (void)appendOrderByClauseToSQL;	// 0x323346c9
- (void)appendSQL:(id)sql;	// 0x32334381
- (void)appendSelectListToSQLForRequest:(id)request;	// 0x323343a5
- (void)appendWhereClause:(id)clause;	// 0x32334339
- (void)appendWhereClauseToSQL;	// 0x32334679
// converted property getter: - (BOOL)autoDistinct;	// 0x323341d9
- (void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;	// 0x3233aac9
- (void)buildWhereClauseForRow:(id)row optLock:(long long)lock;	// 0x32336d15
- (void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;	// 0x32336095
- (void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;	// 0x32336c81
- (void)dealloc;	// 0x3233b725
- (BOOL)foldComparisonPredicate:(id)predicate;	// 0x32337f39
- (BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;	// 0x32336b61
- (void)prepareBeginsWith:(id)with;	// 0x32337d85
- (void)prepareBetween:(id)between;	// 0x32339281
- (void)prepareComparisonPredicate:(id)predicate;	// 0x32338b99
- (void)prepareCountStatementWithFetchRequest:(id)fetchRequest;	// 0x32337581
- (void)prepareDeleteStatementWithCorrelation:(id)correlation;	// 0x32335ec5
- (void)prepareDeleteStatementWithRow:(id)row;	// 0x32336e3d
- (void)prepareEndsWith:(id)with;	// 0x32337da5
- (void)prepareIn:(id)anIn swap:(BOOL)swap;	// 0x323397e9
- (void)prepareInsertStatementWithCorrelation:(id)correlation;	// 0x32335811
- (void)prepareInsertStatementWithRow:(id)row;	// 0x32334e99
- (void)prepareLike:(id)like;	// 0x32339039
- (void)prepareMatches:(id)matches;	// 0x32339781
- (void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;	// 0x32337461
- (void)prepareUpdateStatementWithCorrelation:(id)correlation;	// 0x32335b19
- (void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;	// 0x3233a195
// converted property setter: - (void)setAutoDistinct:(BOOL)distinct;	// 0x323341e9
// converted property getter: - (id)sqlString;	// 0x323341b9
- (unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;	// 0x323341f9
- (unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;	// 0x32334825
// converted property getter: - (id)whereClause;	// 0x323341c9
@end

