/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {
@private
	NSMutableDictionary *_nodeCache;	// 44 = 0x2c
	NSMutableDictionary *_entityCache;	// 48 = 0x30
	NSMutableDictionary *_storeMetadata;	// 52 = 0x34
	int _nextReference;	// 56 = 0x38
	void *_reserved4;	// 60 = 0x3c
	void *_reserved5;	// 64 = 0x40
}
@property(retain) id metadata;	// G=0x322a29a9; S=0x322a347d; converted property
+ (void)initialize;	// 0x322a2a31
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x322a32a9
- (id)init;	// 0x322a30c1
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x322a33d5
- (void)_addObject:(id)object;	// 0x322a2ff5
- (void)_deleteNodeFromEntityCache:(id)entityCache;	// 0x322a2d59
- (void)_deleteNodeFromMainCache:(id)mainCache;	// 0x322a2d19
- (void)_didLoadMetadata;	// 0x322a2e3d
- (id)_getNewIDForObject:(id)object;	// 0x322a2f6d
- (void)_insertNodeIntoEntityCache:(id)cache;	// 0x322a2c2d
- (void)_insertNodeIntoMainCache:(id)cache;	// 0x322a2be5
- (void)_preflightCrossCheck;	// 0x322a28cd
- (id)_rawMetadata__;	// 0x322a28b9
- (void)_registerCacheNode:(id)node;	// 0x322a2a4d
- (void)_removeObject:(id)object;	// 0x322a303d
- (id)_retainedObjectIDForEntity:(id)entity referenceObject:(id)object;	// 0x322a3085
- (id)_retrieveNodeForObject:(id)object;	// 0x322a2ba1
- (id)_retrieveNodeForObjectID:(id)objectID;	// 0x322a2b7d
- (id)_retrieveNodesSatisfyingRequest:(id)request;	// 0x322a3e25
- (void)_storeNextReferenceInMetadata;	// 0x322a2e9d
- (void)_updateObject:(id)object;	// 0x322a4ea1
- (void)addCacheNodes:(id)nodes;	// 0x322a3569
- (id)cacheNodeForObjectID:(id)objectID;	// 0x322a2925
- (id)cacheNodes;	// 0x322a28d9
- (void)dealloc;	// 0x322a37b1
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x322a2a7d
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x322a421d
- (id)executeRefreshRequest:(id)request withContext:(id)context;	// 0x322a28c9
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x322a32f1
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x322a3845
- (BOOL)load:(id *)load;	// 0x322a3151
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x322a28d1
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x322a28d5
// converted property getter: - (id)metadata;	// 0x322a29a9
- (id)newCacheNodeForManagedObject:(id)managedObject;	// 0x322a3199
- (id)newReferenceObjectForManagedObject:(id)managedObject;	// 0x322a3515
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x322a4d3d
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x322a2e15
- (id)objectIDForEntity:(id)entity referenceObject:(id)object;	// 0x322a2949
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x322a40f9
- (id)referenceObjectForObjectID:(id)objectID;	// 0x322a3229
- (BOOL)save:(id *)save;	// 0x322a3109
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x322a347d
- (void)updateCacheNode:(id)node fromManagedObject:(id)managedObject;	// 0x322a31e1
- (void)willRemoveCacheNodes:(id)nodes;	// 0x322a28b5
@end

