/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject {
	NSString *_GUID;	// 4 = 0x4
	NSString *_ownerEmail;	// 8 = 0x8
	NSString *_ownerFullName;	// 12 = 0xc
	NSString *_ownerFirstName;	// 16 = 0x10
	NSString *_ownerLastName;	// 20 = 0x14
	NSString *_URLString;	// 24 = 0x18
	MSASInvitation *_invitation;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _wasDeleted;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *GUID;	// G=0x3716b001; S=0x3716b011; @synthesize=_GUID
@property(retain, nonatomic) NSString *URLString;	// G=0x3716b0b5; S=0x3716b0c5; @synthesize=_URLString
@property(retain, nonatomic) MSASInvitation *invitation;	// G=0x3716b0ed; S=0x3716b0fd; @synthesize=_invitation
@property(retain, nonatomic) NSString *name;	// G=0x3716b125; S=0x3716b135; @synthesize=_name
@property(copy, nonatomic) NSString *ownerEmail;	// G=0x3716b039; S=0x3716b04d; @synthesize=_ownerEmail
@property(copy, nonatomic) NSString *ownerFirstName;	// G=0x3716b06d; S=0x3716b081; @synthesize=_ownerFirstName
@property(copy, nonatomic) NSString *ownerFullName;	// G=0x3716af89; S=0x3716b05d; @synthesize=_ownerFullName
@property(copy, nonatomic) NSString *ownerLastName;	// G=0x3716b091; S=0x3716b0a5; @synthesize=_ownerLastName
@property(assign, nonatomic) BOOL wasDeleted;	// G=0x3716b15d; S=0x3716b16d; @synthesize=_wasDeleted
- (void).cxx_destruct;	// 0x3716b17d
// declared property getter: - (id)GUID;	// 0x3716b001
// declared property getter: - (id)URLString;	// 0x3716b0b5
- (id)description;	// 0x3716ae19
// declared property getter: - (id)invitation;	// 0x3716b0ed
// declared property getter: - (id)name;	// 0x3716b125
// declared property getter: - (id)ownerEmail;	// 0x3716b039
// declared property getter: - (id)ownerFirstName;	// 0x3716b06d
// declared property getter: - (id)ownerFullName;	// 0x3716af89
// declared property getter: - (id)ownerLastName;	// 0x3716b091
// declared property setter: - (void)setGUID:(id)guid;	// 0x3716b011
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x3716b0fd
// declared property setter: - (void)setName:(id)name;	// 0x3716b135
// declared property setter: - (void)setOwnerEmail:(id)email;	// 0x3716b04d
// declared property setter: - (void)setOwnerFirstName:(id)name;	// 0x3716b081
// declared property setter: - (void)setOwnerFullName:(id)name;	// 0x3716b05d
// declared property setter: - (void)setOwnerLastName:(id)name;	// 0x3716b0a5
// declared property setter: - (void)setURLString:(id)string;	// 0x3716b0c5
// declared property setter: - (void)setWasDeleted:(BOOL)deleted;	// 0x3716b16d
// declared property getter: - (BOOL)wasDeleted;	// 0x3716b15d
@end
