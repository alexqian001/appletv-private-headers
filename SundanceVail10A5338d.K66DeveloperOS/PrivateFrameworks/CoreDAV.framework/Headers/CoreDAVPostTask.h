/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostOrPutTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPostTask : CoreDAVPostOrPutTask {
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x34c0685d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x34c068bd
- (id)httpMethod;	// 0x34c068b1
@end

