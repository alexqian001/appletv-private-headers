/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL, NSData, NSString;

@interface CoreDAVPostOrPutTask : CoreDAVTask {
	BOOL _forceToServer;	// 120 = 0x78
	NSString *_previousETag;	// 124 = 0x7c
	NSString *_requestDataContentType;	// 128 = 0x80
	NSData *_requestDataPayload;	// 132 = 0x84
	BOOL _sendOrder;	// 136 = 0x88
	int _absoluteOrder;	// 140 = 0x8c
	NSURL *_priorOrderedURL;	// 144 = 0x90
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x347a7e91; S=0x347a7d49; @synthesize=_absoluteOrder
@property(assign) BOOL forceToServer;	// G=0x347a7dc9; S=0x347a7dd9; @synthesize=_forceToServer
@property(retain) NSString *previousETag;	// G=0x347a7de9; S=0x347a7dfd; @synthesize=_previousETag
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x347a7ea1; S=0x347a7d6d; @synthesize=_priorOrderedURL
@property(retain) NSString *requestDataContentType;	// G=0x347a7e21; S=0x347a7e35; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x347a7e59; S=0x347a7e6d; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x347a782d
- (id)initWithURL:(id)url;	// 0x347a7809
// declared property getter: - (int)absoluteOrder;	// 0x347a7e91
- (id)additionalHeaderValues;	// 0x347a7ac9
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x347a7d15
- (void)dealloc;	// 0x347a78cd
- (id)description;	// 0x347a7955
// declared property getter: - (BOOL)forceToServer;	// 0x347a7dc9
// declared property getter: - (id)previousETag;	// 0x347a7de9
// declared property getter: - (id)priorOrderedURL;	// 0x347a7ea1
- (id)requestBody;	// 0x347a7cdd
// declared property getter: - (id)requestDataContentType;	// 0x347a7e21
// declared property getter: - (id)requestDataPayload;	// 0x347a7e59
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x347a7d49
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x347a7dd9
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x347a7dfd
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x347a7d6d
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x347a7e35
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x347a7e6d
@end

