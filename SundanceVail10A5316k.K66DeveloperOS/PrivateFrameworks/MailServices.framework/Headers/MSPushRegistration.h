/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService {
@private
	NSString *_bundleIdentifier;	// 32 = 0x20
	NSString *_accountIdentifier;	// 36 = 0x24
	NSString *_notificationNamePrefix;	// 40 = 0x28
	NSArray *_mailboxNames;	// 44 = 0x2c
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x3444f335; S=0x3444f349; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x3444f311; S=0x3444f325; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSArray *mailboxNames;	// G=0x3444f37d; S=0x3444f391; @synthesize=_mailboxNames
@property(copy, nonatomic) NSString *notificationNamePrefix;	// G=0x3444f359; S=0x3444f36d; @synthesize=_notificationNamePrefix
- (id)init;	// 0x3444ef0d
// declared property getter: - (id)accountIdentifier;	// 0x3444f335
// declared property getter: - (id)bundleIdentifier;	// 0x3444f311
- (void)dealloc;	// 0x3444efa1
// declared property getter: - (id)mailboxNames;	// 0x3444f37d
// declared property getter: - (id)notificationNamePrefix;	// 0x3444f359
- (void)registerForPush:(id)push;	// 0x3444f02d
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x3444f349
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x3444f325
// declared property setter: - (void)setMailboxNames:(id)names;	// 0x3444f391
// declared property setter: - (void)setNotificationNamePrefix:(id)prefix;	// 0x3444f36d
@end
