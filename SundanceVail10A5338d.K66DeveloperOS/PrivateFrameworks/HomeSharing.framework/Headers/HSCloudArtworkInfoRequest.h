/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSCloudArtworkInfoRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned)anId;	// 0x31df5551
+ (id)requestWithDatabaseID:(unsigned)databaseID itemID:(unsigned)anId sessionID:(unsigned)anId3;	// 0x31df559d
- (id)initWithDatabaseID:(unsigned)databaseID itemID:(unsigned)anId;	// 0x31df547d
- (id)initWithDatabaseID:(unsigned)databaseID itemID:(unsigned)anId sessionID:(unsigned)anId3;	// 0x31df54cd
- (id)canonicalResponseForResponse:(id)response;	// 0x31df55f1
@end

