/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSArray, NSString, NSDate;

@interface MSASSharingRelationship : NSObject <NSCopying> {
	BOOL _isMine;	// 4 = 0x4
	NSString *_GUID;	// 8 = 0x8
	NSString *_albumGUID;	// 12 = 0xc
	NSString *_email;	// 16 = 0x10
	NSArray *_emails;	// 20 = 0x14
	NSArray *_phones;	// 24 = 0x18
	NSString *_firstName;	// 28 = 0x1c
	NSString *_lastName;	// 32 = 0x20
	NSString *_fullName;	// 36 = 0x24
	NSString *_personID;	// 40 = 0x28
	NSDate *_subscriptionDate;	// 44 = 0x2c
	int _state;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *GUID;	// G=0x30552a89; S=0x30552a99; @synthesize=_GUID
@property(retain, nonatomic) NSString *albumGUID;	// G=0x30552ac1; S=0x30552ad1; @synthesize=_albumGUID
@property(retain, nonatomic) NSString *email;	// G=0x30552af9; S=0x30552b09; @synthesize=_email
@property(retain, nonatomic) NSArray *emails;	// G=0x30552b31; S=0x30552b41; @synthesize=_emails
@property(retain, nonatomic) NSString *firstName;	// G=0x30552ba1; S=0x30552bb1; @synthesize=_firstName
@property(retain, nonatomic) NSString *fullName;	// G=0x30552a01; S=0x30552c11; @synthesize=_fullName
@property(assign, nonatomic) BOOL isMine;	// G=0x30552cc9; S=0x30552cd9; @synthesize=_isMine
@property(retain, nonatomic) NSString *lastName;	// G=0x30552bd9; S=0x30552be9; @synthesize=_lastName
@property(retain, nonatomic) NSString *personID;	// G=0x30552c39; S=0x30552c49; @synthesize=_personID
@property(retain, nonatomic) NSArray *phones;	// G=0x30552b69; S=0x30552b79; @synthesize=_phones
@property(assign, nonatomic) int state;	// G=0x30552ca9; S=0x30552cb9; @synthesize=_state
@property(retain, nonatomic) NSDate *subscriptionDate;	// G=0x30552c71; S=0x30552c81; @synthesize=_subscriptionDate
+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)protocolDictionary;	// 0x3057bdfd
+ (BOOL)supportsSecureCoding;	// 0x30551bbd
- (id)init;	// 0x30551b7d
- (id)initWithCoder:(id)coder;	// 0x305524f1
- (void).cxx_destruct;	// 0x30552ce9
// declared property getter: - (id)GUID;	// 0x30552a89
- (id)_fullName;	// 0x30551cb1
// declared property getter: - (id)albumGUID;	// 0x30552ac1
- (id)copyWithZone:(NSZone *)zone;	// 0x30552041
- (id)description;	// 0x30552765
// declared property getter: - (id)email;	// 0x30552af9
// declared property getter: - (id)emails;	// 0x30552b31
- (void)encodeWithCoder:(id)coder;	// 0x305522cd
// declared property getter: - (id)firstName;	// 0x30552ba1
// declared property getter: - (id)fullName;	// 0x30552a01
- (unsigned)hash;	// 0x30551bc1
- (BOOL)isEqual:(id)equal;	// 0x30551be1
- (BOOL)isEqualToSharingRelationship:(id)sharingRelationship;	// 0x30551cc5
// declared property getter: - (BOOL)isMine;	// 0x30552cc9
// declared property getter: - (id)lastName;	// 0x30552bd9
// declared property getter: - (id)personID;	// 0x30552c39
// declared property getter: - (id)phones;	// 0x30552b69
// declared property setter: - (void)setAlbumGUID:(id)guid;	// 0x30552ad1
// declared property setter: - (void)setEmail:(id)email;	// 0x30552b09
// declared property setter: - (void)setEmails:(id)emails;	// 0x30552b41
// declared property setter: - (void)setFirstName:(id)name;	// 0x30552bb1
// declared property setter: - (void)setFullName:(id)name;	// 0x30552c11
// declared property setter: - (void)setGUID:(id)guid;	// 0x30552a99
// declared property setter: - (void)setIsMine:(BOOL)mine;	// 0x30552cd9
// declared property setter: - (void)setLastName:(id)name;	// 0x30552be9
// declared property setter: - (void)setPersonID:(id)anId;	// 0x30552c49
// declared property setter: - (void)setPhones:(id)phones;	// 0x30552b79
// declared property setter: - (void)setState:(int)state;	// 0x30552cb9
// declared property setter: - (void)setSubscriptionDate:(id)date;	// 0x30552c81
// declared property getter: - (int)state;	// 0x30552ca9
// declared property getter: - (id)subscriptionDate;	// 0x30552c71
@end
