/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVPut : DAVRequest {
}
+ (id)putRequestWithSession:(id)session URI:(id)uri data:(id)data;	// 0x3008277d
+ (id)putRequestWithSession:(id)session path:(id)path data:(id)data;	// 0x300827c1
+ (id)putRequestWithURL:(id)url data:(id)data;	// 0x30082805
- (id)initPutWithSession:(id)session URI:(id)uri data:(id)data;	// 0x3008283d
- (id)initPutWithSession:(id)session path:(id)path data:(id)data;	// 0x30082881
- (id)initPutWithURL:(id)url data:(id)data;	// 0x300828c5
- (long long)operationProgress;	// 0x30082769
- (long long)operationTotal;	// 0x30082755
@end
