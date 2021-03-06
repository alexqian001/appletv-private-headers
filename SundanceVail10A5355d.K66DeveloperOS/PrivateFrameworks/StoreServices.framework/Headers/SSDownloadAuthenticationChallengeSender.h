/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSURLAuthenticationChallengeSender.h"
#import <NSObject.h> // Unknown library

@class SSDownloadAuthenticationSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	SSDownloadAuthenticationSession *_session;	// 8 = 0x8
}
@property(readonly, assign) SSDownloadAuthenticationSession *authenticationSession;	// G=0x3193f0e5; 
- (id)initWithAuthenticationSession:(id)authenticationSession;	// 0x3193f011
// declared property getter: - (id)authenticationSession;	// 0x3193f0e5
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x3193f295
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3193f2c5
- (void)dealloc;	// 0x3193f085
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3193f2f5
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x3193f325
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x3193f355
@end

