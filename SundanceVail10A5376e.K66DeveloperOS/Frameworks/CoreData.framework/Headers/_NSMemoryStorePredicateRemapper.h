/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectContext;

@interface _NSMemoryStorePredicateRemapper : NSObject {
	NSManagedObjectContext *_context;	// 4 = 0x4
}
+ (id)defaultInstance;	// 0x35bfe7e5
- (id)init;	// 0x35bfe82d
- (id)initWithContext:(id)context;	// 0x35bfe859
- (id)createPredicateForFetchFromPredicate:(id)predicate;	// 0x35bfe8e5
- (id)createPredicateForFetchFromPredicate:(id)predicate withContext:(id)context;	// 0x35bfe8f9
- (void)dealloc;	// 0x35bfe899
- (void)visitPredicate:(id)predicate;	// 0x35bfe9a5
- (void)visitPredicateExpression:(id)expression;	// 0x35bfeb4d
@end
