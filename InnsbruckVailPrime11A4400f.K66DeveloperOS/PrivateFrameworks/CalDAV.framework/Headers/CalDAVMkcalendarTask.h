/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSSet;
@protocol CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate;

@interface CalDAVMkcalendarTask : CoreDAVTask {
	NSSet *_setElements;	// 140 = 0x8c
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate, CalDAVMkcalendarTaskDelegate> delegate;	// @dynamic
@property(retain) NSSet *setElements;	// G=0x30268365; S=0x30268379; @synthesize=_setElements
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x30267be1
- (id)initWithURL:(id)url;	// 0x30267bcd
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x302681cd
- (void)dealloc;	// 0x30267e1d
- (id)description;	// 0x30267e61
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30268265
- (id)httpMethod;	// 0x30267f81
- (id)requestBody;	// 0x30267f8d
// declared property getter: - (id)setElements;	// 0x30268365
// declared property setter: - (void)setSetElements:(id)elements;	// 0x30268379
- (void)setSupportForEvents:(BOOL)events tasks:(BOOL)tasks;	// 0x30267c2d
@end
