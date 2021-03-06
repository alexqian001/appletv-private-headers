/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSString, NSURL, HSFairPlayInfo, HSConnectionStream, HSConnectionConfiguration;
@protocol OS_dispatch_queue;

@interface HSConnection : NSObject {
	HSConnectionConfiguration *_configuration;	// 4 = 0x4
	int _connectionState;	// 8 = 0x8
	HSConnectionStream *_connectionStream;	// 12 = 0xc
	HSConnectionStream *_concurrentConnectionStream;	// 16 = 0x10
	int _connectionType;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
	CFReadStreamRef _readStream;	// 28 = 0x1c
	BOOL authenticationRequired;	// 32 = 0x20
	unsigned basePlaylistContainerID;	// 36 = 0x24
	unsigned databaseID;	// 40 = 0x28
	unsigned databaseRevision;	// 44 = 0x2c
	HSFairPlayInfo *fairPlayInfo;	// 48 = 0x30
	NSString *homeSharingGroupID;	// 52 = 0x34
	NSString *password;	// 56 = 0x38
	unsigned sessionID;	// 60 = 0x3c
	NSString *username;	// 64 = 0x40
}
@property(assign, getter=isAuthenticationRequired) BOOL authenticationRequired;	// G=0x35c257c9; S=0x35c257e1; @synthesize
@property(assign) unsigned basePlaylistContainerID;	// G=0x35c257f9; S=0x35c2580d; @synthesize
@property(readonly, assign) NSURL *baseURL;	// G=0x35c23065; 
@property(assign) int connectionState;	// G=0x35c25825; S=0x35c25839; @synthesize=_connectionState
@property(readonly, assign) int connectionType;	// G=0x35c25851; @synthesize=_connectionType
@property(assign) unsigned databaseID;	// G=0x35c25865; S=0x35c25879; @synthesize
@property(assign) unsigned databaseRevision;	// G=0x35c25891; S=0x35c258a5; @synthesize
@property(retain) HSFairPlayInfo *fairPlayInfo;	// G=0x35c258bd; S=0x35c258d1; @synthesize
@property(copy) NSString *homeSharingGroupID;	// G=0x35c258e1; S=0x35c258f5; @synthesize
@property(copy) NSString *password;	// G=0x35c25905; S=0x35c25919; @synthesize
@property(assign) unsigned sessionID;	// G=0x35c25929; S=0x35c2593d; @synthesize
@property(copy) NSString *username;	// G=0x35c25955; S=0x35c25969; @synthesize
- (id)initWithBaseURL:(id)baseURL;	// 0x35c22e11
- (id)initWithBaseURL:(id)baseURL connectionType:(int)type;	// 0x35c22e25
- (id)initWithConfiguration:(id)configuration connectionType:(int)type;	// 0x35c22ea5
- (void)_continueFPSetupNegotiationWithData:(id)data internalConnectionCompletionHandler:(id)handler;	// 0x35c23d7d
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)internalConnectionCompletionHandler;	// 0x35c23fbd
- (void)_notifyServerOfActivity;	// 0x35c2499d
- (void)_sendRequest:(id)request onConnectionStream:(id)stream withInternalResponseHandler:(id)internalResponseHandler;	// 0x35c24a45
// declared property getter: - (unsigned)basePlaylistContainerID;	// 0x35c257f9
// declared property getter: - (id)baseURL;	// 0x35c23065
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)completionHandler;	// 0x35c23ab1
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x35c230ad
// declared property getter: - (int)connectionState;	// 0x35c25825
// declared property getter: - (int)connectionType;	// 0x35c25851
// declared property getter: - (unsigned)databaseID;	// 0x35c25865
// declared property getter: - (unsigned)databaseRevision;	// 0x35c25891
- (void)dealloc;	// 0x35c22f9d
- (void)disconnect;	// 0x35c23641
// declared property getter: - (id)fairPlayInfo;	// 0x35c258bd
// declared property getter: - (id)homeSharingGroupID;	// 0x35c258e1
// declared property getter: - (BOOL)isAuthenticationRequired;	// 0x35c257c9
// declared property getter: - (id)password;	// 0x35c25905
- (void)sendConcurrentRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x35c2399d
- (void)sendRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x35c23889
// declared property getter: - (unsigned)sessionID;	// 0x35c25929
// declared property setter: - (void)setAuthenticationRequired:(BOOL)required;	// 0x35c257e1
// declared property setter: - (void)setBasePlaylistContainerID:(unsigned)anId;	// 0x35c2580d
// declared property setter: - (void)setConnectionState:(int)state;	// 0x35c25839
// declared property setter: - (void)setDatabaseID:(unsigned)anId;	// 0x35c25879
// declared property setter: - (void)setDatabaseRevision:(unsigned)revision;	// 0x35c258a5
// declared property setter: - (void)setFairPlayInfo:(id)info;	// 0x35c258d1
// declared property setter: - (void)setHomeSharingGroupID:(id)anId;	// 0x35c258f5
// declared property setter: - (void)setPassword:(id)password;	// 0x35c25919
// declared property setter: - (void)setSessionID:(unsigned)anId;	// 0x35c2593d
// declared property setter: - (void)setUsername:(id)username;	// 0x35c25969
// declared property getter: - (id)username;	// 0x35c25955
@end

