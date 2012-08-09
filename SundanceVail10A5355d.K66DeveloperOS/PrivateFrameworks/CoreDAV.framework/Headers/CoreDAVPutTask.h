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
	NSString *_nextETag;	// 168 = 0xa8
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *nextETag;	// G=0x30484575; S=0x30484589; @synthesize=_nextETag
- (void)dealloc;	// 0x304842e5
- (id)description;	// 0x30484331
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30484405
- (id)httpMethod;	// 0x304843f9
// declared property getter: - (id)nextETag;	// 0x30484575
// declared property setter: - (void)setNextETag:(id)tag;	// 0x30484589
@end
