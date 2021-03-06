/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
 */

#import "DALDAP-Structs.h"
#import "LDAPTask.h"

@class NSDate, NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {
	ldap *_ld;	// 16 = 0x10
	NSString *_defaultNamingContext;	// 20 = 0x14
	NSDate *_dateConnectionWentOut;	// 24 = 0x18
}
- (id)_copyDefaultNamingContextFromLDAPElement:(ldapmsg *)ldapelement;	// 0x33a63829
- (id)_initializeServer;	// 0x33a632f5
- (void)_invokeBlockOnMainThread:(id)thread;	// 0x33a63d91
- (id)_performQuery;	// 0x33a639b1
- (void)dealloc;	// 0x33a63291
- (void)finishWithError:(id)error;	// 0x33a63d99
- (int)numDownloadedElements;	// 0x33a63ef5
- (void)performTaskInBackground;	// 0x33a63ce9
@end

