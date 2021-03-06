/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAAuthenticationResponse.h"

@class NSString, NSArray, NSDictionary, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {
	NSDictionary *_icloud;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *appleID;	// G=0x34e884e9; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x34e88515; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x34e8834d; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x34e88541; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x34e8856d; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x34e88599; 
@property(readonly, assign, nonatomic) NSNumber *primaryEmailVerified;	// G=0x34e885c5; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x34e88321; 
- (id)initWithDictionary:(id)dictionary;	// 0x34e8815d
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x34e88039
- (void).cxx_destruct;	// 0x34e885f1
// declared property getter: - (id)appleID;	// 0x34e884e9
// declared property getter: - (id)appleIDAliases;	// 0x34e88515
// declared property getter: - (id)dataclassProperties;	// 0x34e8834d
// declared property getter: - (id)firstName;	// 0x34e88541
// declared property getter: - (id)lastName;	// 0x34e8856d
// declared property getter: - (id)primaryEmail;	// 0x34e88599
// declared property getter: - (id)primaryEmailVerified;	// 0x34e885c5
// declared property getter: - (id)provisionedDataclasses;	// 0x34e88321
@end

