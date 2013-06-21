/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import "XPCProxyTarget.h"


@protocol WebBookmarksServerProtocol <XPCProxyTarget>
- (void)addReadingListItems:(id)items;
- (void)clearAllCloudTabDevicesForClient:(id)client;
- (void)clearTabsForCurrentDeviceForClient:(id)client;
- (void)client:(id)client didToggleCloudTabs:(id)tabs terminateAfterUpdating:(id)updating;
- (void)client:(id)client didTogglePrivateBrowsing:(id)browsing;
- (void)registerClientForReadingListUpdates:(id)readingListUpdates;
- (void)startReadingListFetcher;
- (void)unregisterClientForReadingListUpdates:(id)readingListUpdates;
@end
