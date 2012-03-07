/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "SSEntity.h"

@class NSArray, SSNetworkConstraints, SSDownloadMetadata, SSXPCConnection, NSMutableDictionary, SSDownloadStatus, NSNumber;

@interface SSDownload : SSEntity <SSXPCCoding> {
@private
	NSMutableDictionary *_localAssets;	// 28 = 0x1c
	SSDownloadMetadata *_metadata;	// 32 = 0x20
	NSNumber *_prioritizeAboveDownload;	// 36 = 0x24
	SSDownloadStatus *_status;	// 40 = 0x28
}
@property(readonly, assign, getter=_XPCConnection) SSXPCConnection *_XPCConnection;	// G=0x30e9ed65; 
@property(retain, nonatomic) NSArray *assets;	// G=0x30e9e511; S=0x30e9e635; 
@property(readonly, assign, getter=isCancelable) BOOL cancelable;	// G=0x30e9c6cd; 
@property(readonly, assign, nonatomic) id downloadIdentifier;	// G=0x30e9e515; 
@property(readonly, assign, nonatomic, getter=isExternal) BOOL external;	// G=0x30e9e55d; 
@property(copy, nonatomic) SSDownloadMetadata *metadata;	// G=0x30e9e5cd; S=0x30e9e639; 
@property(copy) SSNetworkConstraints *networkConstraints;	// G=0x30e9cac1; S=0x30e9db45; 
@property(readonly, assign) long long persistentIdentifier;	// G=0x30e9cdd5; 
@property(retain, nonatomic) SSDownloadStatus *status;	// G=0x30e9e699; S=0x30e9e695; 
+ (long long)_existsMessage;	// 0x30e9dc3d
+ (long long)_getExternalValuesMessage;	// 0x30e9dc45
+ (long long)_getValueMessage;	// 0x30e9dc4d
+ (long long)_setExternalValuesMessage;	// 0x30e9dc55
+ (long long)_setValuesMessage;	// 0x30e9dc5d
+ (void)loadThumbnailImageDataForDownloadID:(long long)downloadID connection:(id)connection completionBlock:(id)block;	// 0x30e9e0b9
- (id)initWithDownloadMetadata:(id)downloadMetadata;	// 0x30e9e2f9
- (id)initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x30e9ba8d
// declared property getter: - (id)_XPCConnection;	// 0x30e9ed65
- (void)_addCachedExternalValues:(id)values;	// 0x30e9dc65
- (void)_addCachedPropertyValues:(id)values;	// 0x30e9ddc5
- (void)_applyPhase:(id)phase toStatus:(id)status;	// 0x30e9ed79
- (id)_errorWithData:(id)data;	// 0x30e9ee2d
- (id)_errorWithXPCReply:(void *)xpcreply;	// 0x30e9eedd
- (id)_initWithLocalPropertyValues:(void *)localPropertyValues;	// 0x30e9bb41
- (void)_legacyLoadArtworkData;	// 0x30e9ef9d
- (void)_resetLocalIVars;	// 0x30e9e041
- (void)_resetStatus;	// 0x30e9ec21
- (id)_thumbnailImageURL;	// 0x30e9f1e5
- (BOOL)addAsset:(id)asset forType:(id)type;	// 0x30e9bdd9
// declared property getter: - (id)assets;	// 0x30e9e511
- (id)assetsForType:(id)type;	// 0x30e9c0d9
- (long long)bytesDownloaded;	// 0x30e9c5c5
- (long long)bytesTotal;	// 0x30e9c5fd
- (void *)copyXPCEncoding;	// 0x30e9e3e1
- (void)dealloc;	// 0x30e9bd31
// declared property getter: - (id)downloadIdentifier;	// 0x30e9e515
- (id)downloadPhaseIdentifier;	// 0x30e9c635
- (double)estimatedSecondsRemaining;	// 0x30e9c651
- (id)failureError;	// 0x30e9c691
- (void)handleWithDownloadHandler:(id)downloadHandler completionBlock:(id)block;	// 0x30e9e54d
// declared property getter: - (BOOL)isCancelable;	// 0x30e9c6cd
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x30e9c7ed
// declared property getter: - (BOOL)isExternal;	// 0x30e9e55d
- (BOOL)loadThumbnailImageData;	// 0x30e9e589
- (void)loadThumbnailImageDataWithCompletionBlock:(id)completionBlock;	// 0x30e9c851
// declared property getter: - (id)metadata;	// 0x30e9e5cd
// declared property getter: - (id)networkConstraints;	// 0x30e9cac1
- (void)pause;	// 0x30e9cb25
- (double)percentComplete;	// 0x30e9cda1
// declared property getter: - (long long)persistentIdentifier;	// 0x30e9cdd5
- (void)prioritizeAboveDownload:(id)download completionBlock:(id)block;	// 0x30e9cdf1
- (BOOL)removeAsset:(id)asset;	// 0x30e9d27d
- (void)resume;	// 0x30e9d49d
// declared property setter: - (void)setAssets:(id)assets;	// 0x30e9e635
- (void)setDownloadHandler:(id)handler completionBlock:(id)block;	// 0x30e9d711
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30e9e639
// declared property setter: - (void)setNetworkConstraints:(id)constraints;	// 0x30e9db45
// declared property setter: - (void)setStatus:(id)status;	// 0x30e9e695
- (void)setValuesWithStoreDownloadMetadata:(id)storeDownloadMetadata;	// 0x30e9dbf9
// declared property getter: - (id)status;	// 0x30e9e699
- (id)thumbnailImageData;	// 0x30e9ebd9
@end
