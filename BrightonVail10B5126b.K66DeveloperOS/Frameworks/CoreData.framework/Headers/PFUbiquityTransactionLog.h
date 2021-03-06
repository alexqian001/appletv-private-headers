/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, PFUbiquitySaveSnapshot, NSMutableDictionary, NSRecursiveLock, PFUbiquityLocation, NSNumber, PFUbiquityKnowledgeVector;

@interface PFUbiquityTransactionLog : NSObject {
	NSMutableDictionary *_contents;	// 4 = 0x4
	int _transactionLogType;	// 8 = 0x8
	BOOL _useTemporaryLogLocation;	// 12 = 0xc
	PFUbiquityLocation *_transactionLogLocation;	// 16 = 0x10
	PFUbiquityLocation *_temporaryTransactionLogLocation;	// 20 = 0x14
	PFUbiquityLocation *_stagingTransactionLogLocation;	// 24 = 0x18
	NSString *_fileProtectionOption;	// 28 = 0x1c
	NSNumber *_transactionNumber;	// 32 = 0x20
	BOOL _inTemporaryLocation;	// 36 = 0x24
	BOOL _inStagingLocation;	// 37 = 0x25
	BOOL _inPermanentLocation;	// 38 = 0x26
	PFUbiquityKnowledgeVector *_knowledgeVector;	// 40 = 0x28
	PFUbiquitySaveSnapshot *_saveSnapshot;	// 44 = 0x2c
	NSString *_localPeerID;	// 48 = 0x30
	BOOL _loadUsingRetry;	// 52 = 0x34
	BOOL _loadedComparisonMetadata;	// 53 = 0x35
	BOOL _loadedImportMetadata;	// 54 = 0x36
	BOOL _loadedContents;	// 55 = 0x37
	NSRecursiveLock *_contentsLock;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) PFUbiquityLocation *currentLocation;	// G=0x30fc48d5; 
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x30fc485d; 
@property(readonly, assign, nonatomic) NSString *fileProtectionOption;	// G=0x30fc9fcd; @synthesize=_fileProtectionOption
@property(readonly, assign, nonatomic) BOOL inPermanentLocation;	// G=0x30fc9f9d; @synthesize=_inPermanentLocation
@property(readonly, assign, nonatomic) BOOL inStagingLocation;	// G=0x30fc9fad; @synthesize=_inStagingLocation
@property(readonly, assign, nonatomic) BOOL inTemporaryLocation;	// G=0x30fc9f8d; @synthesize=_inTemporaryLocation
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x30fca02d; @synthesize=_knowledgeVector
@property(assign, nonatomic) BOOL loadUsingRetry;	// G=0x30fca04d; S=0x30fca05d; @synthesize=_loadUsingRetry
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x30fca03d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x30fc4885; 
@property(readonly, assign, nonatomic) PFUbiquitySaveSnapshot *saveSnapshot;	// G=0x30fc9fdd; @synthesize=_saveSnapshot
@property(readonly, assign, nonatomic) PFUbiquityLocation *stagingTransactionLogLocation;	// G=0x30fc9ffd; @synthesize=_stagingTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x30fc4835; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *temporaryTransactionLogLocation;	// G=0x30fca00d; @synthesize=_temporaryTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *transactionLogFilename;	// G=0x30fc48ad; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *transactionLogLocation;	// G=0x30fc9fed; @synthesize=_transactionLogLocation
@property(readonly, assign, nonatomic) int transactionLogType;	// G=0x30fca01d; @synthesize=_transactionLogType
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x30fc9fbd; @synthesize=_transactionNumber
@property(assign, nonatomic) BOOL useTemporaryLogLocation;	// G=0x30fc9f6d; S=0x30fc9f7d; @synthesize=_useTemporaryLogLocation
+ (id)createTransactionLogFilenameForLogType:(int)logType;	// 0x30fc9711
+ (id)generateTransactionLogFilename;	// 0x30fc97f9
+ (void)pruneStagingDirectoryForLocalPeerID:(id)localPeerID andStoreName:(id)name andModelVersionHash:(id)hash withStack:(id)stack andStoreTransactionNumber:(id)number;	// 0x30fc7d71
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)peerRootLocation error:(id *)error;	// 0x30fc9385
+ (id)transactionLogFilenameUUID;	// 0x30fc96f5
+ (int)transactionLogTypeFromLocation:(id)location;	// 0x30fc977d
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)metadata withLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x30fc85c9
+ (void)updateModificationTimesForLocation:(id)location;	// 0x30fc9e19
- (id)init;	// 0x30fc3f4d
- (id)initWithStoreName:(id)storeName andSaveSnapshot:(id)snapshot;	// 0x30fc440d
- (id)initWithTransactionLogLocation:(id)transactionLogLocation andLocalPeerID:(id)anId;	// 0x30fc4069
- (id)initWithTransactionLogURL:(id)transactionLogURL ubiquityRootLocation:(id)location andLocalPeerID:(id)anId;	// 0x30fc400d
- (void)cleanupExternalDataReferences;	// 0x30fc6075
// declared property getter: - (id)currentLocation;	// 0x30fc48d5
- (void)dealloc;	// 0x30fc4685
- (BOOL)deleteLogFileWithError:(id *)error;	// 0x30fc62f5
- (id)description;	// 0x30fc47a5
// declared property getter: - (id)exportingPeerID;	// 0x30fc485d
// declared property getter: - (id)fileProtectionOption;	// 0x30fc9fcd
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)managedObjectContext;	// 0x30fc7ad1
// declared property getter: - (BOOL)inPermanentLocation;	// 0x30fc9f9d
// declared property getter: - (BOOL)inStagingLocation;	// 0x30fc9fad
// declared property getter: - (BOOL)inTemporaryLocation;	// 0x30fc9f8d
// declared property getter: - (id)knowledgeVector;	// 0x30fca02d
- (BOOL)loadComparisonMetadataWithError:(id *)error;	// 0x30fc4ed9
- (BOOL)loadContents:(id *)contents;	// 0x30fc4b3d
- (BOOL)loadDeletedObjectsDataWithError:(id *)error;	// 0x30fc565d
- (BOOL)loadImportMetadataWithError:(id *)error;	// 0x30fc5381
- (BOOL)loadInsertedObjectsDataWithError:(id *)error;	// 0x30fc550d
- (id)loadPlistAtLocation:(id)location withError:(id *)error;	// 0x30fc5705
- (BOOL)loadUpdatedObjectsDataWithError:(id *)error;	// 0x30fc55b5
// declared property getter: - (BOOL)loadUsingRetry;	// 0x30fca04d
// declared property getter: - (id)localPeerID;	// 0x30fca03d
// declared property getter: - (id)modelVersionHash;	// 0x30fc4885
- (BOOL)moveFileToPermanentLocationWithError:(id *)error;	// 0x30fc65a1
- (void)populateContents;	// 0x30fc9825
- (BOOL)releaseContents:(id *)contents;	// 0x30fc4955
// declared property getter: - (id)saveSnapshot;	// 0x30fc9fdd
// declared property setter: - (void)setLoadUsingRetry:(BOOL)retry;	// 0x30fca05d
// declared property setter: - (void)setUseTemporaryLogLocation:(BOOL)location;	// 0x30fc9f7d
// declared property getter: - (id)stagingTransactionLogLocation;	// 0x30fc9ffd
// declared property getter: - (id)storeName;	// 0x30fc4835
// declared property getter: - (id)temporaryTransactionLogLocation;	// 0x30fca00d
// declared property getter: - (id)transactionLogFilename;	// 0x30fc48ad
// declared property getter: - (id)transactionLogLocation;	// 0x30fc9fed
// declared property getter: - (int)transactionLogType;	// 0x30fca01d
// declared property getter: - (id)transactionNumber;	// 0x30fc9fbd
// declared property getter: - (BOOL)useTemporaryLogLocation;	// 0x30fc9f6d
- (BOOL)writeToDiskWithError:(id *)error andUpdateFilenameInTransactionEntries:(id)transactionEntries;	// 0x30fc6e6d
@end

