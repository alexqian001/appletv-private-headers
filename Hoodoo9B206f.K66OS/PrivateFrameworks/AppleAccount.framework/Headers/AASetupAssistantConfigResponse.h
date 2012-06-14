/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSString, NSDictionary;

@interface AASetupAssistantConfigResponse : AAResponse {
	NSDictionary *_urls;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *authenticateURL;	// G=0x3593a941; 
@property(readonly, assign, nonatomic) NSString *checkValidityURL;	// G=0x3593a9f1; 
@property(readonly, assign, nonatomic) NSString *createAppleIDURL;	// G=0x3593a96d; 
@property(readonly, assign, nonatomic) NSString *createDelegateAccountsURL;	// G=0x3593a9c5; 
@property(readonly, assign, nonatomic) NSString *existingAppleIDTermsUIURL;	// G=0x3593aa49; 
@property(readonly, assign, nonatomic) NSString *iForgotURL;	// G=0x3593aa1d; 
@property(readonly, assign, nonatomic) BOOL setupAssistantServerEnabled;	// G=0x3593aa75; 
@property(readonly, assign, nonatomic) NSString *signingSessionCertURL;	// G=0x3593a8bd; 
@property(readonly, assign, nonatomic) NSString *signingSessionURL;	// G=0x3593a8e9; 
@property(readonly, assign, nonatomic) NSString *updateAppleIDURL;	// G=0x3593a999; 
@property(readonly, assign, nonatomic) NSString *xmlUI;	// G=0x3593a915; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x3593a73d
// declared property getter: - (id)authenticateURL;	// 0x3593a941
// declared property getter: - (id)checkValidityURL;	// 0x3593a9f1
// declared property getter: - (id)createAppleIDURL;	// 0x3593a96d
// declared property getter: - (id)createDelegateAccountsURL;	// 0x3593a9c5
// declared property getter: - (id)existingAppleIDTermsUIURL;	// 0x3593aa49
// declared property getter: - (id)iForgotURL;	// 0x3593aa1d
// declared property getter: - (BOOL)setupAssistantServerEnabled;	// 0x3593aa75
// declared property getter: - (id)signingSessionCertURL;	// 0x3593a8bd
// declared property getter: - (id)signingSessionURL;	// 0x3593a8e9
// declared property getter: - (id)updateAppleIDURL;	// 0x3593a999
// declared property getter: - (id)xmlUI;	// 0x3593a915
@end
