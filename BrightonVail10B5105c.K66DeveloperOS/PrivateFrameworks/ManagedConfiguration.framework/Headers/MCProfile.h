/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSDate, NSArray;
@protocol OS_dispatch_queue;

@interface MCProfile : NSObject {
	NSString *_displayName;	// 4 = 0x4
	NSString *_profileDescription;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSString *_UUID;	// 16 = 0x10
	NSString *_organization;	// 20 = 0x14
	int _version;	// 24 = 0x18
	NSDate *_installDate;	// 28 = 0x1c
	NSDate *_expiryDate;	// 32 = 0x20
	BOOL _encrypted;	// 36 = 0x24
	BOOL _isLocked;	// 37 = 0x25
	NSString *_removalPasscode;	// 40 = 0x28
	BOOL _needsReboot;	// 44 = 0x2c
	BOOL _isStub;	// 45 = 0x2d
	NSString *_productBuildVersion;	// 48 = 0x30
	NSString *_productVersion;	// 52 = 0x34
	NSData *_profileData;	// 56 = 0x38
	NSDate *_removalDate;	// 60 = 0x3c
	NSString *_localizedConsentText;	// 64 = 0x40
	int _trustLevel;	// 68 = 0x44
	BOOL _trustHasBeenEvaluated;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_trustEvaluationQueue;	// 76 = 0x4c
	NSString *_signerSummary;	// 80 = 0x50
	NSArray *_signerCertificates;	// 84 = 0x54
	BOOL _signerHasBeenEvaluated;	// 88 = 0x58
	NSObject<OS_dispatch_queue> *_signerEvaluationQueue;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x345205c1; @synthesize=_UUID
@property(readonly, assign, nonatomic) NSString *UUIDHashFileName;	// G=0x3452133d; 
@property(retain, nonatomic) NSString *displayName;	// G=0x34520579; S=0x34520589; @synthesize=_displayName
@property(readonly, assign, nonatomic) NSDate *earliestCertificateExpiryDate;	// G=0x345200b9; 
@property(assign, nonatomic, getter=isEncrypted) BOOL encrypted;	// G=0x345205d1; S=0x345205e1; @synthesize=_encrypted
@property(readonly, assign, nonatomic) NSDate *expiryDate;	// G=0x345200c1; @synthesize=_expiryDate
@property(readonly, assign, nonatomic) NSString *friendlyName;	// G=0x3451fa6d; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x345205b1; @synthesize=_identifier
@property(retain, nonatomic) NSDate *installDate;	// G=0x34520611; S=0x34520621; @synthesize=_installDate
@property(readonly, assign, nonatomic) NSArray *installationWarnings;	// G=0x3451f645; 
@property(readonly, assign, nonatomic) BOOL isManagedByProfileService;	// G=0x34520199; 
@property(readonly, assign, nonatomic) BOOL isSigned;	// G=0x3451fa41; 
@property(readonly, assign, nonatomic) BOOL isStub;	// G=0x34520689; @synthesize=_isStub
@property(readonly, assign, nonatomic) NSString *localizedConsentText;	// G=0x34520701; @synthesize=_localizedConsentText
@property(readonly, assign, nonatomic) NSArray *localizedPayloadSummaryByType;	// G=0x345200b5; 
@property(assign, nonatomic, getter=isLocked) BOOL locked;	// G=0x34520649; S=0x34520659; @synthesize=_isLocked
@property(readonly, assign, nonatomic) BOOL needsReboot;	// G=0x34520679; @synthesize=_needsReboot
@property(readonly, assign, nonatomic) NSString *organization;	// G=0x345205f1; @synthesize=_organization
@property(readonly, assign, nonatomic) NSArray *payloads;	// G=0x3451fa39; 
@property(readonly, assign, nonatomic) NSString *productBuildVersion;	// G=0x345206a9; @synthesize=_productBuildVersion
@property(readonly, assign, nonatomic) NSString *productVersion;	// G=0x34520699; @synthesize=_productVersion
@property(retain, nonatomic) NSData *profileData;	// G=0x345206b9; S=0x345206c9; @synthesize=_profileData
@property(readonly, assign, nonatomic) NSString *profileDescription;	// G=0x34520569; @synthesize=_profileDescription
@property(readonly, assign, nonatomic) NSString *profileIDHashFileName;	// G=0x345212ed; 
@property(readonly, assign, nonatomic) NSDate *removalDate;	// G=0x345206f1; @synthesize=_removalDate
@property(retain, nonatomic) NSString *removalPasscode;	// G=0x3452138d; S=0x345213a1; 
@property(readonly, assign, nonatomic) NSString *removalPasscode;	// G=0x34520669; @synthesize=_removalPasscode
@property(readonly, assign, nonatomic) SecCertificate *signerCertificate;	// G=0x3451f2b1; 
@property(retain, nonatomic) NSArray *signerCertificates;	// G=0x3451f2ed; S=0x3451f559; 
@property(retain, nonatomic) NSString *signerSummary;	// G=0x3451f3a9; S=0x3451f465; 
@property(readonly, assign, nonatomic) NSString *stubFileName;	// G=0x3452129d; 
@property(readonly, assign, nonatomic) int trustLevel;	// G=0x3451f159; 
@property(readonly, assign, nonatomic) int version;	// G=0x34520601; @synthesize=_version
+ (int)_evaluateCertificateChain:(id)chain;	// 0x345203c5
+ (int)_evaluateSignerTrust:(SecTrust *)trust;	// 0x345202cd
+ (id)_malformedProfileError;	// 0x34520871
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x345208f5
+ (BOOL)checkString:(id)string isOneOfStrings:(id)strings key:(id)key errorDomain:(id)domain errorCode:(int)code errorString:(id)string6 outError:(id *)error;	// 0x345235d1
+ (int)evaluateTrustOfData:(id)data;	// 0x345236b1
+ (id)missingFieldErrorWithField:(id)field;	// 0x3452097d
+ (id)profileDictionaryFromProfileData:(id)profileData outWasEncrypted:(BOOL *)encrypted outError:(id *)error;	// 0x34520c99
+ (id)profileWithData:(id)data fileName:(id)name allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x34520a05
+ (id)profileWithData:(id)data fileName:(id)name outError:(id *)error;	// 0x3451f9ed
+ (id)profileWithData:(id)data outError:(id *)error;	// 0x3451f9c9
+ (id)profileWithDictionary:(id)dictionary fileName:(id)name originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x34521069
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x34523481
+ (id)removeOptionalObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x34523185
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x345232ad
+ (id)removeRequiredObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code7 invalidDataErrorString:(id)string8 outError:(id *)error;	// 0x34522fdd
+ (id)signerSummaryOfData:(id)data outSignerCertificates:(id *)certificates;	// 0x34523779
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x345213e5
- (void).cxx_destruct;	// 0x34520711
// declared property getter: - (id)UUID;	// 0x345205c1
// declared property getter: - (id)UUIDHashFileName;	// 0x3452133d
- (void)__evaluateSignerCertificates;	// 0x3451f23d
- (BOOL)containsPayloadOfClass:(Class)aClass;	// 0x34522ef5
- (id)description;	// 0x3451fbc1
// declared property getter: - (id)displayName;	// 0x34520579
// declared property getter: - (id)earliestCertificateExpiryDate;	// 0x345200b9
- (void)evaluateSignerTrust;	// 0x3452019d
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)completion;	// 0x345201d5
// declared property getter: - (id)expiryDate;	// 0x345200c1
// declared property getter: - (id)friendlyName;	// 0x3451fa6d
// declared property getter: - (id)identifier;	// 0x345205b1
// declared property getter: - (id)installDate;	// 0x34520611
// declared property getter: - (id)installationWarnings;	// 0x3451f645
// declared property getter: - (BOOL)isEncrypted;	// 0x345205d1
// declared property getter: - (BOOL)isLocked;	// 0x34520649
// declared property getter: - (BOOL)isManagedByProfileService;	// 0x34520199
// declared property getter: - (BOOL)isSigned;	// 0x3451fa41
// declared property getter: - (BOOL)isStub;	// 0x34520689
// declared property getter: - (id)localizedConsentText;	// 0x34520701
// declared property getter: - (id)localizedPayloadSummaryByType;	// 0x345200b5
- (id)malformedProfileErrorWithError:(id)error;	// 0x345225b1
// declared property getter: - (BOOL)needsReboot;	// 0x34520679
// declared property getter: - (id)organization;	// 0x345205f1
- (id)payloadWithUUID:(id)uuid;	// 0x3451fa3d
// declared property getter: - (id)payloads;	// 0x3451fa39
// declared property getter: - (id)productBuildVersion;	// 0x345206a9
// declared property getter: - (id)productVersion;	// 0x34520699
// declared property getter: - (id)profileData;	// 0x345206b9
// declared property getter: - (id)profileDescription;	// 0x34520569
// declared property getter: - (id)profileIDHashFileName;	// 0x345212ed
// declared property getter: - (id)removalDate;	// 0x345206f1
// declared property getter: - (id)removalPasscode;	// 0x3452138d
// declared property getter: - (id)removalPasscode;	// 0x34520669
// declared property setter: - (void)setDisplayName:(id)name;	// 0x34520589
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x345205e1
// declared property setter: - (void)setInstallDate:(id)date;	// 0x34520621
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x34520659
// declared property setter: - (void)setProfileData:(id)data;	// 0x345206c9
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x345213a1
// declared property setter: - (void)setSignerCertificates:(id)certificates;	// 0x3451f559
// declared property setter: - (void)setSignerSummary:(id)summary;	// 0x3451f465
// declared property getter: - (SecCertificate *)signerCertificate;	// 0x3451f2b1
// declared property getter: - (id)signerCertificates;	// 0x3451f2ed
// declared property getter: - (id)signerSummary;	// 0x3451f3a9
- (id)stubDictionary;	// 0x34522791
// declared property getter: - (id)stubFileName;	// 0x3452129d
// declared property getter: - (int)trustLevel;	// 0x3451f159
// declared property getter: - (int)version;	// 0x34520601
- (BOOL)writeStubToDirectory:(id)directory;	// 0x345226bd
- (BOOL)writeStubToPath:(id)path;	// 0x3452273d
@end

