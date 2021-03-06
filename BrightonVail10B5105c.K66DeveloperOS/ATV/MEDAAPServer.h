/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MEDAAPServer : BRSingleton {
	NSMutableArray *_pendingServerRequests;	// 4 = 0x4
	NSMutableDictionary *_inflightArtworkRequests;	// 8 = 0x8
}
+ (id)atvSortStringForDAAPSortType:(int)daapsortType;	// 0xc2645
+ (unsigned long long)idFromCriteriaList:(SearchCriteriaList *)criteriaList;	// 0xc26b5
+ (void)setSingleton:(id)singleton;	// 0xc0991
+ (id)singleton;	// 0xc0981
- (id)init;	// 0xc09b5
- (void).cxx_destruct;	// 0xc4371
- (void)_addFiltersToQuery:(id)query serverRequest:(ATVServerRequestRef)request;	// 0xc2491
- (id)_atvPropertyForDAAPProperty:(id)daapproperty;	// 0xc3a45
- (void)_cloudDBDataUpdated:(id)updated;	// 0xc3125
- (void)_dataClientConnectionHandler:(id)handler;	// 0xc3321
- (int)_filterOperatorForMatchType:(unsigned long)matchType;	// 0xc30dd
- (void)_homeShareServersChanged;	// 0xc3229
- (void)_homeShareServersChangedHandler:(id)handler;	// 0xc3921
- (void)_imageRequestHandler:(id)handler;	// 0xc2119
- (id)atvFiltersForCriteriaList:(SearchCriteriaList *)criteriaList queryType:(int)type;	// 0xc2705
- (void)handleCloudRequest:(ATVServerRequestRef)request;	// 0xc0e6d
- (void)handleCompletedQuery:(id)query context:(id)context;	// 0xc1ead
- (void)handleRequest:(ATVServerRequestRef)request;	// 0xc0ccd
- (id)newATVFilterForCriteria:(CriterionInfo *)criteria queryType:(int)type;	// 0xc293d
@end

