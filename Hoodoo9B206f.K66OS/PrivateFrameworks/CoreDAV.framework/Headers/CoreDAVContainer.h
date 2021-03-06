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
@property(retain) NSURL *addMemberURL;	// G=0x339de59d; S=0x339de5b1; @synthesize=_addMemberURL
@property(retain) NSDictionary *bulkRequests;	// G=0x339de5d5; S=0x339de5e9; @synthesize=_bulkRequests
@property(retain) NSString *containerTitle;	// G=0x339de2c5; S=0x339de2d9; @synthesize=_containerTitle
@property(readonly, assign) BOOL hasReadPrivileges;	// G=0x339dcfbd; 
@property(readonly, assign) BOOL hasWriteContentPrivileges;	// G=0x339dd1a9; 
@property(readonly, assign) BOOL hasWritePropertiesPrivileges;	// G=0x339dd3b5; 
@property(readonly, assign) BOOL isAddressBook;	// G=0x339dcc45; 
@property(readonly, assign) BOOL isPrincipal;	// G=0x339dcd61; 
@property(readonly, assign) BOOL isSearchAddressBook;	// G=0x339dcc85; 
@property(readonly, assign) BOOL isSharedAddressBook;	// G=0x339dcd09; 
@property(assign) BOOL isUnauthenticated;	// G=0x339de2a5; S=0x339de2b5; @synthesize=_isUnauthenticated
@property(retain) NSString *maxImageSize;	// G=0x339de485; S=0x339de499; @synthesize=_maxImageSize
@property(retain) NSString *maxResourceSize;	// G=0x339de44d; S=0x339de461; @synthesize=_maxResourceSize
@property(retain) NSURL *meCardURL;	// G=0x339de4bd; S=0x339de4d1; @synthesize=_meCardURL
@property(retain) NSURL *owner;	// G=0x339de565; S=0x339de579; @synthesize=_owner
@property(retain) NSSet *privileges;	// G=0x339de2fd; S=0x339de311; @synthesize=_privileges
@property(readonly, assign) NSSet *privilegesAsStringSet;	// G=0x339dcda1; 
@property(retain) NSString *pushKey;	// G=0x339de335; S=0x339de349; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransports;	// G=0x339de36d; S=0x339de381; @synthesize=_pushTransports
@property(retain) NSString *quotaAvailable;	// G=0x339de3dd; S=0x339de3f1; @synthesize=_quotaAvailable
@property(retain) NSString *quotaUsed;	// G=0x339de415; S=0x339de429; @synthesize=_quotaUsed
@property(retain) NSURL *resourceID;	// G=0x339de3a5; S=0x339de3b9; @synthesize=_resourceID
@property(retain) CoreDAVResourceTypeItem *resourceType;	// G=0x339de52d; S=0x339de541; @synthesize=_resourceType
@property(readonly, assign) NSSet *resourceTypeAsStringSet;	// G=0x339dcc1d; 
@property(retain) NSSet *supportedReports;	// G=0x339de4f5; S=0x339de509; @synthesize=_supportedReports
@property(readonly, assign) NSSet *supportedReportsAsStringSet;	// G=0x339dd5c1; 
@property(readonly, assign) BOOL supportsPrincipalPropertySearchReport;	// G=0x339dd7ed; 
@property(readonly, assign) BOOL supportsSyncCollectionReport;	// G=0x339dd9a9; 
@property(retain) NSString *syncToken;	// G=0x339de60d; S=0x339de621; @synthesize=_syncToken
@property(retain) NSURL *url;	// G=0x339de26d; S=0x339de281; @synthesize=_url
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)nsserverNotificationCenter;	// 0x339ddcf1
+ (id)copyPropertyMappingsForParser;	// 0x339dc0c5
- (id)initWithURL:(id)url andProperties:(id)properties;	// 0x339dc41d
// declared property getter: - (id)addMemberURL;	// 0x339de59d
- (void)applyParsedProperties:(id)properties;	// 0x339dc781
// declared property getter: - (id)bulkRequests;	// 0x339de5d5
// declared property getter: - (id)containerTitle;	// 0x339de2c5
- (void)dealloc;	// 0x339ddb65
- (id)description;	// 0x339dc471
// declared property getter: - (BOOL)hasReadPrivileges;	// 0x339dcfbd
// declared property getter: - (BOOL)hasWriteContentPrivileges;	// 0x339dd1a9
// declared property getter: - (BOOL)hasWritePropertiesPrivileges;	// 0x339dd3b5
// declared property getter: - (BOOL)isAddressBook;	// 0x339dcc45
// declared property getter: - (BOOL)isPrincipal;	// 0x339dcd61
// declared property getter: - (BOOL)isSearchAddressBook;	// 0x339dcc85
// declared property getter: - (BOOL)isSharedAddressBook;	// 0x339dcd09
// declared property getter: - (BOOL)isUnauthenticated;	// 0x339de2a5
// declared property getter: - (id)maxImageSize;	// 0x339de485
// declared property getter: - (id)maxResourceSize;	// 0x339de44d
// declared property getter: - (id)meCardURL;	// 0x339de4bd
// declared property getter: - (id)owner;	// 0x339de565
// declared property getter: - (id)privileges;	// 0x339de2fd
// declared property getter: - (id)privilegesAsStringSet;	// 0x339dcda1
// declared property getter: - (id)pushKey;	// 0x339de335
// declared property getter: - (id)pushTransports;	// 0x339de36d
// declared property getter: - (id)quotaAvailable;	// 0x339de3dd
// declared property getter: - (id)quotaUsed;	// 0x339de415
// declared property getter: - (id)resourceID;	// 0x339de3a5
// declared property getter: - (id)resourceType;	// 0x339de52d
// declared property getter: - (id)resourceTypeAsStringSet;	// 0x339dcc1d
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x339de5b1
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x339de5e9
// declared property setter: - (void)setContainerTitle:(id)title;	// 0x339de2d9
// declared property setter: - (void)setIsUnauthenticated:(BOOL)unauthenticated;	// 0x339de2b5
// declared property setter: - (void)setMaxImageSize:(id)size;	// 0x339de499
// declared property setter: - (void)setMaxResourceSize:(id)size;	// 0x339de461
// declared property setter: - (void)setMeCardURL:(id)url;	// 0x339de4d1
// declared property setter: - (void)setOwner:(id)owner;	// 0x339de579
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x339de311
// declared property setter: - (void)setPushKey:(id)key;	// 0x339de349
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x339de381
// declared property setter: - (void)setQuotaAvailable:(id)available;	// 0x339de3f1
// declared property setter: - (void)setQuotaUsed:(id)used;	// 0x339de429
// declared property setter: - (void)setResourceID:(id)anId;	// 0x339de3b9
// declared property setter: - (void)setResourceType:(id)type;	// 0x339de541
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x339de509
// declared property setter: - (void)setSyncToken:(id)token;	// 0x339de621
// declared property setter: - (void)setUrl:(id)url;	// 0x339de281
// declared property getter: - (id)supportedReports;	// 0x339de4f5
// declared property getter: - (id)supportedReportsAsStringSet;	// 0x339dd5c1
// declared property getter: - (BOOL)supportsPrincipalPropertySearchReport;	// 0x339dd7ed
// declared property getter: - (BOOL)supportsSyncCollectionReport;	// 0x339dd9a9
// declared property getter: - (id)syncToken;	// 0x339de60d
// declared property getter: - (id)url;	// 0x339de26d
@end

