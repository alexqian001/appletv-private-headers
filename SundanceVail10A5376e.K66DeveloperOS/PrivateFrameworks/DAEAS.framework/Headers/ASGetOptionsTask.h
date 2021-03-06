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
@property(retain) NSArray *commandArray;	// G=0x322aca39; S=0x322aca49; converted property
@property(retain) NSArray *versionArray;	// G=0x322ac9e5; S=0x322ac9f5; converted property
+ (void)__setUsePort:(BOOL)port;	// 0x322ac18d
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x322ac1ad
- (id)_url;	// 0x322ac2f9
// converted property getter: - (id)commandArray;	// 0x322aca39
- (int)commandCode;	// 0x322ac1b1
- (int)connectionActionForResponse:(id)response;	// 0x322ac1bd
- (void)dealloc;	// 0x322ac981
- (BOOL)expectsWBXML;	// 0x322ac1b9
- (void)finishWithError:(id)error;	// 0x322ac489
- (id)httpMethod;	// 0x322ac19d
- (BOOL)processContext:(id)context;	// 0x322ac23d
- (id)requestBody;	// 0x322ac1a9
- (BOOL)requiresEASVersionInformaton;	// 0x322aca8d
// converted property setter: - (void)setCommandArray:(id)array;	// 0x322aca49
// converted property setter: - (void)setVersionArray:(id)array;	// 0x322ac9f5
// converted property getter: - (id)versionArray;	// 0x322ac9e5
@end

