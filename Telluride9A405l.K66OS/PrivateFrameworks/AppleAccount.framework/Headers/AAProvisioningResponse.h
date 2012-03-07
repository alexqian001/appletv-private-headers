/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAAuthenticationResponse.h"

@class NSString, NSDictionary, NSNumber, NSArray;

@interface AAProvisioningResponse : AAAuthenticationResponse {
	NSDictionary *_icloud;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *appleID;	// G=0x36f79b9d; 
@property(readonly, assign, nonatomic) NSArray *appleIDAliases;	// G=0x36f79bc9; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x36f79a55; 
@property(readonly, assign, nonatomic) NSString *firstName;	// G=0x36f79bf5; 
@property(readonly, assign, nonatomic) NSString *lastName;	// G=0x36f79c21; 
@property(readonly, assign, nonatomic) NSString *primaryEmail;	// G=0x36f79c4d; 
@property(readonly, assign, nonatomic) NSNumber *primaryEmailVerified;	// G=0x36f79c79; 
@property(readonly, assign, nonatomic) NSArray *provisionedDataclasses;	// G=0x36f79a29; 
- (id)initWithDictionary:(id)dictionary;	// 0x36f798c5
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x36f797fd
// declared property getter: - (id)appleID;	// 0x36f79b9d
// declared property getter: - (id)appleIDAliases;	// 0x36f79bc9
// declared property getter: - (id)dataclassProperties;	// 0x36f79a55
- (void)dealloc;	// 0x36f799dd
// declared property getter: - (id)firstName;	// 0x36f79bf5
// declared property getter: - (id)lastName;	// 0x36f79c21
// declared property getter: - (id)primaryEmail;	// 0x36f79c4d
// declared property getter: - (id)primaryEmailVerified;	// 0x36f79c79
// declared property getter: - (id)provisionedDataclasses;	// 0x36f79a29
@end
