/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSSetContainersRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId itemIDs:(id)ids;	// 0x35c31ccd
- (id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId itemIDs:(id)ids;	// 0x35c31c05
- (id)_bodyDataForContainerID:(unsigned)containerID itemIDs:(id)ids;	// 0x35c31db9
- (id)canonicalResponseForResponse:(id)response;	// 0x35c31d21
@end

