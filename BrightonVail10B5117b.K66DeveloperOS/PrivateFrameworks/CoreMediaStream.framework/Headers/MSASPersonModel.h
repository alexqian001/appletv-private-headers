/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASModelBase.h"
#import "CoreMediaStream-Structs.h"


@interface MSASPersonModel : MSASModelBase {
	BOOL _shouldDownloadEarliestPhotosFirst;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL shouldDownloadEarliestPhotosFirst;	// G=0x33990e25; S=0x33990e35; @synthesize=_shouldDownloadEarliestPhotosFirst
- (id)initWithPersonID:(id)personID;	// 0x33988fc5
- (id)_commandWithMinimumIdentifier:(id)minimumIdentifier outParams:(id *)params outCommandIdentifier:(long long *)identifier outPersonID:(id *)anId outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid6;	// 0x3398b18d
- (void)addPendingAssetCollectionGUID:(id)guid albumGUID:(id)guid2;	// 0x3398cc69
- (int)assetCollectionsInUploadQueue;	// 0x3398fded
- (int)assetCollectionsInUploadQueueAlbumGUID:(id)uploadQueueAlbumGUID;	// 0x3398ff81
- (int)assetsInDownloadQueue;	// 0x3398e209
- (int)assetsInDownloadQueueAlbumGUID:(id)downloadQueueAlbumGUID;	// 0x3398e39d
- (id)commandAtHeadOfQueueOutParams:(id *)queueOutParams outCommandIdentifier:(long long *)identifier outPersonID:(id *)anId outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid5;	// 0x3398b97d
- (id)commandWithMinimumIdentifier:(long long)minimumIdentifier outParams:(id *)params outCommandIdentifier:(long long *)identifier outPersonID:(id *)anId outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid6;	// 0x3398b9b1
- (long long)countOfEnqueuedCommand:(id)enqueuedCommand;	// 0x3398c255
- (long long)countOfEnqueuedCommands;	// 0x3398c671
- (int)dbQueueAssetCountAlbumGUID:(id)guid inQueue:(id)queue;	// 0x3398d209
- (void)dbQueueEnqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x3398a3a9
- (void)dbQueueEnqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5 sequenceNumber:(long long)number;	// 0x3398a7a1
- (BOOL)dbQueueIsAssetCollectionWithGUIDPending:(id)guidpending;	// 0x3398cbe1
- (BOOL)dbQueueIsGUIDQueued:(id)queued inQueue:(id)queue;	// 0x3398d789
- (long long)dbQueueNextCommandSequenceNumber;	// 0x3398a04d
- (void)dbQueueRemoveAllEntriesFromTable:(id)table;	// 0x3398bf91
- (void)dbQueueRemoveCommandAtHeadOfQueue;	// 0x3398bd25
- (void)dbQueueRemoveCommandIdentifier:(long long)identifier;	// 0x3398be9d
- (void)dbQueueRemoveGUID:(id)guid fromQueue:(id)queue;	// 0x3398d631
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)albumGUID;	// 0x3398b0b5
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)assetCollectionGUID;	// 0x3398afdd
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(sqlite3_stmt *)queryStatement deleteStatement:(sqlite3_stmt *)statement;	// 0x3398ace9
- (void)dbQueueSetErrorCount:(int)count forGUID:(id)guid inQueue:(id)queue;	// 0x3398d4c9
- (long long)dbQueueSmallestCommandSequenceNumber;	// 0x3398a1fd
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x3398902d
- (void)enqueueAssetCollectionForUpload:(id)upload album:(id)album;	// 0x3398f901
- (void)enqueueAssetForDownload:(id)download album:(id)album;	// 0x3398db19
- (void)enqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x3398a44d
- (void)enqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid pendingOnAssetCollectionGUID:(id)guid5;	// 0x3398a969
- (void)enqueueCommandAtHeadOfQueue:(id)queue params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x3398a5e1
- (BOOL)hasItemsForDownloadCountFocusAlbumGUID:(id)downloadCountFocusAlbumGUID focusAssetCollectionGUID:(id)guid;	// 0x3398eccd
- (BOOL)isAssetCollectionWithGUIDPending:(id)guidpending;	// 0x3398ca25
- (int)itemsForDownloadCountFocusAlbumGUID:(id)downloadCountFocusAlbumGUID focusAssetCollectionGUID:(id)guid;	// 0x3398f165
- (id)itemsForUpload;	// 0x33990141
- (id)nextItemsForDownloadFocusAlbumGUID:(id)downloadFocusAlbumGUID focusAssetCollectionGUID:(id)guid thumbnails:(BOOL)thumbnails maxCount:(int)count;	// 0x3398e55d
- (id)nextItemsForUploadAlbumGUID:(id)uploadAlbumGUID maxCount:(int)count;	// 0x339904f9
- (id)nextItemsForUploadMaxCount:(int)uploadMaxCount;	// 0x339904e5
- (long long)nextMMCSItemID;	// 0x3398d90d
- (void)purgeCompletionBlock:(id)block;	// 0x3398c0c1
- (void)removeAssetCollectionsFromUploadQueue:(id)uploadQueue;	// 0x33990c45
- (void)removeAssetsFromDownloadQueue:(id)downloadQueue;	// 0x3398f721
- (void)removeCommandIdentifier:(long long)identifier;	// 0x3398bde1
- (void)requeuePendingAssetCollectionGUID:(id)guid;	// 0x3398ce5d
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(id)albumGUID;	// 0x3398d015
- (void)setErrorCount:(int)count forAssetCollectionInUploadQueue:(id)uploadQueue;	// 0x33990b21
- (void)setErrorCount:(int)count forAssetInDownloadQueue:(id)downloadQueue;	// 0x3398f5fd
- (void)setParams:(id)params forCommandWithIdentifier:(long long)identifier;	// 0x3398ba29
// declared property setter: - (void)setShouldDownloadEarliestPhotosFirst:(BOOL)downloadEarliestPhotosFirst;	// 0x33990e35
// declared property getter: - (BOOL)shouldDownloadEarliestPhotosFirst;	// 0x33990e25
@end
