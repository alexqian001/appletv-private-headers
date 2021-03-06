/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSShare;

@interface MSInvitationResponse : NSObject {
	MSShare *_invitation;	// 4 = 0x4
	BOOL _accept;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL accept;	// G=0x30754fb1; S=0x30754fc1; @synthesize=_accept
@property(retain, nonatomic) MSShare *invitation;	// G=0x30754f79; S=0x30754f89; @synthesize=_invitation
+ (id)responseWithInvitation:(id)invitation accept:(BOOL)accept;	// 0x30754ea1
- (id)initWithInvitation:(id)invitation accept:(BOOL)accept;	// 0x30754ef5
- (void).cxx_destruct;	// 0x30754fd1
// declared property getter: - (BOOL)accept;	// 0x30754fb1
// declared property getter: - (id)invitation;	// 0x30754f79
// declared property setter: - (void)setAccept:(BOOL)accept;	// 0x30754fc1
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x30754f89
@end

