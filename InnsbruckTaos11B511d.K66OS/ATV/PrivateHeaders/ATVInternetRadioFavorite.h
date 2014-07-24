/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVInternetRadioFavorite : ATVFavorite {
	NSString *_stationID;	// 16 = 0x10
	NSString *_collectionTitle;	// 20 = 0x14
}
@property(retain) id category;	// G=0x11027d; S=0x110291; converted property
@property(retain) NSString *stationID;	// G=0x1102ed; S=0x1102c5; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x10fc89
+ (id)favoriteFromAsset:(id)asset;	// 0x10ff5d
+ (id)favoriteFromMediaItem:(id)mediaItem;	// 0x110001
+ (void)initialize;	// 0x10fbf5
- (id)initWithDictionary:(id)dictionary;	// 0x110059
- (void).cxx_destruct;	// 0x110515
- (id)_initWithMediaItem:(id)mediaItem;	// 0x110549
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x1106a5
// converted property getter: - (id)category;	// 0x11027d
- (id)description;	// 0x1101e5
- (void)encodeWithDictionary:(id)dictionary;	// 0x11014d
- (BOOL)isPlayingOrPaused;	// 0x110301
// converted property setter: - (void)setCategory:(id)category;	// 0x110291
// converted property setter: - (void)setStationID:(id)anId;	// 0x1102c5
// converted property getter: - (id)stationID;	// 0x1102ed
@end
