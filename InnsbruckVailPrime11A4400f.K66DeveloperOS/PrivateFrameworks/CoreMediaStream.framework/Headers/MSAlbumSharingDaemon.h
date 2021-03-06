/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class MSASDaemonModel, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, MSAlbumSharingDaemonDelegate;

@interface MSAlbumSharingDaemon : MSDaemon {
	BOOL _isRetryingOutstandingActivities;	// 24 = 0x18
	id<MSAlbumSharingDaemonDelegate> _delegate;	// 28 = 0x1c
	NSMutableDictionary *_personIDToStateMachineMap;	// 32 = 0x20
	NSMutableDictionary *_personIDToDelegateMap;	// 36 = 0x24
	MSASDaemonModel *_daemonModel;	// 40 = 0x28
	int _busyCount;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_mapQueue;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_workQueue;	// 52 = 0x34
	NSMutableDictionary *_nextUpdateDateByPersonID;	// 56 = 0x38
}
@property(assign, nonatomic) int busyCount;	// G=0x30504769; S=0x30504779; @synthesize=_busyCount
@property(retain, nonatomic) MSASDaemonModel *daemonModel;	// G=0x30504731; S=0x30504741; @synthesize=_daemonModel
@property(assign, nonatomic) __weak id<MSAlbumSharingDaemonDelegate> delegate;	// G=0x3050468d; S=0x305046ad; @synthesize=_delegate
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x30504789; S=0x30504799; @synthesize=_isRetryingOutstandingActivities
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue;	// G=0x305047a9; S=0x305047b9; @synthesize=_mapQueue
@property(retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID;	// G=0x30504819; S=0x30504829; @synthesize=_nextUpdateDateByPersonID
@property(retain, nonatomic) NSMutableDictionary *personIDToDelegateMap;	// G=0x305046f9; S=0x30504709; @synthesize=_personIDToDelegateMap
@property(retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap;	// G=0x305046c1; S=0x305046d1; @synthesize=_personIDToStateMachineMap
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x305047e1; S=0x305047f1; @synthesize=_workQueue
- (id)init;	// 0x304fc5e1
- (void).cxx_destruct;	// 0x30504851
- (id)_delegateForPersonID:(id)personID;	// 0x30503519
- (void)_postModelShutdownForPersonID:(id)personID completionBlock:(id)block;	// 0x305017f5
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId;	// 0x304fff81
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x304fffb9
- (void)acceptInvitationWithToken:(id)token personID:(id)anId completionBlock:(id)block;	// 0x304ffd25
- (void)acceptInvitationWithToken:(id)token personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x304ffde1
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x305002c9
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30500315
- (void)addAlbum:(id)album;	// 0x304fe2a1
- (void)addAlbum:(id)album personID:(id)anId;	// 0x304ff2f1
- (void)addAlbum:(id)album personID:(id)anId info:(id)info;	// 0x304ff329
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30500b09
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30500b55
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x305011ad
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x305011f9
- (int)assetsInDownloadQueueCountForPersonID:(id)personID;	// 0x304feaed
- (id)boundStateMachineForPersonID:(id)personID;	// 0x30503879
// declared property getter: - (int)busyCount;	// 0x30504769
- (void)cancelActivitiesForPersonID:(id)personID;	// 0x304fe065
// declared property getter: - (id)daemonModel;	// 0x30504731
- (void)dealloc;	// 0x304fc705
// declared property getter: - (id)delegate;	// 0x3050468d
- (void)deleteAlbumWithGUID:(id)guid;	// 0x304fe2f1
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId;	// 0x304ff639
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x304ff671
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x30500ced
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30500d25
- (void)deleteAssetCollectionsWithGUIDs:(id)guids personID:(id)anId;	// 0x30500e91
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId;	// 0x30501391
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x305013c9
- (void)didCreateStateMachineForPersonID:(id)personID;	// 0x304fd56d
- (void)didDestroyStateMachineForPersonID:(id)personID;	// 0x304fd575
- (void)didIdle;	// 0x304fcfc5
- (void)didReceiveAuthFailureForPersonID:(id)personID;	// 0x304fd7f9
- (void)didReceiveAuthSuccessForPersonID:(id)personID;	// 0x304fd7fd
- (void)didReceiveCommentTooLongError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x305044c5
- (void)didReceiveGlobalResetSyncForPersonID:(id)personID;	// 0x304fd801
- (void)didReceivePushNotificationForPersonID:(id)personID;	// 0x304fd579
- (void)didReceiveTooManyAlbumsError:(id)error personID:(id)anId;	// 0x30503e8d
- (void)didReceiveTooManyCommentsError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x305042fd
- (void)didReceiveTooManyPhotosError:(id)error forAlbum:(id)album personID:(id)anId;	// 0x30503ff5
- (void)didReceiveTooManySubscriptionsError:(id)error personID:(id)anId;	// 0x30504195
- (void)didUnidle;	// 0x304fd08d
- (id)existingModelForPersonID:(id)personID;	// 0x304feb29
- (id)existingStateMachineForPersonID:(id)personID;	// 0x3050367d
- (void)forgetEverythingAboutPersonID:(id)anId;	// 0x305017e1
- (void)forgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x30502831
- (void)forgetEverythingCompletionBlock:(id)block;	// 0x30502c41
- (BOOL)hasCommandsInGroupedCommandQueue;	// 0x304fd809
- (BOOL)isInRetryState;	// 0x304fd57d
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x30504789
- (BOOL)isWaitingForAuth;	// 0x304fd805
// declared property getter: - (id)mapQueue;	// 0x305047a9
- (void)mapQueueShutDownStateMachineInMap:(id)map personIDs:(id)ids index:(unsigned)index forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x304fc861
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId;	// 0x304ff7dd
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId info:(id)info;	// 0x304ff815
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId moveLastViewedAssetCollectionMarker:(BOOL)marker info:(id)info;	// 0x304ff861
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId;	// 0x30500fc9
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId info:(id)info;	// 0x30501015
- (id)modelForPersonID:(id)personID;	// 0x304febd1
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId;	// 0x304ff495
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId info:(id)info;	// 0x304ff4cd
- (id)nextActivityDate;	// 0x304fcfa5
// declared property getter: - (id)nextUpdateDateByPersonID;	// 0x30504819
- (id)persistentObjectForKey:(id)key personID:(id)anId;	// 0x30503459
// declared property getter: - (id)personIDToDelegateMap;	// 0x305046f9
// declared property getter: - (id)personIDToStateMachineMap;	// 0x305046c1
- (id)personIDsListeningToPushNotification;	// 0x304fe341
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)personID;	// 0x304fe3d9
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId;	// 0x304fef95
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x304fefcd
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x304ff139
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x304ff175
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x304feddd
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x304fee19
- (void)refreshResetSync:(BOOL)sync personID:(id)anId;	// 0x304fec79
- (void)refreshResetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x304fec9d
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x30503421
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId;	// 0x30500125
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x3050015d
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId;	// 0x305004ad
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x305004e5
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30501535
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags personID:(id)anId;	// 0x305016a1
- (void)retryOutstandingActivities;	// 0x304fda85
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)sendServerSideConfiguration;	// 0x304fe9ad
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x305033d9
// declared property setter: - (void)setBusyCount:(int)count;	// 0x30504779
// declared property setter: - (void)setDaemonModel:(id)model;	// 0x30504741
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305046ad
- (void)setFocusAlbumGUID:(id)guid forPersonID:(id)personID;	// 0x304fd155
- (void)setFocusAssetCollectionGUID:(id)guid forPersonID:(id)personID;	// 0x304fd361
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x30504799
// declared property setter: - (void)setMapQueue:(id)queue;	// 0x305047b9
- (void)setMultipleContributorsEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;	// 0x3050089d
- (void)setMultipleContributorsEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x30500959
- (void)setNextActivityDate:(id)date forPersonID:(id)personID;	// 0x304fe6bd
// declared property setter: - (void)setNextUpdateDateByPersonID:(id)anId;	// 0x30504829
- (void)setPersistentObject:(id)object forKey:(id)key personID:(id)anId;	// 0x305034b9
// declared property setter: - (void)setPersonIDToDelegateMap:(id)delegateMap;	// 0x30504709
// declared property setter: - (void)setPersonIDToStateMachineMap:(id)stateMachineMap;	// 0x305046d1
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;	// 0x30500651
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x3050070d
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x305047f1
- (void)shutDown;	// 0x304fc7c9
- (void)shutDownCompletionBlock:(id)block;	// 0x304fcb21
- (void)shutDownStateMachine:(id)machine forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x30501b91
- (void)start;	// 0x304fc731
- (void)stopAssetDownloadsForPersonID:(id)personID;	// 0x304fdc45
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId;	// 0x304ff9dd
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x304ffa15
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId;	// 0x304ffb81
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x304ffbb9
- (void)willDestroyStateMachineForPersonID:(id)personID;	// 0x304fd571
// declared property getter: - (id)workQueue;	// 0x305047e1
- (void)workQueueForgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x30502115
- (void)workQueueForgetEverythingAboutPersonIDs:(id)ids index:(unsigned)index completionBlock:(id)block;	// 0x30502aed
@end

