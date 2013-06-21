/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMappedObjectStore.h"


@interface NSMemoryObjectStore : NSMappedObjectStore {
}
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x30f19b05
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x30f19abd
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x30f1977d
- (id)_archivedData;	// 0x30f19b4d
- (void)_preflightCrossCheck;	// 0x30f19b6d
- (void)saveDocumentToPath:(id)path;	// 0x30f19aa9
- (id)type;	// 0x30f19aad
@end
