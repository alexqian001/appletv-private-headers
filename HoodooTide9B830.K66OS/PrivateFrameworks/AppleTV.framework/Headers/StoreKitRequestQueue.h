/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "RequestQueue.h"


__attribute__((visibility("hidden")))
@interface StoreKitRequestQueue : RequestQueue <ISSingleton> {
}
+ (void)setSharedInstance:(id)instance;	// 0x32b54649
+ (id)sharedInstance;	// 0x32b54689
- (void)cancelRequestWithInfo:(id)info identity:(id)identity;	// 0x32b546c5
- (void)requestProductsWithInfo:(id)info identity:(id)identity;	// 0x32b54779
- (void)sendError:(id)error forOperation:(id)operation;	// 0x32b548ed
- (void)sendResponseForOperation:(id)operation;	// 0x32b54a85
@end

