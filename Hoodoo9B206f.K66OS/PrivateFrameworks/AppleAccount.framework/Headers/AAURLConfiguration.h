/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface AAURLConfiguration : NSObject {
	NSDictionary *_urlDictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *accountCreationUIURL;	// G=0x359478b1; 
@property(readonly, assign, nonatomic) NSString *accountCreationURL;	// G=0x35947801; 
@property(readonly, assign, nonatomic) NSString *addEmailURL;	// G=0x359479b9; 
@property(readonly, assign, nonatomic) NSString *authenticateURL;	// G=0x35947961; 
@property(readonly, assign, nonatomic) NSString *completeValidateEmailURL;	// G=0x359479e5; 
@property(readonly, assign, nonatomic) NSString *fetchAccountSettingsURL;	// G=0x35947935; 
@property(readonly, assign, nonatomic) NSString *initiateValidateEmailURL;	// G=0x3594798d; 
@property(readonly, assign, nonatomic) NSString *mobileMeOfferAlertURL;	// G=0x35947a11; 
@property(readonly, assign, nonatomic) NSString *registerURL;	// G=0x35947859; 
@property(readonly, assign, nonatomic) NSString *signInURL;	// G=0x35947909; 
@property(readonly, assign, nonatomic) NSString *signingSessionCertURL;	// G=0x35947a3d; 
@property(readonly, assign, nonatomic) NSString *signingSessionURL;	// G=0x35947a69; 
@property(readonly, assign, nonatomic) NSString *updateAccountUIURL;	// G=0x359478dd; 
@property(readonly, assign, nonatomic) NSString *updateAccountURL;	// G=0x3594782d; 
@property(readonly, assign, nonatomic) NSString *validateURL;	// G=0x35947885; 
+ (void)reset;	// 0x35947751
+ (id)urlConfiguration;	// 0x359473ed
- (id)initWithDictionary:(id)dictionary;	// 0x35947761
// declared property getter: - (id)accountCreationUIURL;	// 0x359478b1
// declared property getter: - (id)accountCreationURL;	// 0x35947801
// declared property getter: - (id)addEmailURL;	// 0x359479b9
// declared property getter: - (id)authenticateURL;	// 0x35947961
// declared property getter: - (id)completeValidateEmailURL;	// 0x359479e5
- (void)dealloc;	// 0x359477b5
// declared property getter: - (id)fetchAccountSettingsURL;	// 0x35947935
// declared property getter: - (id)initiateValidateEmailURL;	// 0x3594798d
// declared property getter: - (id)mobileMeOfferAlertURL;	// 0x35947a11
// declared property getter: - (id)registerURL;	// 0x35947859
// declared property getter: - (id)signInURL;	// 0x35947909
// declared property getter: - (id)signingSessionCertURL;	// 0x35947a3d
// declared property getter: - (id)signingSessionURL;	// 0x35947a69
// declared property getter: - (id)updateAccountUIURL;	// 0x359478dd
// declared property getter: - (id)updateAccountURL;	// 0x3594782d
// declared property getter: - (id)validateURL;	// 0x35947885
@end

