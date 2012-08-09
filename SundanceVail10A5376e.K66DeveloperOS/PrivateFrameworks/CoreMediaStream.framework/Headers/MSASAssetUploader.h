/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASAssetTransferer.h"

@class NSMutableArray, NSMutableDictionary;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer {
	int _state;	// 64 = 0x40
	NSMutableArray *_itemsInFlight;	// 68 = 0x44
	NSMutableDictionary *_assetCollectionsToItemInFlightMap;	// 72 = 0x48
	NSMutableDictionary *_assetToAssetCollectionMap;	// 76 = 0x4c
	NSMutableArray *_finishedAssetCollections;	// 80 = 0x50
	BOOL _didEncounterNetworkConditionError;	// 84 = 0x54
}
@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap;	// G=0x316f35cd; S=0x316f35dd; @synthesize=_assetCollectionsToItemInFlightMap
@property(retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap;	// G=0x316f3605; S=0x316f3615; @synthesize=_assetToAssetCollectionMap
@property(assign, nonatomic) __weak id<MSASAssetUploaderDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL didEncounterNetworkConditionError;	// G=0x316f3675; S=0x316f3685; @synthesize=_didEncounterNetworkConditionError
@property(retain, nonatomic) NSMutableArray *finishedAssetCollections;	// G=0x316f363d; S=0x316f364d; @synthesize=_finishedAssetCollections
@property(retain, nonatomic) NSMutableArray *itemsInFlight;	// G=0x316f3595; S=0x316f35a5; @synthesize=_itemsInFlight
@property(assign, nonatomic) int state;	// G=0x316f3575; S=0x316f3585; @synthesize=_state
- (void).cxx_destruct;	// 0x316f3695
- (void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;	// 0x316f34b1
- (void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;	// 0x316f3329
- (void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;	// 0x316f2ed1
- (void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context putReceipt:(id)receipt error:(id)error;	// 0x316f1ba9
- (void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x316f33ed
- (void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x316f2b9d
- (id)_orphanedAssetCollectionError;	// 0x316efc2d
- (id)_pathForPersonID:(id)personID;	// 0x316ef3c5
- (void)_workQueueStop;	// 0x316ef705
// declared property getter: - (id)assetCollectionsToItemInFlightMap;	// 0x316f35cd
// declared property getter: - (id)assetToAssetCollectionMap;	// 0x316f3605
// declared property getter: - (BOOL)didEncounterNetworkConditionError;	// 0x316f3675
// declared property getter: - (id)finishedAssetCollections;	// 0x316f363d
// declared property getter: - (id)itemsInFlight;	// 0x316f3595
- (void)registerAssetCollections:(id)collections completionBlock:(id)block;	// 0x316f129d
// declared property setter: - (void)setAssetCollectionsToItemInFlightMap:(id)flightMap;	// 0x316f35dd
// declared property setter: - (void)setAssetToAssetCollectionMap:(id)assetCollectionMap;	// 0x316f3615
// declared property setter: - (void)setDidEncounterNetworkConditionError:(BOOL)encounterNetworkConditionError;	// 0x316f3685
// declared property setter: - (void)setFinishedAssetCollections:(id)collections;	// 0x316f364d
// declared property setter: - (void)setItemsInFlight:(id)flight;	// 0x316f35a5
// declared property setter: - (void)setState:(int)state;	// 0x316f3585
// declared property getter: - (int)state;	// 0x316f3575
- (void)unregisterAssetCollections:(id)collections;	// 0x316f156d
- (void)unregisterAssetCollections:(id)collections completionBlock:(id)block;	// 0x316f1581
- (void)workQueueCancel;	// 0x316ef8a5
- (void)workQueueDidFinishWithItem:(id)workQueue error:(id)error;	// 0x316f1979
- (void)workQueueGoIdle;	// 0x316ef5c9
- (void)workQueueRegisterAssetCollections:(id)collections index:(unsigned)index results:(id)results completionBlock:(id)block;	// 0x316f0f35
- (void)workQueueRegisterAssets:(id)assets index:(unsigned)index completionBlock:(id)block;	// 0x316f0c8d
- (void)workQueueRetryOutstandingActivities;	// 0x316ef3cd
- (void)workQueueShutDownCompletionBlock:(id)block;	// 0x316ef851
- (void)workQueueStop;	// 0x316ef769
- (void)workQueueStopTrackingItem:(id)item;	// 0x316f181d
- (void)workQueueUploadNextBatch;	// 0x316efcf9
@end
