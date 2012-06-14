/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSSet, NSURL;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVMkcolTask : CoreDAVActionBackedTask {
	NSSet *_propertiesToSet;	// 136 = 0x88
	BOOL _sendOrder;	// 140 = 0x8c
	int _absoluteOrder;	// 144 = 0x90
	NSURL *_priorOrderedURL;	// 148 = 0x94
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x35f6b98d; S=0x35f6b8ed; @synthesize=_absoluteOrder
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x35f6b99d; S=0x35f6b911; @synthesize=_priorOrderedURL
@property(retain) NSSet *propertiesToSet;	// G=0x35f6b969; S=0x35f6b97d; @synthesize=_propertiesToSet
- (id)initWithPropertiesToSet:(id)set atURL:(id)url;	// 0x35f6afe9
- (id)initWithURL:(id)url;	// 0x35f6afd5
// declared property getter: - (int)absoluteOrder;	// 0x35f6b98d
- (id)additionalHeaderValues;	// 0x35f6b265
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x35f6b5e9
- (void)dealloc;	// 0x35f6b041
- (id)description;	// 0x35f6b0a5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35f6b6b9
- (id)httpMethod;	// 0x35f6b259
// declared property getter: - (id)priorOrderedURL;	// 0x35f6b99d
// declared property getter: - (id)propertiesToSet;	// 0x35f6b969
- (id)requestBody;	// 0x35f6b3c1
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x35f6b8ed
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x35f6b911
// declared property setter: - (void)setPropertiesToSet:(id)set;	// 0x35f6b97d
@end
