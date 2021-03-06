/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import </libobjc.A.h>

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject {
	BOOL _wasDeleted;	// 4 = 0x4
	NSString *_GUID;	// 8 = 0x8
	NSString *_ownerEmail;	// 12 = 0xc
	NSString *_ownerPersonID;	// 16 = 0x10
	NSString *_ownerFullName;	// 20 = 0x14
	NSString *_ownerFirstName;	// 24 = 0x18
	NSString *_ownerLastName;	// 28 = 0x1c
	NSString *_URLString;	// 32 = 0x20
	MSASInvitation *_invitation;	// 36 = 0x24
	NSString *_name;	// 40 = 0x28
}
@property(retain, nonatomic) NSString *GUID;	// G=0x30504fad; S=0x30504fbd; @synthesize=_GUID
@property(retain, nonatomic) NSString *URLString;	// G=0x30505085; S=0x30505095; @synthesize=_URLString
@property(retain, nonatomic) MSASInvitation *invitation;	// G=0x305050bd; S=0x305050cd; @synthesize=_invitation
@property(retain, nonatomic) NSString *name;	// G=0x305050f5; S=0x30505105; @synthesize=_name
@property(copy, nonatomic) NSString *ownerEmail;	// G=0x30504fe5; S=0x30504ff9; @synthesize=_ownerEmail
@property(copy, nonatomic) NSString *ownerFirstName;	// G=0x3050503d; S=0x30505051; @synthesize=_ownerFirstName
@property(copy, nonatomic) NSString *ownerFullName;	// G=0x30504f31; S=0x3050502d; @synthesize=_ownerFullName
@property(copy, nonatomic) NSString *ownerLastName;	// G=0x30505061; S=0x30505075; @synthesize=_ownerLastName
@property(copy, nonatomic) NSString *ownerPersonID;	// G=0x30505009; S=0x3050501d; @synthesize=_ownerPersonID
@property(assign, nonatomic) BOOL wasDeleted;	// G=0x3050512d; S=0x3050513d; @synthesize=_wasDeleted
- (void).cxx_destruct;	// 0x3050514d
// declared property getter: - (id)GUID;	// 0x30504fad
// declared property getter: - (id)URLString;	// 0x30505085
- (id)description;	// 0x30504d99
// declared property getter: - (id)invitation;	// 0x305050bd
// declared property getter: - (id)name;	// 0x305050f5
// declared property getter: - (id)ownerEmail;	// 0x30504fe5
// declared property getter: - (id)ownerFirstName;	// 0x3050503d
// declared property getter: - (id)ownerFullName;	// 0x30504f31
// declared property getter: - (id)ownerLastName;	// 0x30505061
// declared property getter: - (id)ownerPersonID;	// 0x30505009
// declared property setter: - (void)setGUID:(id)guid;	// 0x30504fbd
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x305050cd
// declared property setter: - (void)setName:(id)name;	// 0x30505105
// declared property setter: - (void)setOwnerEmail:(id)email;	// 0x30504ff9
// declared property setter: - (void)setOwnerFirstName:(id)name;	// 0x30505051
// declared property setter: - (void)setOwnerFullName:(id)name;	// 0x3050502d
// declared property setter: - (void)setOwnerLastName:(id)name;	// 0x30505075
// declared property setter: - (void)setOwnerPersonID:(id)anId;	// 0x3050501d
// declared property setter: - (void)setURLString:(id)string;	// 0x30505095
// declared property setter: - (void)setWasDeleted:(BOOL)deleted;	// 0x3050513d
// declared property getter: - (BOOL)wasDeleted;	// 0x3050512d
@end

