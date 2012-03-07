/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSAccounts : MSMailDefaultService {
}
+ (void)accountValuesForKeys:(id)keys completionBlock:(id)block;	// 0x34f13159
+ (void)accountValuesForKeys:(id)keys launchMobileMail:(BOOL)mail completionBlock:(id)block;	// 0x34f13179
+ (BOOL)hasActiveAccounts;	// 0x34f12f91
+ (id)smi_serverCommandName;	// 0x34f12f85
+ (void)updateAccounts:(id)accounts completionBlock:(id)block;	// 0x34f13385
+ (void)updateAccounts:(id)accounts launchMobileMail:(BOOL)mail completionBlock:(id)block;	// 0x34f133a5
- (void)_listAccountKeys:(id)keys handler:(id)handler;	// 0x34f1329d
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x34f135c1
- (void)_updateAccounts:(id)accounts handler:(id)handler;	// 0x34f134c9
@end
