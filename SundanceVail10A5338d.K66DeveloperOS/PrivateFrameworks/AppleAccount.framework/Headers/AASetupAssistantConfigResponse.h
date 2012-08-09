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
@property(readonly, assign, nonatomic) NSString *aboutURL;	// G=0x34cda39d; 
@property(readonly, assign, nonatomic) NSString *authenticateURL;	// G=0x34cda3c9; 
@property(readonly, assign, nonatomic) NSString *checkValidityURL;	// G=0x34cda479; 
@property(readonly, assign, nonatomic) NSString *createAppleIDURL;	// G=0x34cda3f5; 
@property(readonly, assign, nonatomic) NSString *createDelegateAccountsURL;	// G=0x34cda44d; 
@property(readonly, assign, nonatomic) NSString *existingAppleIDTermsUIURL;	// G=0x34cda4d1; 
@property(readonly, assign, nonatomic) NSString *iForgotURL;	// G=0x34cda4a5; 
@property(readonly, assign, nonatomic) NSString *loginDelegatesURL;	// G=0x34cda4fd; 
@property(readonly, assign, nonatomic) BOOL setupAssistantServerEnabled;	// G=0x34cda529; 
@property(readonly, assign, nonatomic) NSString *signingSessionCertURL;	// G=0x34cda319; 
@property(readonly, assign, nonatomic) NSString *signingSessionURL;	// G=0x34cda345; 
@property(readonly, assign, nonatomic) NSString *updateAppleIDURL;	// G=0x34cda421; 
@property(readonly, assign, nonatomic) NSString *xmlUI;	// G=0x34cda371; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x34cda11d
- (void).cxx_destruct;	// 0x34cda591
// declared property getter: - (id)aboutURL;	// 0x34cda39d
// declared property getter: - (id)authenticateURL;	// 0x34cda3c9
// declared property getter: - (id)checkValidityURL;	// 0x34cda479
// declared property getter: - (id)createAppleIDURL;	// 0x34cda3f5
// declared property getter: - (id)createDelegateAccountsURL;	// 0x34cda44d
// declared property getter: - (id)existingAppleIDTermsUIURL;	// 0x34cda4d1
// declared property getter: - (id)iForgotURL;	// 0x34cda4a5
// declared property getter: - (id)loginDelegatesURL;	// 0x34cda4fd
// declared property getter: - (BOOL)setupAssistantServerEnabled;	// 0x34cda529
// declared property getter: - (id)signingSessionCertURL;	// 0x34cda319
// declared property getter: - (id)signingSessionURL;	// 0x34cda345
// declared property getter: - (id)updateAppleIDURL;	// 0x34cda421
// declared property getter: - (id)xmlUI;	// 0x34cda371
@end
