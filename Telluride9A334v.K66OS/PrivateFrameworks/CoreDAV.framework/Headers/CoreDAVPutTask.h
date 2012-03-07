/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostOrPutTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
	NSString *_nextETag;	// 148 = 0x94
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *nextETag;	// G=0x347a8139; S=0x347a814d; @synthesize=_nextETag
- (void)dealloc;	// 0x347a7eb1
- (id)description;	// 0x347a7efd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x347a7fcd
- (id)httpMethod;	// 0x347a7fc1
// declared property getter: - (id)nextETag;	// 0x347a8139
// declared property setter: - (void)setNextETag:(id)tag;	// 0x347a814d
@end
