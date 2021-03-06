/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosMonitor : BRSingleton {
@private
	NSMutableDictionary *_tasks;	// 4 = 0x4
	NSMutableArray *_dataMonitoredObjects;	// 8 = 0x8
	NSMutableArray *_temporaryDataMonitoredObjects;	// 12 = 0xc
	NSMutableArray *_temporaryUpdateDelegateCandidates;	// 16 = 0x10
	id _updateDelegate;	// 20 = 0x14
	NSMutableArray *_accountListeners;	// 24 = 0x18
	NSMutableArray *_collectionListeners;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *dataMonitoredObjects;	// G=0x3073dae9; converted property
- (void)_cancelDataMonitoringForObject:(id)object;	// 0x3073ca5d
- (void)_registerObjectForDataMonitoring:(id)dataMonitoring;	// 0x3073cb91
- (void)_taskComplete:(id)complete;	// 0x3073c951
- (void)addOneTimeDataMonitoredObject:(id)object;	// 0x3073d9bd
- (id)backgroundTask;	// 0x3073c7a1
- (void)cancelDataMonitoringForAccount:(id)account;	// 0x3073c85d
- (void)cancelDataMonitoringForCollection:(id)collection;	// 0x3073c835
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x3073c789
- (void)cancelLoadAccountWithName:(id)name;	// 0x3073c761
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x3073c78d
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x3073c795
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x3073c799
- (void)cancelLoadMediaForAccount:(id)account;	// 0x3073c781
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x3073c785
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x3073c791
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x3073cdbd
- (id)currentUpdateDelegate;	// 0x3073cce5
// converted property getter: - (id)dataMonitoredObjects;	// 0x3073dae9
- (void)dealloc;	// 0x3073c885
- (void)invokeUpdateDelegateForObject:(id)object updateData:(id)data;	// 0x3073c7d5
- (void)loadAccountIconForAccount:(id)account;	// 0x3073c76d
- (void)loadAccountWithName:(id)name;	// 0x3073c75d
- (void)loadAssetsForCollection:(id)collection;	// 0x3073c771
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x3073c779
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x3073c77d
- (void)loadMediaForAccount:(id)account;	// 0x3073c765
- (void)loadSubAccountsForAccount:(id)account;	// 0x3073c769
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x3073c775
- (void)notifyAccountListenersOfChangeToObject:(id)object;	// 0x3073d41d
- (void)notifyCollectionListenersOfChangeToObject:(id)object;	// 0x3073d07d
- (void)performDataMonitoring;	// 0x3073db9d
- (void)postUpdateNotification:(id)notification;	// 0x3073c7a5
- (void)queueTaskWithIdentifier:(id)identifier selector:(SEL)selector object:(id)object;	// 0x3073cec9
- (void)registerAccountForDataMonitoring:(id)dataMonitoring;	// 0x3073c871
- (void)registerAccountListenerWithID:(id)anId;	// 0x3073d6d1
- (void)registerCollectionForDataMonitoring:(id)dataMonitoring;	// 0x3073c849
- (void)registerCollectionListenerWithID:(id)anId;	// 0x3073d331
- (void)registerTemporaryUpdateDelegate:(id)delegate;	// 0x3073d885
- (void)registerUpdateDelegate:(id)delegate;	// 0x3073d999
- (void)removeAccountWithName:(id)name;	// 0x3073c759
- (id)taskContext;	// 0x3073c79d
- (void)unregisterAccountListenerWithID:(id)anId;	// 0x3073d5ed
- (void)unregisterCollectionListenerWithID:(id)anId;	// 0x3073d24d
- (void)unregisterTemporaryUpdateDelegate:(id)delegate;	// 0x3073d7bd
- (void)unregisterUpdateDelegate:(id)delegate;	// 0x3073d971
@end

