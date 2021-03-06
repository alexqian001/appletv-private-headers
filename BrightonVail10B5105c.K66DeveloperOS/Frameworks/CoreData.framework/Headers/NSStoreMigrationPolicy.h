/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDictionary, NSMigrationManager, NSManagedObjectModel, NSURL, NSPersistentStoreCoordinator, NSMappingModel;

@interface NSStoreMigrationPolicy : NSObject {
	NSPersistentStoreCoordinator *_coordinator;	// 4 = 0x4
	NSURL *_sourceURL;	// 8 = 0x8
	NSString *_sourceConfiguration;	// 12 = 0xc
	NSDictionary *_sourceOptions;	// 16 = 0x10
	NSManagedObjectModel *_sourceModel;	// 20 = 0x14
	NSDictionary *_sourceMetadata;	// 24 = 0x18
	NSMappingModel *_mappingModel;	// 28 = 0x1c
	NSURL *_destinationURL;	// 32 = 0x20
	NSString *_destinationType;	// 36 = 0x24
	NSString *_destinationConfiguration;	// 40 = 0x28
	NSDictionary *_destinationOptions;	// 44 = 0x2c
	NSMigrationManager *_migrationManager;	// 48 = 0x30
	NSArray *_resourceBundles;	// 52 = 0x34
	long _workingWithSkewedSource;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	void *_reserved3;	// 64 = 0x40
	void *_reserved4;	// 68 = 0x44
}
@property(retain) NSString *destinationConfiguration;	// G=0x36316045; S=0x36316055; converted property
@property(retain) NSDictionary *destinationOptions;	// G=0x363160ad; S=0x363160bd; converted property
@property(retain) NSString *destinationType;	// G=0x36315fdd; S=0x36315fed; converted property
@property(retain) NSURL *destinationURL;	// G=0x36315f75; S=0x36315f85; converted property
@property(retain) NSMappingModel *mappingModel;	// G=0x36315f0d; S=0x36315f1d; converted property
@property(retain) NSMigrationManager *migrationManager;	// G=0x36316115; S=0x36316125; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x36315c85; S=0x36315c95; converted property
@property(retain) NSArray *resourceBundles;	// G=0x363166b5; S=0x36316671; converted property
@property(retain) NSString *sourceConfiguration;	// G=0x36315d45; S=0x36315d55; converted property
@property(retain) NSDictionary *sourceMetadata;	// G=0x36315dad; S=0x36315dbd; converted property
@property(retain) NSManagedObjectModel *sourceModel;	// G=0x36315e7d; S=0x36315e8d; converted property
@property(retain) NSDictionary *sourceOptions;	// G=0x36315e15; S=0x36315e25; converted property
@property(retain) NSURL *sourceURL;	// G=0x36315ca5; S=0x36315cb5; converted property
+ (int)migrationDebugLevel;	// 0x36315b21
+ (id)migrationStoreOptionsFromStoreOptions:(id)storeOptions;	// 0x36314fed
+ (void)setMigrationDebugLevel:(int)level;	// 0x36315b3d
- (id)_gatherDataAndPerformMigration:(id *)migration;	// 0x363166f9
- (id)addMigratedStoreToCoordinator:(id)coordinator withType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x36316639
- (void)dealloc;	// 0x363159a1
// converted property getter: - (id)destinationConfiguration;	// 0x36316045
- (id)destinationConfigurationForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x363164ed
- (id)destinationModel;	// 0x36315ee5
// converted property getter: - (id)destinationOptions;	// 0x363160ad
- (id)destinationOptionsForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x363164fd
// converted property getter: - (id)destinationType;	// 0x36315fdd
- (id)destinationTypeForMigration:(id)migration sourceMetadata:(id)metadata error:(id *)error;	// 0x363164dd
// converted property getter: - (id)destinationURL;	// 0x36315f75
- (id)destinationURLForMigration:(id)migration sourceURL:(id)url sourceMetadata:(id)metadata error:(id *)error;	// 0x363163dd
- (void)didPerformMigrationWithManager:(id)manager;	// 0x36316631
- (id)externalDataReferencesURLForDestination:(id)destination forStoreOfType:(id)type;	// 0x36316481
- (void)handleMigrationError:(id)error inManager:(id)manager;	// 0x36316635
- (id)managerForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x36315781
// converted property getter: - (id)mappingModel;	// 0x36315f0d
- (id)mappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x3631617d
- (BOOL)migrateStoreAtURL:(id)url toURL:(id)url2 storeType:(id)type options:(id)options withManager:(id)manager error:(id *)error;	// 0x36316511
- (id)migrateStoreAtURL:(id)url withManager:(id)manager metadata:(id)metadata options:(id)options error:(id *)error;	// 0x36315925
// converted property getter: - (id)migrationManager;	// 0x36316115
// converted property getter: - (id)persistentStoreCoordinator;	// 0x36315c85
// converted property getter: - (id)resourceBundles;	// 0x363166b5
// converted property setter: - (void)setDestinationConfiguration:(id)configuration;	// 0x36316055
// converted property setter: - (void)setDestinationOptions:(id)options;	// 0x363160bd
// converted property setter: - (void)setDestinationType:(id)type;	// 0x36315fed
// converted property setter: - (void)setDestinationURL:(id)url;	// 0x36315f85
// converted property setter: - (void)setMappingModel:(id)model;	// 0x36315f1d
// converted property setter: - (void)setMigrationManager:(id)manager;	// 0x36316125
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x36315c95
- (void)setPersistentStoreCoordinator:(id)coordinator sourceURL:(id)url configuration:(id)configuration metadata:(id)metadata options:(id)options;	// 0x36315b59
// converted property setter: - (void)setResourceBundles:(id)bundles;	// 0x36316671
// converted property setter: - (void)setSourceConfiguration:(id)configuration;	// 0x36315d55
// converted property setter: - (void)setSourceMetadata:(id)metadata;	// 0x36315dbd
// converted property setter: - (void)setSourceModel:(id)model;	// 0x36315e8d
// converted property setter: - (void)setSourceOptions:(id)options;	// 0x36315e25
// converted property setter: - (void)setSourceURL:(id)url;	// 0x36315cb5
// converted property getter: - (id)sourceConfiguration;	// 0x36315d45
// converted property getter: - (id)sourceMetadata;	// 0x36315dad
// converted property getter: - (id)sourceModel;	// 0x36315e7d
- (id)sourceModelForStoreAtURL:(id)url metadata:(id)metadata error:(id *)error;	// 0x36315105
// converted property getter: - (id)sourceOptions;	// 0x36315e15
- (id)sourceType;	// 0x36315d0d
// converted property getter: - (id)sourceURL;	// 0x36315ca5
- (void)willPerformMigrationWithManager:(id)manager;	// 0x3631650d
@end

