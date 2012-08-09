/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSDictionary, NSString;

@interface AASetupAssistantConfigResponse : AAResponse {
	NSDictionary *_urls;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *aboutURL;	// G=0x3573eda5; 
@property(readonly, assign, nonatomic) NSString *authenticateURL;	// G=0x3573edd1; 
@property(readonly, assign, nonatomic) NSString *checkValidityURL;	// G=0x3573ee81; 
@property(readonly, assign, nonatomic) NSString *createAppleIDURL;	// G=0x3573edfd; 
@property(readonly, assign, nonatomic) NSString *createDelegateAccountsURL;	// G=0x3573ee55; 
@property(readonly, assign, nonatomic) NSString *existingAppleIDTermsUIURL;	// G=0x3573eed9; 
@property(readonly, assign, nonatomic) NSString *iForgotURL;	// G=0x3573eead; 
@property(readonly, assign, nonatomic) NSString *loginDelegatesURL;	// G=0x3573ef05; 
@property(readonly, assign, nonatomic) BOOL setupAssistantServerEnabled;	// G=0x3573ef5d; 
@property(readonly, assign, nonatomic) NSString *signingSessionCertURL;	// G=0x3573ed21; 
@property(readonly, assign, nonatomic) NSString *signingSessionURL;	// G=0x3573ed4d; 
@property(readonly, assign, nonatomic) NSString *updateAppleIDURL;	// G=0x3573ee29; 
@property(readonly, assign, nonatomic) NSString *upgradeIOSTermsUI;	// G=0x3573ef31; 
@property(readonly, assign, nonatomic) NSString *xmlUI;	// G=0x3573ed79; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x3573eb25
- (void).cxx_destruct;	// 0x3573efc5
// declared property getter: - (id)aboutURL;	// 0x3573eda5
// declared property getter: - (id)authenticateURL;	// 0x3573edd1
// declared property getter: - (id)checkValidityURL;	// 0x3573ee81
// declared property getter: - (id)createAppleIDURL;	// 0x3573edfd
// declared property getter: - (id)createDelegateAccountsURL;	// 0x3573ee55
// declared property getter: - (id)existingAppleIDTermsUIURL;	// 0x3573eed9
// declared property getter: - (id)iForgotURL;	// 0x3573eead
// declared property getter: - (id)loginDelegatesURL;	// 0x3573ef05
// declared property getter: - (BOOL)setupAssistantServerEnabled;	// 0x3573ef5d
// declared property getter: - (id)signingSessionCertURL;	// 0x3573ed21
// declared property getter: - (id)signingSessionURL;	// 0x3573ed4d
// declared property getter: - (id)updateAppleIDURL;	// 0x3573ee29
// declared property getter: - (id)upgradeIOSTermsUI;	// 0x3573ef31
// declared property getter: - (id)xmlUI;	// 0x3573ed79
@end
