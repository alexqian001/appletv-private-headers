/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSCupidStateMachine.h"
#import "NSObject.h"
#import "MSPublisher.h"
#import "MSPublishStreamsProtocolDelegate.h"
#import "MSPublishStorageProtocolDelegate.h"

@class NSMutableArray, MSMediaStreamDaemon, NSMutableDictionary, NSURL, MSPublishStreamsProtocol, MSObjectQueue;
@protocol MSPublishStorageProtocol, MSPublisherDelegate;

@protocol MSPublisher <NSObject>
@property(assign, nonatomic) id<MSPublisherDelegate> delegate;
@property(assign, nonatomic) int publishBatchSize;
- (void)abort;
// declared property getter: - (id)delegate;
- (void)publish;
// declared property getter: - (int)publishBatchSize;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setPublishBatchSize:(int)size;
- (void)stop;
- (void)submitAssetCollectionsForPublication:(id)publication;
- (void)submitAssetCollectionsForPublication:(id)publication skipAssetCollections:(id)collections;
@end

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {
	id<MSPublisherDelegate> _delegate;	// 32 = 0x20
	MSMediaStreamDaemon *_daemon;	// 36 = 0x24
	int _state;	// 40 = 0x28
	MSObjectQueue *_uploadQueue;	// 44 = 0x2c
	NSMutableArray *_requestAuthQueue;	// 48 = 0x30
	unsigned _sendingQueueCount;	// 52 = 0x34
	NSMutableArray *_sendingQueue;	// 56 = 0x38
	NSMutableDictionary *_fileHashToAssetMap;	// 60 = 0x3c
	MSPublishStreamsProtocol *_protocol;	// 64 = 0x40
	id<MSPublishStorageProtocol> _storageProtocol;	// 68 = 0x44
	NSURL *_storageProtocolURL;	// 72 = 0x48
	NSMutableArray *_tempFiles;	// 76 = 0x4c
	NSMutableDictionary *_maxSizeByUTI;	// 80 = 0x50
	long long _publishTargetByteCount;	// 84 = 0x54
	int _publishBatchSize;	// 92 = 0x5c
	int _maxErrorCount;	// 96 = 0x60
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x37c5d689; S=0x37c5d699; @synthesize=_daemon
@property(assign, nonatomic) id<MSPublisherDelegate> delegate;	// G=0x37c5d669; S=0x37c5d679; @synthesize=_delegate
@property(assign, nonatomic) int publishBatchSize;	// G=0x37c5d70d; S=0x37c5d71d; @synthesize=_publishBatchSize
@property(assign, nonatomic) long long publishTargetByteCount;	// G=0x37c5d6e1; S=0x37c5d6f9; @synthesize=_publishTargetByteCount
@property(retain, nonatomic) NSURL *storageProtocolURL;	// G=0x37c5d6a9; S=0x37c5d6b9; @synthesize=_storageProtocolURL
+ (id)_clearInstantiatedPublishersByPersonID;	// 0x37c56ded
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x37c56e6d
+ (id)existingPublisherForPersonID:(id)personID;	// 0x37c56dd1
+ (void)forgetPersonID:(id)anId;	// 0x37c56e01
+ (BOOL)isInRetryState;	// 0x37c57441
+ (id)nextActivityDate;	// 0x37c571c1
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x37c572d5
+ (id)personIDsWithOutstandingActivities;	// 0x37c57325
+ (id)publisherForPersonID:(id)personID;	// 0x37c56cb5
+ (void)stopAllActivities;	// 0x37c57361
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x37c57531
- (void).cxx_destruct;	// 0x37c5d72d
- (void)_abort;	// 0x37c5d461
- (id)_abortedError;	// 0x37c5d401
- (void)_addAssetToFileHashMap:(id)fileHashMap;	// 0x37c58b79
- (void)_categorizeError:(id)error setOutIsIgnorable:(BOOL *)ignorable setOutIsCounted:(BOOL *)counted setOutIsFatal:(BOOL *)fatal setOutNeedsBackoff:(BOOL *)backoff setOutIsTemporary:(BOOL *)temporary setOutIsTokenAuth:(BOOL *)auth setOutIsAuthError:(BOOL *)error8;	// 0x37c5be05
- (void)_didFinishUsingAssetCollections:(id)collections;	// 0x37c58f4d
- (void)_forget;	// 0x37c5d5ed
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)error;	// 0x37c5a02d
- (BOOL)_isAllowedToUpload;	// 0x37c58475
- (BOOL)_isInRetryState;	// 0x37c5d641
- (void)_refreshServerSideConfiguredParameters;	// 0x37c57cf5
- (void)_removeAssetFromFileHashMap:(id)fileHashMap;	// 0x37c58c65
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)assetMap;	// 0x37c58d35
- (void)_requestDerivatives;	// 0x37c58771
- (void)_sendFilesToMMCS;	// 0x37c5b5e1
- (void)_sendMetadataToStreams;	// 0x37c59c51
- (void)_sendUploadComplete;	// 0x37c5cc65
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x37c582d1
- (int)_stop;	// 0x37c5d335
- (void)_updateMasterManifest;	// 0x37c579c5
- (void)abort;	// 0x37c5d621
- (void)computeHashForAsset:(id)asset;	// 0x37c57cd5
// declared property getter: - (id)daemon;	// 0x37c5d689
- (void)deactivate;	// 0x37c577fd
- (void)dealloc;	// 0x37c57985
// declared property getter: - (id)delegate;	// 0x37c5d669
- (BOOL)enqueueAssetCollections:(id)collections outError:(id *)error;	// 0x37c57a71
- (void)publish;	// 0x37c5857d
// declared property getter: - (int)publishBatchSize;	// 0x37c5d70d
- (void)publishStorageProtocol:(id)protocol didFinishUploadingAsset:(id)asset error:(id)error;	// 0x37c5ba25
- (void)publishStorageProtocol:(id)protocol didFinishUsingFD:(int)fd forAsset:(id)asset;	// 0x37c5bd81
- (int)publishStorageProtocol:(id)protocol didRequestFDForAsset:(id)asset;	// 0x37c5bae1
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)publishStorageProtocol;	// 0x37c5bf2d
- (void)publishStreamsProtocol:(id)protocol didFinishSendingUploadCompleteError:(id)error;	// 0x37c5ccdd
- (void)publishStreamsProtocol:(id)protocol didFinishUploadingMetadataResponse:(id)response error:(id)error;	// 0x37c5a0cd
- (void)publishStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x37c5b501
// declared property getter: - (long long)publishTargetByteCount;	// 0x37c5d6e1
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x37c5d699
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37c5d679
// declared property setter: - (void)setPublishBatchSize:(int)size;	// 0x37c5d71d
// declared property setter: - (void)setPublishTargetByteCount:(long long)count;	// 0x37c5d6f9
// declared property setter: - (void)setStorageProtocolURL:(id)url;	// 0x37c5d6b9
- (void)stop;	// 0x37c5d631
// declared property getter: - (id)storageProtocolURL;	// 0x37c5d6a9
- (void)submitAssetCollectionsForPublication:(id)publication;	// 0x37c590d1
- (void)submitAssetCollectionsForPublication:(id)publication skipAssetCollections:(id)collections;	// 0x37c590e5
@end
