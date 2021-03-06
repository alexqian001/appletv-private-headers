/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class ML3MusicLibrary, NSString;

@interface MusicLibrary : NSObject {
@private
	NSString *_basePath;	// 4 = 0x4
	double _autoflushTargetTime;	// 8 = 0x8
	unsigned _autoflushScheduled : 1;	// 16 = 0x10
	unsigned _needsFlush : 1;	// 16 = 0x10
	ML3MusicLibrary *_library3;	// 20 = 0x14
}
+ (void)_dbSyncAlreadyActive;	// 0x30e00005
+ (void)_dbSyncDidEnd;	// 0x30e00009
+ (void)_dbSyncWillBegin;	// 0x30e00001
+ (BOOL)_isDBSyncActiveIncludePending;	// 0x30dfff1d
+ (id)_sharedMusicLibrary:(BOOL)library;	// 0x30df8eb5
+ (void)beginDatabaseMigrationIfNecessary;	// 0x30df0789
+ (void)commitAllDeferredWork;	// 0x30e004f5
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x30dfc265
+ (BOOL)databaseDataFilesExist;	// 0x30dffe01
+ (void)disableFlush;	// 0x30e002c9
+ (void)enableFlush;	// 0x30e002f1
+ (BOOL)flush;	// 0x30df8e19
+ (BOOL)isDBSyncActive;	// 0x30dfff49
+ (BOOL)isFlushEnabled;	// 0x30e00335
+ (id)mediaFolderPath;	// 0x30dfc23d
+ (id)mediaFolderRelativePath:(id)path;	// 0x30e00505
+ (void)noteSyncAlreadyActive;	// 0x30e000c5
+ (void)noteSyncDidEnd;	// 0x30e00169
+ (void)noteSyncWillBegin;	// 0x30e0000d
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x30dfbd35
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base createParentFolderIfNecessary:(BOOL)necessary;	// 0x30e005a5
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x30dfbd59
+ (void)resetLibrary;	// 0x30e00235
+ (void)scheduleFlushDatabase;	// 0x30dfe141
+ (void)setSyncIsActive:(BOOL)active alreadyInTargetState:(BOOL)targetState withStateChangeHandlerBlock:(id)stateChangeHandlerBlock;	// 0x30dfff59
+ (id)sharedMusicLibrary;	// 0x30e00221
+ (id)sharedMusicLibraryIfExists;	// 0x30df8e49
- (id)initWithBasePath:(id)basePath;	// 0x30dffbb9
- (void)_autoflush;	// 0x30e004bd
- (void)_cancelAutoflush;	// 0x30e0046d
- (void)commitAllDeferredWork;	// 0x30e004e5
- (void)dealloc;	// 0x30dffd69
- (BOOL)flush;	// 0x30e004e1
- (void)mainThread_scheduleFlushDatabase;	// 0x30e0034d
- (void)scheduleFlushDatabase;	// 0x30e00445
@end

