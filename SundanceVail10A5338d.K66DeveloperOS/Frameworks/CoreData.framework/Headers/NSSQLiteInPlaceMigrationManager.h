/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMigrationManager.h"
#import "CoreData-Structs.h"


@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager {
}
+ (BOOL)_canMigrateWithMappingModel:(id)mappingModel;	// 0x3665d541
- (void)dealloc;	// 0x3665d565
- (BOOL)migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x3665d591
@end
