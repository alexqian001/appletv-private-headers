/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSNumber, NSMutableArray, NSSQLEntity, NSMutableDictionary;

@interface _NSSQLTableMigrationDescription : NSObject {
	NSSQLEntity *_rootEntity;	// 4 = 0x4
	NSSQLEntity *_sourceRootEntity;	// 8 = 0x8
	int _migrationType;	// 12 = 0xc
	NSMutableArray *_addedEntityMigrations;	// 16 = 0x10
	NSMutableArray *_removedEntityMigrations;	// 20 = 0x14
	NSMutableArray *_copiedEntityMigrations;	// 24 = 0x18
	NSMutableArray *_transformedEntityMigrations;	// 28 = 0x1c
	NSMutableDictionary *_migrationByEntity;	// 32 = 0x20
	NSMutableArray *_addedManyToManys;	// 36 = 0x24
	NSMutableArray *_removedManyToManys;	// 40 = 0x28
	NSMutableArray *_transformedManyToManys;	// 44 = 0x2c
	NSMutableDictionary *_tempTableNames;	// 48 = 0x30
	NSNumber *_hasTransformedTableSchema;	// 52 = 0x34
}
@property(readonly, assign) int migrationType;	// G=0x3356685d; @synthesize=_migrationType
@property(readonly, assign) NSSQLEntity *rootEntity;	// G=0x33566871; @synthesize=_rootEntity
- (id)initWithRootEntity:(id)rootEntity migrationType:(int)type;	// 0x33563029
- (id)_addedManyToManys;	// 0x335661a9
- (BOOL)_hasTransformedTableSchema;	// 0x335633dd
- (id)_removedManyToManys;	// 0x33565ef1
- (id)_retainedRemovedSubEntitiesOfEntity:(id)entity;	// 0x33565d91
- (id)_sourceRootEntity;	// 0x33566701
- (id)_tempNameForTableName:(id)tableName;	// 0x33566665
- (id)_transformedManyToManys;	// 0x33566461
- (void)addEntityMigrationDescription:(id)description;	// 0x33563261
- (void)appendStatementsToCompleteMigration:(id)completeMigration migrationContext:(NSSQLMigrationContext)context;	// 0x33564581
- (void)appendStatementsToPerformMigration:(id)performMigration migrationContext:(NSSQLMigrationContext)context;	// 0x33563f11
- (void)appendStatementsToPrepareForMigration:(id)migration migrationContext:(NSSQLMigrationContext)context;	// 0x33563661
- (id)createFEKUpdateStatementsForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x33564f5d
- (id)createInsertStatementForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x33564715
- (id)createUpdateStatementForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x3356533d
- (void)dealloc;	// 0x335630f9
// declared property getter: - (int)migrationType;	// 0x3356685d
- (id)newCopyAndInsertStatementForToOne:(id)one toManyToMany:(id)many fromTableName:(id)tableName invertColumns:(BOOL)columns migrationContext:(NSSQLMigrationContext)context;	// 0x33565701
// declared property getter: - (id)rootEntity;	// 0x33566871
@end
