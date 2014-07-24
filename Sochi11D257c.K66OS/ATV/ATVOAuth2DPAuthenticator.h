/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVOAuth2Authenticator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVOAuth2DPAuthenticator : ATVOAuth2Authenticator {
}
@property(readonly, assign) NSString *deviceEndpoint;	// G=0x347ed; @dynamic
@property(readonly, assign) NSString *oauthScope;	// G=0x347d1; @dynamic
- (void)_codeDocumentReady:(id)ready;	// 0x34b55
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x34ab5
- (id)_makeAuthenticationController;	// 0x34809
// declared property getter: - (id)deviceEndpoint;	// 0x347ed
- (void)generateCode;	// 0x34869
// declared property getter: - (id)oauthScope;	// 0x347d1
@end
