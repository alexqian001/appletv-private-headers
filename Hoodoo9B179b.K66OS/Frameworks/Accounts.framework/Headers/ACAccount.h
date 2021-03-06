/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "Accounts-Structs.h"

@class NSMutableDictionary, NSURL, NSMutableSet, ACAccountCredential, NSSet, NSDictionary, NSDate, NSString, ACAccountStore, ACAccountType, NSArray;

@interface ACAccount : NSObject {
@private
	ACAccountStore *_store;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_accountDescription;	// 12 = 0xc
	NSString *_owningBundleID;	// 16 = 0x10
	NSString *_username;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSString *_authToken;	// 28 = 0x1c
	ACAccountType *_accountType;	// 32 = 0x20
	ACAccountCredential *_credential;	// 36 = 0x24
	NSMutableDictionary *_properties;	// 40 = 0x28
	NSMutableDictionary *_dataclassProperties;	// 44 = 0x2c
	BOOL _accountAccessAvailable;	// 48 = 0x30
	BOOL _authenticated;	// 49 = 0x31
	NSURL *_objectID;	// 52 = 0x34
	NSDate *_date;	// 56 = 0x38
	ACAccount *_parentAccount;	// 60 = 0x3c
	NSURL *_parentAccountObjectID;	// 64 = 0x40
	NSArray *_childAccounts;	// 68 = 0x44
	NSMutableSet *_enabledDataclasses;	// 72 = 0x48
	NSMutableSet *_provisionedDataclasses;	// 76 = 0x4c
}
@property(copy, nonatomic) NSString *accountDescription;	// G=0x3179fb39; S=0x3179fb49; 
@property(readonly, assign, nonatomic) NSDictionary *accountProperties;	// G=0x3179fbd9; 
@property(retain, nonatomic) ACAccountType *accountType;	// G=0x3179fce9; S=0x3179fd3d; 
@property(assign, nonatomic) BOOL authenticated;	// G=0x3179fcb9; S=0x3179fcc9; 
@property(readonly, assign, nonatomic) NSArray *childAccounts;	// G=0x3179fe6d; 
@property(retain, nonatomic) ACAccountCredential *credential;	// G=0x3179faa5; S=0x3179faf9; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x317a00f1; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x317a0221; 
@property(retain, nonatomic) NSMutableSet *enabledDataclasses;	// G=0x3179ff8d; S=0x317a0019; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x3179fa05; 
@property(copy, nonatomic) NSURL *objectID;	// G=0x317a01d1; S=0x317a01e1; 
@property(retain) NSString *owningBundleID;	// G=0x3179fb89; S=0x3179fb99; converted property
@property(retain, nonatomic) ACAccount *parentAccount;	// G=0x3179fd7d; S=0x3179fde1; 
@property(readonly, assign, nonatomic) NSURL *parentAccountObjectID;	// G=0x3179fdd1; 
@property(retain, nonatomic) NSSet *provisionedDataclasses;	// G=0x3179fec1; S=0x3179ff4d; 
@property(copy, nonatomic) NSString *username;	// G=0x3179fa55; S=0x3179fa65; 
+ (id)_createNewAccountUID;	// 0x317a04bd
- (id)initWithAccountType:(id)accountType;	// 0x3179f29d
- (id)initWithCoder:(id)coder;	// 0x3179f32d
// declared property getter: - (id)accountDescription;	// 0x3179fb39
// declared property getter: - (id)accountProperties;	// 0x3179fbd9
- (id)accountPropertyForKey:(id)key;	// 0x3179fc29
// declared property getter: - (id)accountType;	// 0x3179fce9
// declared property getter: - (BOOL)authenticated;	// 0x3179fcb9
// declared property getter: - (id)childAccounts;	// 0x3179fe6d
// declared property getter: - (id)credential;	// 0x3179faa5
// declared property getter: - (id)dataclassProperties;	// 0x317a00f1
// declared property getter: - (id)date;	// 0x317a0221
- (void)dealloc;	// 0x3179f7a5
- (id)description;	// 0x3179f8f5
// declared property getter: - (id)enabledDataclasses;	// 0x3179ff8d
- (void)encodeWithCoder:(id)coder;	// 0x3179f591
// declared property getter: - (id)identifier;	// 0x3179fa05
- (BOOL)isEnabledForDataclass:(NSString *)dataclass;	// 0x317a0059
- (BOOL)isProvisionedForDataclass:(NSString *)dataclass;	// 0x317a00c5
// declared property getter: - (id)objectID;	// 0x317a01d1
// converted property getter: - (id)owningBundleID;	// 0x3179fb89
// declared property getter: - (id)parentAccount;	// 0x3179fd7d
// declared property getter: - (id)parentAccountObjectID;	// 0x3179fdd1
- (id)propertiesForDataclass:(NSString *)dataclass;	// 0x317a0141
// declared property getter: - (id)provisionedDataclasses;	// 0x3179fec1
- (void)reload;	// 0x317a0271
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x3179fb49
- (void)setAccountProperties:(id)properties;	// 0x3179fbe9
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3179fc49
- (void)setAccountStore:(id)store;	// 0x3179fcd9
// declared property setter: - (void)setAccountType:(id)type;	// 0x3179fd3d
// declared property setter: - (void)setAuthenticated:(BOOL)authenticated;	// 0x3179fcc9
// declared property setter: - (void)setCredential:(id)credential;	// 0x3179faf9
- (void)setDataclassProperties:(id)properties;	// 0x317a0101
- (void)setDate:(id)date;	// 0x317a0231
- (void)setEnabled:(BOOL)enabled forDataclass:(NSString *)dataclass;	// 0x317a0085
// declared property setter: - (void)setEnabledDataclasses:(id)dataclasses;	// 0x317a0019
- (void)setIdentifier:(id)identifier;	// 0x3179fa15
// declared property setter: - (void)setObjectID:(id)anId;	// 0x317a01e1
// converted property setter: - (void)setOwningBundleID:(id)anId;	// 0x3179fb99
// declared property setter: - (void)setParentAccount:(id)account;	// 0x3179fde1
- (void)setProperties:(id)properties forDataclass:(NSString *)dataclass;	// 0x317a0161
// declared property setter: - (void)setProvisionedDataclasses:(id)dataclasses;	// 0x3179ff4d
// declared property setter: - (void)setUsername:(id)username;	// 0x3179fa65
// declared property getter: - (id)username;	// 0x3179fa55
@end

