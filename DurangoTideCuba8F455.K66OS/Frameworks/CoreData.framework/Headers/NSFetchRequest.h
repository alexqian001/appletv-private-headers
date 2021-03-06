/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCopying.h"

@class NSPredicate, NSEntityDescription, NSArray;

@interface NSFetchRequest : NSObject <NSCoding, NSCopying> {
@private
	NSArray *_affectedStores;	// 4 = 0x4
	NSArray *_groupByProperties;	// 8 = 0x8
	NSPredicate *_havingPredicate;	// 12 = 0xc
	unsigned _offset;	// 16 = 0x10
	NSArray *_valuesToFetch;	// 20 = 0x14
	NSEntityDescription *_entity;	// 24 = 0x18
	NSPredicate *_predicate;	// 28 = 0x1c
	NSArray *_sortDescriptors;	// 32 = 0x20
	unsigned _batchSize;	// 36 = 0x24
	unsigned long _fetchLimit;	// 40 = 0x28
	NSArray *_relationshipKeyPathsForPrefetching;	// 44 = 0x2c
	fetchRequestFlags _flags;	// 48 = 0x30
}
@property(retain) NSArray *affectedStores;	// G=0x33e26735; S=0x33e8af61; converted property
@property(retain) NSEntityDescription *entity;	// G=0x33e25801; S=0x33e243c9; converted property
@property(assign) unsigned fetchBatchSize;	// G=0x33e27bd5; S=0x33e56ecd; converted property
@property(assign) unsigned fetchLimit;	// G=0x33e25991; S=0x33e590f1; converted property
@property(assign) unsigned fetchOffset;	// G=0x33e2a639; S=0x33e89ff1; converted property
@property(retain) NSArray *groupByProperties;	// G=0x33e29b11; S=0x33e8a79d; converted property
@property(retain) NSPredicate *havingPredicate;	// G=0x33e29115; S=0x33e8a005; converted property
@property(assign) BOOL includesPendingChanges;	// G=0x33e89fcd; S=0x33e59115; converted property
@property(assign) BOOL includesPropertyValues;	// G=0x33e259a1; S=0x33e58e61; converted property
@property(assign) BOOL includesSubentities;	// G=0x33e290e9; S=0x33e89fb1; converted property
@property(retain) NSPredicate *predicate;	// G=0x33e290d9; S=0x33e36b79; converted property
@property(retain) id propertiesToFetch;	// G=0x33e27bf9; S=0x33e3a6b9; converted property
@property(retain) NSArray *relationshipKeyPathsForPrefetching;	// G=0x33e27ea9; S=0x33e656d5; converted property
@property(assign) unsigned resultType;	// G=0x33e258a5; S=0x33e3ae45; converted property
@property(assign) BOOL returnsDistinctResults;	// G=0x33e3bf3d; S=0x33e8a131; converted property
@property(assign) BOOL returnsObjectsAsFaults;	// G=0x33e27be5; S=0x33e57f9d; converted property
@property(retain) NSArray *sortDescriptors;	// G=0x33e2a599; S=0x33e244dd; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33e89fad
+ (id)fetchRequestWithEntityName:(id)entityName;	// 0x33e8a089
+ (void)initialize;	// 0x33e509cd
- (id)init;	// 0x33e24001
- (id)initWithCoder:(id)coder;	// 0x33e65b0d
- (id)initWithEntityName:(id)entityName;	// 0x33e8a0cd
- (void)_incrementInUseCounter;	// 0x33e52a1d
- (BOOL)_isEditable;	// 0x33e244c5
- (void)_resolveEntityWithContext:(id)context;	// 0x33e2572d
- (void)_throwIfNotEditable;	// 0x33e24475
// converted property getter: - (id)affectedStores;	// 0x33e26735
- (id)copyWithZone:(NSZone *)zone;	// 0x33e58d25
- (void)dealloc;	// 0x33e31f75
- (id)description;	// 0x33e8a161
- (void)encodeWithCoder:(id)coder;	// 0x33e8a57d
// converted property getter: - (id)entity;	// 0x33e25801
- (id)entityName;	// 0x33e8a045
// converted property getter: - (unsigned)fetchBatchSize;	// 0x33e27bd5
// converted property getter: - (unsigned)fetchLimit;	// 0x33e25991
// converted property getter: - (unsigned)fetchOffset;	// 0x33e2a639
// converted property getter: - (id)groupByProperties;	// 0x33e29b11
- (BOOL)hasChanges;	// 0x33e8a001
- (unsigned)hash;	// 0x33e8a559
// converted property getter: - (id)havingPredicate;	// 0x33e29115
// converted property getter: - (BOOL)includesPendingChanges;	// 0x33e89fcd
// converted property getter: - (BOOL)includesPropertyValues;	// 0x33e259a1
// converted property getter: - (BOOL)includesSubentities;	// 0x33e290e9
- (BOOL)isEqual:(id)equal;	// 0x33e8a679
// converted property getter: - (id)predicate;	// 0x33e290d9
// converted property getter: - (id)propertiesToFetch;	// 0x33e27bf9
// converted property getter: - (id)relationshipKeyPathsForPrefetching;	// 0x33e27ea9
- (unsigned)requestType;	// 0x33e26731
// converted property getter: - (unsigned)resultType;	// 0x33e258a5
// converted property getter: - (BOOL)returnsDistinctResults;	// 0x33e3bf3d
// converted property getter: - (BOOL)returnsObjectsAsFaults;	// 0x33e27be5
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x33e8af61
// converted property setter: - (void)setEntity:(id)entity;	// 0x33e243c9
// converted property setter: - (void)setFetchBatchSize:(unsigned)size;	// 0x33e56ecd
// converted property setter: - (void)setFetchLimit:(unsigned)limit;	// 0x33e590f1
// converted property setter: - (void)setFetchOffset:(unsigned)offset;	// 0x33e89ff1
// converted property setter: - (void)setGroupByProperties:(id)properties;	// 0x33e8a79d
// converted property setter: - (void)setHavingPredicate:(id)predicate;	// 0x33e8a005
// converted property setter: - (void)setIncludesPendingChanges:(BOOL)changes;	// 0x33e59115
// converted property setter: - (void)setIncludesPropertyValues:(BOOL)values;	// 0x33e58e61
// converted property setter: - (void)setIncludesSubentities:(BOOL)subentities;	// 0x33e89fb1
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x33e36b79
// converted property setter: - (void)setPropertiesToFetch:(id)fetch;	// 0x33e3a6b9
// converted property setter: - (void)setRelationshipKeyPathsForPrefetching:(id)prefetching;	// 0x33e656d5
// converted property setter: - (void)setResultType:(unsigned)type;	// 0x33e3ae45
// converted property setter: - (void)setReturnsDistinctResults:(BOOL)results;	// 0x33e8a131
// converted property setter: - (void)setReturnsObjectsAsFaults:(BOOL)faults;	// 0x33e57f9d
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x33e244dd
// converted property getter: - (id)sortDescriptors;	// 0x33e2a599
- (id)stores;	// 0x33e8a11d
@end

