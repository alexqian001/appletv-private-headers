/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"
#import "NSManagedObjectContextFaultingDelegate.h"

@class NSManagedObjectContext, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, PFUbiquityTransactionLog, NSPersistentStoreCoordinator, PFUbiquityImportContext, NSObject;
@protocol _PFUbiquityRecordImportOperationDelegate;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {
@private
	NSManagedObjectContext *_moc;	// 24 = 0x18
	NSPersistentStoreCoordinator *_psc;	// 28 = 0x1c
	PFUbiquityTransactionLog *_transactionLog;	// 32 = 0x20
	NSString *_localPeerID;	// 36 = 0x24
	NSMutableSet *_insertedObjectIDs;	// 40 = 0x28
	NSMutableSet *_updatedObjectIDs;	// 44 = 0x2c
	NSMutableSet *_deletedObjectIDs;	// 48 = 0x30
	NSDictionary *_logScore;	// 52 = 0x34
	NSMutableDictionary *_resolvedConflicts;	// 56 = 0x38
	BOOL _lockedExistingCoord;	// 60 = 0x3c
	NSDictionary *_initialStoreKnowledgeVector;	// 64 = 0x40
	NSDictionary *_newUbiquityKnowledgeVector;	// 68 = 0x44
	PFUbiquityImportContext *_importContext;	// 72 = 0x48
	BOOL _transactionDidRollback;	// 76 = 0x4c
	int _inMemorySequenceNumber;	// 80 = 0x50
}
@property(assign) NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;	// G=0x3236eea1; S=0x3236eecd; 
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x32367785; @synthesize=_deletedObjectIDs
@property(readonly, assign, nonatomic) PFUbiquityImportContext *importContext;	// G=0x32367725; @synthesize=_importContext
@property(readonly, assign) NSDictionary *initialStoreKnowledgeVector;	// G=0x32367735; @synthesize=_initialStoreKnowledgeVector
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x323677a5; @synthesize=_insertedObjectIDs
@property(readonly, assign) NSString *localPeerID;	// G=0x323677b5; @synthesize=_localPeerID
@property(assign) BOOL lockedExistingCoord;	// G=0x32367745; S=0x32367755; @synthesize=_lockedExistingCoord
@property(retain, nonatomic) NSDictionary *logScore;	// G=0x32367765; S=0x32367a81; @synthesize=_logScore
@property(readonly, assign) NSManagedObjectContext *moc;	// G=0x323677e5; @synthesize=_moc
@property(readonly, assign, nonatomic) NSDictionary *newUbiquityKnowledgeVector;	// G=0x32367715; @synthesize=_newUbiquityKnowledgeVector
@property(readonly, assign) NSPersistentStoreCoordinator *psc;	// G=0x323677d5; @synthesize=_psc
@property(readonly, assign, nonatomic) NSMutableDictionary *resolvedConflicts;	// G=0x32367775; @synthesize=_resolvedConflicts
@property(readonly, assign, nonatomic) BOOL transactionDidRollBack;	// G=0x32367705; @synthesize=_transactionDidRollback
@property(readonly, assign, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x323677c5; @synthesize=_transactionLog
@property(readonly, assign, nonatomic) NSMutableSet *updatedObjectIDs;	// G=0x32367795; @synthesize=_updatedObjectIDs
- (id)initWithTransactionLog:(id)transactionLog;	// 0x323677f5
- (id)initWithTransactionLog:(id)transactionLog withLocalPeerID:(id)localPeerID;	// 0x323679d1
- (void)addManagedObject:(id)object missingObjectWithID:(id)anId atKey:(id)key toMissingObjects:(id)missingObjects;	// 0x32368339
- (BOOL)applyChangesFromStoreSaveSnapshot:(id)storeSaveSnapshot withImportContext:(id)importContext withError:(id *)error;	// 0x3236eb21
- (id)checkPSCForStoreIdentifiedByImportContext:(id)storeIdentifiedByImportContext;	// 0x32368109
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x32367701
- (void)coordinatorWillRemoveStore:(id)coordinator;	// 0x32367aa9
- (id)copy;	// 0x32367a11
- (void)dealloc;	// 0x3236eef9
// declared property getter: - (id)delegate;	// 0x3236eea1
// declared property getter: - (id)deletedObjectIDs;	// 0x32367785
- (id)description;	// 0x32367c09
- (BOOL)fillManagedObject:(id)object fromUbiquityDictionary:(id)ubiquityDictionary missingObjects:(id)objects importContext:(id)context withError:(id *)error;	// 0x32368475
// declared property getter: - (id)importContext;	// 0x32367725
// declared property getter: - (id)initialStoreKnowledgeVector;	// 0x32367735
- (void)initializePersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x32368099
// declared property getter: - (id)insertedObjectIDs;	// 0x323677a5
// declared property getter: - (id)localPeerID;	// 0x323677b5
// declared property getter: - (BOOL)lockedExistingCoord;	// 0x32367745
// declared property getter: - (id)logScore;	// 0x32367765
- (void)main;	// 0x3236a6e1
// declared property getter: - (id)moc;	// 0x323677e5
- (id)newPersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x32367f65
// declared property getter: - (id)newUbiquityKnowledgeVector;	// 0x32367715
- (void)notifyDelegateOfError:(id)error;	// 0x3236ee11
- (BOOL)processObjects:(id)objects withState:(int)state andImportContext:(id)context outError:(id *)error;	// 0x32368bf9
// declared property getter: - (id)psc;	// 0x323677d5
// declared property getter: - (id)resolvedConflicts;	// 0x32367775
- (void)respondToStoreTransactionStateChangeNotification:(id)storeTransactionStateChangeNotification;	// 0x32367cb1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3236eecd
// declared property setter: - (void)setLockedExistingCoord:(BOOL)coord;	// 0x32367755
// declared property setter: - (void)setLogScore:(id)score;	// 0x32367a81
// declared property getter: - (BOOL)transactionDidRollBack;	// 0x32367705
// declared property getter: - (id)transactionLog;	// 0x323677c5
// declared property getter: - (id)updatedObjectIDs;	// 0x32367795
@end

