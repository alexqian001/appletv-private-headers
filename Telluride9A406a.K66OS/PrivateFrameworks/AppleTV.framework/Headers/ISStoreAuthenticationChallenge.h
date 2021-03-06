/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISAuthenticationChallenge.h"

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

__attribute__((visibility("hidden")))
@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
@private
	int _failureCount;	// 12 = 0xc
	BOOL _hasPassword;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	id<NSURLAuthenticationChallengeSender> _sender;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	BOOL _userNameIsEditable;	// 32 = 0x20
}
@property(assign) int failureCount;	// G=0x331bc069; S=0x331bc079; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x331bc089; S=0x331bc099; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x331bc0a9; S=0x331bc0bd; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x331bc0e1; S=0x331bc0f1; @synthesize=_sender
@property(retain) NSString *user;	// G=0x331bc101; S=0x331bc115; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x331bc139; S=0x331bc149; @synthesize=_userNameIsEditable
- (id)init;	// 0x331bbf55
- (void)dealloc;	// 0x331bc00d
// declared property getter: - (int)failureCount;	// 0x331bc069
// declared property getter: - (BOOL)hasPassword;	// 0x331bc089
// declared property getter: - (id)password;	// 0x331bc0a9
// declared property getter: - (id)sender;	// 0x331bc0e1
// declared property setter: - (void)setFailureCount:(int)count;	// 0x331bc079
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x331bc099
// declared property setter: - (void)setPassword:(id)password;	// 0x331bc0bd
// declared property setter: - (void)setSender:(id)sender;	// 0x331bc0f1
// declared property setter: - (void)setUser:(id)user;	// 0x331bc115
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x331bc149
// declared property getter: - (id)user;	// 0x331bc101
// declared property getter: - (BOOL)userNameIsEditable;	// 0x331bc139
- (BOOL)userNameIsEmail;	// 0x331bc065
@end

