/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSString, NSPersistentStoreCoordinator, NSSet, NSSQLCore, PFUbiquityLocation, PFUbiquitySwitchboardCacheWrapper, PFUbiquityRecordsImporterSchedulingContext, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter, NSMutableSet;
@protocol OS_dispatch_queue;

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {
	NSString *_localPeerID;	// 4 = 0x4
	NSString *_storeName;	// 8 = 0x8
	PFUbiquityLocation *_ubiquityRootLocation;	// 12 = 0xc
	PFUbiquityLocation *_localRootLocation;	// 16 = 0x10
	NSString *_activeModelVersionHash;	// 20 = 0x14
	NSMutableSet *_stores;	// 24 = 0x18
	NSPersistentStoreCoordinator *_privatePSC;	// 28 = 0x1c
	NSSQLCore *_privateStore;	// 32 = 0x20
	_PFUbiquityRecordsImporter *_importer;	// 36 = 0x24
	_PFUbiquityRecordsExporter *_exporter;	// 40 = 0x28
	PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;	// 44 = 0x2c
	PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;	// 48 = 0x30
	BOOL _useLocalStorage;	// 52 = 0x34
	BOOL _useLocaAccount;	// 53 = 0x35
	NSObject<OS_dispatch_queue> *_privateQueue;	// 56 = 0x38
	BOOL _useLocalAccount;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) NSString *activeModelVersionHash;	// G=0x2d185679; @synthesize=_activeModelVersionHash
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;	// G=0x2d185629; S=0x2d185639; @synthesize=_cacheWrapper
@property(readonly, assign, nonatomic) _PFUbiquityRecordsExporter *exporter;	// G=0x2d185659; @synthesize=_exporter
@property(readonly, assign, nonatomic) _PFUbiquityRecordsImporter *importer;	// G=0x2d185649; @synthesize=_importer
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator *privatePSC;	// G=0x2d185689; @synthesize=_privatePSC
@property(readonly, assign, nonatomic) NSSQLCore *privateStore;	// G=0x2d185699; @synthesize=_privateStore
@property(readonly, assign, nonatomic) PFUbiquityRecordsImporterSchedulingContext *schedulingContext;	// G=0x2d1856b9; @synthesize=_schedulingContext
@property(readonly, assign, nonatomic) NSSet *stores;	// G=0x2d1856a9; @synthesize=_stores
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x2d185669; S=0x2d1853e5; @synthesize=_ubiquityRootLocation
@property(assign, nonatomic) BOOL useLocalAccount;	// G=0x2d1856d9; S=0x2d185569; @synthesize=_useLocalAccount
@property(assign, nonatomic) BOOL useLocalStorage;	// G=0x2d1856c9; S=0x2d18548d; @synthesize=_useLocalStorage
- (id)initWithLocalPeerID:(id)localPeerID ubiquityRootLocation:(id)location localRootLocation:(id)location3 storeName:(id)name andPrivateQueue:(id)queue;	// 0x2d184d15
// declared property getter: - (id)activeModelVersionHash;	// 0x2d185679
- (void)addPersistentStore:(id)store;	// 0x2d185039
// declared property getter: - (id)cacheWrapper;	// 0x2d185629
- (void)dealloc;	// 0x2d184ee1
// declared property getter: - (id)exporter;	// 0x2d185659
// declared property getter: - (id)importer;	// 0x2d185649
// declared property getter: - (id)privatePSC;	// 0x2d185689
// declared property getter: - (id)privateStore;	// 0x2d185699
- (void)removePersistentStore:(id)store;	// 0x2d185371
// declared property getter: - (id)schedulingContext;	// 0x2d1856b9
// declared property setter: - (void)setCacheWrapper:(id)wrapper;	// 0x2d185639
// declared property setter: - (void)setUbiquityRootLocation:(id)location;	// 0x2d1853e5
// declared property setter: - (void)setUseLocalAccount:(BOOL)account;	// 0x2d185569
// declared property setter: - (void)setUseLocalStorage:(BOOL)storage;	// 0x2d18548d
// declared property getter: - (id)stores;	// 0x2d1856a9
- (void)tearDown;	// 0x2d184e79
// declared property getter: - (id)ubiquityRootLocation;	// 0x2d185669
// declared property getter: - (BOOL)useLocalAccount;	// 0x2d1856d9
// declared property getter: - (BOOL)useLocalStorage;	// 0x2d1856c9
@end
