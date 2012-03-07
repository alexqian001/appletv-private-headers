/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import "AppleTV-Structs.h"
#import "SQLitePropertyPredicate.h"

@class SQLiteQuery, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SQLiteContainsPredicate : SQLitePropertyPredicate <NSCopying> {
@private
	BOOL _negative;	// 8 = 0x8
	SQLiteQuery *_query;	// 12 = 0xc
	NSString *_queryProperty;	// 16 = 0x10
	id _values;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isNegative) BOOL negative;	// G=0x34340fdd; @synthesize=_negative
@property(readonly, assign, nonatomic) SQLiteQuery *query;	// G=0x34340fed; @synthesize=_query
@property(readonly, assign, nonatomic) NSString *queryProperty;	// G=0x34340ffd; @synthesize=_queryProperty
@property(readonly, assign, nonatomic) NSArray *values;	// G=0x3434100d; @synthesize=_values
+ (id)containsPredicateWithProperty:(id)property query:(id)query queryProperty:(id)property3;	// 0x34340b19
+ (id)containsPredicateWithProperty:(id)property values:(id)values;	// 0x34340a79
+ (id)doesNotContainPredicateWithProperty:(id)property values:(id)values;	// 0x34340bdd
- (id)SQLForEntityClass:(Class)entityClass;	// 0x34340e69
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x34340c8d
- (id)copyWithZone:(NSZone *)zone;	// 0x34340c7d
- (void)dealloc;	// 0x34340a05
- (BOOL)isEqual:(id)equal;	// 0x34340d5d
// declared property getter: - (BOOL)isNegative;	// 0x34340fdd
// declared property getter: - (id)query;	// 0x34340fed
// declared property getter: - (id)queryProperty;	// 0x34340ffd
// declared property getter: - (id)values;	// 0x3434100d
@end
