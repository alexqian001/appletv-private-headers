/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIDocument.h"

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, NSDictionary, NSString;

@interface UIManagedDocument : UIDocument {
@private
	NSManagedObjectContext *_managedObjectContext;	// 100 = 0x64
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 104 = 0x68
	NSManagedObjectModel *_managedObjectModel;	// 108 = 0x6c
	NSDictionary *_documentMetadata;	// 112 = 0x70
	mdocFlags _mdocFlags;	// 116 = 0x74
	NSDictionary *persistentStoreOptions;	// 120 = 0x78
	NSString *modelConfiguration;	// 124 = 0x7c
}
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x30437115; 
@property(readonly, assign, nonatomic) NSManagedObjectModel *managedObjectModel;	// G=0x30437125; 
@property(copy, nonatomic) NSString *modelConfiguration;	// G=0x3043ab2d; S=0x3043ab41; @synthesize
@property(copy, nonatomic) NSDictionary *persistentStoreOptions;	// G=0x3043ab09; S=0x3043ab1d; @synthesize
+ (id)additionalContentPathComponent;	// 0x304370dd
+ (void)initialize;	// 0x304369dd
+ (BOOL)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)options;	// 0x304370e9
+ (id)persistentStoreName;	// 0x304370d1
- (id)initWithFileURL:(id)fileURL;	// 0x30436cf1
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)nonSyncedURL toSyncedURL:(id)syncedURL;	// 0x304373d9
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)syncedURL toNonSyncedURL:(id)nonSyncedURL;	// 0x30437715
- (id)_readMetadataFromDocumentURL:(id)documentURL;	// 0x30437bb5
- (BOOL)_writeMetadataToDocumentURL:(id)documentURL;	// 0x30437e5d
- (id)additionalContentForURL:(id)url error:(id *)error;	// 0x304373b9
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)url ofType:(id)type modelConfiguration:(id)configuration storeOptions:(id)options error:(id *)error;	// 0x30437175
- (id)contentsForType:(id)type error:(id *)error;	// 0x304398e9
- (void)dealloc;	// 0x30436fc5
// declared property getter: - (id)managedObjectContext;	// 0x30437115
// declared property getter: - (id)managedObjectModel;	// 0x30437125
// declared property getter: - (id)modelConfiguration;	// 0x3043ab2d
// declared property getter: - (id)persistentStoreOptions;	// 0x3043ab09
- (id)persistentStoreTypeForFileType:(id)fileType;	// 0x304373a9
- (BOOL)readAdditionalContentFromURL:(id)url error:(id *)error;	// 0x304373b5
- (BOOL)readFromURL:(id)url error:(id *)error;	// 0x304381fd
- (void)revertToContentsOfURL:(id)url completionHandler:(id)handler;	// 0x3043a7a9
// declared property setter: - (void)setModelConfiguration:(id)configuration;	// 0x3043ab41
// declared property setter: - (void)setPersistentStoreOptions:(id)options;	// 0x3043ab1d
- (BOOL)writeAdditionalContent:(id)content toURL:(id)url originalContentsURL:(id)url3 error:(id *)error;	// 0x304373d5
- (BOOL)writeContents:(id)contents andAttributes:(id)attributes safelyToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x30439b2d
- (BOOL)writeContents:(id)contents toURL:(id)url forSaveOperation:(int)saveOperation originalContentsURL:(id)url4 error:(id *)error;	// 0x3043a0e5
@end
