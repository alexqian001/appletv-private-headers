/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASAccount.h"

@class NSMutableSet;

@interface ASClientAccount : ASAccount {
	NSMutableSet *_daemonMonitoredFolders;	// 88 = 0x58
	NSMutableSet *_foldersToRetryForMonitoring;	// 92 = 0x5c
	NSMutableSet *_folderIDsOnRemoteHold;	// 96 = 0x60
}
- (id)initWithProperties:(id)properties;	// 0x33bd93b9
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x33bd9acd
- (id)_copySetFlagsActionForRequest:(id)request;	// 0x33bdaddd
- (void)_daemonDied;	// 0x33bd997d
- (void)_folderHierarchyChanged;	// 0x33bd9525
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x33bd95c5
- (void)_foldersUpdated:(id)updated;	// 0x33bd9775
- (void)_logStatus:(id)status;	// 0x33bd9a71
- (id)_newPolicyManager;	// 0x33bd9381
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x33bd9b39
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x33bdb525
- (void)_retryMonitoring;	// 0x33bd9c01
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x33bda341
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x33bda01d
- (void)clearFolderHierarchyCache;	// 0x33bd94fd
- (void)dealloc;	// 0x33bd9439
- (id)delegateeInvitationICSRepresentationForMetaData:(id)metaData inFolderWithId:(id)anId outSummary:(id *)summary;	// 0x33bd9f65
- (id)mailboxes;	// 0x33bdb3f9
- (void)monitorFoldersForUpdates:(id)updates;	// 0x33bd9cd9
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x33bda779
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x33bda915
- (void)performFolderChange:(id)change;	// 0x33bdad79
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x33bdb381
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x33bdae85
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x33bda445
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x33bdaca9
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x33bd9ea9
- (void)resolveRecipientsTask:(id)task completedWithStatus:(int)status error:(id)error queriedEmailAddressToRecpient:(id)recpient;	// 0x33bdac5d
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x33bd9665
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x33bda3e1
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x33bda225
- (void)stopMonitoringAllFolders;	// 0x33bd9e55
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x33bd9df1
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x33bda2ad
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x33bda139
@end

