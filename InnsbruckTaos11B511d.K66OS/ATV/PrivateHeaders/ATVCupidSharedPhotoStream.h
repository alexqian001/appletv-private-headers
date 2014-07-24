/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccount, MSASAlbum;

__attribute__((visibility("hidden")))
@interface ATVCupidSharedPhotoStream : XXUnknownSuperclass {
	MSASAlbum *_album;	// 4 = 0x4
	ACAccount *_appleAccount;	// 8 = 0x8
}
@property(retain, nonatomic) MSASAlbum *album;	// G=0x4cd221; S=0x4cd231; @synthesize=_album
@property(retain, nonatomic) ACAccount *appleAccount;	// G=0x4cd259; S=0x4cd269; @synthesize=_appleAccount
+ (id)collectionTypeForAlbum:(id)album;	// 0x4ccb09
+ (id)collectionWithDataClient:(id)dataClient album:(id)album accessObject:(id)object;	// 0x4ccb7d
- (id)initWithDataClient:(id)dataClient;	// 0x4ccf7d
- (id)initWithDataClient:(id)dataClient album:(id)album appleAccount:(id)account;	// 0x4ccf89
- (void).cxx_destruct;	// 0x4cd291
// declared property getter: - (id)album;	// 0x4cd221
// declared property getter: - (id)appleAccount;	// 0x4cd259
- (id)concreteValueForProperty:(id)property;	// 0x4cd02d
// declared property setter: - (void)setAlbum:(id)album;	// 0x4cd231
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x4cd269
@end
