/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface MLMovieArtist : NSObject <NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x3156a7c5; S=0x3156a809; 
@property(copy, nonatomic) NSString *artistName;	// G=0x3156a79d; S=0x3156a7ed; 
- (id)init;	// 0x3156a6ad
- (id)initWithMovieArtistDictionary:(id)movieArtistDictionary;	// 0x3156a6c1
- (void).cxx_destruct;	// 0x3156a8fd
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x3156a7c5
- (void)_setValue:(id)value forKey:(id)key;	// 0x3156a845
- (void)_setValueCopy:(id)copy forKey:(id)key;	// 0x3156a899
// declared property getter: - (id)artistName;	// 0x3156a79d
- (id)copyMovieArtistDictionary;	// 0x3156a825
- (id)copyWithZone:(NSZone *)zone;	// 0x3156a751
// declared property setter: - (void)setArtistName:(id)name;	// 0x3156a7ed
// declared property setter: - (void)setITunesStoreIdentifier:(id)identifier;	// 0x3156a809
@end
