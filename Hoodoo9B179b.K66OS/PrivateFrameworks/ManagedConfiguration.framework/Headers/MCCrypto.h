/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"


@interface MCCrypto : NSObject {
}
+ (id)_decryptionFailedError;	// 0x348cc76d
+ (SecCertificate *)copyCertificateRefFromPEMData:(id)pemdata;	// 0x348cc5f5
+ (SecCertificate *)copyCertificateRefFromPKCS1Data:(id)pkcs1Data;	// 0x348cc5e1
+ (BOOL)isValidPKCS12Data:(id)data;	// 0x348cc749
+ (id)objectFromEncryptedData:(id)encryptedData outCertificate:(SecCertificate **)certificate outError:(id *)error;	// 0x348cc7f5
@end
