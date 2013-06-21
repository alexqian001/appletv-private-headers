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
@property(readonly, assign) long long autoFilledTracksTotalSize;	// G=0x346c6dcd; 
@property(readonly, assign) long long currentContentRevision;	// G=0x346a301d; 
@property(readonly, assign) long long currentRevision;	// G=0x3469bca9; 
@property(readonly, assign) ML3DatabaseMetadata *databaseInfo;	// G=0x3469ee21; 
@property(readonly, retain) ML3SqliteDatabase *geniusDatabase;	// G=0x346add21; converted property
@property(readonly, assign, nonatomic) BOOL hasEverConnectedToDatabase;	// G=0x346cc209; @synthesize=_hasEverConnectedTo
@property(assign, nonatomic) BOOL keepPresignedValidyAfterVerification;	// G=0x346cc219; S=0x346cc229; @synthesize=_keepPresignedValidyAfterVerification
@property(retain) id libraryUID;	// G=0x346a766d; S=0x346c5a01; converted property
@property(readonly, assign) NSArray *localizedSectionIndexTitles;	// G=0x346a5e05; 
@property(readonly, assign) BOOL mediaRestrictionEnabled;	// G=0x346a1add; 
@property(readonly, assign, nonatomic, getter=isNondurableWritingActive) BOOL nondurableWritingActive;	// G=0x346abe8d; 
@property(readonly, assign) NSString *path;	// G=0x3469d78d; @synthesize=_path
@property(readonly, assign) long long persistentID;	// G=0x346c596d; 
@property(readonly, assign) NSArray *preferredAudioTracks;	// G=0x3469ed99; 
@property(readonly, assign) NSArray *preferredSubtitleTracks;	// G=0x346a136d; 
@property(readonly, assign) ML3Container *purchasedTracksPlaylist;	// G=0x346c39e5; 
@property(readonly, assign) BOOL requiresPostProcessing;	// G=0x3469d7a1; 
@property(assign) long long syncGenerationID;	// G=0x346a82ad; S=0x346c5989; 
@property(readonly, retain) ML3UbiquitousDatabase *ubiquitousDatabase;	// G=0x3469debd; converted property
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x346c1385; 
+ (BOOL)_inTransactionUpdateSearchMapOnConnection:(id)transactionUpdateSearchMapOnConnection;	// 0x346f7d71
+ (BOOL)_inTransactionUpdateSortMapOnConnection:(id)transactionUpdateSortMapOnConnection forceUpdateOriginals:(BOOL)originals;	// 0x346f7345
+ (id)_newDatabaseConnectionForPath:(id)path enableWrites:(BOOL)writes forLibrary:(id)library;	// 0x346957e9
+ (id)_purgeableTrackPredicateWithUrgency:(int)urgency;	// 0x346c65bd
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x346c1a65
+ (id)allArtworkFormatSizes;	// 0x346c74a9
+ (id)allSchemaSQL;	// 0x346f107d
+ (id)allTables;	// 0x346f133d
+ (MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x346a7d95
+ (BOOL)automaticDatabaseArtworkConversionEnabled;	// 0x346c0c5d
+ (void)beginDatabaseMigrationIfNecessary;	// 0x3469d6a5
+ (BOOL)buildDatabaseTablesUsingConnection:(id)connection;	// 0x346f16e1
+ (void)connection:(id)connection didOpenDBHandle:(sqlite3 *)handle;	// 0x346c1629
+ (void)connection:(id)connection willCloseDBHandle:(sqlite3 *)handle;	// 0x346c165d
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x3470eed9
+ (BOOL)createIndexesUsingConnection:(id)connection;	// 0x346f4a39
+ (int)currentUserVersion;	// 0x3469db25
+ (void)disableAutomaticDatabaseArtworkConversion;	// 0x346c0c4d
+ (void)disableAutomaticDatabaseValidation;	// 0x346c0cb1
+ (BOOL)dropIndexesUsingConnection:(id)connection;	// 0x346f4a19
+ (BOOL)dropIndexesUsingConnection:(id)connection tableNames:(const char *)names;	// 0x346f47c1
+ (void)enumerateSortMapTablesUsingBlock:(id)block;	// 0x346c538d
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x346c3209
+ (id)fallbackGeniusDatabaseFilePath;	// 0x346c1479
+ (id)geniusDatabaseFilePath;	// 0x346ade65
+ (BOOL)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)connection;	// 0x346c9b19
+ (BOOL)importationEnabled;	// 0x346c0c45
+ (id)indexSchemaSQL;	// 0x346f15a5
+ (void)initialize;	// 0x3469357d
+ (id)itemIndexSchemaSQL;	// 0x346f151d
+ (id)itemSchemaSQL;	// 0x346f1065
+ (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x346a978d
+ (id)localizedSectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x346a970d
+ (id)mainDatabasePath;	// 0x34694d65
+ (id)mediaFolderPath;	// 0x3470ede1
+ (id)mediaFolderRelativePath:(id)path;	// 0x3470ee09
+ (BOOL)migrateToCurrentUserVersionUsingConnection:(id)currentUserVersionUsingConnection;	// 0x346f1af5
+ (id)newDatabaseConnectionForPath:(id)path enableWrites:(BOOL)writes;	// 0x346957c5
+ (unsigned)numberOfArtworkStyles;	// 0x346c7999
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)connection;	// 0x3469db31
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x3470f5b5
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base createParentFolderIfNecessary:(BOOL)necessary;	// 0x3470f5d9
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x3470eef5
+ (unsigned)readableArtworkFormatIDForArtworkFormatID:(unsigned)artworkFormatID;	// 0x346c76c9
+ (id)sectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x346a934d
+ (id)sectionIndexTitles;	// 0x346a92e5
+ (void)setImportationEnabled:(BOOL)enabled;	// 0x34693a11
+ (id)sharedLibrary;	// 0x34693b65
+ (id)sortMapSchemaSQL;	// 0x346f104d
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x346c1a39
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x346c1a11
+ (id)storeLinkSchemaSQL;	// 0x346f1035
+ (id)systemCurrentLanguage;	// 0x3469de21
+ (BOOL)updateSortMapOnConnection:(id)connection;	// 0x346f7df1
+ (BOOL)updateTrackIntegrityOnConnection:(id)connection;	// 0x346c1345
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)connection;	// 0x3469da7d
+ (int)userVersionUsingConnection:(id)connection;	// 0x3469dadd
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x34694581
- (void).cxx_destruct;	// 0x346cc239
- (BOOL)__convertArtworkCacheID:(id)anId fromArtworkFormat:(unsigned)artworkFormat toArtworkFormat:(unsigned)artworkFormat3 sourceOptions:(id)options colorSpace:(CGColorSpaceRef)space;	// 0x346c9f69
- (void)_accessAccountCacheDBForSQL:(id)sql usingBlock:(id)block;	// 0x346cb539
- (void)_accessDatabaseContextUsingBlock:(id)block;	// 0x3469bea9
- (id)_albumArtistGroupingNameFromDataSource:(id)dataSource;	// 0x34701bcd
- (long long)_albumArtistPIDFromDataSource:(id)dataSource sortableNames:(id)names existingAlbumArtistPIDsForGroupingKeys:(id)groupingKeys insertIntoAlbumArtistStatement:(id)statement;	// 0x34701f61
- (id)_albumGroupingIdentifierFromDataSource:(id)dataSource albumArtistPersistentID:(long long)anId groupingKeysForGroupingNames:(id)groupingNames;	// 0x347024f9
- (long long)_albumPIDFromDataSource:(id)dataSource sortableNames:(id)names albumArtistPID:(long long)pid existingAlbumStatesForGroupingIdentifiers:(id)groupingIdentifiers insertIntoAlbumStatement:(id)statement groupingKeysForGroupingNames:(id)groupingNames;	// 0x34702965
- (id)_artistGroupingNameFromDataSource:(id)dataSource;	// 0x347011ed
- (long long)_artistPIDFromDataSource:(id)dataSource sortableNames:(id)names existingArtistPIDsForGroupingKeys:(id)groupingKeys insertIntoItemArtistStatement:(id)statement;	// 0x34701531
- (void)_atomicClearIsConvertingArtwork;	// 0x346c0869
- (BOOL)_atomicTestAndSetIsConvertingArtworkWithCompletionHandler:(id)completionHandler;	// 0x346c0229
- (long long)_baseLocationPIDFromDataSource:(id)dataSource;	// 0x34704149
- (BOOL)_commitNondurableWrites;	// 0x346aa84d
- (id)_composerGroupingNameFromDataSource:(id)dataSource;	// 0x34703835
- (long long)_composerPIDFromDataSource:(id)dataSource sortableNames:(id)names existingComposerPIDsForGroupingKeys:(id)groupingKeys insertIntoComposerStatement:(id)statement;	// 0x34703ab5
- (void)_convertArtworkInManifsetFromArtworkFormat:(unsigned)artworkFormat toArtworkFormat:(unsigned)artworkFormat2 notificationInterval:(double)interval;	// 0x346ca285
- (void)_delayableNotifyPost:(id)post localNotificationName:(id)name;	// 0x346ac575
- (BOOL)_drawAndWriteImage:(CGImageRef)image outputWidth:(unsigned long)width outputHeight:(unsigned long)height colorSpace:(CGColorSpaceRef)space cacheID:(id)anId formatID:(unsigned)anId6 artworkStyle:(XXStruct_$eUQoB *)style resultingImageSubRect:(CGRect *)rect resultingLength:(unsigned *)length;	// 0x346c2949
- (void)_enumerateDatabaseContextsUsingBlock:(id)block;	// 0x346c0965
- (void)_enumeratePurgeableTracksForUrgency:(int)urgency respectSongMattress:(BOOL)mattress usingBlock:(id)block;	// 0x346c6799
- (id)_existingAlbumStatesForGroupingIdentifiers:(id)groupingIdentifiers;	// 0x34707995
- (id)_existingCollectionPIDsForTable:(id)table groupingNames:(id)names groupingKeysForGroupingNames:(id)groupingNames;	// 0x3470718d
- (id)_genreGroupingNameFromDataSource:(id)dataSource;	// 0x3470321d
- (long long)_genrePIDFromDataSource:(id)dataSource sortableNames:(id)names existingGenrePIDsForGroupingKeys:(id)groupingKeys insertIntoGenreStatement:(id)statement;	// 0x34703485
- (id)_insertIntoAlbumArtistStatement;	// 0x34701d8d
- (id)_insertIntoAlbumStatement;	// 0x3470271d
- (id)_insertIntoChapterUsingVtabSQL;	// 0x34706c01
- (id)_insertIntoComposerStatement;	// 0x347038f5
- (id)_insertIntoGenreStatement;	// 0x347032dd
- (id)_insertIntoItemArtistStatement;	// 0x34701345
- (id)_insertIntoItemExtraUsingVtabSQL;	// 0x34705585
- (id)_insertIntoItemSearchUsingVtabSQL;	// 0x34706675
- (id)_insertIntoItemStatsUsingVtabSQL;	// 0x34706195
- (id)_insertIntoItemUsingVtabSQL;	// 0x347047d9
- (id)_insertIntoPurgeableListUsingVtabSQL;	// 0x347068e9
- (id)_insertStringsIntoSortMapOrFail:(id)fail;	// 0x346f54b9
- (long long)_int64ValueForFirstRowAndColumnWithSQL:(id)sql;	// 0x3469bcc5
- (long long)_locationKindPIDFromDataSource:(id)dataSource;	// 0x34703f59
- (BOOL)_mustProcessLanguageChange;	// 0x346c54f1
- (id)_newGeniusDBConnectionAtPath:(id)path;	// 0x346ade81
- (void)_onBackgroundQueuePerformDatabaseContextBlock:(id)block;	// 0x3469c089
- (void)_onMainQueuePerformDatabaseContextBlock:(id)block;	// 0x3469fecd
- (void)_populateNameOrderForPID:(unordered_map<long long, ML3NameOrder, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, ML3NameOrder>>, false> *)pid table:(id)table nameSQL:(id)sql;	// 0x34706d85
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x346c5269
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)only;	// 0x346c5359
- (void)_postInvisiblePropertyChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x346c5325
- (void)_postLibraryNotification:(id)notification isSourceExternal:(BOOL)external userInfo:(id)info;	// 0x346acce9
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x346ac541
- (id)_replaceIntoPurgeableListUsingVtabSQL;	// 0x34706a85
- (BOOL)_runStatementWithSQL:(id)sql bindingValue:(id)value :(id)arg3;	// 0x346c274d
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)interval;	// 0x346cbb49
- (BOOL)_writeCGImage:(CGImageRef)image length:(unsigned long)length forCacheID:(id)cacheID formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x346c2d51
- (BOOL)_writeImageBytes:(const void *)bytes length:(unsigned long)length formatID:(unsigned)anId cacheID:(id)anId4;	// 0x346c2e25
- (void)accessConnectionUsingBlock:(id)block;	// 0x3469d8b1
- (void)accessDatabaseUsingBlock:(id)block;	// 0x346c1e65
- (void)accessSortKeyBuilder:(id)builder;	// 0x346a6501
- (long long)addStringToSortMap:(id)sortMap;	// 0x346c558d
- (id)albumArtistForEffectiveAlbumArtistName:(id)effectiveAlbumArtistName;	// 0x346e6a8d
- (id)albumForAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(id)number compilation:(BOOL)compilation;	// 0x346d3c05
- (id)appleIDForDSID:(unsigned long long)dsid;	// 0x346cb839
- (id)artistForArtistName:(id)artistName seriesName:(id)name;	// 0x346d2ca1
- (id)artistGroupingKeyForArtistName:(id)artistName seriesName:(id)name;	// 0x346d2c35
- (id)artworkDataForCacheID:(id)cacheID formatID:(unsigned)anId;	// 0x346a7ee1
// declared property getter: - (long long)autoFilledTracksTotalSize;	// 0x346c6dcd
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)urgency;	// 0x346c6de1
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)urgency respectSongMattress:(BOOL)mattress;	// 0x346c6df5
- (void)beginAutoConvertingArtworkFormats;	// 0x346cb27d
- (void)beginConvertingArtworkFormatsWithCompletionHandler:(id)completionHandler;	// 0x346cb269
- (BOOL)buildDatabaseTables;	// 0x346f19a5
- (BOOL)coerceValidDatabase;	// 0x346f4e85
- (BOOL)compactArtwork;	// 0x346c8ffd
- (id)composerForComposerName:(id)composerName;	// 0x346e5e25
- (void)convertAlbumGridBGRA1xToJPEG1xWithNotificationInterval:(double)notificationInterval;	// 0x346cb2f1
- (void)convertAlbumListJPEGToBGRAWithNotificationInterval:(double)notificationInterval;	// 0x346cb3b9
- (void)convertArtworkFormatsInBackground:(BOOL)background completionHandler:(id)handler;	// 0x346cadbd
- (BOOL)convertLegacyArtworkFromArtworkBlobFilePath:(id)artworkBlobFilePath;	// 0x346c95d5
- (BOOL)createIndexes;	// 0x346f4c8d
// declared property getter: - (long long)currentContentRevision;	// 0x346a301d
// declared property getter: - (long long)currentRevision;	// 0x3469bca9
// declared property getter: - (id)databaseInfo;	// 0x3469ee21
- (void)dealloc;	// 0x346c153d
- (BOOL)deleteAllArtwork;	// 0x346c841d
- (BOOL)deleteAndRecreateDatabaseUsingConnection:(id)connection;	// 0x346f4e01
- (BOOL)deleteArtworkForCacheID:(id)cacheID;	// 0x346c87c5
- (BOOL)deleteArtworkForCacheID:(id)cacheID formatID:(unsigned)anId;	// 0x346c8fd9
- (BOOL)deleteArtworkForCacheID:(id)cacheID formatID:(unsigned)anId deleteAllFromConversionTable:(BOOL)conversionTable;	// 0x346c8c75
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize;	// 0x346c6f51
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize urgency:(int)urgency;	// 0x346c6f75
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize urgency:(int)urgency respectSongMattress:(BOOL)mattress;	// 0x346c6f99
- (BOOL)deleteDatabase;	// 0x346c2425
- (void)deleteFromArtworkConversionForCacheID:(id)cacheID fromFormatID:(unsigned)formatID toFormatID:(unsigned)formatID3;	// 0x346c863d
- (void)deletePresignedValidity;	// 0x346c0f61
- (BOOL)dropItemIndexes;	// 0x346f4b31
- (void)enumeratePersistentIDsAfterRevision:(long long)revision revisionTrackingCode:(unsigned)code usingBlock:(id)block;	// 0x346c5a51
- (void)enumeratePersistentIDsAfterRevision:(long long)revision usingBlock:(id)block;	// 0x346c5f85
- (BOOL)executeSQL:(id)sql;	// 0x346c19d1
// converted property getter: - (id)geniusDatabase;	// 0x346add21
- (id)genreForGenre:(id)genre;	// 0x346d81f5
- (void)getChangedPersistentIDsAfterRevision:(long long)revision revisionTrackingCode:(int)code usingBlock:(id)block;	// 0x346c61b5
- (id)groupingKeyForString:(id)string;	// 0x346c1f2d
- (id)groupingKeysForStrings:(id)strings;	// 0x346c212d
- (BOOL)handlePrepareDatabase;	// 0x346e70d1
- (BOOL)hasArtworkForCacheID:(id)cacheID;	// 0x346c770d
- (BOOL)hasArtworkForCacheID:(id)cacheID ensureArtworkFileExists:(BOOL)exists;	// 0x346c7725
// declared property getter: - (BOOL)hasEverConnectedToDatabase;	// 0x346cc209
- (BOOL)hasPresignedValidity;	// 0x346c0fbd
- (BOOL)importTracksFromDataSource:(id)dataSource;	// 0x3470b025
- (BOOL)importTracksFromDataSource:(id)dataSource progressHandler:(id)handler;	// 0x3470b049
- (BOOL)insertArtworkWithImageData:(id)imageData forCacheID:(id)cacheID;	// 0x346c8295
- (long long)insertStringIntoSortMapNoTransaction:(id)transaction;	// 0x346f6989
- (id)insertStringsIntoSortMap:(id)map;	// 0x346f67a5
// declared property getter: - (BOOL)isNondurableWritingActive;	// 0x346abe8d
- (BOOL)isReadable;	// 0x346c5589
// declared property getter: - (BOOL)keepPresignedValidyAfterVerification;	// 0x346cc219
// converted property getter: - (id)libraryUID;	// 0x346a766d
- (void)loadArtworkForCacheID:(id)cacheID formatID:(unsigned)anId completionHandler:(id)handler;	// 0x346a7e35
- (id)localizedSectionHeaderForSectionIndex:(unsigned)sectionIndex;	// 0x346a635d
// declared property getter: - (id)localizedSectionIndexTitles;	// 0x346a5e05
- (id)locationKindForKind:(id)kind;	// 0x346fb04d
// declared property getter: - (BOOL)mediaRestrictionEnabled;	// 0x346a1add
- (void)migratePresignedValidity;	// 0x346c12e1
- (XXStruct_Cy4r_A)nameOrderForString:(id)string;	// 0x346f5229
- (id)newDatabaseConnection;	// 0x34695651
- (id)nondurableWriteSetForReading;	// 0x346a054d
- (id)nondurableWriteSetForWriting;	// 0x346a9f7d
- (void)notifyContentsDidChange;	// 0x346c378d
- (void)notifyDisplayValuesPropertyDidChange;	// 0x346c3925
- (void)notifyInvisiblePropertyDidChange;	// 0x346c3865
- (void)notifyNonContentsPropertyDidChange;	// 0x346ac2fd
// declared property getter: - (id)path;	// 0x3469d78d
- (void)performTransactionAllowingWrites:(BOOL)writes withBlock:(id)block;	// 0x346a31b5
- (void)performTransactionKind:(int)kind waitIfBusy:(BOOL)busy withBlock:(id)block;	// 0x346a31e1
- (void)performTransactionKind:(int)kind withBlock:(id)block;	// 0x346c32a1
- (void)performTransactionWithBlock:(id)block;	// 0x346ab1a5
// declared property getter: - (long long)persistentID;	// 0x346c596d
- (BOOL)persistentID:(long long)anId changedAfterRevision:(long long)revision revisionTrackingCode:(int)code;	// 0x346c6011
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData trackValues:(id)values;	// 0x346edac5
- (BOOL)populateStaticItemsOfDynamicContainers;	// 0x346c19e9
// declared property getter: - (id)preferredAudioTracks;	// 0x3469ed99
// declared property getter: - (id)preferredSubtitleTracks;	// 0x346a136d
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x346c2ff5
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x346c31d1
// declared property getter: - (id)purchasedTracksPlaylist;	// 0x346c39e5
- (void)reconnectToDatabase;	// 0x346c1aed
- (void)reconnectToDatabaseWithCompletionHandler:(id)completionHandler;	// 0x346c1b01
- (BOOL)removeLocationsForItemsMissingAssets;	// 0x346f7eb1
- (void)removeOrphanedTracks;	// 0x346cbcb5
// declared property getter: - (BOOL)requiresPostProcessing;	// 0x3469d7a1
- (BOOL)resetAllContents;	// 0x346f8349
- (void)resetUbiquitousMetadata;	// 0x346c1395
- (BOOL)runStatementWithSQL:(id)sql bindingValue:(id)value;	// 0x346c2585
- (void)savePlaylists;	// 0x346c46d9
- (void)savePlaylistsSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x346c46fd
- (void)saveTrackMetadata;	// 0x346c3f49
- (void)saveTrackMetadataSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x346c3f6d
- (unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)sectionIndex;	// 0x346a66a9
- (BOOL)setAppleID:(id)anId forDSID:(unsigned long long)dsid;	// 0x346cb681
// declared property setter: - (void)setKeepPresignedValidyAfterVerification:(BOOL)verification;	// 0x346cc229
// converted property setter: - (void)setLibraryUID:(id)uid;	// 0x346c5a01
// declared property setter: - (void)setSyncGenerationID:(long long)anId;	// 0x346c5989
- (BOOL)setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x346cba35
- (id)statementWithSQL:(id)sql;	// 0x346b0565
- (void)statementWithSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x3469bde1
- (void)statementWithSQL:(id)sql usingBlock:(id)block;	// 0x3469fe0d
- (void)statementWithSQLPrefix:(id)sqlprefix inPersistentIDs:(const long long *)persistentIDs count:(unsigned)count usingBlock:(id)block;	// 0x346bfb69
// declared property getter: - (long long)syncGenerationID;	// 0x346a82ad
// converted property getter: - (id)ubiquitousDatabase;	// 0x3469debd
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;	// 0x346e7811
- (void)updateOrderingLanguagesForCurrentLanguage;	// 0x346e79bd
- (BOOL)updateSortMap;	// 0x346c5789
- (void)updateTrackIntegrity;	// 0x346c1369
- (id)valueForDatabaseProperty:(id)databaseProperty;	// 0x346a768d
- (BOOL)verifyPresignedValidity;	// 0x346c1031
// declared property getter: - (BOOL)writable;	// 0x346c1385
- (BOOL)writeToDatabaseArtworkForCacheID:(id)cacheID length:(unsigned long)length formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x346c7f75
- (BOOL)writeToDiskArtworkWithImageData:(id)imageData forCacheID:(id)cacheID resultingLengths:(unsigned **)lengths formatIDs:(unsigned **)ids imageSubRects:(CGRect **)rects count:(unsigned *)count;	// 0x346c799d
@end
