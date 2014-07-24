/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosMonitor : BRSingleton {
	NSMutableDictionary *_tasks;	// 4 = 0x4
	NSMutableArray *_dataMonitoredObjects;	// 8 = 0x8
	NSMutableArray *_temporaryDataMonitoredObjects;	// 12 = 0xc
	NSMutableArray *_temporaryUpdateDelegateCandidates;	// 16 = 0x10
	id _updateDelegate;	// 20 = 0x14
	NSMutableArray *_accountListeners;	// 24 = 0x18
	NSMutableArray *_collectionListeners;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *dataMonitoredObjects;	// G=0x19da29; converted property
- (void)_cancelDataMonitoringForObject:(id)object;	// 0x19f17d
- (void)_registerObjectForDataMonitoring:(id)dataMonitoring;	// 0x19efd1
- (void)_taskComplete:(id)complete;	// 0x19f2fd
- (void)addOneTimeDataMonitoredObject:(id)object;	// 0x19db05
- (id)backgroundTask;	// 0x19ee91
- (void)cancelDataMonitoringForAccount:(id)account;	// 0x19d9f9
- (void)cancelDataMonitoringForCollection:(id)collection;	// 0x19da19
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x19d9d5
- (void)cancelLoadAccountWithName:(id)name;	// 0x19d9ad
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x19d9d9
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x19d9e1
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x19d9e5
- (void)cancelLoadMediaForAccount:(id)account;	// 0x19d9cd
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x19d9d1
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x19d9dd
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x19e98d
- (id)currentUpdateDelegate;	// 0x19eecd
// converted property getter: - (id)dataMonitoredObjects;	// 0x19da29
- (void)dealloc;	// 0x19d8c5
- (void)invokeUpdateDelegateForObject:(id)object updateData:(id)data;	// 0x19ee29
- (void)loadAccountIconForAccount:(id)account;	// 0x19d9b9
- (void)loadAccountWithName:(id)name;	// 0x19d9a9
- (void)loadAssetsForCollection:(id)collection;	// 0x19d9bd
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x19d9c5
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x19d9c9
- (void)loadMediaForAccount:(id)account;	// 0x19d9b1
- (void)loadSubAccountsForAccount:(id)account;	// 0x19d9b5
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x19d9c1
- (void)notifyAccountListenersOfChangeToObject:(id)object;	// 0x19e0e5
- (void)notifyCollectionListenersOfChangeToObject:(id)object;	// 0x19e53d
- (void)performDataMonitoring;	// 0x19eadd
- (void)postUpdateNotification:(id)notification;	// 0x19ee95
- (void)queueTaskWithIdentifier:(id)identifier selector:(SEL)selector object:(id)object;	// 0x19e77d
- (void)registerAccountForDataMonitoring:(id)dataMonitoring;	// 0x19d9e9
- (void)registerAccountListenerWithID:(id)anId;	// 0x19dec9
- (void)registerCollectionForDataMonitoring:(id)dataMonitoring;	// 0x19da09
- (void)registerCollectionListenerWithID:(id)anId;	// 0x19e321
- (void)registerTemporaryUpdateDelegate:(id)delegate;	// 0x19dcc1
- (void)registerUpdateDelegate:(id)delegate;	// 0x19dc69
- (void)removeAccountWithName:(id)name;	// 0x19d9a5
- (id)taskContext;	// 0x19e779
- (void)unregisterAccountListenerWithID:(id)anId;	// 0x19dfdd
- (void)unregisterCollectionListenerWithID:(id)anId;	// 0x19e435
- (void)unregisterTemporaryUpdateDelegate:(id)delegate;	// 0x19ddd5
- (void)unregisterUpdateDelegate:(id)delegate;	// 0x19dc95
@end
