/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSContainersRequest : HSRequest {
@private
	BOOL _shouldParseResponse;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL shouldParseResponse;	// G=0x317b19ed; S=0x317b19fd; @synthesize=_shouldParseResponse
+ (id)requestWithDatabaseID:(unsigned)databaseID;	// 0x317b1931
- (id)initWithAction:(id)action;	// 0x317b18a9
- (id)initWithDatabaseID:(unsigned)databaseID;	// 0x317b18e9
- (id)canonicalResponseForResponse:(id)response;	// 0x317b196d
// declared property setter: - (void)setShouldParseResponse:(BOOL)parseResponse;	// 0x317b19fd
// declared property getter: - (BOOL)shouldParseResponse;	// 0x317b19ed
@end
