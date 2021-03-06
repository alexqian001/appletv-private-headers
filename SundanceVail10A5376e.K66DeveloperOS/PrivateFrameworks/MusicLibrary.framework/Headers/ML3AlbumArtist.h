/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Collection.h"


@interface ML3AlbumArtist : ML3Collection {
}
+ (id)allProperties;	// 0x348580c9
+ (id)artworkCacheIDProperty;	// 0x348588f1
+ (id)databaseTable;	// 0x3481cc9d
+ (id)defaultOrderingProperties;	// 0x3485809d
+ (id)effectiveAlbumArtistNameForAlbumArtistName:(id)albumArtistName artistName:(id)name seriesName:(id)name3 compilation:(BOOL)compilation;	// 0x34858161
+ (id)effectiveAlbumArtistSortNameForAlbumArtistSortName:(id)albumArtistSortName albumArtistName:(id)name artistSortName:(id)name3 artistName:(id)name4 compilation:(BOOL)compilation;	// 0x348581f5
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x3481d0b9
+ (void)initialize;	// 0x3481ca19
+ (id)joinClausesForProperty:(id)property;	// 0x3481cc15
+ (id)predisambiguatedProperties;	// 0x3481cc05
+ (id)propertiesForGroupingKey;	// 0x348580d9
+ (id)sectionPropertyForProperty:(id)property;	// 0x348580ad
+ (id)trackForeignPersistentID;	// 0x348588dd
- (void)updateRepresentativeItem:(id)item inLibrary:(id)library withArtworkCacheID:(id)artworkCacheID;	// 0x34858909
- (void)updateTrackValues:(id)values;	// 0x348582b9
@end

