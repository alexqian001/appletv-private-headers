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
- (id)initWithProperties:(id)properties;	// 0x341d2ed9
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x341d35c1
- (id)_copySetFlagsActionForRequest:(id)request;	// 0x341d47b5
- (void)_daemonDied;	// 0x341d3471
- (void)_folderHierarchyChanged;	// 0x341d3041
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x341d30e1
- (void)_foldersUpdated:(id)updated;	// 0x341d326d
- (void)_logStatus:(id)status;	// 0x341d3565
- (id)_newPolicyManager;	// 0x341d2ea1
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x341d3625
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x341d4ed1
- (void)_retryMonitoring;	// 0x341d36cd
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x341d3d39
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x341d3a39
- (void)clearFolderHierarchyCache;	// 0x341d3019
- (void)dealloc;	// 0x341d2f59
- (id)mailboxes;	// 0x341d4dc9
- (void)monitorFoldersForUpdates:(id)updates;	// 0x341d37ad
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x341d4141
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x341d431d
- (void)performFolderChange:(id)change;	// 0x341d4751
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x341d4d51
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x341d485d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x341d3e41
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x341d4681
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x341d397d
- (void)resolveRecipientsTask:(id)task completedWithStatus:(int)status error:(id)error queriedEmailAddressToRecpient:(id)recpient;	// 0x341d4631
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x341d3181
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x341d3dd9
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x341d3c25
- (void)stopMonitoringAllFolders;	// 0x341d3929
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x341d38c1
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x341d3ca9
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x341d3b35
@end

