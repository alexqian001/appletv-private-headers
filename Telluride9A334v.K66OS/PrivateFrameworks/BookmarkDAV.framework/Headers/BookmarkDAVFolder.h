/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import "CoreDAVLeafDataPayload.h"
#import "CoreDAVModifiedContainer.h"
#import "CoreDAVAddedContainer.h"
#import <CoreDAVContainer.h> // Unknown library

@class NSURL, NSDictionary, NSData, NSString, NSArray, CoreDAVErrorItem, NSMutableArray;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {
	NSDictionary *_appleAttributes;	// 76 = 0x4c
	NSMutableArray *_childrenOrder;	// 80 = 0x50
	NSString *_bulkParsedCTag;	// 84 = 0x54
	NSString *_bulkParsedPTag;	// 88 = 0x58
	CoreDAVErrorItem *_bulkUploadErrorItem;	// 92 = 0x5c
}
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x352fb415; @synthesize=_appleAttributes
@property(retain) NSString *bulkParsedCTag;	// G=0x352fb425; S=0x352fb439; @synthesize=_bulkParsedCTag
@property(retain) NSString *bulkParsedPTag;	// G=0x352fb45d; S=0x352fb471; @synthesize=_bulkParsedPTag
@property(retain) CoreDAVErrorItem *bulkUploadErrorItem;	// G=0x352fb495; S=0x352fb4a9; @synthesize=_bulkUploadErrorItem
@property(readonly, assign) NSArray *childrenOrder;	// G=0x352fb405; @synthesize=_childrenOrder
@property(readonly, assign) NSData *dataPayload;	// G=0x352fb3fd; 
@property(assign) BOOL isBookmarkBarFolder;	// G=0x352fac59; S=0x352fae35; @dynamic
@property(assign) BOOL isBookmarkFolder;	// G=0x352fac29; S=0x352fad71; @dynamic
@property(assign) BOOL isBookmarkMenuFolder;	// G=0x352fac89; S=0x352faef9; @dynamic
@property(retain) NSURL *serverID;	// G=0x352fb3e9; S=0x352fb3f9; 
@property(readonly, assign) NSString *syncKey;	// G=0x352fb401; 
+ (id)copyPropertyMappingsForParser;	// 0x352fa991
- (id)initWithServerID:(id)serverID containerName:(id)name appleAttributes:(id)attributes;	// 0x352fa6f5
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x352fa771
- (id)_appleAttributesString;	// 0x352fafbd
- (void)_faultResourceType;	// 0x352facb9
// declared property getter: - (id)appleAttributes;	// 0x352fb415
- (void)applyParsedProperties:(id)properties;	// 0x352faa9d
// declared property getter: - (id)bulkParsedCTag;	// 0x352fb425
// declared property getter: - (id)bulkParsedPTag;	// 0x352fb45d
// declared property getter: - (id)bulkUploadErrorItem;	// 0x352fb495
// declared property getter: - (id)childrenOrder;	// 0x352fb405
- (id)copyMkcolTask;	// 0x352fb215
- (id)copyPropPatchTask;	// 0x352fb029
// declared property getter: - (id)dataPayload;	// 0x352fb3fd
- (void)dealloc;	// 0x352fa8f5
// declared property getter: - (BOOL)isBookmarkBarFolder;	// 0x352fac59
// declared property getter: - (BOOL)isBookmarkFolder;	// 0x352fac29
// declared property getter: - (BOOL)isBookmarkMenuFolder;	// 0x352fac89
// declared property getter: - (id)serverID;	// 0x352fb3e9
// declared property setter: - (void)setBulkParsedCTag:(id)tag;	// 0x352fb439
// declared property setter: - (void)setBulkParsedPTag:(id)tag;	// 0x352fb471
// declared property setter: - (void)setBulkUploadErrorItem:(id)item;	// 0x352fb4a9
// declared property setter: - (void)setIsBookmarkBarFolder:(BOOL)folder;	// 0x352fae35
// declared property setter: - (void)setIsBookmarkFolder:(BOOL)folder;	// 0x352fad71
// declared property setter: - (void)setIsBookmarkMenuFolder:(BOOL)folder;	// 0x352faef9
// declared property setter: - (void)setServerID:(id)anId;	// 0x352fb3f9
// declared property getter: - (id)syncKey;	// 0x352fb401
@end
