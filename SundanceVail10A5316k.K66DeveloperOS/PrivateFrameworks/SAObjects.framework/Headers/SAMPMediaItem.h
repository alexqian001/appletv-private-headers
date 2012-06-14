/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSString;

@interface SAMPMediaItem : SAMPMediaEntity {
}
@property(copy, nonatomic) NSString *album;	// G=0x32f39539; S=0x32f39555; 
@property(copy, nonatomic) NSString *artist;	// G=0x32f395a5; S=0x32f395c1; 
@property(copy, nonatomic) NSString *composer;	// G=0x32f39611; S=0x32f3962d; 
@property(copy, nonatomic) NSString *genre;	// G=0x32f3967d; S=0x32f39699; 
@property(assign, nonatomic) int playCount;	// G=0x32f396e9; S=0x32f39759; 
@property(assign, nonatomic) int rating;	// G=0x32f3979d; S=0x32f3980d; 
@property(copy, nonatomic) NSString *sortAlbum;	// G=0x32f39851; S=0x32f3986d; 
@property(copy, nonatomic) NSString *sortArtist;	// G=0x32f398bd; S=0x32f398d9; 
@property(assign, nonatomic) int trackNumber;	// G=0x32f39929; S=0x32f39999; 
+ (id)mediaItem;	// 0x32f394a9
+ (id)mediaItemWithDictionary:(id)dictionary context:(id)context;	// 0x32f394ed
// declared property getter: - (id)album;	// 0x32f39539
// declared property getter: - (id)artist;	// 0x32f395a5
// declared property getter: - (id)composer;	// 0x32f39611
- (id)encodedClassName;	// 0x32f3949d
// declared property getter: - (id)genre;	// 0x32f3967d
- (id)groupIdentifier;	// 0x32f3948d
// declared property getter: - (int)playCount;	// 0x32f396e9
// declared property getter: - (int)rating;	// 0x32f3979d
// declared property setter: - (void)setAlbum:(id)album;	// 0x32f39555
// declared property setter: - (void)setArtist:(id)artist;	// 0x32f395c1
// declared property setter: - (void)setComposer:(id)composer;	// 0x32f3962d
// declared property setter: - (void)setGenre:(id)genre;	// 0x32f39699
// declared property setter: - (void)setPlayCount:(int)count;	// 0x32f39759
// declared property setter: - (void)setRating:(int)rating;	// 0x32f3980d
// declared property setter: - (void)setSortAlbum:(id)album;	// 0x32f3986d
// declared property setter: - (void)setSortArtist:(id)artist;	// 0x32f398d9
// declared property setter: - (void)setTrackNumber:(int)number;	// 0x32f39999
// declared property getter: - (id)sortAlbum;	// 0x32f39851
// declared property getter: - (id)sortArtist;	// 0x32f398bd
// declared property getter: - (int)trackNumber;	// 0x32f39929
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32f399dd
@end
