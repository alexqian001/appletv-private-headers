/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray;

@interface ASGetOptionsTask : ASTask {
	NSArray *_versionArray;	// 108 = 0x6c
	NSArray *_commandArray;	// 112 = 0x70
}
@property(retain) NSArray *commandArray;	// G=0x36f2346d; S=0x36f2347d; converted property
@property(retain) NSArray *versionArray;	// G=0x36f23419; S=0x36f23429; converted property
+ (void)__setUsePort:(BOOL)port;	// 0x36f22bc1
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x36f22be1
- (id)_url;	// 0x36f22d2d
// converted property getter: - (id)commandArray;	// 0x36f2346d
- (int)commandCode;	// 0x36f22be5
- (int)connectionActionForResponse:(id)response;	// 0x36f22bf1
- (void)dealloc;	// 0x36f233b5
- (BOOL)expectsWBXML;	// 0x36f22bed
- (void)finishWithError:(id)error;	// 0x36f22ebd
- (id)httpMethod;	// 0x36f22bd1
- (BOOL)processContext:(id)context;	// 0x36f22c71
- (id)requestBody;	// 0x36f22bdd
- (BOOL)requiresEASVersionInformaton;	// 0x36f234c1
// converted property setter: - (void)setCommandArray:(id)array;	// 0x36f2347d
// converted property setter: - (void)setVersionArray:(id)array;	// 0x36f23429
// converted property getter: - (id)versionArray;	// 0x36f23419
@end

