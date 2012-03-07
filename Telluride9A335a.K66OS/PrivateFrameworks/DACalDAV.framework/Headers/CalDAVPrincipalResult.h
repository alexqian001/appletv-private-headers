/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSString;

@interface CalDAVPrincipalResult : NSObject {
	NSString *_firstName;	// 4 = 0x4
	NSString *_lastName;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSString *_type;	// 16 = 0x10
	NSString *_principal;	// 20 = 0x14
	NSMutableArray *_emails;	// 24 = 0x18
	NSMutableArray *_cuAddresses;	// 28 = 0x1c
}
@property(retain) NSArray *cuAddresses;	// G=0x34cf9a29; S=0x34cf9a3d; @synthesize=_cuAddresses
@property(retain) NSString *displayName;	// G=0x34cf9949; S=0x34cf995d; @synthesize=_displayName
@property(readonly, assign) NSString *emailAddress;	// G=0x34cf9725; 
@property(retain) NSArray *emailAddresses;	// G=0x34cf99b9; S=0x34cf99cd; @synthesize=_emails
@property(retain) NSString *firstName;	// G=0x34cf98d9; S=0x34cf98ed; @synthesize=_firstName
@property(retain) NSString *lastName;	// G=0x34cf9911; S=0x34cf9925; @synthesize=_lastName
@property(readonly, assign) NSString *preferredCUAddress;	// G=0x34cf95ed; 
@property(retain) NSString *principalPath;	// G=0x34cf99f1; S=0x34cf9a05; @synthesize=_principal
@property(retain) NSString *resultType;	// G=0x34cf9981; S=0x34cf9995; @synthesize=_type
+ (id)resultFromResponse:(id)response;	// 0x34cf951d
- (id)init;	// 0x34cf8ef9
- (id)initWithResponse:(id)response;	// 0x34cf90b9
- (void)addCUAddress:(id)address;	// 0x34cf9565
- (void)addEmail:(id)email;	// 0x34cf95a9
- (id)convertToDAContactSearchResultElement;	// 0x34cda10d
// declared property getter: - (id)cuAddresses;	// 0x34cf9a29
- (void)dealloc;	// 0x34cf8ff5
- (id)description;	// 0x34cf983d
// declared property getter: - (id)displayName;	// 0x34cf9949
// declared property getter: - (id)emailAddress;	// 0x34cf9725
// declared property getter: - (id)emailAddresses;	// 0x34cf99b9
// declared property getter: - (id)firstName;	// 0x34cf98d9
// declared property getter: - (id)lastName;	// 0x34cf9911
// declared property getter: - (id)preferredCUAddress;	// 0x34cf95ed
// declared property getter: - (id)principalPath;	// 0x34cf99f1
// declared property getter: - (id)resultType;	// 0x34cf9981
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x34cf9a3d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x34cf995d
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x34cf99cd
// declared property setter: - (void)setFirstName:(id)name;	// 0x34cf98ed
// declared property setter: - (void)setLastName:(id)name;	// 0x34cf9925
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x34cf9a05
// declared property setter: - (void)setResultType:(id)type;	// 0x34cf9995
@end
