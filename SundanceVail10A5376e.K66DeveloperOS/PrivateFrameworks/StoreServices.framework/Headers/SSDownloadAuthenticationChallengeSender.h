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
@property(readonly, assign) SSDownloadAuthenticationSession *authenticationSession;	// G=0x32ce9fdd; 
- (id)initWithAuthenticationSession:(id)authenticationSession;	// 0x32ce9f09
// declared property getter: - (id)authenticationSession;	// 0x32ce9fdd
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x32cea18d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x32cea1bd
- (void)dealloc;	// 0x32ce9f7d
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x32cea1ed
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x32cea21d
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x32cea24d
@end
