/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import "Accounts-Structs.h"
#import </libobjc.A.h>
#import "NSSecureCoding.h"

@class NSURL, NSString, NSSet, ACAccountStore;

@interface ACAccountType : NSObject <NSSecureCoding> {
	NSString *_accountTypeDescription;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_credentialType;	// 12 = 0xc
	NSURL *_objectID;	// 16 = 0x10
	int _visibility;	// 20 = 0x14
	NSString *_credentialProtectionPolicy;	// 24 = 0x18
	ACAccountStore *_accountStore;	// 28 = 0x1c
	int _supportsAuthentication;	// 32 = 0x20
	BOOL _supportsMultipleAccounts;	// 36 = 0x24
	NSSet *_supportedDataclasses;	// 40 = 0x28
	NSSet *_syncableDataclasses;	// 44 = 0x2c
	NSSet *_accessKeys;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) BOOL accessGranted;	// G=0x2c9904f9; 
@property(readonly, assign, nonatomic) NSSet *accessKeys;	// G=0x2c990571; @synthesize=_accessKeys
@property(assign, nonatomic) __weak ACAccountStore *accountStore;	// G=0x2c9905dd; S=0x2c9905fd; @synthesize=_accountStore
@property(readonly, assign, nonatomic) NSString *accountTypeDescription;	// G=0x2c99038d; @synthesize=_accountTypeDescription
@property(copy, nonatomic) id credentialProtectionPolicy;	// G=0x2c990479; S=0x2c9904c5; 
@property(retain, nonatomic) NSString *credentialType;	// G=0x2c990445; S=0x2c990411; @synthesize=_credentialType
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x2c990345; @synthesize=_identifier
@property(retain, nonatomic) NSURL *objectID;	// G=0x2c9903d5; S=0x2c9903e9; @synthesize=_objectID
@property(readonly, assign, nonatomic) NSSet *supportedDataclasses;	// G=0x2c99026d; @synthesize=_supportedDataclasses
@property(assign, nonatomic) int supportsAuthentication;	// G=0x2c990545; S=0x2c990535; @synthesize=_supportsAuthentication
@property(assign, nonatomic) BOOL supportsMultipleAccounts;	// G=0x2c990561; S=0x2c990611; @synthesize=_supportsMultipleAccounts
@property(readonly, assign, nonatomic) NSSet *syncableDataclasses;	// G=0x2c9902d9; @synthesize=_syncableDataclasses
@property(assign, nonatomic) int visibility;	// G=0x2c990459; S=0x2c990469; 
+ (BOOL)supportsSecureCoding;	// 0x2c98f579
- (id)initWithCoder:(id)coder;	// 0x2c98fa5d
- (id)initWithIdentifier:(id)identifier description:(id)description;	// 0x2c98f57d
- (id)initWithManagedAccountType:(id)managedAccountType;	// 0x2c98f675
- (id)initWithManagedAccountType:(id)managedAccountType accountStore:(id)store;	// 0x2c98f621
- (void).cxx_destruct;	// 0x2c990621
// declared property getter: - (BOOL)accessGranted;	// 0x2c9904f9
// declared property getter: - (id)accessKeys;	// 0x2c990571
// declared property getter: - (id)accountStore;	// 0x2c9905dd
// declared property getter: - (id)accountTypeDescription;	// 0x2c99038d
- (id)copyWithZone:(NSZone *)zone;	// 0x2c9900dd
// declared property getter: - (id)credentialProtectionPolicy;	// 0x2c990479
// declared property getter: - (id)credentialType;	// 0x2c990445
- (id)description;	// 0x2c98ff89
- (void)encodeWithCoder:(id)coder;	// 0x2c98fd79
// declared property getter: - (id)identifier;	// 0x2c990345
// declared property getter: - (id)objectID;	// 0x2c9903d5
// declared property setter: - (void)setAccountStore:(id)store;	// 0x2c9905fd
- (void)setAccountTypeDescription:(id)description;	// 0x2c9903a1
// declared property setter: - (void)setCredentialProtectionPolicy:(id)policy;	// 0x2c9904c5
// declared property setter: - (void)setCredentialType:(id)type;	// 0x2c990411
- (void)setIdentifier:(id)identifier;	// 0x2c990359
// declared property setter: - (void)setObjectID:(id)anId;	// 0x2c9903e9
// declared property setter: - (void)setSupportsAuthentication:(int)authentication;	// 0x2c990535
// declared property setter: - (void)setSupportsMultipleAccounts:(BOOL)accounts;	// 0x2c990611
// declared property setter: - (void)setVisibility:(int)visibility;	// 0x2c990469
// declared property getter: - (id)supportedDataclasses;	// 0x2c99026d
// declared property getter: - (int)supportsAuthentication;	// 0x2c990545
// declared property getter: - (BOOL)supportsMultipleAccounts;	// 0x2c990561
// declared property getter: - (id)syncableDataclasses;	// 0x2c9902d9
// declared property getter: - (int)visibility;	// 0x2c990459
@end
