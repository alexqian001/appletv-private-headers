/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPrincipalSearchPropertySetTaskDelegate.h"

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
@property(readonly, assign) NSSet *collections;	// G=0x347a7061; @synthesize=_collections
@property(assign, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;	// @dynamic
@property(readonly, assign) NSString *displayName;	// G=0x347a7031; @synthesize=_displayName
@property(readonly, assign) NSSet *emailAddresses;	// G=0x347a7051; @synthesize=_emailAddresses
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x347a7081; S=0x347a7091; @synthesize=_fetchPrincipalSearchProperties
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x347a7071; @synthesize=_isExpandPropertyReportSupported
@property(readonly, assign) NSSet *principalSearchProperties;	// G=0x347a70a1; @synthesize=_principalSearchProperties
@property(readonly, assign) NSURL *principalURL;	// G=0x347a7021; @synthesize=_principalURL
@property(readonly, assign) NSURL *resourceID;	// G=0x347a7041; @synthesize=_resourceID
@property(assign, nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;	// G=0x347a70b1; S=0x347a70c1; @synthesize=_shouldIgnoreHomeSetOnDifferentHost
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x347a5a59
- (id)_copyAccountPropertiesPropFindElements;	// 0x347a5d05
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x347a5fc9
- (void)_taskCompleted:(id)completed withError:(id)error;	// 0x347a6541
- (void)coaxServerForPrincipalHeaders;	// 0x347a6a25
// declared property getter: - (id)collections;	// 0x347a7061
- (void)dealloc;	// 0x347a5ad5
- (id)description;	// 0x347a5b99
// declared property getter: - (id)displayName;	// 0x347a7031
// declared property getter: - (id)emailAddresses;	// 0x347a7051
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x347a7081
- (BOOL)forceOptionsRequest;	// 0x347a6599
- (id)homeSet;	// 0x347a5e85
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x347a7071
// declared property getter: - (id)principalSearchProperties;	// 0x347a70a1
// declared property getter: - (id)principalURL;	// 0x347a7021
- (void)processPrincipalHeaders:(id)headers;	// 0x347a6c4d
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x347a659d
// declared property getter: - (id)resourceID;	// 0x347a7041
- (void)searchPropertySetTask:(id)task completetWithPropertySearchSet:(id)propertySearchSet error:(id)error;	// 0x347a6d99
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x347a7091
// declared property setter: - (void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)ignoreHomeSetOnDifferentHost;	// 0x347a70c1
// declared property getter: - (BOOL)shouldIgnoreHomeSetOnDifferentHost;	// 0x347a70b1
- (void)startTaskGroup;	// 0x347a5e89
- (void)task:(id)task didFinishWithError:(id)error;	// 0x347a6e61
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x347a5c99
@end
