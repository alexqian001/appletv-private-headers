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
@property(assign, nonatomic) BOOL shouldDownloadEarliestPhotosFirst;	// G=0x337afe25; S=0x337afe35; @synthesize=_shouldDownloadEarliestPhotosFirst
- (id)initWithPersonID:(id)personID;	// 0x337a7fc5
- (id)_commandWithMinimumIdentifier:(id)minimumIdentifier outParams:(id *)params outCommandIdentifier:(long long *)identifier outPersonID:(id *)anId outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid6;	// 0x337aa18d
- (void)addPendingAssetCollectionGUID:(id)guid albumGUID:(id)guid2;	// 0x337abc69
- (int)assetCollectionsInUploadQueue;	// 0x337aeded
- (int)assetCollectionsInUploadQueueAlbumGUID:(id)uploadQueueAlbumGUID;	// 0x337aef81
- (int)assetsInDownloadQueue;	// 0x337ad209
- (int)assetsInDownloadQueueAlbumGUID:(id)downloadQueueAlbumGUID;	// 0x337ad39d
- (id)commandAtHeadOfQueueOutParams:(id *)queueOutParams outCommandIdentifier:(long long *)identifier outPersonID:(id *)anId outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid5;	// 0x337aa97d
- (id)commandWithMinimumIdentifier:(long long)minimumIdentifier outParams:(id *)params outCommandIdentifier:(long long *)identifier outPersonID:(id *)anId outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid6;	// 0x337aa9b1
- (long long)countOfEnqueuedCommand:(id)enqueuedCommand;	// 0x337ab255
- (long long)countOfEnqueuedCommands;	// 0x337ab671
- (int)dbQueueAssetCountAlbumGUID:(id)guid inQueue:(id)queue;	// 0x337ac209
- (void)dbQueueEnqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x337a93a9
- (void)dbQueueEnqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5 sequenceNumber:(long long)number;	// 0x337a97a1
- (BOOL)dbQueueIsAssetCollectionWithGUIDPending:(id)guidpending;	// 0x337abbe1
- (BOOL)dbQueueIsGUIDQueued:(id)queued inQueue:(id)queue;	// 0x337ac789
- (long long)dbQueueNextCommandSequenceNumber;	// 0x337a904d
- (void)dbQueueRemoveAllEntriesFromTable:(id)table;	// 0x337aaf91
- (void)dbQueueRemoveCommandAtHeadOfQueue;	// 0x337aad25
- (void)dbQueueRemoveCommandIdentifier:(long long)identifier;	// 0x337aae9d
- (void)dbQueueRemoveGUID:(id)guid fromQueue:(id)queue;	// 0x337ac631
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)albumGUID;	// 0x337aa0b5
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)assetCollectionGUID;	// 0x337a9fdd
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(sqlite3_stmt *)queryStatement deleteStatement:(sqlite3_stmt *)statement;	// 0x337a9ce9
- (void)dbQueueSetErrorCount:(int)count forGUID:(id)guid inQueue:(id)queue;	// 0x337ac4c9
- (long long)dbQueueSmallestCommandSequenceNumber;	// 0x337a91fd
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x337a802d
- (void)enqueueAssetCollectionForUpload:(id)upload album:(id)album;	// 0x337ae901
- (void)enqueueAssetForDownload:(id)download album:(id)album;	// 0x337acb19
- (void)enqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x337a944d
- (void)enqueueCommand:(id)command params:(id)params personID:(id)anId albumGUID:(id)guid pendingOnAssetCollectionGUID:(id)guid5;	// 0x337a9969
- (void)enqueueCommandAtHeadOfQueue:(id)queue params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x337a95e1
- (BOOL)hasItemsForDownloadCountFocusAlbumGUID:(id)downloadCountFocusAlbumGUID focusAssetCollectionGUID:(id)guid;	// 0x337adccd
- (BOOL)isAssetCollectionWithGUIDPending:(id)guidpending;	// 0x337aba25
- (int)itemsForDownloadCountFocusAlbumGUID:(id)downloadCountFocusAlbumGUID focusAssetCollectionGUID:(id)guid;	// 0x337ae165
- (id)itemsForUpload;	// 0x337af141
- (id)nextItemsForDownloadFocusAlbumGUID:(id)downloadFocusAlbumGUID focusAssetCollectionGUID:(id)guid thumbnails:(BOOL)thumbnails maxCount:(int)count;	// 0x337ad55d
- (id)nextItemsForUploadAlbumGUID:(id)uploadAlbumGUID maxCount:(int)count;	// 0x337af4f9
- (id)nextItemsForUploadMaxCount:(int)uploadMaxCount;	// 0x337af4e5
- (long long)nextMMCSItemID;	// 0x337ac90d
- (void)purgeCompletionBlock:(id)block;	// 0x337ab0c1
- (void)removeAssetCollectionsFromUploadQueue:(id)uploadQueue;	// 0x337afc45
- (void)removeAssetsFromDownloadQueue:(id)downloadQueue;	// 0x337ae721
- (void)removeCommandIdentifier:(long long)identifier;	// 0x337aade1
- (void)requeuePendingAssetCollectionGUID:(id)guid;	// 0x337abe5d
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(id)albumGUID;	// 0x337ac015
- (void)setErrorCount:(int)count forAssetCollectionInUploadQueue:(id)uploadQueue;	// 0x337afb21
- (void)setErrorCount:(int)count forAssetInDownloadQueue:(id)downloadQueue;	// 0x337ae5fd
- (void)setParams:(id)params forCommandWithIdentifier:(long long)identifier;	// 0x337aaa29
// declared property setter: - (void)setShouldDownloadEarliestPhotosFirst:(BOOL)downloadEarliestPhotosFirst;	// 0x337afe35
// declared property getter: - (BOOL)shouldDownloadEarliestPhotosFirst;	// 0x337afe25
@end
