/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, ACAccountStore;

@interface IMPasswordManager : NSObject {
	NSMutableSet *_runningQueries;	// 4 = 0x4
	ACAccountStore *_accountStore;	// 8 = 0x8
}
+ (id)_loginUserNotificationForService:(id)service user:(id)user isForBadPassword:(BOOL)badPassword showForgetPassword:(BOOL)password;	// 0x343a4d59
+ (id)sharedInstance;	// 0x343a1461
- (id)init;	// 0x343a150d
- (void)cancelRequestID:(id)anId;	// 0x343a4cfd
- (void)dealloc;	// 0x343a1589
- (void)fetchAuthTokenForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x343a15e1
- (void)fetchPasswordForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x343a1cad
- (void)requestAuthTokenForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x343a3a01
- (void)requestPasswordForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x343a35e1
- (void)setAuthTokenForUsername:(id)username service:(id)service authToken:(id)token outRequestID:(id *)anId completionBlock:(id)block;	// 0x343a2bd5
- (void)setPasswordForUsername:(id)username service:(id)service password:(id)password outRequestID:(id *)anId completionBlock:(id)block;	// 0x343a222d
- (BOOL)supportsAuthTokenRequests;	// 0x343a39f5
@end

