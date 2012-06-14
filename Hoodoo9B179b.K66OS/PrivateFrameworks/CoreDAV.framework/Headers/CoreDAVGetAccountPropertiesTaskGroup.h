/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPrincipalSearchPropertySetTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSString, NSSet, NSMutableSet, NSURL;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {
@private
	NSURL *_principalURL;	// 44 = 0x2c
	NSString *_displayName;	// 48 = 0x30
	NSURL *_resourceID;	// 52 = 0x34
	NSSet *_emailAddresses;	// 56 = 0x38
	NSSet *_collections;	// 60 = 0x3c
	NSSet *_principalSearchProperties;	// 64 = 0x40
	BOOL _isExpandPropertyReportSupported;	// 68 = 0x44
	BOOL _fetchPrincipalSearchProperties;	// 69 = 0x45
	BOOL _shouldIgnoreHomeSetOnDifferentHost;	// 70 = 0x46
	NSMutableSet *_redirectHistory;	// 72 = 0x48
}
@property(readonly, assign) NSSet *collections;	// G=0x30ca4529; @synthesize=_collections
@property(assign, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;	// @dynamic
@property(readonly, assign) NSString *displayName;	// G=0x30ca44f9; @synthesize=_displayName
@property(readonly, assign) NSSet *emailAddresses;	// G=0x30ca4519; @synthesize=_emailAddresses
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x30ca4549; S=0x30ca4559; @synthesize=_fetchPrincipalSearchProperties
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x30ca4539; @synthesize=_isExpandPropertyReportSupported
@property(readonly, assign) NSSet *principalSearchProperties;	// G=0x30ca4569; @synthesize=_principalSearchProperties
@property(readonly, assign) NSURL *principalURL;	// G=0x30ca44e9; @synthesize=_principalURL
@property(readonly, assign) NSURL *resourceID;	// G=0x30ca4509; @synthesize=_resourceID
@property(assign, nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;	// G=0x30ca4579; S=0x30ca4589; @synthesize=_shouldIgnoreHomeSetOnDifferentHost
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x30ca2f21
- (id)_copyAccountPropertiesPropFindElements;	// 0x30ca31cd
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x30ca3491
- (void)_taskCompleted:(id)completed withError:(id)error;	// 0x30ca3a09
- (void)coaxServerForPrincipalHeaders;	// 0x30ca3eed
// declared property getter: - (id)collections;	// 0x30ca4529
- (void)dealloc;	// 0x30ca2f9d
- (id)description;	// 0x30ca3061
// declared property getter: - (id)displayName;	// 0x30ca44f9
// declared property getter: - (id)emailAddresses;	// 0x30ca4519
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x30ca4549
- (BOOL)forceOptionsRequest;	// 0x30ca3a61
- (id)homeSet;	// 0x30ca334d
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x30ca4539
// declared property getter: - (id)principalSearchProperties;	// 0x30ca4569
// declared property getter: - (id)principalURL;	// 0x30ca44e9
- (void)processPrincipalHeaders:(id)headers;	// 0x30ca4115
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x30ca3a65
// declared property getter: - (id)resourceID;	// 0x30ca4509
- (void)searchPropertySetTask:(id)task completetWithPropertySearchSet:(id)propertySearchSet error:(id)error;	// 0x30ca4261
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x30ca4559
// declared property setter: - (void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)ignoreHomeSetOnDifferentHost;	// 0x30ca4589
// declared property getter: - (BOOL)shouldIgnoreHomeSetOnDifferentHost;	// 0x30ca4579
- (void)startTaskGroup;	// 0x30ca3351
- (void)task:(id)task didFinishWithError:(id)error;	// 0x30ca4329
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30ca3161
@end
