/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerSyncTaskGroup.h> // Unknown library

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	NSSet *_notificationTypeNamesToFetch;	// 140 = 0x8c
}
@property(retain) NSSet *notificationTypeNamesToFetch;	// G=0x338e66e1; S=0x338e66f5; @synthesize=_notificationTypeNamesToFetch
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x338e64d9
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x338e6669
- (id)copyGetTaskWithURL:(id)url;	// 0x338e65d1
- (void)dealloc;	// 0x338e6585
// declared property getter: - (id)notificationTypeNamesToFetch;	// 0x338e66e1
// declared property setter: - (void)setNotificationTypeNamesToFetch:(id)fetch;	// 0x338e66f5
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x338e6609
@end

