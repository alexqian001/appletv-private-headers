/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSArray, NSString;
@protocol MSSharingProtocolDelegate;

@interface MSSharingProtocol : NSObject {
	MSShPCContext _context;	// 4 = 0x4
	NSString *_personID;	// 88 = 0x58
	NSURL *_inviteURL;	// 92 = 0x5c
	NSURL *_manageURL;	// 96 = 0x60
	NSURL *_respondURL;	// 100 = 0x64
	NSURL *_statusURL;	// 104 = 0x68
	NSArray *_shares;	// 108 = 0x6c
	int _transactionType;	// 112 = 0x70
	id<MSSharingProtocolDelegate> _delegate;	// 116 = 0x74
}
@property(assign, nonatomic) id<MSSharingProtocolDelegate> delegate;	// G=0x37c77e9d; S=0x37c77ead; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x37c77ebd; @synthesize=_personID
+ (id)_dictShareStateFromShareState:(int)shareState;	// 0x37c769cd
+ (id)_invalidFieldErrorWithFieldName:(id)fieldName;	// 0x37c7786d
+ (id)_shareDictFromShare:(id)share;	// 0x37c76bfd
+ (id)_shareDictsArrayFromShares:(id)shares;	// 0x37c76fcd
+ (id)_shareFromShareDict:(id)shareDict;	// 0x37c769f1
+ (int)_shareStateFromShareDictShareState:(id)shareDictShareState;	// 0x37c769ad
+ (id)_sharesFromShareDictsArray:(id)shareDictsArray;	// 0x37c76ea5
+ (id)shareFromPushUserInfo:(id)pushUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3 outError:(id *)error;	// 0x37c77919
+ (id)shareStateFromProtocol:(id)protocol;	// 0x37c7782d
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x37c76615
- (void).cxx_destruct;	// 0x37c77ecd
- (void)_checkForFailedInvitesWithResponse:(id)response;	// 0x37c773b5
- (void)_didFailAuthenticationWithError:(id)error;	// 0x37c7774d
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x37c77771
- (void)_didFindShareState:(id)state;	// 0x37c7735d
- (void)_didFinishTransactionWithResponseObject:(id)responseObject error:(id)error;	// 0x37c776b9
- (void)abort;	// 0x37c777f9
- (void)dealloc;	// 0x37c7695d
// declared property getter: - (id)delegate;	// 0x37c77e9d
- (void)deleteShares:(id)shares;	// 0x37c772d9
- (void)modifyShares:(id)shares;	// 0x37c77255
// declared property getter: - (id)personID;	// 0x37c77ebd
- (void)requestCurrentShareState;	// 0x37c77211
- (void)sendInvitations:(id)invitations;	// 0x37c770f5
- (void)sendResponseToInvitation:(id)invitation accept:(BOOL)accept;	// 0x37c77185
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37c77ead
@end
