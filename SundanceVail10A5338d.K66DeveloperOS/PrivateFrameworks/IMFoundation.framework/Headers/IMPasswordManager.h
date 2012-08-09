/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class ACAccountStore, NSMutableSet;

@interface IMPasswordManager : NSObject {
	NSMutableSet *_runningQueries;	// 4 = 0x4
	ACAccountStore *_accountStore;	// 8 = 0x8
}
+ (id)_loginUserNotificationForService:(id)service user:(id)user isForBadPassword:(BOOL)badPassword showForgetPassword:(BOOL)password;	// 0x3695be79
+ (id)sharedInstance;	// 0x36958781
- (id)init;	// 0x3695882d
- (void)cancelRequestID:(id)anId;	// 0x3695be21
- (void)dealloc;	// 0x369588a9
- (void)fetchAuthTokenForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x36958901
- (void)fetchPasswordForUsername:(id)username service:(id)service outRequestID:(id *)anId completionBlock:(id)block;	// 0x36958e99
- (void)requestAuthTokenForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x3695aa85
- (void)requestPasswordForUsername:(id)username service:(id)service badPassword:(BOOL)password showForgotPassword:(BOOL)password4 outRequestID:(id *)anId completionBlock:(id)block;	// 0x3695a665
- (void)setAuthTokenForUsername:(id)username service:(id)service authToken:(id)token outRequestID:(id *)anId completionBlock:(id)block;	// 0x36959d65
- (void)setPasswordForUsername:(id)username service:(id)service password:(id)password outRequestID:(id *)anId completionBlock:(id)block;	// 0x36959401
- (BOOL)supportsAuthTokenRequests;	// 0x3695aa79
@end
