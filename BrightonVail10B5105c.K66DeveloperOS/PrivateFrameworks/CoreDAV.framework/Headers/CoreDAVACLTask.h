/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask {
	NSArray *_accessControlEntities;	// 136 = 0x88
}
@property(retain) NSArray *accessControlEntities;	// G=0x36006055; S=0x36006069; @synthesize=_accessControlEntities
@property(assign, nonatomic) id<CoreDAVACLTaskDelegate> delegate;	// @dynamic
- (id)initWithAccessControlEntities:(id)accessControlEntities atURL:(id)url;	// 0x36005be5
- (id)initWithURL:(id)url;	// 0x36005be1
// declared property getter: - (id)accessControlEntities;	// 0x36006055
- (void)dealloc;	// 0x36005c91
- (id)description;	// 0x36005cdd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x36005f35
- (id)httpMethod;	// 0x36005db5
- (id)requestBody;	// 0x36005dc1
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x36006069
@end

