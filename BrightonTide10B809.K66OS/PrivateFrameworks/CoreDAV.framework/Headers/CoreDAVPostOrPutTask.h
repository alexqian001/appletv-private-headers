/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
	BOOL _forceToServer;	// 140 = 0x8c
	NSString *_previousETag;	// 144 = 0x90
	NSString *_requestDataContentType;	// 148 = 0x94
	NSData *_requestDataPayload;	// 152 = 0x98
	BOOL _sendOrder;	// 156 = 0x9c
	int _absoluteOrder;	// 160 = 0xa0
	NSURL *_priorOrderedURL;	// 164 = 0xa4
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x33705fd5; S=0x33705ebd; @synthesize=_absoluteOrder
@property(assign) BOOL forceToServer;	// G=0x33705f39; S=0x33705f51; @synthesize=_forceToServer
@property(retain) NSString *previousETag;	// G=0x33705f69; S=0x33705f7d; @synthesize=_previousETag
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x33705fe5; S=0x33705ee1; @synthesize=_priorOrderedURL
@property(retain) NSString *requestDataContentType;	// G=0x33705f8d; S=0x33705fa1; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x33705fb1; S=0x33705fc5; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x337059f1
- (id)initWithURL:(id)url;	// 0x337059cd
// declared property getter: - (int)absoluteOrder;	// 0x33705fd5
- (id)additionalHeaderValues;	// 0x33705c85
- (void)dealloc;	// 0x33705a95
- (id)description;	// 0x33705b21
// declared property getter: - (BOOL)forceToServer;	// 0x33705f39
// declared property getter: - (id)previousETag;	// 0x33705f69
// declared property getter: - (id)priorOrderedURL;	// 0x33705fe5
- (id)requestBody;	// 0x33705e85
// declared property getter: - (id)requestDataContentType;	// 0x33705f8d
// declared property getter: - (id)requestDataPayload;	// 0x33705fb1
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x33705ebd
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x33705f51
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x33705f7d
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x33705ee1
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x33705fa1
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x33705fc5
@end
