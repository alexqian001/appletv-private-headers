/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"
#import "CoreData-Structs.h"
#import "NSFilePresenter.h"

@class NSURL, NSOperationQueue, NSString, NSMutableArray, NSSaveChangesRequest, NSSQLAdapter, NSSQLModel, NSManagedObjectContext, NSMutableSet, NSSet, NSSQLConnection, NSMutableDictionary, NSSQLEntity, NSSQLRow, NSSQLRowCache;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {
	NSSQLModel *_model;	// 44 = 0x2c
	NSSQLAdapter *_adapter;	// 48 = 0x30
	NSSQLConnection *_connection;	// 52 = 0x34
	NSMutableArray *_channels;	// 56 = 0x38
	NSManagedObjectContext *_currentContext;	// 60 = 0x3c
	NSSQLEntity *_lastEntity;	// 64 = 0x40
	NSSQLRowCache *_rowCache;	// 68 = 0x44
	NSMutableDictionary *_uniqueTable;	// 72 = 0x48
	NSMutableArray *_toManyCache;	// 76 = 0x4c
	CFSetRef _deleteTable;	// 80 = 0x50
	NSSet *_lockedObjects;	// 84 = 0x54
	CFDictionaryRef _dbOperationsByGlobalID;	// 88 = 0x58
	NSSaveChangesRequest *_currentSaveRequest;	// 92 = 0x5c
	int _lazyFaultDebugLevel;	// 96 = 0x60
	NSMutableDictionary *_batchFaultBuffer;	// 100 = 0x64
	NSMutableDictionary *_batchToManyFaultBuffer;	// 104 = 0x68
	NSScalarObjectID *_currentGlobalID;	// 108 = 0x6c
	NSSQLRow *_currentRow;	// 112 = 0x70
	id _observer;	// 116 = 0x74
	NSMutableSet *_missingObjectGIDs;	// 120 = 0x78
	NSMutableDictionary *_storeMetadata;	// 124 = 0x7c
	NSMutableArray *_externalDataReferencesToSave;	// 128 = 0x80
	NSMutableSet *_externalDataReferencesToDelete;	// 132 = 0x84
	NSString *_externalDataReferencesDirectory;	// 136 = 0x88
	NSString *_externalDataLinksDirectory;	// 140 = 0x8c
	int _transactionInMemorySequence;	// 144 = 0x90
	int _debug;	// 148 = 0x94
	sqlCoreFlags _sqlCoreFlags;	// 152 = 0x98
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x3347d665; converted property
@property(readonly, retain) NSMutableArray *channels;	// G=0x3348f989; converted property
@property(readonly, retain) NSSQLConnection *connection;	// G=0x3347d60d; converted property
@property(retain) NSManagedObjectContext *currentContext;	// G=0x3348fb81; S=0x33486591; converted property
@property(retain) id databaseUUID;	// G=0x33483165; S=0x33527619; converted property
@property(readonly, retain) NSString *externalDataLinksDirectory;	// G=0x33482035; converted property
@property(readonly, retain) NSString *externalDataReferencesDirectory;	// G=0x33481c25; converted property
@property(readonly, retain) NSMutableSet *externalDataReferencesToDelete;	// G=0x33525f25; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToSave;	// G=0x33525ed5; converted property
@property(retain) id metadata;	// G=0x3348269d; S=0x3348358d; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x33483131; converted property
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x3352e151; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x3352e141; 
@property(readonly, assign) NSURL *primaryPresentedItemURL;
@property(readonly, retain) NSSQLRowCache *rowCache;	// G=0x33486e4d; converted property
+ (BOOL)SQLGenerationV1Default;	// 0x334873f9
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x3352a641
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)to;	// 0x33525dc9
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x3352a735
+ (BOOL)coloredLoggingDefault;	// 0x3347d239
+ (int)debugDefault;	// 0x3347d229
+ (void)initialize;	// 0x334a1cf1
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x33529dd9
+ (Class)migrationManagerClass;	// 0x3351b7a1
+ (BOOL)sanityCheckFileAtURL:(id)url error:(id *)error;	// 0x33529bd5
+ (void)setColoredLoggingDefault:(BOOL)aDefault;	// 0x3351b781
+ (void)setDebugDefault:(int)aDefault;	// 0x3351b771
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x3352a341
+ (void)setSQLGenerationV1Default:(BOOL)aDefault;	// 0x3351b791
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x334783e5
- (id)_addDatabaseContextStateToException:(id)exception;	// 0x3351e575
- (void)_addDeletesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x3352330d
- (void)_addInsertsToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x33522fdd
- (void)_addManyToManysToDatabaseOp:(id)databaseOp;	// 0x335233e9
- (void)_addUpdatesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x335229a1
- (void)_assertValidStateWithSelector:(SEL)selector;	// 0x3351e449
- (id)_availableChannel;	// 0x3348f855
- (id)_availableChannelFromRegisteredChannels;	// 0x3348f909
- (void)_beginTransaction:(id)transaction;	// 0x3351c2b9
- (void)_checkAndRepairCorrelationTables:(BOOL)tables storeVersionNumber:(id)number;	// 0x33527459
- (void)_cleanUpAfterSave;	// 0x3351e4f9
- (void)_cleanUpAfterTransaction;	// 0x3351c5a1
- (id)_collectSkewedComponents:(id *)components;	// 0x33526f11
- (void)_commitTransaction:(id)transaction;	// 0x3351c641
- (id)_databaseContextState;	// 0x3351e559
- (void)_disconnect;	// 0x3349c0d5
- (id)_dissectCorrelationTableCreationSQL:(id)sql;	// 0x33526ded
- (void)_ensureDatabaseMatchesModel;	// 0x334828e1
- (id)_entityForObject:(id)object;	// 0x335242c9
- (unsigned)_knownEntityKeyForObject:(id)object;	// 0x3351e8b1
- (unsigned)_knownEntityKeyForObjectID:(id)objectID;	// 0x3351e825
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from inverseToMany:(id)many;	// 0x3351eaa5
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from orderedManyToMany:(id)many;	// 0x3351eb89
- (long long)_knownPrimaryKeyForObject:(id)object;	// 0x3351e7ed
- (long long)_knownPrimaryKeyForObjectID:(id)objectID;	// 0x3351e765
- (id)_loadAndSetMetadata;	// 0x3347d4fd
- (id)_loadAndSetMetadataReadOnly;	// 0x33527605
- (id)_newAdapterForModel:(id)model;	// 0x3347d6ad
- (id)_newConflictRecordForObject:(id)object originalRow:(id)row newRow:(id)row3;	// 0x33524c8d
- (id)_newObjectGraphStyleForSQLRow:(id)sqlrow withObject:(id)object;	// 0x33524a49
- (id)_newObjectIDForEntity:(id)entity referenceData64:(unsigned long long)a64;	// 0x3352e06d
- (id)_newReservedKeysForEntities:(id)entities counts:(id)counts;	// 0x3352dc35
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)relationship rowCacheOriginal:(id)original originalSnapshot:(id)snapshot value:(id)value added:(id)added deleted:(id)deleted sourceRowPK:(long long)pk properties:(id)properties sourceObject:(id)object newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes11;	// 0x33520505
- (id)_newRowsForFetchPlan:(id)fetchPlan selectedBy:(SEL)by withArgument:(id)argument;	// 0x3348e341
- (Class)_objectIDClass;	// 0x33491d7d
- (id)_obtainOpenChannel;	// 0x3348f765
- (unsigned)_orderKeyForObject:(id)object fromSourceObjectID:(id)sourceObjectID inverseRelationship:(id)relationship inOrderedSet:(id)orderedSet;	// 0x3351ea61
- (void)_performChangesWithAdapterOps:(id)adapterOps;	// 0x335250bd
- (id)_performExhaustiveConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x33524d61
- (BOOL)_performFastConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x33524809
- (void)_performPostSaveTasks;	// 0x3352d6c1
- (void)_populateOrderKeysInOrderedSet:(id)orderedSet usingSourceObjectID:(id)anId inverseRelationship:(id)relationship newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes5;	// 0x3351e8e9
- (void)_populateRowForOp:(id)op withObject:(id)object;	// 0x3351ed39
- (id)_predicateForSelectingObjectForOperation:(id)operation;	// 0x335227e1
- (void)_prefetchRelationshipKey:(id)key sourceEntityDescription:(id)description sourceObjectIDs:(id)ids prefetchRelationshipKeys:(id)keys inContext:(id)context;	// 0x3352ace1
- (void)_prefetchWithFetchRequest:(id)fetchRequest withObjectIDs:(id)objectIDs inContext:(id)context;	// 0x3352caa5
- (id)_prepareDictionaryResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan;	// 0x3351d419
- (id)_prepareResultsFromResultSet:(XXStruct_FUWWfB *)resultSet usingFetchPlan:(id)plan withMatchingRows:(id *)matchingRows;	// 0x33490f21
- (void)_purgeRowCache;	// 0x3352d699
- (void)_repairDatabaseCorrelationTables:(id)tables brokenHashModel:(id)model storeVersionNumber:(id)number recurse:(BOOL)recurse;	// 0x33526789
- (CFArrayRef)_rowsForConflictDetection:(id)conflictDetection withChannel:(id)channel;	// 0x33524601
- (void)_setMetadata:(id)metadata;	// 0x33482609
- (id)_ubiquityDictionaryForAttribute:(id)attribute onObject:(id)object;	// 0x335261bd
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;	// 0x3352e161
// converted property getter: - (id)adapter;	// 0x3347d665
- (id)availableChannel;	// 0x3351d329
- (void)beginTransaction;	// 0x3351c461
- (void)beginTransaction_NotificationFree;	// 0x3351c451
- (void)beginTransaction_core;	// 0x3351c3f5
// converted property getter: - (id)channels;	// 0x3348f989
- (void)commitChanges:(id)changes;	// 0x335259ed
- (void)commitTransaction;	// 0x3351c91d
- (void)commitTransaction_NotificationFree;	// 0x3351c90d
- (void)commitTransaction_core;	// 0x3351c8ad
// converted property getter: - (id)connection;	// 0x3347d60d
- (id)countForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x3351de01
- (void)createAdapterOperationsForDatabaseOperation:(id)databaseOperation;	// 0x33523651
- (id)createChannel;	// 0x3351d325
// converted property getter: - (id)currentContext;	// 0x3348fb81
- (id)databaseOperationForGlobalID:(id)globalID;	// 0x3351fd65
- (id)databaseOperationForObject:(id)object;	// 0x3351fded
// converted property getter: - (id)databaseUUID;	// 0x33483165
- (void)dealloc;	// 0x3349cab5
- (void)deleteExternalDataReferences:(id)references;	// 0x33526109
- (id)entityForEntityDescription:(id)entityDescription;	// 0x3351b82d
- (id)entityForFetchRequest:(id)fetchRequest;	// 0x33487175
- (id)entityForObject:(id)object;	// 0x3351b7bd
- (id)entityNameOrderingArrayForEntities:(id)entities;	// 0x33523861
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x33486145
// converted property getter: - (id)externalDataLinksDirectory;	// 0x33482035
// converted property getter: - (id)externalDataReferencesDirectory;	// 0x33481c25
// converted property getter: - (id)externalDataReferencesToDelete;	// 0x33525f25
// converted property getter: - (id)externalDataReferencesToSave;	// 0x33525ed5
- (id)externalLocationForFileWithUUID:(id)uuid;	// 0x33525e7d
- (id)fetchRowForObjectID:(NSScalarObjectID *)objectID;	// 0x33527665
- (int)fileProtectionLevel;	// 0x3347e4f1
- (void)forgetSnapshotForGlobalID:(id)globalID;	// 0x3351d149
- (void)forgetSnapshotsForGlobalIDs:(id)globalIDs;	// 0x3351d355
- (void)generatePrimaryKeysForEntity:(id)entity;	// 0x33523d61
- (id)hackQueryForManyToManyPrefetching:(id)manyPrefetching andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x3352833d
- (BOOL)handlesFetchRequest:(id)request;	// 0x33523d45
- (id)identifier;	// 0x33483155
- (void)insertEntity:(id)entity intoOrderingArray:(id)array withDependencies:(id)dependencies processingSet:(id)set;	// 0x33523755
- (void)invalidateObjectsWithGlobalIDs:(id)globalIDs;	// 0x3351e439
- (const id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x3351bb35
- (BOOL)load:(id *)load;	// 0x334827a5
- (BOOL)loadMetadata:(id *)metadata;	// 0x3347d2b5
- (id)localSnapshotForGlobalID:(id)globalID;	// 0x3351d231
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x3351ba69
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x3349a1c1
// converted property getter: - (id)metadata;	// 0x3348269d
- (id)missingObjectGlobalIDs;	// 0x3351d305
// converted property getter: - (id)model;	// 0x33483131
- (id)newAdapterForModel:(id)model;	// 0x3351ba31
- (id)newFaultingPredicateForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x33528dd1
- (id)newFetchedPKsForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x33529041
- (NSScalarObjectID *)newForeignKeyID:(long long)anId entity:(id)entity;	// 0x3351b98d
- (NSScalarObjectID *)newObjectIDForEntity:(id)entity pk:(long long)pk;	// 0x3351b94d
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)manyPrefetchingRequest andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x335286d9
- (id)newRowsForFetchPlan:(id)fetchPlan;	// 0x33486f79
- (id)newSortDescriptorForOrderedRelationship:(id)orderedRelationship;	// 0x33528d5d
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x3351bc41
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x33497971
- (id)objectIDFactoryForEntity:(id)entity;	// 0x3351b8d9
- (Class)objectIDFactoryForSQLEntity:(id)sqlentity;	// 0x33491c31
- (id)objectsForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x334865a1
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x3352cd2d
- (id)orderAdapterOperations;	// 0x33523865
- (BOOL)ownsGlobalID:(id)anId;	// 0x33523c49
- (BOOL)ownsObject:(id)object;	// 0x33523ce5
- (void)performChanges;	// 0x3352534d
- (id)permanentObjectIDForObjectInTransaction:(id)transaction;	// 0x3351fd89
- (void)prepareForSave:(id)save;	// 0x33523e2d
// declared property getter: - (id)presentedItemOperationQueue;	// 0x3352e151
// declared property getter: - (id)presentedItemURL;	// 0x3352e141
- (id)rawSQLTextForToManyFaultStatement:(id)manyFaultStatement stripBindVariables:(BOOL)variables swapEKPK:(BOOL)ekpk;	// 0x33527e19
- (void)recomputePrimaryKeyMaxForEntities:(id)entities;	// 0x3352d6e9
- (void)recordChangesInContext:(id)context;	// 0x335242f9
- (void)recordDatabaseOperation:(id)operation;	// 0x3351fd09
- (void)recordDeleteForObject:(id)object;	// 0x3351f9c9
- (void)recordPrimaryKey:(long long)key forInsertedObject:(id)insertedObject withSQLEntity:(id)sqlentity;	// 0x3351ec6d
- (void)recordSnapshot:(id)snapshot forObjectID:(id)objectID;	// 0x3351ccbd
- (void)recordToMany:(id)many forSourceObjectID:(id)sourceObjectID relationshipName:(id)name orderKeys:(id)keys;	// 0x3351cdc5
- (void)recordToManyInsertsForObject:(id)object withOperation:(id)operation;	// 0x335200c9
- (void)recordToManyUpdatesForObject:(id)object withOperation:(id)operation;	// 0x33521a95
- (void)recordUpdateForObject:(id)object;	// 0x335226d9
- (void)recordValuesForInsertedObject:(id)insertedObject;	// 0x3352277d
- (id)refreshObjects:(id)objects;	// 0x33526775
- (void)registerChannel:(id)channel;	// 0x3348fa4d
- (void)rollbackChanges;	// 0x33525719
- (void)rollbackTransaction;	// 0x3351cb7d
- (void)rollbackTransaction_core;	// 0x3351cb09
// converted property getter: - (id)rowCache;	// 0x33486e4d
- (id)rowForObjectID:(id)objectID;	// 0x3351d2d1
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x3351d259
- (id)safeguardLocationForFileWithUUID:(id)uuid;	// 0x33525ea9
- (id)saveChanges:(id)changes;	// 0x33526321
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x33486591
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x33527619
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x3351b9e1
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x3348358d
- (void)setURL:(id)url;	// 0x3351b85d
- (id)type;	// 0x334825cd
- (void)unregisterChannel:(id)channel;	// 0x3351c1e1
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x3349bdb9
- (id)writeExternalDataReferences;	// 0x33525f75
@end

