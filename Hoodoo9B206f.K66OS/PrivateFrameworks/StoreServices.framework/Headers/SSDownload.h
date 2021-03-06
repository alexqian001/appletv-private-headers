/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "SSEntity.h"

@class NSArray, SSNetworkConstraints, SSDownloadMetadata, SSXPCConnection, SSDownloadStatus, NSMutableDictionary, NSNumber;

@interface SSDownload : SSEntity <SSXPCCoding> {
@private
	NSMutableDictionary *_localAssets;	// 28 = 0x1c
	SSDownloadMetadata *_metadata;	// 32 = 0x20
	NSNumber *_prioritizeAboveDownload;	// 36 = 0x24
	SSDownloadStatus *_status;	// 40 = 0x28
}
@property(readonly, assign, getter=_XPCConnection) SSXPCConnection *_XPCConnection;	// G=0x327b74c1; 
@property(retain, nonatomic) NSArray *assets;	// G=0x327b6c6d; S=0x327b6d91; 
@property(readonly, assign, getter=isCancelable) BOOL cancelable;	// G=0x327b4e29; 
@property(readonly, assign, nonatomic) id downloadIdentifier;	// G=0x327b6c71; 
@property(readonly, assign, nonatomic, getter=isExternal) BOOL external;	// G=0x327b6cb9; 
@property(copy, nonatomic) SSDownloadMetadata *metadata;	// G=0x327b6d29; S=0x327b6d95; 
@property(copy) SSNetworkConstraints *networkConstraints;	// G=0x327b521d; S=0x327b62a1; 
@property(readonly, assign) long long persistentIdentifier;	// G=0x327b5531; 
@property(retain, nonatomic) SSDownloadStatus *status;	// G=0x327b6df5; S=0x327b6df1; 
+ (long long)_existsMessage;	// 0x327b6399
+ (long long)_getExternalValuesMessage;	// 0x327b63a1
+ (long long)_getValueMessage;	// 0x327b63a9
+ (long long)_setExternalValuesMessage;	// 0x327b63b1
+ (long long)_setValuesMessage;	// 0x327b63b9
+ (void)loadThumbnailImageDataForDownloadID:(long long)downloadID connection:(id)connection completionBlock:(id)block;	// 0x327b6815
- (id)initWithDownloadMetadata:(id)downloadMetadata;	// 0x327b6a55
- (id)initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x327b41e9
// declared property getter: - (id)_XPCConnection;	// 0x327b74c1
- (void)_addCachedExternalValues:(id)values;	// 0x327b63c1
- (void)_addCachedPropertyValues:(id)values;	// 0x327b6521
- (void)_applyPhase:(id)phase toStatus:(id)status;	// 0x327b74d5
- (id)_errorWithData:(id)data;	// 0x327b7589
- (id)_errorWithXPCReply:(void *)xpcreply;	// 0x327b7639
- (id)_initWithLocalPropertyValues:(void *)localPropertyValues;	// 0x327b429d
- (void)_legacyLoadArtworkData;	// 0x327b76f9
- (void)_resetLocalIVars;	// 0x327b679d
- (void)_resetStatus;	// 0x327b737d
- (id)_thumbnailImageURL;	// 0x327b7941
- (BOOL)addAsset:(id)asset forType:(id)type;	// 0x327b4535
// declared property getter: - (id)assets;	// 0x327b6c6d
- (id)assetsForType:(id)type;	// 0x327b4835
- (long long)bytesDownloaded;	// 0x327b4d21
- (long long)bytesTotal;	// 0x327b4d59
- (void *)copyXPCEncoding;	// 0x327b6b3d
- (void)dealloc;	// 0x327b448d
// declared property getter: - (id)downloadIdentifier;	// 0x327b6c71
- (id)downloadPhaseIdentifier;	// 0x327b4d91
- (double)estimatedSecondsRemaining;	// 0x327b4dad
- (id)failureError;	// 0x327b4ded
- (void)handleWithDownloadHandler:(id)downloadHandler completionBlock:(id)block;	// 0x327b6ca9
// declared property getter: - (BOOL)isCancelable;	// 0x327b4e29
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x327b4f49
// declared property getter: - (BOOL)isExternal;	// 0x327b6cb9
- (BOOL)loadThumbnailImageData;	// 0x327b6ce5
- (void)loadThumbnailImageDataWithCompletionBlock:(id)completionBlock;	// 0x327b4fad
// declared property getter: - (id)metadata;	// 0x327b6d29
// declared property getter: - (id)networkConstraints;	// 0x327b521d
- (void)pause;	// 0x327b5281
- (double)percentComplete;	// 0x327b54fd
// declared property getter: - (long long)persistentIdentifier;	// 0x327b5531
- (void)prioritizeAboveDownload:(id)download completionBlock:(id)block;	// 0x327b554d
- (BOOL)removeAsset:(id)asset;	// 0x327b59d9
- (void)resume;	// 0x327b5bf9
// declared property setter: - (void)setAssets:(id)assets;	// 0x327b6d91
- (void)setDownloadHandler:(id)handler completionBlock:(id)block;	// 0x327b5e6d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x327b6d95
// declared property setter: - (void)setNetworkConstraints:(id)constraints;	// 0x327b62a1
// declared property setter: - (void)setStatus:(id)status;	// 0x327b6df1
- (void)setValuesWithStoreDownloadMetadata:(id)storeDownloadMetadata;	// 0x327b6355
// declared property getter: - (id)status;	// 0x327b6df5
- (id)thumbnailImageData;	// 0x327b7335
@end

