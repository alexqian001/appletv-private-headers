/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOProblemRequester : NSObject {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x302cfd79
- (id)init;	// 0x302cfde5
- (void)cancelRequest:(id)request;	// 0x302d03e9
- (Class)classForProviderID:(short)providerID;	// 0x302d04dd
- (void)dealloc;	// 0x302cfec5
- (void)registerProvider:(Class)provider;	// 0x302d049d
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x302cfff5
@end

