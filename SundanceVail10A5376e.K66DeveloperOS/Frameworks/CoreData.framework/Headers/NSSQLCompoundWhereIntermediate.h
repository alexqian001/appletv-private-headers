/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
	NSMutableArray *_subclauses;	// 12 = 0xc
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x35bf8921
- (id)_generateMulticlauseStringInContext:(id)context;	// 0x35bf8f7d
- (void)dealloc;	// 0x35bf920d
- (id)generateSQLStringInContext:(id)context;	// 0x35bf8cd5
- (BOOL)isOrScoped;	// 0x35bf910d
@end
