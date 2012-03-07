/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import "AppleTV-Structs.h"
#import "SQLitePredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SQLiteCompoundPredicate : SQLitePredicate <NSCopying> {
@private
	NSString *_combinationOperation;	// 4 = 0x4
	NSArray *_predicates;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *predicates;	// G=0x33be590d; @synthesize=_predicates
+ (id)predicateMatchingAllPredicates:(id)predicates;	// 0x33be529d
+ (id)predicateMatchingAnyPredicates:(id)predicates;	// 0x33be5325
+ (id)predicateWithProperty:(id)property values:(id)values comparisonType:(int)type;	// 0x33be53ad
- (id)SQLForEntityClass:(Class)entityClass;	// 0x33be56b1
- (id)SQLJoinClausesForEntityClass:(Class)entityClass;	// 0x33be5821
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x33be54d5
- (id)copyWithZone:(NSZone *)zone;	// 0x33be54c5
- (void)dealloc;	// 0x33be523d
- (unsigned)hash;	// 0x33be5581
- (BOOL)isEqual:(id)equal;	// 0x33be55f1
// declared property getter: - (id)predicates;	// 0x33be590d
@end
