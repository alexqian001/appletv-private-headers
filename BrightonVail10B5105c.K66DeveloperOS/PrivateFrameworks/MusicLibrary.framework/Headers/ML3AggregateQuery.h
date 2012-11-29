/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSString;

@interface ML3AggregateQuery : ML3Query {
	Class _aggregateEntityClass;	// 32 = 0x20
	NSString *_foreignPersistentIDProperty;	// 36 = 0x24
}
@property(readonly, assign) Class aggregateEntityClass;	// G=0x34067695; @synthesize=_aggregateEntityClass
@property(readonly, assign) NSString *foreignPersistentIDProperty;	// G=0x340676a9; @synthesize=_foreignPersistentIDProperty
- (id)initWithCoder:(id)coder;	// 0x34067421
- (id)initWithUnitQuery:(id)unitQuery aggregateEntityClass:(Class)aClass foreignPersistentIDProperty:(id)property;	// 0x3403a5b9
- (void).cxx_destruct;	// 0x34042c01
// declared property getter: - (Class)aggregateEntityClass;	// 0x34067695
- (unsigned)countOfEntities;	// 0x3406762d
- (void)dealloc;	// 0x34042bbd
- (BOOL)distinctPersistentIDProperty;	// 0x3403a7ad
- (void)encodeWithCoder:(id)coder;	// 0x34067501
- (Class)entityClass;	// 0x340406dd
// declared property getter: - (id)foreignPersistentIDProperty;	// 0x340676a9
- (BOOL)hasEntities;	// 0x340675c5
- (id)persistentIDProperty;	// 0x3403aaad
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x3403a7b1
@end
