/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, ML3DatabaseMetadata, ML3NondurableWriteSet, ML3UbiquitousDatabase, MLSQLiteConnection, ML3Container, NSMutableArray, NSCountedSet, ML3MusicLibrary_SQLiteDatabaseContext, NSArray, ML3SqliteDatabase;
@protocol OS_dispatch_queue;

@interface ML3MusicLibrary : NSObject {
	NSString *_path;	// 4 = 0x4
	BOOL _enableWrites;	// 8 = 0x8
	ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;	// 12 = 0xc
	ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;	// 16 = 0x10
	MLSQLiteConnection *_inMemoryDatabaseConnection;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_atomicityQueue;	// 24 = 0x18
	NSMutableArray *_artworkConversionCompletionHandlers;	// 28 = 0x1c
	NSString *_artworkConverterPIDNotifyName;	// 32 = 0x20
	int _artworkConverterPIDToken;	// 36 = 0x24
	BOOL _isConvertingArtwork;	// 40 = 0x28
	ML3UbiquitousDatabase *_ubiquitousDatabase;	// 44 = 0x2c
	ML3SqliteDatabase *_geniusDatabase;	// 48 = 0x30
	NSCountedSet *_notifyNamesToIgnore;	// 52 = 0x34
	NSMutableArray *_pendingNotifyPostNames;	// 56 = 0x38
	NSString *_notifyName;	// 60 = 0x3c
	int _notifyToken;	// 64 = 0x40
	NSString *_nonContentsNotifyName;	// 68 = 0x44
	int _nonContentsNotifyToken;	// 72 = 0x48
	NSString *_invisiblePropertyNotifyName;	// 76 = 0x4c
	int _invisiblePropertyNotifyToken;	// 80 = 0x50
	NSString *_displayValuesNotifyName;	// 84 = 0x54
	int _displayValuesNotifyToken;	// 88 = 0x58
	NSString *_syncGenerationNotifyName;	// 92 = 0x5c
	int _syncGenerationNotifyToken;	// 96 = 0x60
	NSString *_libraryUIDNotifyName;	// 100 = 0x64
	int _libraryUIDNotifyToken;	// 104 = 0x68
	BOOL _requiresProcessAssertion;	// 108 = 0x6c
	int _backupDisabledCount;	// 112 = 0x70
	BOOL _backupNeeded;	// 116 = 0x74
	BOOL _hasEverConnectedToDatabase;	// 117 = 0x75
	id _mcSettingsObserver;	// 120 = 0x78
	id _loggingObserver;	// 124 = 0x7c
	NSObject<OS_dispatch_queue> *_nondurableConcurrentQueue;	// 128 = 0x80
	ML3NondurableWriteSet *_nondurableWriteSet;	// 132 = 0x84
	NSString *_artworkDirectory;	// 136 = 0x88
	BOOL _artworkDirectoryFilesystemRepresentation[1024];	// 140 = 0x8c
	BOOL _hasEverConnectedTo;	// 1164 = 0x48c
	BOOL _keepPresignedValidyAfterVerification;	// 1165 = 0x48d
}
@property(readonly, assign) long long autoFilledTracksTotalSize;	// G=0x346c7a4d; 
@property(readonly, assign) long long currentContentRevision;	// G=0x346a3b35; 
@property(readonly, assign) long long currentRevision;	// G=0x3469c6d9; 
@property(readonly, assign) ML3DatabaseMetadata *databaseInfo;	// G=0x3469f939; 
@property(readonly, retain) ML3SqliteDatabase *geniusDatabase;	// G=0x346ae839; converted property
@property(readonly, assign, nonatomic) BOOL hasEverConnectedToDatabase;	// G=0x346cd061; @synthesize=_hasEverConnectedTo
@property(assign, nonatomic) BOOL keepPresignedValidyAfterVerification;	// G=0x346cd071; S=0x346cd081; @synthesize=_keepPresignedValidyAfterVerification
@property(retain) id libraryUID;	// G=0x346a8185; S=0x346c6681; converted property
@property(readonly, assign) NSArray *localizedSectionIndexTitles;	// G=0x346a691d; 
@property(readonly, assign) BOOL mediaRestrictionEnabled;	// G=0x346a25f5; 
@property(readonly, assign, nonatomic, getter=isNondurableWritingActive) BOOL nondurableWritingActive;	// G=0x346ac9a5; 
@property(readonly, assign) NSString *path;	// G=0x3469e2cd; @synthesize=_path
@property(readonly, assign) long long persistentID;	// G=0x346c65ed; 
@property(readonly, assign) NSArray *preferredAudioTracks;	// G=0x3469f8b1; 
@property(readonly, assign) NSArray *preferredSubtitleTracks;	// G=0x346a1e85; 
@property(readonly, assign) ML3Container *purchasedTracksPlaylist;	// G=0x346c4665; 
@property(readonly, assign) BOOL requiresArtworkConversionPostProcessing;	// G=0x346c24d1; 
@property(readonly, assign) BOOL requiresPostProcessing;	// G=0x3469e2e1; 
@property(assign) long long syncGenerationID;	// G=0x346a8dc5; S=0x346c6609; 
@property(readonly, retain) ML3UbiquitousDatabase *ubiquitousDatabase;	// G=0x3469e9d5; converted property
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x346c1e9d; 
+ (BOOL)_inTransactionUpdateSearchMapOnConnection:(id)transactionUpdateSearchMapOnConnection;	// 0x346f8c21
+ (BOOL)_inTransactionUpdateSortMapOnConnection:(id)transactionUpdateSortMapOnConnection forceUpdateOriginals:(BOOL)originals;	// 0x346f81f5
+ (id)_newDatabaseConnectionForPath:(id)path enableWrites:(BOOL)writes forLibrary:(id)library;	// 0x34696219
+ (id)_purgeableTrackPredicateWithUrgency:(int)urgency;	// 0x346c723d
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x346c26e5
+ (id)allArtworkFormatSizes;	// 0x346c8129
+ (id)allSchemaSQL;	// 0x346f1f2d
+ (id)allTables;	// 0x346f21ed
+ (MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x346a88ad
+ (BOOL)automaticDatabaseArtworkConversionEnabled;	// 0x346c1775
+ (void)beginDatabaseMigrationIfNecessary;	// 0x3469e0d5
+ (BOOL)buildDatabaseTablesUsingConnection:(id)connection;	// 0x346f2591
+ (void)connection:(id)connection didOpenDBHandle:(sqlite3 *)handle;	// 0x346c2141
+ (void)connection:(id)connection willCloseDBHandle:(sqlite3 *)handle;	// 0x346c2175
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x3470fd89
+ (BOOL)createIndexesUsingConnection:(id)connection;	// 0x346f58e9
+ (int)currentUserVersion;	// 0x3469e63d
+ (void)disableAutomaticDatabaseArtworkConversion;	// 0x346c1765
+ (void)disableAutomaticDatabaseValidation;	// 0x346c17c9
+ (BOOL)dropIndexesUsingConnection:(id)connection;	// 0x346f58c9
+ (BOOL)dropIndexesUsingConnection:(id)connection tableNames:(const char *)names;	// 0x346f5671
+ (void)enumerateSortMapTablesUsingBlock:(id)block;	// 0x346c600d
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x346c3e89
+ (id)fallbackGeniusDatabaseFilePath;	// 0x346c1f91
+ (id)geniusDatabaseFilePath;	// 0x346ae97d
+ (BOOL)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)connection;	// 0x346ca799
+ (BOOL)importationEnabled;	// 0x346c175d
+ (id)indexSchemaSQL;	// 0x346f2455
+ (void)initialize;	// 0x34693fad
+ (id)itemIndexSchemaSQL;	// 0x346f23cd
+ (id)itemSchemaSQL;	// 0x346f1f15
+ (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x346aa2a5
+ (id)localizedSectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x346aa225
+ (id)mainDatabasePath;	// 0x34695795
+ (id)mediaFolderPath;	// 0x3470fc91
+ (id)mediaFolderRelativePath:(id)path;	// 0x3470fcb9
+ (BOOL)migrateToCurrentUserVersionUsingConnection:(id)currentUserVersionUsingConnection;	// 0x346f29a5
+ (id)newDatabaseConnectionForPath:(id)path enableWrites:(BOOL)writes;	// 0x346961f5
+ (unsigned)numberOfArtworkStyles;	// 0x346c8619
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)connection;	// 0x3469e649
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x34710465
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base createParentFolderIfNecessary:(BOOL)necessary;	// 0x34710489
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x3470fda5
+ (unsigned)readableArtworkFormatIDForArtworkFormatID:(unsigned)artworkFormatID;	// 0x346c8349
+ (id)sectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x346a9e65
+ (id)sectionIndexTitles;	// 0x346a9dfd
+ (void)setImportationEnabled:(BOOL)enabled;	// 0x34694441
+ (id)sharedLibrary;	// 0x34694595
+ (id)sortMapSchemaSQL;	// 0x346f1efd
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x346c26b9
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x346c2691
+ (id)storeLinkSchemaSQL;	// 0x346f1ee5
+ (id)systemCurrentLanguage;	// 0x3469e939
+ (BOOL)updateSortMapOnConnection:(id)connection;	// 0x346f8ca1
+ (BOOL)updateTrackIntegrityOnConnection:(id)connection;	// 0x346c1e5d
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)connection;	// 0x3469e595
+ (int)userVersionUsingConnection:(id)connection;	// 0x3469e5f5
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x34694fb1
- (void).cxx_destruct;	// 0x346cd091
- (BOOL)__convertArtworkCacheID:(id)anId fromArtworkFormat:(unsigned)artworkFormat toArtworkFormat:(unsigned)artworkFormat3 sourceOptions:(id)options colorSpace:(CGColorSpaceRef)space;	// 0x346cabe9
- (void)_accessAccountCacheDBForSQL:(id)sql usingBlock:(id)block;	// 0x346cc38d
- (void)_accessDatabaseContextUsingBlock:(id)block;	// 0x3469c8d9
- (id)_albumArtistGroupingNameFromDataSource:(id)dataSource;	// 0x34702a7d
- (long long)_albumArtistPIDFromDataSource:(id)dataSource sortableNames:(id)names existingAlbumArtistPIDsForGroupingKeys:(id)groupingKeys insertIntoAlbumArtistStatement:(id)statement;	// 0x34702e11
- (id)_albumGroupingIdentifierFromDataSource:(id)dataSource albumArtistPersistentID:(long long)anId groupingKeysForGroupingNames:(id)groupingNames;	// 0x347033a9
- (long long)_albumPIDFromDataSource:(id)dataSource sortableNames:(id)names albumArtistPID:(long long)pid existingAlbumStatesForGroupingIdentifiers:(id)groupingIdentifiers insertIntoAlbumStatement:(id)statement groupingKeysForGroupingNames:(id)groupingNames;	// 0x34703815
- (id)_artistGroupingNameFromDataSource:(id)dataSource;	// 0x3470209d
- (long long)_artistPIDFromDataSource:(id)dataSource sortableNames:(id)names existingArtistPIDsForGroupingKeys:(id)groupingKeys insertIntoItemArtistStatement:(id)statement;	// 0x347023e1
- (void)_atomicClearIsConvertingArtwork;	// 0x346c1381
- (BOOL)_atomicTestAndSetIsConvertingArtworkWithCompletionHandler:(id)completionHandler;	// 0x346c0d41
- (long long)_baseLocationPIDFromDataSource:(id)dataSource;	// 0x34704ff9
- (BOOL)_commitNondurableWrites;	// 0x346ab369
- (id)_composerGroupingNameFromDataSource:(id)dataSource;	// 0x347046e5
- (long long)_composerPIDFromDataSource:(id)dataSource sortableNames:(id)names existingComposerPIDsForGroupingKeys:(id)groupingKeys insertIntoComposerStatement:(id)statement;	// 0x34704965
- (void)_convertArtworkInManifsetFromArtworkFormat:(unsigned)artworkFormat toArtworkFormat:(unsigned)artworkFormat2 notificationInterval:(double)interval;	// 0x346caf05
- (void)_delayableNotifyPost:(id)post localNotificationName:(id)name;	// 0x346ad08d
- (BOOL)_drawAndWriteImage:(CGImageRef)image outputWidth:(unsigned long)width outputHeight:(unsigned long)height colorSpace:(CGColorSpaceRef)space cacheID:(id)anId formatID:(unsigned)anId6 artworkStyle:(XXStruct_$eUQoB *)style resultingImageSubRect:(CGRect *)rect resultingLength:(unsigned *)length;	// 0x346c35c9
- (void)_enumerateDatabaseContextsUsingBlock:(id)block;	// 0x346c147d
- (void)_enumeratePurgeableTracksForUrgency:(int)urgency respectSongMattress:(BOOL)mattress usingBlock:(id)block;	// 0x346c7419
- (id)_existingAlbumStatesForGroupingIdentifiers:(id)groupingIdentifiers;	// 0x34708845
- (id)_existingCollectionPIDsForTable:(id)table groupingNames:(id)names groupingKeysForGroupingNames:(id)groupingNames;	// 0x3470803d
- (id)_genreGroupingNameFromDataSource:(id)dataSource;	// 0x347040cd
- (long long)_genrePIDFromDataSource:(id)dataSource sortableNames:(id)names existingGenrePIDsForGroupingKeys:(id)groupingKeys insertIntoGenreStatement:(id)statement;	// 0x34704335
- (id)_insertIntoAlbumArtistStatement;	// 0x34702c3d
- (id)_insertIntoAlbumStatement;	// 0x347035cd
- (id)_insertIntoChapterUsingVtabSQL;	// 0x34707ab1
- (id)_insertIntoComposerStatement;	// 0x347047a5
- (id)_insertIntoGenreStatement;	// 0x3470418d
- (id)_insertIntoItemArtistStatement;	// 0x347021f5
- (id)_insertIntoItemExtraUsingVtabSQL;	// 0x34706435
- (id)_insertIntoItemSearchUsingVtabSQL;	// 0x34707525
- (id)_insertIntoItemStatsUsingVtabSQL;	// 0x34707045
- (id)_insertIntoItemUsingVtabSQL;	// 0x34705689
- (id)_insertIntoPurgeableListUsingVtabSQL;	// 0x34707799
- (id)_insertStringsIntoSortMapOrFail:(id)fail;	// 0x346f6369
- (long long)_int64ValueForFirstRowAndColumnWithSQL:(id)sql;	// 0x3469c6f5
- (long long)_locationKindPIDFromDataSource:(id)dataSource;	// 0x34704e09
- (BOOL)_mustProcessLanguageChange;	// 0x346c6171
- (id)_newGeniusDBConnectionAtPath:(id)path;	// 0x346ae999
- (void)_noteUnnecessaryConversionForDeviceTypeFromArtworkFormat:(unsigned)artworkFormat toArtworkFormat:(unsigned)artworkFormat2;	// 0x346cba3d
- (void)_onBackgroundQueuePerformDatabaseContextBlock:(id)block;	// 0x3469cab9
- (void)_onMainQueuePerformDatabaseContextBlock:(id)block;	// 0x346a09e5
- (void)_populateNameOrderForPID:(unordered_map<long long, ML3NameOrder, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, ML3NameOrder>>, false> *)pid table:(id)table nameSQL:(id)sql;	// 0x34707c35
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x346c5ee9
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)only;	// 0x346c5fd9
- (void)_postInvisiblePropertyChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x346c5fa5
- (void)_postLibraryNotification:(id)notification isSourceExternal:(BOOL)external userInfo:(id)info;	// 0x346ad801
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x346ad059
- (id)_replaceIntoPurgeableListUsingVtabSQL;	// 0x34707935
- (BOOL)_runStatementWithSQL:(id)sql bindingValue:(id)value :(id)arg3;	// 0x346c33cd
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)interval;	// 0x346cc9a1
- (BOOL)_writeCGImage:(CGImageRef)image length:(unsigned long)length forCacheID:(id)cacheID formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x346c39d1
- (BOOL)_writeImageBytes:(const void *)bytes length:(unsigned long)length formatID:(unsigned)anId cacheID:(id)anId4;	// 0x346c3aa5
- (void)accessConnectionUsingBlock:(id)block;	// 0x3469e3f1
- (void)accessDatabaseUsingBlock:(id)block;	// 0x346c2ae5
- (void)accessSortKeyBuilder:(id)builder;	// 0x346a7019
- (long long)addStringToSortMap:(id)sortMap;	// 0x346c620d
- (id)albumArtistForEffectiveAlbumArtistName:(id)effectiveAlbumArtistName;	// 0x346e78e5
- (id)albumForAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(id)number compilation:(BOOL)compilation;	// 0x346d4a5d
- (id)appleIDForDSID:(unsigned long long)dsid;	// 0x346cc68d
- (id)artistForArtistName:(id)artistName seriesName:(id)name;	// 0x346d3af9
- (id)artistGroupingKeyForArtistName:(id)artistName seriesName:(id)name;	// 0x346d3a8d
- (id)artworkDataForCacheID:(id)cacheID formatID:(unsigned)anId;	// 0x346a89f9
// declared property getter: - (long long)autoFilledTracksTotalSize;	// 0x346c7a4d
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)urgency;	// 0x346c7a61
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)urgency respectSongMattress:(BOOL)mattress;	// 0x346c7a75
- (void)beginAutoConvertingArtworkFormats;	// 0x346cc045
- (void)beginConvertingArtworkFormatsWithCompletionHandler:(id)completionHandler;	// 0x346cc031
- (BOOL)buildDatabaseTables;	// 0x346f2855
- (BOOL)coerceValidDatabase;	// 0x346f5d35
- (BOOL)compactArtwork;	// 0x346c9c7d
- (id)composerForComposerName:(id)composerName;	// 0x346e6c7d
- (void)convertAlbumGridBGRA1xToJPEG1xWithNotificationInterval:(double)notificationInterval;	// 0x346cc0b9
- (void)convertAlbumListJPEGToBGRAWithNotificationInterval:(double)notificationInterval;	// 0x346cc191
- (void)convertArtworkFormatsInBackground:(BOOL)background completionHandler:(id)handler;	// 0x346cbb85
- (BOOL)convertLegacyArtworkFromArtworkBlobFilePath:(id)artworkBlobFilePath;	// 0x346ca255
- (BOOL)createIndexes;	// 0x346f5b3d
// declared property getter: - (long long)currentContentRevision;	// 0x346a3b35
// declared property getter: - (long long)currentRevision;	// 0x3469c6d9
// declared property getter: - (id)databaseInfo;	// 0x3469f939
- (void)dealloc;	// 0x346c2055
- (BOOL)deleteAllArtwork;	// 0x346c909d
- (BOOL)deleteAndRecreateDatabaseUsingConnection:(id)connection;	// 0x346f5cb1
- (BOOL)deleteArtworkForCacheID:(id)cacheID;	// 0x346c9445
- (BOOL)deleteArtworkForCacheID:(id)cacheID formatID:(unsigned)anId;	// 0x346c9c59
- (BOOL)deleteArtworkForCacheID:(id)cacheID formatID:(unsigned)anId deleteAllFromConversionTable:(BOOL)conversionTable;	// 0x346c98f5
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize;	// 0x346c7bd1
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize urgency:(int)urgency;	// 0x346c7bf5
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize urgency:(int)urgency respectSongMattress:(BOOL)mattress;	// 0x346c7c19
- (BOOL)deleteDatabase;	// 0x346c30a5
- (void)deleteFromArtworkConversionForCacheID:(id)cacheID fromFormatID:(unsigned)formatID toFormatID:(unsigned)formatID3;	// 0x346c92bd
- (void)deletePresignedValidity;	// 0x346c1a79
- (BOOL)dropItemIndexes;	// 0x346f59e1
- (void)enumeratePersistentIDsAfterRevision:(long long)revision revisionTrackingCode:(unsigned)code usingBlock:(id)block;	// 0x346c66d1
- (void)enumeratePersistentIDsAfterRevision:(long long)revision usingBlock:(id)block;	// 0x346c6c05
- (BOOL)executeSQL:(id)sql;	// 0x346c2651
// converted property getter: - (id)geniusDatabase;	// 0x346ae839
- (id)genreForGenre:(id)genre;	// 0x346d904d
- (void)getChangedPersistentIDsAfterRevision:(long long)revision revisionTrackingCode:(int)code usingBlock:(id)block;	// 0x346c6e35
- (id)groupingKeyForString:(id)string;	// 0x346c2bad
- (id)groupingKeysForStrings:(id)strings;	// 0x346c2dad
- (BOOL)handleArtworkConversion;	// 0x346e856d
- (BOOL)handlePrepareDatabase;	// 0x346e7f29
- (BOOL)hasArtworkForCacheID:(id)cacheID;	// 0x346c838d
- (BOOL)hasArtworkForCacheID:(id)cacheID ensureArtworkFileExists:(BOOL)exists;	// 0x346c83a5
// declared property getter: - (BOOL)hasEverConnectedToDatabase;	// 0x346cd061
- (BOOL)hasPresignedValidity;	// 0x346c1ad5
- (BOOL)importTracksFromDataSource:(id)dataSource;	// 0x3470bed5
- (BOOL)importTracksFromDataSource:(id)dataSource progressHandler:(id)handler;	// 0x3470bef9
- (BOOL)insertArtworkWithImageData:(id)imageData forCacheID:(id)cacheID;	// 0x346c8f15
- (long long)insertStringIntoSortMapNoTransaction:(id)transaction;	// 0x346f7839
- (id)insertStringsIntoSortMap:(id)map;	// 0x346f7655
// declared property getter: - (BOOL)isNondurableWritingActive;	// 0x346ac9a5
- (BOOL)isReadable;	// 0x346c6209
// declared property getter: - (BOOL)keepPresignedValidyAfterVerification;	// 0x346cd071
// converted property getter: - (id)libraryUID;	// 0x346a8185
- (void)loadArtworkForCacheID:(id)cacheID formatID:(unsigned)anId completionHandler:(id)handler;	// 0x346a894d
- (id)localizedSectionHeaderForSectionIndex:(unsigned)sectionIndex;	// 0x346a6e75
// declared property getter: - (id)localizedSectionIndexTitles;	// 0x346a691d
- (id)locationKindForKind:(id)kind;	// 0x346fbefd
// declared property getter: - (BOOL)mediaRestrictionEnabled;	// 0x346a25f5
- (void)migratePresignedValidity;	// 0x346c1df9
- (XXStruct_Cy4r_A)nameOrderForString:(id)string;	// 0x346f60d9
- (id)newDatabaseConnection;	// 0x34696081
- (id)nondurableWriteSetForReading;	// 0x346a1065
- (id)nondurableWriteSetForWriting;	// 0x346aaa95
- (void)notifyContentsDidChange;	// 0x346c440d
- (void)notifyDisplayValuesPropertyDidChange;	// 0x346c45a5
- (void)notifyInvisiblePropertyDidChange;	// 0x346c44e5
- (void)notifyNonContentsPropertyDidChange;	// 0x346ace15
// declared property getter: - (id)path;	// 0x3469e2cd
- (void)performTransactionAllowingWrites:(BOOL)writes withBlock:(id)block;	// 0x346a3ccd
- (void)performTransactionKind:(int)kind waitIfBusy:(BOOL)busy withBlock:(id)block;	// 0x346a3cf9
- (void)performTransactionKind:(int)kind withBlock:(id)block;	// 0x346c3f21
- (void)performTransactionWithBlock:(id)block;	// 0x346abcbd
// declared property getter: - (long long)persistentID;	// 0x346c65ed
- (BOOL)persistentID:(long long)anId changedAfterRevision:(long long)revision revisionTrackingCode:(int)code;	// 0x346c6c91
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData trackValues:(id)values;	// 0x346ee975
- (BOOL)populateStaticItemsOfDynamicContainers;	// 0x346c2669
// declared property getter: - (id)preferredAudioTracks;	// 0x3469f8b1
// declared property getter: - (id)preferredSubtitleTracks;	// 0x346a1e85
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x346c3c75
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x346c3e51
// declared property getter: - (id)purchasedTracksPlaylist;	// 0x346c4665
- (void)reconnectToDatabase;	// 0x346c276d
- (void)reconnectToDatabaseWithCompletionHandler:(id)completionHandler;	// 0x346c2781
- (BOOL)removeLocationsForItemsMissingAssets;	// 0x346f8d61
- (void)removeOrphanedTracks;	// 0x346ccb0d
// declared property getter: - (BOOL)requiresArtworkConversionPostProcessing;	// 0x346c24d1
// declared property getter: - (BOOL)requiresPostProcessing;	// 0x3469e2e1
- (BOOL)resetAllContents;	// 0x346f91f9
- (void)resetUbiquitousMetadata;	// 0x346c1ead
- (BOOL)runStatementWithSQL:(id)sql bindingValue:(id)value;	// 0x346c3205
- (void)savePlaylists;	// 0x346c5359
- (void)savePlaylistsSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x346c537d
- (void)saveTrackMetadata;	// 0x346c4bc9
- (void)saveTrackMetadataSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x346c4bed
- (unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)sectionIndex;	// 0x346a71c1
- (BOOL)setAppleID:(id)anId forDSID:(unsigned long long)dsid;	// 0x346cc4d5
// declared property setter: - (void)setKeepPresignedValidyAfterVerification:(BOOL)verification;	// 0x346cd081
// converted property setter: - (void)setLibraryUID:(id)uid;	// 0x346c6681
// declared property setter: - (void)setSyncGenerationID:(long long)anId;	// 0x346c6609
- (BOOL)setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x346cc889
- (id)statementWithSQL:(id)sql;	// 0x346b107d
- (void)statementWithSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x3469c811
- (void)statementWithSQL:(id)sql usingBlock:(id)block;	// 0x346a0925
- (void)statementWithSQLPrefix:(id)sqlprefix inPersistentIDs:(const long long *)persistentIDs count:(unsigned)count usingBlock:(id)block;	// 0x346c0681
// declared property getter: - (long long)syncGenerationID;	// 0x346a8dc5
// converted property getter: - (id)ubiquitousDatabase;	// 0x3469e9d5
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;	// 0x346e86c1
- (void)updateOrderingLanguagesForCurrentLanguage;	// 0x346e886d
- (BOOL)updateSortMap;	// 0x346c6409
- (void)updateTrackIntegrity;	// 0x346c1e81
- (id)valueForDatabaseProperty:(id)databaseProperty;	// 0x346a81a1
- (BOOL)verifyPresignedValidity;	// 0x346c1b49
// declared property getter: - (BOOL)writable;	// 0x346c1e9d
- (BOOL)writeToDatabaseArtworkForCacheID:(id)cacheID length:(unsigned long)length formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x346c8bf5
- (BOOL)writeToDiskArtworkWithImageData:(id)imageData forCacheID:(id)cacheID resultingLengths:(unsigned **)lengths formatIDs:(unsigned **)ids imageSubRects:(CGRect **)rects count:(unsigned *)count;	// 0x346c861d
@end
