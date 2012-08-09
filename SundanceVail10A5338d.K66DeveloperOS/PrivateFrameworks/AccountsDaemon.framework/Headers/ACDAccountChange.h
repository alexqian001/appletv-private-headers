/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library

@class ACAccount;

@interface ACDAccountChange : NSObject {
	int _changeType;	// 4 = 0x4
	ACAccount *_account;	// 8 = 0x8
	ACAccount *_oldAccount;	// 12 = 0xc
}
@property(retain, nonatomic) ACAccount *account;	// G=0x3459ef75; S=0x3459ef85; @synthesize=_account
@property(assign, nonatomic) int changeType;	// G=0x3459ef55; S=0x3459ef65; @synthesize=_changeType
@property(retain, nonatomic) ACAccount *oldAccount;	// G=0x3459efad; S=0x3459efbd; @synthesize=_oldAccount
+ (id)changeWithChangeType:(int)changeType account:(id)account oldAccount:(id)account3;	// 0x3459eee1
- (id)initWithChangeType:(int)changeType account:(id)account oldAccount:(id)account3;	// 0x3459ee41
- (void).cxx_destruct;	// 0x3459efe5
// declared property getter: - (id)account;	// 0x3459ef75
// declared property getter: - (int)changeType;	// 0x3459ef55
// declared property getter: - (id)oldAccount;	// 0x3459efad
// declared property setter: - (void)setAccount:(id)account;	// 0x3459ef85
// declared property setter: - (void)setChangeType:(int)type;	// 0x3459ef65
// declared property setter: - (void)setOldAccount:(id)account;	// 0x3459efbd
@end
