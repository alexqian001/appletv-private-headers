/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSMigrationManager.h"


@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager {
}
+ (BOOL)_canMigrateWithMappingModel:(id)mappingModel;	// 0x2d142951
- (void)dealloc;	// 0x2d142969
- (BOOL)migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x2d142999
@end

