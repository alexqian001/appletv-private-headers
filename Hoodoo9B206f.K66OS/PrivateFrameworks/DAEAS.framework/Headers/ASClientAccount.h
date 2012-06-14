/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASAccount.h"

@class NSMutableSet;

@interface ASClientAccount : ASAccount {
	NSMutableSet *_daemonMonitoredFolders;	// 96 = 0x60
	NSMutableSet *_foldersToRetryForMonitoring;	// 100 = 0x64
	NSMutableSet *_folderIDsOnRemoteHold;	// 104 = 0x68
}
- (id)initWithProperties:(id)properties;	// 0x321c1e09
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x321c24f1
- (id)_copySetFlagsActionForRequest:(id)request;	// 0x321c36e5
- (void)_daemonDied;	// 0x321c23a1
- (void)_folderHierarchyChanged;	// 0x321c1f71
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x321c2011
- (void)_foldersUpdated:(id)updated;	// 0x321c219d
- (void)_logStatus:(id)status;	// 0x321c2495
- (id)_newPolicyManager;	// 0x321c1dd1
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x321c2555
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x321c3e01
- (void)_retryMonitoring;	// 0x321c25fd
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x321c2c69
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x321c2969
- (void)clearFolderHierarchyCache;	// 0x321c1f49
- (void)dealloc;	// 0x321c1e89
- (id)mailboxes;	// 0x321c3cf9
- (void)monitorFoldersForUpdates:(id)updates;	// 0x321c26dd
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x321c3071
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x321c324d
- (void)performFolderChange:(id)change;	// 0x321c3681
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x321c3c81
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x321c378d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x321c2d71
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x321c35b1
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x321c28ad
- (void)resolveRecipientsTask:(id)task completedWithStatus:(int)status error:(id)error queriedEmailAddressToRecpient:(id)recpient;	// 0x321c3561
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x321c20b1
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x321c2d09
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x321c2b55
- (void)stopMonitoringAllFolders;	// 0x321c2859
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x321c27f1
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x321c2bd9
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x321c2a65
@end
