/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCPayload.h"

@class NSData, NSString, NSDate;

@interface MCCertificatePayload : MCPayload {
	NSData *_certificatePersistentID;	// 40 = 0x28
	NSString *_installedOnDeviceID;	// 44 = 0x2c
}
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x336647b1; S=0x336647c1; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSDate *expiry;	// G=0x33664759; 
@property(copy, nonatomic) NSString *installedOnDeviceID;	// G=0x336647e9; S=0x336647fd; @synthesize=_installedOnDeviceID
@property(readonly, assign, nonatomic) BOOL isIdentity;	// G=0x33664149; 
@property(readonly, assign, nonatomic) BOOL isRoot;	// G=0x3366411d; 
@property(readonly, assign, nonatomic) BOOL isSigned;	// G=0x33664019; 
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33663ca1
- (void).cxx_destruct;	// 0x3366480d
// declared property getter: - (id)certificatePersistentID;	// 0x336647b1
- (SecCertificate *)copyCertificate;	// 0x336640b5
- (SecIdentity *)copyIdentityFromKeychain;	// 0x336640e9
- (id)description;	// 0x33664509
// declared property getter: - (id)expiry;	// 0x33664759
// declared property getter: - (id)installedOnDeviceID;	// 0x336647e9
// declared property getter: - (BOOL)isIdentity;	// 0x33664149
// declared property getter: - (BOOL)isRoot;	// 0x3366411d
// declared property getter: - (BOOL)isSigned;	// 0x33664019
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x336647c1
// declared property setter: - (void)setInstalledOnDeviceID:(id)anId;	// 0x336647fd
- (id)stubDictionary;	// 0x3366401d
- (id)subtitle1Description;	// 0x336642b1
- (id)subtitle1Label;	// 0x33664235
- (id)subtitle2Description;	// 0x336643c1
- (id)subtitle2Label;	// 0x33664345
- (id)title;	// 0x33664171
@end

