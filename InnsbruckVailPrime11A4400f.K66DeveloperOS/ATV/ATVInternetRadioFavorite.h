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
@property(retain) id category;	// G=0xfa1a1; S=0xfa1b5; converted property
@property(retain) NSString *stationID;	// G=0xfa211; S=0xfa1e9; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0xf9bad
+ (id)favoriteFromAsset:(id)asset;	// 0xf9e81
+ (id)favoriteFromMediaItem:(id)mediaItem;	// 0xf9f25
+ (void)initialize;	// 0xf9b19
- (id)initWithDictionary:(id)dictionary;	// 0xf9f7d
- (void).cxx_destruct;	// 0xfa439
- (id)_initWithMediaItem:(id)mediaItem;	// 0xfa46d
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0xfa5c9
// converted property getter: - (id)category;	// 0xfa1a1
- (id)description;	// 0xfa109
- (void)encodeWithDictionary:(id)dictionary;	// 0xfa071
- (BOOL)isPlayingOrPaused;	// 0xfa225
// converted property setter: - (void)setCategory:(id)category;	// 0xfa1b5
// converted property setter: - (void)setStationID:(id)anId;	// 0xfa1e9
// converted property getter: - (id)stationID;	// 0xfa211
@end
