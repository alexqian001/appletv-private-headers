/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "MCJobQueueObserver.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MCJobQueue, MCUserNotificationManager, NSString, MCMDMServer;
@protocol OS_dispatch_queue;

@interface MCManagedAppManager : NSObject <MCJobQueueObserver> {
	MCMDMServer *_server;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_manifest;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_manifestQueue;	// 16 = 0x10
	MCJobQueue *_jobQueue;	// 20 = 0x14
	MCUserNotificationManager *_userNotificationManager;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_busyCountQueue;	// 28 = 0x1c
	int _busyCount;	// 32 = 0x20
}
@property(assign, nonatomic) __weak MCMDMServer *server;	// G=0x315b6251; S=0x315b6271; @synthesize=_server
+ (id)sharedManager;	// 0x315aa33d
+ (id)stringForAppState:(int)appState;	// 0x315b6149
- (id)initWithManifestPath:(id)manifestPath;	// 0x315aa3e1
- (void).cxx_destruct;	// 0x315b6285
- (int)__appStateForBundleID:(id)bundleID;	// 0x315ab075
- (void)__commitManifest;	// 0x315aa931
- (BOOL)__hasMetadataForBundleID:(id)bundleID;	// 0x315aa961
- (id)__managedAppMetadataByBundleID;	// 0x315aaaf5
- (id)__metadataForBundleID:(id)bundleID;	// 0x315aae99
- (void)__removeBundleID:(id)anId;	// 0x315ab3d1
- (void)__setAppState:(int)state forBundleID:(id)bundleID;	// 0x315ab231
- (void)__setManagedAppMetadataByBundleID:(id)anId;	// 0x315aab6d
- (void)__setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x315aad01
- (BOOL)_advanceTransientStateForBundleID:(id)bundleID params:(id)params outNewParams:(id *)params3 outSetChanged:(BOOL *)changed;	// 0x315b5b01
- (id)_appAlreadyQueuedError:(id)error;	// 0x315abb2d
- (BOOL)_appBundleID:(id)anId wasInstalledOutIsManaged:(BOOL *)managed;	// 0x315ab875
- (id)_bundleIDAlreadyInstalledError:(id)error;	// 0x315abaa5
- (void)_displayAppInstallationAlertMessage:(id)message isUpdate:(BOOL)update completionBlock:(id)block;	// 0x315ac3f9
- (void)_displayAppInstallationFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x315ac4b1
- (void)_displayAppUpdateFailureAlertTitle:(id)title completionBlock:(id)block;	// 0x315ac579
- (void)_displayPromptForAppInstallationTitle:(id)appInstallationTitle isAppStore:(BOOL)store isUpdate:(BOOL)update completionBlock:(id)block;	// 0x315abff9
- (id)_downloadingAppIDs;	// 0x315b5601
- (void)_installEnterpriseAppManifestURL:(id)url completionBlock:(id)block;	// 0x315ae0c5
- (id)_invalidManifestErrorWithURL:(id)url underlyingError:(id)error;	// 0x315abbb5
- (BOOL)_isBundleIDInstalled:(id)installed;	// 0x315ab7d5
- (id)_notAnAppError;	// 0x315aba21
- (void)_promptUserForEnterpriseAppInstallationManifestURL:(id)enterpriseAppInstallationManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x315ae31d
- (void)_promptUserForEnterpriseAppUpdateManifestURL:(id)enterpriseAppUpdateManifestURL title:(id)title bundleID:(id)anId completionBlock:(id)block;	// 0x315ae7dd
- (void)_promptUserForStoreAppInstallationItem:(id)storeAppInstallationItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x315acc15
- (void)_promptUserForStoreAppUpdateItem:(id)storeAppUpdateItem title:(id)title bundleID:(id)anId offer:(id)offer completionBlock:(id)block;	// 0x315ad45d
- (void)_promptUserForiTunesAccount:(id)account accountNameEditable:(BOOL)editable canCreateNewAccount:(BOOL)account3 completionBlock:(id)block;	// 0x315af1c1
- (void)_purchaseItem:(id)item account:(id)account offer:(id)offer completionBlock:(id)block;	// 0x315ac641
- (void)_userAccount:(id)account hasPurchasedBundleID:(id)anId completionBlock:(id)block;	// 0x315aef15
- (BOOL)_willQueueAppBundleID:(id)anId forDownloadManagementFlags:(int)downloadManagementFlags outRejectionReason:(id *)reason outIsUpdate:(BOOL *)update outError:(id *)error;	// 0x315aece5
- (void)advanceTransientStates;	// 0x315b5cd1
- (void)advanceTransientStatesForBundleID:(id)bundleID;	// 0x315b5ed9
- (int)appStateForBundleID:(id)bundleID;	// 0x315ab119
- (BOOL)applyRedemptionCode:(id)code forBundleID:(id)bundleID outError:(id *)error;	// 0x315b34ad
- (id)bundleIDsWithFlags:(int)flags;	// 0x315ab55d
- (void)cleanUp;	// 0x315abc5d
- (id)doNotBackupAppIDs;	// 0x315b550d
- (BOOL)hasMetadataForBundleID:(id)bundleID;	// 0x315aa9dd
- (BOOL)hasPendingInstallations;	// 0x315b5521
- (BOOL)installITunesStoreID:(unsigned long long)anId managementFlags:(int)flags outBundleID:(id *)anId3 outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x315af475
- (BOOL)installManifestURL:(id)url managementFlags:(int)flags outBundleID:(id *)anId outAppState:(int *)state outRejectionReason:(id *)reason outError:(id *)error;	// 0x315b1481
- (void)jobQueueDidReleaseBusy:(id)jobQueue;	// 0x315aa7a1
- (void)jobQueueDidRetainBusy:(id)jobQueue;	// 0x315aa6a1
- (id)managedAppMetadataByBundleID;	// 0x315aabb5
- (id)metadataForBundleID:(id)bundleID;	// 0x315aaf01
- (void)removeBundleID:(id)anId;	// 0x315ab495
// declared property getter: - (id)server;	// 0x315b6251
- (void)setAppState:(int)state forBundleID:(id)bundleID;	// 0x315ab2f5
- (void)setMetadata:(id)metadata forBundleID:(id)bundleID;	// 0x315aad9d
// declared property setter: - (void)setServer:(id)server;	// 0x315b6271
- (void)uninstallManagedAppsAccordingToFlags;	// 0x315b322d
- (void)updateApplicationInstallationStates;	// 0x315b57c5
@end
