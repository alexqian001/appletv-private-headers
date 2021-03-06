/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSItemsRequest : HSRequest {
	BOOL _shouldParseResponse;	// 29 = 0x1d
}
@property(assign, nonatomic) BOOL shouldParseResponse;	// G=0x340cba95; S=0x340cbaa5; @synthesize=_shouldParseResponse
+ (id)requestWithDatabaseID:(unsigned)databaseID;	// 0x340cb4d5
+ (id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x340cb561
- (id)initWithAction:(id)action;	// 0x340cb44d
- (id)initWithDatabaseID:(unsigned)databaseID;	// 0x340cb48d
- (id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId;	// 0x340cb511
- (id)canonicalResponseForResponse:(id)response;	// 0x340cb5a1
// declared property setter: - (void)setShouldParseResponse:(BOOL)parseResponse;	// 0x340cbaa5
- (void)setSongsRequestWithSessonID:(unsigned)sessonID metadataFilter:(id)filter purchaseTokenListing:(id)listing queryFilter:(id)filter4;	// 0x340cb621
// declared property getter: - (BOOL)shouldParseResponse;	// 0x340cba95
@end

