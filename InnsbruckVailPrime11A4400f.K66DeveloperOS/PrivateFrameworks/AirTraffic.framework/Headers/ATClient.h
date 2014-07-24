/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "NSObject.h"


@protocol ATClient <NSObject>
@optional
- (id)appleIDsForAssets;
- (void)assetInstallFailed:(id)failed withError:(id)error;
- (void)assetInstallSucceeded:(id)succeeded;
- (void)assetTransfer:(id)transfer succeeded:(BOOL)succeeded withError:(id)error;
- (void)assetTransfer:(id)transfer updatedProgress:(double)progress;
- (void)assetTransferEndedWithSuccess:(BOOL)success;
- (void)backupEnded;
- (void)cancelSyncOperations;
- (void)clearSyncData;
- (id)currentSyncAnchor;
- (id)disabledAssetTypes;
- (id)installedAssetMetrics;
- (id)installedAssets;
- (void)metadataUpdate:(id)update forAsset:(id)asset withNewAnchor:(id)newAnchor;
- (id)outstandingAssetTransfers;
- (id)outstandingAssetTransfersWithDownloadManager:(id)downloadManager;
- (void)pathsToBackup:(id *)backup pathsNotToBackup:(id *)backup2;
- (void)prepareForBackup;
- (BOOL)prepareForSyncWithHostAnchor:(id)hostAnchor progressCallback:(id)callback error:(id *)error;
- (BOOL)prepareForSyncWithHostAnchor:(id)hostAnchor progressCallback:(id)callback grappaID:(unsigned long)anId hostVersion:(id)version error:(id *)error;
- (void)prioritizeAsset:(id)asset;
- (BOOL)reconcileRestoreWithError:(id *)error;
- (BOOL)reconcileSync:(unsigned)sync withNewAnchor:(id)newAnchor progressCallback:(id)callback error:(id *)error;
- (void)registerMessageHandlersWithLink:(id)link;
- (void)restoreEndedWithError:(id)error;
- (BOOL)shouldBackgroundRestoreFile:(id)file backupManager:(id)manager;
- (BOOL)shouldBackgroundRestorePath:(id)path backupManager:(id)manager;
@required
- (id)supportedDataclasses;
@optional
- (void)syncEndedWithSuccess:(BOOL)success;
@end
