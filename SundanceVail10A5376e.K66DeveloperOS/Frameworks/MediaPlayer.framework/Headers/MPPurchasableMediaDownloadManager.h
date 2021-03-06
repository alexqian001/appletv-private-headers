/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSDownloadHandlerDelegate.h"
#import "MediaPlayer-Structs.h"
#import "SSDownloadManagerObserver.h"

@class NSMutableSet, MPPurchasableMediaDownloadOperationQueue, NSMutableDictionary, SSDownloadManager, SSDownloadHandler, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

@interface MPPurchasableMediaDownloadManager : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	NSMutableSet *_alertViews;	// 8 = 0x8
	NSMutableDictionary *_downloadByMediaItemPersistentID;	// 12 = 0xc
	SSDownloadHandler *_downloadHandler;	// 16 = 0x10
	SSDownloadManager *_downloadManager;	// 20 = 0x14
	MPPurchasableMediaDownloadOperationQueue *_downloadOperationQueue;	// 24 = 0x18
	NSMutableArray *_downloads;	// 28 = 0x1c
	NSObject<OS_dispatch_queue> *_downloadSessionQueue;	// 32 = 0x20
	NSMutableArray *_downloadSessions;	// 36 = 0x24
	CFDictionaryRef _groupDownloadsByDownload;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSArray *downloadingItemPIDs;	// G=0x36d6a475; 
@property(readonly, assign, nonatomic) NSArray *downloads;	// G=0x36d6a2b1; @synthesize=_downloads
+ (BOOL)hasProperNetworkConditionsToDownloadMedia;	// 0x36d698e1
+ (id)sharedManager;	// 0x36d6994d
- (id)init;	// 0x36d699fd
- (void)_cancelAndCleanUpPurchasableDownload:(id)download;	// 0x36d6d345
- (void)_cancelPurchasesBatchedWithDownload:(id)download;	// 0x36d6d25d
- (void)_cleanUpPurchasableDownload:(id)download;	// 0x36d6d815
- (void)_closeSessionForAsset:(id)asset;	// 0x36d6d961
- (id)_downloadSessionForAVAsset:(id)avasset;	// 0x36d6dc99
- (id)_downloadSessionWithID:(id)anId;	// 0x36d6df15
- (BOOL)_isNetworkSufficientForPlayback;	// 0x36d6e1b9
- (BOOL)_isSessionRequiredToPlayMediaItem:(id)playMediaItem hasDownloadIdentifier:(BOOL *)identifier;	// 0x36d6e22d
- (id)_newDownloadObserverForPurchasableMediaDownload:(id)purchasableMediaDownload purchaseHandler:(id)handler completionHandler:(id)handler3;	// 0x36d6e7a9
- (id)_newPurchasableMediaDownloadFromSSDownload:(id)ssdownload;	// 0x36d6e549
- (id)_openSessionWithProperties:(id)properties;	// 0x36d6e7e5
- (id)_openSessionWithProperties:(id)properties style:(int *)style;	// 0x36d6edd9
- (BOOL)_showCellularRestrictedDialogForMediaItem:(id)mediaItem;	// 0x36d6f2fd
- (BOOL)_showNoNetworkDialogForMediaItem:(id)mediaItem;	// 0x36d6f61d
- (void)addDownloadForMediaItem:(id)mediaItem purchaseReason:(int)reason;	// 0x36d6a701
- (void)addDownloadForMediaItem:(id)mediaItem purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36d6a729
- (void)addDownloadsForMediaEntity:(id)mediaEntity purchaseReason:(int)reason;	// 0x36d6a63d
- (void)addDownloadsForMediaEntity:(id)mediaEntity purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36d6a665
- (void)addDownloadsForMediaItemCollection:(id)mediaItemCollection purchaseReason:(int)reason;	// 0x36d6a769
- (void)addDownloadsForMediaItemCollection:(id)mediaItemCollection purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36d6a791
- (void)addDownloadsForMediaItems:(id)mediaItems purchaseReason:(int)reason;	// 0x36d6a7c5
- (void)addDownloadsForMediaItems:(id)mediaItems purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36d6a7ed
- (void)addDownloadsForMediaQuery:(id)mediaQuery purchaseReason:(int)reason;	// 0x36d6b25d
- (void)addDownloadsForMediaQuery:(id)mediaQuery purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x36d6b285
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x36d6d1a9
- (BOOL)canOpenSessionWithMediaItem:(id)mediaItem;	// 0x36d6b33d
- (void)cancelDownloadForMediaItem:(id)mediaItem;	// 0x36d6b2c9
- (void)dealloc;	// 0x36d6a15d
- (id)downloadForFirstDownloadingMediaItemInCollection:(id)collection;	// 0x36d6b4a9
- (id)downloadForMediaItem:(id)mediaItem;	// 0x36d6b579
- (id)downloadForMediaItemPersistentID:(unsigned long long)mediaItemPersistentID;	// 0x36d6b5ad
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x36d6cc79
- (void)downloadHandler:(id)handler handleSession:(id)session;	// 0x36d6cecd
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x36d6c279
// declared property getter: - (id)downloadingItemPIDs;	// 0x36d6a475
// declared property getter: - (id)downloads;	// 0x36d6a2b1
- (id)downloadsBatchedWithDownload:(id)download;	// 0x36d6b795
- (BOOL)isSessionRequiredToPlayMediaItem:(id)playMediaItem;	// 0x36d6b95d
- (id)openSessionWithMediaItem:(id)mediaItem;	// 0x36d6b975
- (void)purchaseOperation:(id)operation didFinishWithPurchase:(id)purchase error:(id)error;	// 0x36d6c025
- (void)purchaseOperationDidCancel:(id)purchaseOperation;	// 0x36d6c1e9
- (BOOL)showNetworkConstraintDialogForMediaItem:(id)mediaItem;	// 0x36d6be6d
@end

