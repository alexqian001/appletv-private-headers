/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVCupidDaemonDelegate.h"
#import <NSObject.h> // Unknown library
#import "MSSubscriberDelegate.h"
#import "MSSubscriberPlugin.h"
#import "MSDeleterDelegate.h"
#import "MSDeleterPlugin.h"
#import "ATVPushNotificationListener.h"

@class MSMediaStreamDaemon, NSMutableArray, ATVCupidRemoveAssetTask, NSTimer, NSDictionary, NSString, NSMutableDictionary, ATVCupidImageRetrievalTask, ATVCupidUpdateTask;
@protocol MSSubscriber;

__attribute__((visibility("hidden")))
@interface ATVCupidDataClientImpl : NSObject <MSSubscriberDelegate, MSSubscriberPlugin, MSDeleterDelegate, MSDeleterPlugin, ATVPushNotificationListener, ATVCupidDaemonDelegate> {
@private
	NSDictionary *_manifest;	// 4 = 0x4
	NSDictionary *_manifestAssets;	// 8 = 0x8
	NSMutableArray *_queuedManifestAssets;	// 12 = 0xc
	NSMutableArray *_retrievingManifestAssets;	// 16 = 0x10
	NSMutableArray *_processingManifestAssets;	// 20 = 0x14
	NSMutableDictionary *_imageManagers;	// 24 = 0x18
	NSString *_baseCachePath;	// 28 = 0x1c
	BOOL _waitingForAuth;	// 32 = 0x20
	BOOL _pollingForUpdates;	// 33 = 0x21
	BOOL _authRequestedForUpdateRequest;	// 34 = 0x22
	BOOL _authRequestedForRetry;	// 35 = 0x23
	BOOL _processingUpdateRequest;	// 36 = 0x24
	BOOL _cupidIsVisible;	// 37 = 0x25
	BOOL _invalidAccount;	// 38 = 0x26
	BOOL _resetOccurred;	// 39 = 0x27
	ATVCupidUpdateTask *_updateTask;	// 40 = 0x28
	ATVCupidImageRetrievalTask *_imageRetrievalTask;	// 44 = 0x2c
	ATVCupidRemoveAssetTask *_removeAssetTask;	// 48 = 0x30
	unsigned long _processingInMemoryImageSize;	// 52 = 0x34
	unsigned long long _processingImageFileSize;	// 56 = 0x38
	sqlite3 *_db;	// 64 = 0x40
	NSTimer *_initiateRetryTimer;	// 68 = 0x44
	NSTimer *_retryTimer;	// 72 = 0x48
	ATVDataClientRef _dataClient;	// 76 = 0x4c
	id<MSSubscriber> _subscriber;	// 80 = 0x50
	MSMediaStreamDaemon *_daemon;	// 84 = 0x54
	ATVMediaQueryRef _pendingQuery;	// 88 = 0x58
}
@property(readonly, assign) MSMediaStreamDaemon *daemon;	// G=0x3021ffb9; @synthesize=_daemon
@property(assign) ATVDataClientRef dataClient;	// G=0x3021ff89; S=0x3021ff99; @synthesize=_dataClient
@property(retain) ATVMediaQueryRef pendingQuery;	// G=0x3021ffc9; S=0x3021ffdd; @synthesize=_pendingQuery
@property(readonly, assign) id<MSSubscriber> subscriber;	// G=0x3021ffa9; @synthesize=_subscriber
+ (id)deleterPluginForPersonID:(id)personID;	// 0x3021ff51
+ (id)personIDsForPollingTriggeredByPushNotification;	// 0x3021f355
+ (id)subscriberPluginForPersonID:(id)personID;	// 0x3021f335
- (id)init;	// 0x3021e9d1
- (id)_account;	// 0x302220ad
- (void)_accountAuthenticationFailed:(id)failed;	// 0x30221fd9
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x30221ec5
- (BOOL)_accountHasCredentials;	// 0x30222101
- (void)_addProccessingManifestAsset:(id)asset;	// 0x3022191d
- (id)_collectionsFromManifest:(id)manifest;	// 0x30220539
- (void)_commitManifest;	// 0x3022008d
- (void)_createDatabase;	// 0x302233e1
- (id)_createImageManagerForStreamID:(id)streamID;	// 0x30220d65
- (void)_cupidNotVisible:(id)visible;	// 0x30222e8d
- (void)_cupidVisible:(id)visible;	// 0x30222dfd
- (id)_dateFormatter;	// 0x30222ef9
- (id)_dbCachePathForStreamID:(id)streamID;	// 0x30220ef9
- (id)_filteredItemsForStreamID:(id)streamID;	// 0x302228a1
- (unsigned long long)_fizeSizeForAsset:(id)asset;	// 0x30221cf9
- (id)_imageManagerCachePathForStreamID:(id)streamID;	// 0x30220de1
- (id)_imageManagerForStreamID:(id)streamID;	// 0x30220cb5
- (id)_imageManagersFromManifest:(id)manifest;	// 0x30220fc5
- (void)_imageUnavailable:(id)unavailable;	// 0x302217c5
- (void)_imageWritten:(id)written;	// 0x3022162d
- (unsigned long)_inMemorySizeForAsset:(id)asset;	// 0x30221cc5
- (void)_initiateRetryTimerFired:(id)fired;	// 0x30222fb1
- (void)_initiateSubscriberRetrieveAssets:(id)assets;	// 0x30222f91
- (void)_insertAsset:(id)asset;	// 0x30223695
- (void)_insertAssets:(id)assets;	// 0x302235ad
- (id)_itemsForStreamID:(id)streamID;	// 0x30222585
- (id)_loadAssetsFromDatabase;	// 0x30223cbd
- (id)_manifest;	// 0x30220001
- (id)_manifestAssetForAsset:(id)asset;	// 0x3022043d
- (id)_manifestAssets;	// 0x30220281
- (id)_manifestAssetsForStreamID:(id)streamID;	// 0x30220345
- (id)_manifestDictForStreamID:(id)streamID;	// 0x302200e5
- (id)_manifestEmailForStreamID:(id)streamID;	// 0x302201c9
- (void)_pollForUpdates;	// 0x302210fd
- (void)_preferredAccountChanged:(id)changed;	// 0x30221d41
- (void)_preferredAccountRemoved:(id)removed;	// 0x30221e5d
- (void)_processPendingQuery;	// 0x30222b05
- (id)_queuedManifestAssetsFromManifest:(id)manifest;	// 0x30220965
- (void)_removeAsset:(id)asset;	// 0x30223ba1
- (void)_removeAssets:(id)assets;	// 0x30223aa5
- (void)_removeAssetsRequested:(id)requested;	// 0x30223129
- (void)_removeAssetsWithMasterAssetHashes:(id)masterAssetHashes forStreamID:(id)streamID;	// 0x30223f99
- (void)_removeDatabaseForAccount:(id)account;	// 0x302234bd
- (void)_removeImageManagerForStreamID:(id)streamID;	// 0x302210a9
- (void)_removeProcessingManifestAsset:(id)asset;	// 0x30221a61
- (void)_resetForAccount:(id)account;	// 0x302222a1
- (void)_resizeImage:(id)image;	// 0x30221515
- (void)_retrieveManifestAsset:(id)asset;	// 0x30220ad5
- (void)_retrieveNextImage;	// 0x30221265
- (void)_retrieveNextImageRequested:(id)requested;	// 0x30221231
- (void)_retryOutstandingActivityTimerFired:(id)fired;	// 0x302230a5
- (void)_screenSaverWillStart:(id)_screenSaver;	// 0x30222de9
- (void)_setManifest:(id)manifest;	// 0x30220039
- (void)_setManifestAssets:(id)assets;	// 0x302202b9
- (void)_setManifestAssets:(id)assets forStreamID:(id)streamID;	// 0x302203a5
- (void)_setManifestDict:(id)dict forStreamID:(id)streamID;	// 0x30220131
- (void)_setManifestEmail:(id)email forStreamID:(id)streamID;	// 0x302201fd
- (void)_setPollingForUpdates:(BOOL)updates;	// 0x30221159
- (id)_sortedItemsForStreamID:(id)streamID;	// 0x30222a51
- (BOOL)_startAccountAuthentication;	// 0x30222141
- (void)_startImageRetrievalAsIdleTask:(BOOL)task;	// 0x302213c1
- (void)_startUpdate;	// 0x3022120d
- (void)_startUpdateTask;	// 0x30221305
- (void)_stopImageRetrievalTask;	// 0x3022149d
- (id)_taskContext;	// 0x30222eb1
- (id)_tempCacheForStreamID:(id)streamID;	// 0x30220e39
- (unsigned long)_uncompressedImageSizeForAsset:(id)asset;	// 0x30221c45
- (void)_updateAsset:(id)asset newState:(int)state;	// 0x302238e5
- (void)_updateRequested:(id)requested;	// 0x302211a9
- (void)connect;	// 0x3021ef6d
// declared property getter: - (id)daemon;	// 0x3021ffb9
// declared property getter: - (ATVDataClientRef)dataClient;	// 0x3021ff89
- (void)dealloc;	// 0x3021ee29
- (void)deleter:(id)deleter didFinishDeletingAssetCollection:(id)collection error:(id)error;	// 0x3021ff4d
- (void)deleterWillAssignPluginAsDelegateOfDeleter:(id)deleter;	// 0x3021ff71
- (void)deleterWillDeassignPluginAsDelegateOfDeleter:(id)deleter;	// 0x3021ff75
- (void)didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x3021ff79
- (void)disconnect;	// 0x3021f105
- (void)mediaStreamDaemonAuthFailed:(id)failed personID:(id)anId;	// 0x3021f285
- (void)mediaStreamDaemonDidIdle:(id)mediaStreamDaemon;	// 0x3021f1ed
- (void)mediaStreamDaemonDidUnidle:(id)mediaStreamDaemon;	// 0x3021f255
// declared property getter: - (ATVMediaQueryRef)pendingQuery;	// 0x3021ffc9
- (void)processQuery:(ATVMediaQueryRef)query;	// 0x3021f109
// declared property setter: - (void)setDataClient:(ATVDataClientRef)client;	// 0x3021ff99
// declared property setter: - (void)setPendingQuery:(ATVMediaQueryRef)query;	// 0x3021ffdd
// declared property getter: - (id)subscriber;	// 0x3021ffa9
- (void)subscriber:(id)subscriber didFailToRetriveSubscriptionUpdateWithError:(id)error;	// 0x3021fc2d
- (void)subscriber:(id)subscriber didFindDisappearedSubscriptionforStreamID:(id)anId;	// 0x3021fcc9
- (void)subscriber:(id)subscriber didFinishRequestingAssetRetrievalForStreamID:(id)streamID;	// 0x3021fe41
- (void)subscriber:(id)subscriber didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x3021f911
- (void)subscriber:(id)subscriber didReceiveDeleteForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0x3021fe45
- (void)subscriber:(id)subscriber didRequestAssetRetrievalForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0x3021f451
- (void)subscriber:(id)subscriber didResetSyncForStreamID:(id)streamID;	// 0x3021fe3d
- (void)subscriberDidCompleteCheckForNewAssetCollections:(id)subscriber;	// 0x3021fd69
- (void)subscriberWillAssignPluginAsDelegateOfSubscriber:(id)subscriber;	// 0x3021f415
- (void)subscriberWillCheckForNewAssetCollections:(id)subscriber;	// 0x3021fcc5
- (void)subscriberWillDeassignPluginAsDelegateOfSubscriber:(id)subscriber;	// 0x3021f425
@end

