/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVScreenSaverTheme : XXUnknownSuperclass {
	BOOL _hasExtraSetupInfo;	// 4 = 0x4
	BOOL _usableForPhotos;	// 5 = 0x5
	BOOL _usableForAlbumArtwork;	// 6 = 0x6
	BOOL _privateTheme;	// 7 = 0x7
	NSString *_screensaverIdentifier;	// 8 = 0x8
	NSString *_slideShowKey;	// 12 = 0xc
	NSString *_localizableKey;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL hasExtraSetupInfo;	// G=0x254aa1; S=0x254ab1; @synthesize=_hasExtraSetupInfo
@property(copy, nonatomic) NSString *localizableKey;	// G=0x254a7d; S=0x254a91; @synthesize=_localizableKey
@property(assign, nonatomic, getter=isPrivate) BOOL privateTheme;	// G=0x254b01; @synthesize=_privateTheme
@property(copy, nonatomic) NSString *screensaverIdentifier;	// G=0x254a35; S=0x254a49; @synthesize=_screensaverIdentifier
@property(copy, nonatomic) NSString *slideShowKey;	// G=0x254a59; S=0x254a6d; @synthesize=_slideShowKey
@property(assign, nonatomic) BOOL usableForAlbumArtwork;	// G=0x254ae1; S=0x254af1; @synthesize=_usableForAlbumArtwork
@property(assign, nonatomic) BOOL usableForPhotos;	// G=0x254ac1; S=0x254ad1; @synthesize=_usableForPhotos
- (void)dealloc;	// 0x25485d
- (id)description;	// 0x2548d5
// declared property getter: - (BOOL)hasExtraSetupInfo;	// 0x254aa1
- (unsigned)hash;	// 0x2549ed
- (BOOL)isEqual:(id)equal;	// 0x254935
// declared property getter: - (BOOL)isPrivate;	// 0x254b01
// declared property getter: - (id)localizableKey;	// 0x254a7d
// declared property getter: - (id)screensaverIdentifier;	// 0x254a35
// declared property setter: - (void)setHasExtraSetupInfo:(BOOL)info;	// 0x254ab1
- (void)setIsPrivate:(BOOL)aPrivate;	// 0x254b11
// declared property setter: - (void)setLocalizableKey:(id)key;	// 0x254a91
// declared property setter: - (void)setScreensaverIdentifier:(id)identifier;	// 0x254a49
// declared property setter: - (void)setSlideShowKey:(id)key;	// 0x254a6d
// declared property setter: - (void)setUsableForAlbumArtwork:(BOOL)albumArtwork;	// 0x254af1
// declared property setter: - (void)setUsableForPhotos:(BOOL)photos;	// 0x254ad1
// declared property getter: - (id)slideShowKey;	// 0x254a59
// declared property getter: - (BOOL)usableForAlbumArtwork;	// 0x254ae1
// declared property getter: - (BOOL)usableForPhotos;	// 0x254ac1
@end

