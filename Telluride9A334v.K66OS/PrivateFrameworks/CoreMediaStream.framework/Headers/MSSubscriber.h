/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSSubscriber.h"
#import "MSSubscribeStreamsProtocolDelegate.h"
#import "MSSubscribeStorageProtocolDelegate.h"
#import "MSReauthorizationProtocolDelegate.h"
#import "MSCupidStateMachine.h"

@class NSMutableArray, NSMutableDictionary, MSMediaStreamDaemon, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, MSObjectQueue;
@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@protocol MSSubscriber
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;
- (void)abort;
- (void)checkForNewAssetCollections;
- (void)checkForOutstandingActivities;
// declared property getter: - (id)delegate;
- (id)ownSubscribedStream;
- (void)resetSync;
- (void)retrieveAssets:(id)assets;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)stop;
- (id)subscribedStreams;
@end

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {
@private
	id<MSSubscriberDelegate> _delegate;	// 24 = 0x18
	MSMediaStreamDaemon *_daemon;	// 28 = 0x1c
	BOOL _checkOneMoreTime;	// 32 = 0x20
	int _state;	// 36 = 0x24
	MSSubscribeStreamsProtocol *_protocol;	// 40 = 0x28
	NSMutableDictionary *_newSubscriptionsByStreamID;	// 44 = 0x2c
	int _retrievalState;	// 48 = 0x30
	id<MSSubscribeStorageProtocol> _storageProtocol;	// 52 = 0x34
	MSReauthorizationProtocol *_reauthProtocol;	// 56 = 0x38
	MSObjectQueue *_retrievalQueue;	// 60 = 0x3c
	NSMutableArray *_assetsBeingRetrieved;	// 64 = 0x40
	long long _targetRetrievalByteCount;	// 68 = 0x44
	int _retrievalBatchSize;	// 76 = 0x4c
	int _maxErrorCount;	// 80 = 0x50
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x31c3d7ad; S=0x31c3d7bd; @synthesize=_daemon
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;	// G=0x31c3d78d; S=0x31c3d79d; @synthesize=_delegate
@property(assign, nonatomic) int retrievalBatchSize;	// G=0x31c3d7f9; S=0x31c3d809; @synthesize=_retrievalBatchSize
@property(assign, nonatomic) long long targetRetrievalByteCount;	// G=0x31c3d7cd; S=0x31c3d7e5; @synthesize=_targetRetrievalByteCount
+ (id)_clearInstantiatedSubscribersByPersonID;	// 0x31c39ffd
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x31c3a075
+ (id)existingSubscriberForPersonID:(id)personID;	// 0x31c39fe1
+ (void)forgetPersonID:(id)anId;	// 0x31c3a025
+ (BOOL)isInRetryState;	// 0x31c3a499
+ (id)nextActivityDate;	// 0x31c3a2c9
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x31c3a3b5
+ (id)personIDsWithOutstandingActivities;	// 0x31c3a3d5
+ (void)stopAllActivities;	// 0x31c3a3f1
+ (id)subscriberForPersonID:(id)personID;	// 0x31c39f09
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x31c3a699
- (void)_abort;	// 0x31c3c5ad
- (void)_checkForNewAssetCollections;	// 0x31c3b0d5
- (void)_didFinishRetrievingSubscriptionUpdate;	// 0x31c3b279
- (void)_didReceiveAuthenticationError:(id)error;	// 0x31c3ba6d
- (void)_finishedRetrievingAsset:(id)asset;	// 0x31c3c945
- (void)_forget;	// 0x31c3c8a5
- (BOOL)_hasOutstandingPoll;	// 0x31c3acd9
- (BOOL)_isAllowedToDownload;	// 0x31c3af25
- (BOOL)_isInRetryState;	// 0x31c3c911
- (void)_reauthorizeAssets;	// 0x31c3c345
- (void)_refreshServerSideConfigurationParameters;	// 0x31c3aa05
- (void)_retrieveAssets;	// 0x31c3c03d
- (void)_retrieveNextAssets;	// 0x31c3c185
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x31c3aaf5
- (void)_setHasOutstandingPoll:(BOOL)poll;	// 0x31c3ad19
- (void)_setSubscriptionsByStreamID:(id)anId;	// 0x31c3ae69
- (void)_stopOutSubscriberState:(int *)state outRetrievalState:(int *)state2;	// 0x31c3c43d
- (id)_subscriptionsByStreamID;	// 0x31c3addd
- (void)_updateMasterManifest;	// 0x31c3ac15
- (void)abort;	// 0x31c3c895
- (void)checkForNewAssetCollections;	// 0x31c3afe5
- (void)checkForOutstandingActivities;	// 0x31c3bfc1
// declared property getter: - (id)daemon;	// 0x31c3d7ad
- (void)deactivate;	// 0x31c3a885
- (void)dealloc;	// 0x31c3a9c5
// declared property getter: - (id)delegate;	// 0x31c3d78d
- (id)ownSubscribedStream;	// 0x31c3a655
- (void)reauthorizationProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x31c3d32d
- (void)reauthorizationProtocol:(id)protocol reauthorizedAssets:(id)assets rejectedAssets:(id)assets3 error:(id)error;	// 0x31c3d341
- (void)resetSync;	// 0x31c3aeb5
// declared property getter: - (int)retrievalBatchSize;	// 0x31c3d7f9
- (void)retrieveAssets:(id)assets;	// 0x31c3bc11
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x31c3d7bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31c3d79d
// declared property setter: - (void)setRetrievalBatchSize:(int)size;	// 0x31c3d809
// declared property setter: - (void)setTargetRetrievalByteCount:(long long)count;	// 0x31c3d7e5
- (void)stop;	// 0x31c3c599
- (void)subscribeStorageProtocol:(id)protocol didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x31c3ca59
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)subscribeStorageProtocol;	// 0x31c3cb75
- (void)subscribeStreamsProtocol:(id)protocol didFindDisappearedSubscriptionForPersonID:(id)personID;	// 0x31c3b7d1
- (void)subscribeStreamsProtocol:(id)protocol didFindShareState:(id)state;	// 0x31c3bbad
- (void)subscribeStreamsProtocol:(id)protocol didFinishError:(id)error;	// 0x31c3b88d
- (void)subscribeStreamsProtocol:(id)protocol didFinishReceivingUpdatesForPersonID:(id)personID ctag:(id)ctag;	// 0x31c3b619
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAssetCollections:(id)collections forPersonID:(id)personID;	// 0x31c3b565
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x31c3bb39
- (void)subscribeStreamsProtocol:(id)protocol difFindTemporarilyUnavailableSubscriptionForPersonID:(id)personID;	// 0x31c3bb4d
- (void)subscribeStreamsProtocol:(id)protocol willReceiveUpdatesForPersonID:(id)personID wasReset:(BOOL)reset metadata:(id)metadata;	// 0x31c3b391
- (id)subscribedStreams;	// 0x31c3a559
// declared property getter: - (long long)targetRetrievalByteCount;	// 0x31c3d7cd
@end
