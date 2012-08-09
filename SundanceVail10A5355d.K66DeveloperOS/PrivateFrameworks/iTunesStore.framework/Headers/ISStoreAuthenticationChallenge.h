/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
	int _failureCount;	// 12 = 0xc
	BOOL _hasPassword;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	id<NSURLAuthenticationChallengeSender> _sender;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	BOOL _userNameIsEditable;	// 32 = 0x20
}
@property(assign) int failureCount;	// G=0x37a63b35; S=0x37a63b49; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x37a63b61; S=0x37a63b79; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x37a63b91; S=0x37a63ba5; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x37a63bb5; S=0x37a63bc9; @synthesize=_sender
@property(retain) NSString *user;	// G=0x37a63be1; S=0x37a63bf5; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x37a63c05; S=0x37a63c1d; @synthesize=_userNameIsEditable
- (id)init;	// 0x37a63a21
- (void)dealloc;	// 0x37a63ad9
// declared property getter: - (int)failureCount;	// 0x37a63b35
// declared property getter: - (BOOL)hasPassword;	// 0x37a63b61
// declared property getter: - (id)password;	// 0x37a63b91
// declared property getter: - (id)sender;	// 0x37a63bb5
// declared property setter: - (void)setFailureCount:(int)count;	// 0x37a63b49
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x37a63b79
// declared property setter: - (void)setPassword:(id)password;	// 0x37a63ba5
// declared property setter: - (void)setSender:(id)sender;	// 0x37a63bc9
// declared property setter: - (void)setUser:(id)user;	// 0x37a63bf5
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x37a63c1d
// declared property getter: - (id)user;	// 0x37a63be1
// declared property getter: - (BOOL)userNameIsEditable;	// 0x37a63c05
- (BOOL)userNameIsEmail;	// 0x37a63b31
@end
