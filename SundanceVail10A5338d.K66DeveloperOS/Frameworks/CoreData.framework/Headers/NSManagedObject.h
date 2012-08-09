/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext, NSManagedObjectID;

@interface NSManagedObject : NSObject {
	int _cd_rc;	// 4 = 0x4
	unsigned long _cd_stateFlags;	// 8 = 0x8
	id _cd_rawData;	// 12 = 0xc
	id _cd_entity;	// 16 = 0x10
	NSManagedObjectContext *_cd_managedObjectContext;	// 20 = 0x14
	NSManagedObjectID *_cd_objectID;	// 24 = 0x18
	unsigned long _cd_extraFlags;	// 28 = 0x1c
	id _cd_observationInfo;	// 32 = 0x20
	id *_cd_snapshots;	// 36 = 0x24
	unsigned long _cd_lockingInfo;	// 40 = 0x28
	id _cd_queueReference;	// 44 = 0x2c
}
@property(retain) id observationInfo;	// G=0x365d3959; S=0x365d3949; converted property
+ (XXStruct_Iy8xuA *)_PFMOClassFactoryData;	// 0x36593699
+ (id)_PFPlaceHolderSingleton;	// 0x365dd2fd
+ (id)_PFPlaceHolderSingleton_core;	// 0x365d2c6d
+ (void)_entityDeallocated;	// 0x3659a941
+ (BOOL)_hasOverriddenAwake;	// 0x365dd6e1
+ (void)_initializeAccessorStubs;	// 0x365ddfe1
+ (void)_initializePrimitiveAccessorStubs;	// 0x365ddb69
+ (BOOL)_isGeneratedClass;	// 0x3659068d
+ (BOOL)_isGeneratedClass_1;	// 0x365dd3a9
+ (void)_release_1;	// 0x3659aa1d
+ (id)_retain_1;	// 0x365dd6b5
+ (char *)_transientPropertiesChangesMask__;	// 0x365d2c7d
+ (BOOL)_useFastValidationMethod;	// 0x365dd3ad
+ (id)alloc;	// 0x365d2c81
+ (unsigned)allocBatch:(id *)batch withEntity:(id)entity count:(unsigned)count;	// 0x365dd3b1
+ (id)allocWithEntity:(id)entity;	// 0x36591105
+ (id)allocWithZone:(NSZone *)zone;	// 0x365d2c91
+ (id)allocWithZone_10_4:(NSZone *)zone_10_4;	// 0x365d2ca9
+ (id)alloc_10_4;	// 0x365d2ca1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x365d8549
+ (id)batchAllocateWithEntity:(id)entity insertIntoManagedObjectContext:(id)context count:(unsigned)count;	// 0x365dd489
+ (Class)classForEntity:(id)entity;	// 0x36590691
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;	// 0x365a0c5d
+ (void)initialize;	// 0x3659e5fd
+ (void)release;	// 0x365dd6d9
+ (BOOL)resolveClassMethod:(SEL)method;	// 0x365de895
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x36591f71
+ (id)retain;	// 0x365dd3a1
- (id)init;	// 0x365d3561
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;	// 0x365912b1
- (id)_allProperties__;	// 0x365d79a5
- (int)_batch_release__;	// 0x36597eb5
- (id)_calculateDiffsBetweenOrderedSet:(id)set andOrderedSet:(id)set2;	// 0x365d717d
- (void)_chainNewError:(id)error toOriginalErrorDoublePointer:(id *)originalErrorDoublePointer;	// 0x365da3a1
- (id)_changedTransientProperties__;	// 0x365d7dd5
- (id)_changedValuesForCurrentEvent;	// 0x365d6485
- (void)_clearAllChanges__;	// 0x365d619d
- (void)_clearPendingChanges__;	// 0x365d6155
- (void)_clearRawPropertiesWithHint:(NSRange)hint;	// 0x36596cd9
- (void)_clearUnprocessedChanges__;	// 0x365d6185
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned)index newValue:(id)value;	// 0x365d6571
- (BOOL)_defaultValidation:(id *)validation error:(id *)error;	// 0x365dd08d
- (id)_descriptionValues;	// 0x365d2f99
- (void)_didChangeValue:(id)value forRelationship:(id)relationship named:(id)named withInverse:(id)inverse;	// 0x365d96e9
- (void)_excludeObject:(id)object fromPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x365d8281
- (id)_faultHandler__;	// 0x365d6649
- (id)_generateErrorDetailForKey:(id)key withValue:(id)value;	// 0x365da491
- (id)_generateErrorWithCode:(int)code andMessage:(id)message forKey:(id)key andValue:(id)value additionalDetail:(id)detail;	// 0x365da621
- (id)_genericMutableOrderedSetValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x365d914d
- (id)_genericMutableSetValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x365d9045
- (void)_genericUpdateFromSnapshot:(id)snapshot;	// 0x365db995
- (id)_genericValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x36593725
- (BOOL)_hasAnyObservers__;	// 0x365d6125
- (BOOL)_hasPendingChanges;	// 0x365d613d
- (BOOL)_hasRetainedStoreResources__;	// 0x365919c5
- (BOOL)_hasUnprocessedChanges__;	// 0x365d616d
- (id)_implicitObservationInfo;	// 0x365d8579
- (void)_includeObject:(id)object intoPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x365d7f7d
- (id)_initWithEntity:(id)entity withID:(id)anId withHandler:(id)handler withContext:(id)context;	// 0x3659120d
- (BOOL)_isDeallocating;	// 0x365d2f1d
- (BOOL)_isKindOfEntity:(id)entity;	// 0x365dafd1
- (BOOL)_isPendingDeletion__;	// 0x365d6225
- (BOOL)_isPendingInsertion__;	// 0x365d625d
- (BOOL)_isPendingUpdate__;	// 0x365d6295
- (BOOL)_isSuppressingChangeNotifications__;	// 0x365d61b5
- (BOOL)_isSuppressingKVO__;	// 0x365d61ed
- (BOOL)_isUnprocessedDeletion__;	// 0x365d62cd
- (BOOL)_isUnprocessedInsertion__;	// 0x365d6305
- (BOOL)_isUnprocessedUpdate__;	// 0x365d633d
- (BOOL)_isValidRelationshipDestination__;	// 0x365d9255
- (id)_lastSnapshot__;	// 0x365d6385
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property forChange:(unsigned)change onSet:(id)set;	// 0x365d94bd
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property oldDestination:(id)destination newDestination:(id)destination4;	// 0x365d92dd
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;	// 0x365d7a1d
- (id)_newChangedValuesForRefresh__;	// 0x365d6835
- (id)_newCommittedSnapshotValues;	// 0x365d7c31
- (id)_newNestedSaveChangedValuesForParent:(id)parent;	// 0x365d6c51
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;	// 0x365d7b61
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;	// 0x365d7b05
- (id)_newPropertiesForRetainedTypes:(unsigned *)retainedTypes andCopiedTypes:(unsigned *)types preserveFaults:(BOOL)faults;	// 0x365d664d
- (id)_newSetFromSet:(id)set byApplyingDiffs:(id)diffs;	// 0x365dc005
- (id)_newSnapshotForUndo__;	// 0x365d7479
- (void)_nilOutReservedCurrentEventSnapshot__;	// 0x365d644d
- (id)_originalSnapshot__;	// 0x365d64f9
- (id)_persistentProperties__;	// 0x365d7a95
- (void)_prepropagateDeleteForMerge;	// 0x365da38d
- (void)_propagateDelete;	// 0x365da379
- (void)_propagateDelete:(BOOL)aDelete;	// 0x365d9d05
- (id)_referenceQueue__;	// 0x36597ea5
- (id)_reservedCurrentEventSnapshot;	// 0x365d642d
- (void)_setGenericValue:(id)value forKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x365dd9c5
- (void)_setHasRetainedStoreResources__:(BOOL)_;	// 0x365919d9
- (void)_setLastSnapshot__:(id)_;	// 0x365d639d
- (void)_setObjectID__:(id)_;	// 0x365d64b5
- (void)_setOriginalSnapshot__:(id)_;	// 0x365d6511
- (void)_setPendingDeletion__:(BOOL)_;	// 0x365d6239
- (void)_setPendingInsertion__:(BOOL)_;	// 0x365d6271
- (void)_setPendingUpdate__:(BOOL)_;	// 0x365d62a9
- (void)_setSuppressingChangeNotifications__:(BOOL)_;	// 0x365d61c9
- (void)_setSuppressingKVO__:(BOOL)_;	// 0x365d6201
- (void)_setUnprocessedDeletion__:(BOOL)_;	// 0x365d62e1
- (void)_setUnprocessedInsertion__:(BOOL)_;	// 0x365d6319
- (void)_setUnprocessedUpdate__:(BOOL)_;	// 0x365d6351
- (void)_setVersionReference__:(unsigned)_;	// 0x365d64a5
- (unsigned)_stateFlags;	// 0x365d6375
- (id)_substituteEntityAndProperty:(id)property inString:(id)string;	// 0x365da4e9
- (id)_transientProperties__;	// 0x365d7bbd
- (BOOL)_tryRetain;	// 0x365d2eb9
- (void)_updateFromRefreshSnapshot:(id)refreshSnapshot includingTransients:(BOOL)transients;	// 0x365dc0d1
- (void)_updateFromSnapshot:(id)snapshot;	// 0x365dbcd1
- (void)_updateFromUndoSnapshot:(id)undoSnapshot;	// 0x365dcb8d
- (void)_updateToManyRelationship:(id)manyRelationship from:(id)from to:(id)to with:(id)with;	// 0x365db6a1
- (BOOL)_validateForSave:(id *)save;	// 0x365da8d1
- (BOOL)_validatePropertiesWithError:(id *)error;	// 0x365da765
- (BOOL)_validateValue:(id *)value forProperty:(id)property andKey:(id)key withIndex:(unsigned)index error:(id *)error;	// 0x365da949
- (unsigned)_versionReference__;	// 0x365d6495
- (void)awakeFromFetch;	// 0x36595701
- (void)awakeFromInsert;	// 0x365d4261
- (void)awakeFromSnapshotEvents:(unsigned)snapshotEvents;	// 0x365d4265
- (id)changedValues;	// 0x365d5751
- (id)changedValuesForCurrentEvent;	// 0x365d5d79
- (id)committedValuesForKeys:(id)keys;	// 0x365d52dd
- (void)dealloc;	// 0x365980b5
- (id)description;	// 0x365d3489
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x365d4ff9
- (void)didAccessValueForKey:(id)key;	// 0x365d3a25
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x365d3fa9
- (void)didChangeValueForKey:(id)key;	// 0x365d3d25
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x365d41ed
- (void)didFireFault;	// 0x365d6119
- (void)didRefresh:(BOOL)refresh;	// 0x365d6121
- (void)didSave;	// 0x365d4271
- (void)didTurnIntoFault;	// 0x36596e85
- (void)diffOrderedSets:(id)sets :(id)arg2 :(id *)arg3 :(id *)arg4 :(id *)arg5 :(id *)arg6 :(id *)arg7;	// 0x365db001
- (id)entity;	// 0x365d3605
- (unsigned)faultingState;	// 0x365d5d65
- (void)finalize;	// 0x365d2f31
- (BOOL)hasChanges;	// 0x365d60fd
- (BOOL)hasFaultForRelationshipNamed:(id)relationshipNamed;	// 0x365d36c1
- (unsigned)hash;	// 0x365d2cb1
- (BOOL)implementsSelector:(SEL)selector;	// 0x365dd26d
- (BOOL)isDeleted;	// 0x365d366d
- (BOOL)isEqual:(id)equal;	// 0x365d2d19
- (BOOL)isFault;	// 0x365d36ad
- (BOOL)isInserted;	// 0x365d3615
- (BOOL)isUpdated;	// 0x365d362d
- (id)managedObjectContext;	// 0x365d35d9
- (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x365dd0e9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x365dd141
- (id)mutableArrayValueForKey:(id)key;	// 0x365d4699
- (id)mutableOrderedSetValueForKey:(id)key;	// 0x365d491d
- (id)mutableSetValueForKey:(id)key;	// 0x365d47a9
- (id)objectID;	// 0x36596af1
// converted property getter: - (id)observationInfo;	// 0x365d3959
- (void)prepareForDeletion;	// 0x365d4269
- (id)primitiveValueForKey:(id)key;	// 0x365d4b25
- (oneway void)release;	// 0x365d2d71
- (BOOL)respondsToSelector:(SEL)selector;	// 0x365dd091
- (id)retain;	// 0x365d2d25
- (unsigned)retainCount;	// 0x365d2ea5
- (void)setNilValueForKey:(id)key;	// 0x365d5c95
// converted property setter: - (void)setObservationInfo:(id)info;	// 0x365d3949
- (void)setPrimitiveValue:(id)value forKey:(id)key;	// 0x365d4c1d
- (void)setValue:(id)value forKey:(id)key;	// 0x365d4a95
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x365d5b4d
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x365d4d1d
- (BOOL)validateForDelete:(id *)aDelete;	// 0x365d42ed
- (BOOL)validateForInsert:(id *)insert;	// 0x365d4609
- (BOOL)validateForUpdate:(id *)update;	// 0x365d4651
- (BOOL)validateValue:(id *)value forKey:(id)key error:(id *)error;	// 0x365d4275
- (id)valueForKey:(id)key;	// 0x36591d29
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x365d5a05
- (void)willAccessValueForKey:(id)key;	// 0x365d3969
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x365d3ed1
- (void)willChangeValueForKey:(id)key;	// 0x365d3ba1
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x365d411d
- (void)willFireFault;	// 0x365d6115
- (void)willRefresh:(BOOL)refresh;	// 0x365d611d
- (void)willSave;	// 0x365d426d
- (void)willTurnIntoFault;	// 0x36596cd5
@end
