/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class CoreDAVResourceTypeItem, NSString, NSSet, NSURL, NSDictionary;

@interface CoreDAVContainer : NSObject {
	BOOL _isUnauthenticated;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	CoreDAVResourceTypeItem *_resourceType;	// 12 = 0xc
	NSString *_containerTitle;	// 16 = 0x10
	NSSet *_privileges;	// 20 = 0x14
	NSString *_pushKey;	// 24 = 0x18
	NSDictionary *_pushTransports;	// 28 = 0x1c
	NSURL *_resourceID;	// 32 = 0x20
	NSSet *_supportedReports;	// 36 = 0x24
	NSString *_quotaAvailable;	// 40 = 0x28
	NSString *_quotaUsed;	// 44 = 0x2c
	NSString *_maxResourceSize;	// 48 = 0x30
	NSString *_maxImageSize;	// 52 = 0x34
	NSURL *_meCardURL;	// 56 = 0x38
	NSURL *_owner;	// 60 = 0x3c
	NSURL *_addMemberURL;	// 64 = 0x40
	NSDictionary *_bulkRequests;	// 68 = 0x44
	NSString *_syncToken;	// 72 = 0x48
}
@property(retain) NSURL *addMemberURL;	// G=0x35db359d; S=0x35db35b1; @synthesize=_addMemberURL
@property(retain) NSDictionary *bulkRequests;	// G=0x35db35d5; S=0x35db35e9; @synthesize=_bulkRequests
@property(retain) NSString *containerTitle;	// G=0x35db32c5; S=0x35db32d9; @synthesize=_containerTitle
@property(readonly, assign) BOOL hasReadPrivileges;	// G=0x35db1fbd; 
@property(readonly, assign) BOOL hasWriteContentPrivileges;	// G=0x35db21a9; 
@property(readonly, assign) BOOL hasWritePropertiesPrivileges;	// G=0x35db23b5; 
@property(readonly, assign) BOOL isAddressBook;	// G=0x35db1c45; 
@property(readonly, assign) BOOL isPrincipal;	// G=0x35db1d61; 
@property(readonly, assign) BOOL isSearchAddressBook;	// G=0x35db1c85; 
@property(readonly, assign) BOOL isSharedAddressBook;	// G=0x35db1d09; 
@property(assign) BOOL isUnauthenticated;	// G=0x35db32a5; S=0x35db32b5; @synthesize=_isUnauthenticated
@property(retain) NSString *maxImageSize;	// G=0x35db3485; S=0x35db3499; @synthesize=_maxImageSize
@property(retain) NSString *maxResourceSize;	// G=0x35db344d; S=0x35db3461; @synthesize=_maxResourceSize
@property(retain) NSURL *meCardURL;	// G=0x35db34bd; S=0x35db34d1; @synthesize=_meCardURL
@property(retain) NSURL *owner;	// G=0x35db3565; S=0x35db3579; @synthesize=_owner
@property(retain) NSSet *privileges;	// G=0x35db32fd; S=0x35db3311; @synthesize=_privileges
@property(readonly, assign) NSSet *privilegesAsStringSet;	// G=0x35db1da1; 
@property(retain) NSString *pushKey;	// G=0x35db3335; S=0x35db3349; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransports;	// G=0x35db336d; S=0x35db3381; @synthesize=_pushTransports
@property(retain) NSString *quotaAvailable;	// G=0x35db33dd; S=0x35db33f1; @synthesize=_quotaAvailable
@property(retain) NSString *quotaUsed;	// G=0x35db3415; S=0x35db3429; @synthesize=_quotaUsed
@property(retain) NSURL *resourceID;	// G=0x35db33a5; S=0x35db33b9; @synthesize=_resourceID
@property(retain) CoreDAVResourceTypeItem *resourceType;	// G=0x35db352d; S=0x35db3541; @synthesize=_resourceType
@property(readonly, assign) NSSet *resourceTypeAsStringSet;	// G=0x35db1c1d; 
@property(retain) NSSet *supportedReports;	// G=0x35db34f5; S=0x35db3509; @synthesize=_supportedReports
@property(readonly, assign) NSSet *supportedReportsAsStringSet;	// G=0x35db25c1; 
@property(readonly, assign) BOOL supportsPrincipalPropertySearchReport;	// G=0x35db27ed; 
@property(readonly, assign) BOOL supportsSyncCollectionReport;	// G=0x35db29a9; 
@property(retain) NSString *syncToken;	// G=0x35db360d; S=0x35db3621; @synthesize=_syncToken
@property(retain) NSURL *url;	// G=0x35db326d; S=0x35db3281; @synthesize=_url
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)nsserverNotificationCenter;	// 0x35db2cf1
+ (id)copyPropertyMappingsForParser;	// 0x35db10c5
- (id)initWithURL:(id)url andProperties:(id)properties;	// 0x35db141d
// declared property getter: - (id)addMemberURL;	// 0x35db359d
- (void)applyParsedProperties:(id)properties;	// 0x35db1781
// declared property getter: - (id)bulkRequests;	// 0x35db35d5
// declared property getter: - (id)containerTitle;	// 0x35db32c5
- (void)dealloc;	// 0x35db2b65
- (id)description;	// 0x35db1471
// declared property getter: - (BOOL)hasReadPrivileges;	// 0x35db1fbd
// declared property getter: - (BOOL)hasWriteContentPrivileges;	// 0x35db21a9
// declared property getter: - (BOOL)hasWritePropertiesPrivileges;	// 0x35db23b5
// declared property getter: - (BOOL)isAddressBook;	// 0x35db1c45
// declared property getter: - (BOOL)isPrincipal;	// 0x35db1d61
// declared property getter: - (BOOL)isSearchAddressBook;	// 0x35db1c85
// declared property getter: - (BOOL)isSharedAddressBook;	// 0x35db1d09
// declared property getter: - (BOOL)isUnauthenticated;	// 0x35db32a5
// declared property getter: - (id)maxImageSize;	// 0x35db3485
// declared property getter: - (id)maxResourceSize;	// 0x35db344d
// declared property getter: - (id)meCardURL;	// 0x35db34bd
// declared property getter: - (id)owner;	// 0x35db3565
// declared property getter: - (id)privileges;	// 0x35db32fd
// declared property getter: - (id)privilegesAsStringSet;	// 0x35db1da1
// declared property getter: - (id)pushKey;	// 0x35db3335
// declared property getter: - (id)pushTransports;	// 0x35db336d
// declared property getter: - (id)quotaAvailable;	// 0x35db33dd
// declared property getter: - (id)quotaUsed;	// 0x35db3415
// declared property getter: - (id)resourceID;	// 0x35db33a5
// declared property getter: - (id)resourceType;	// 0x35db352d
// declared property getter: - (id)resourceTypeAsStringSet;	// 0x35db1c1d
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x35db35b1
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x35db35e9
// declared property setter: - (void)setContainerTitle:(id)title;	// 0x35db32d9
// declared property setter: - (void)setIsUnauthenticated:(BOOL)unauthenticated;	// 0x35db32b5
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x35db3499
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x35db3461
// declared property setter: - (void)setMeCardURL:(id)url;	// 0x35db34d1
// declared property setter: - (void)setOwner:(id)owner;	// 0x35db3579
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x35db3311
// declared property setter: - (void)setPushKey:(id)key;	// 0x35db3349
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x35db3381
// declared property setter: - (void)setQuotaAvailable:(id)available;	// 0x35db33f1
// declared property setter: - (void)setQuotaUsed:(id)used;	// 0x35db3429
// declared property setter: - (void)setResourceID:(id)anId;	// 0x35db33b9
// declared property setter: - (void)setResourceType:(id)type;	// 0x35db3541
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x35db3509
// declared property setter: - (void)setSyncToken:(id)token;	// 0x35db3621
// declared property setter: - (void)setUrl:(id)url;	// 0x35db3281
// declared property getter: - (id)supportedReports;	// 0x35db34f5
// declared property getter: - (id)supportedReportsAsStringSet;	// 0x35db25c1
// declared property getter: - (BOOL)supportsPrincipalPropertySearchReport;	// 0x35db27ed
// declared property getter: - (BOOL)supportsSyncCollectionReport;	// 0x35db29a9
// declared property getter: - (id)syncToken;	// 0x35db360d
// declared property getter: - (id)url;	// 0x35db326d
@end
