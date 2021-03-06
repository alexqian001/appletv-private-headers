/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSData, NSArray, MLMovieProperties, MLContentRating, NSString;

@interface MLTrackImport : NSObject <NSCopying> {
	NSData *_artworkData;	// 4 = 0x4
	NSString *_assetFilePath;	// 8 = 0x8
	NSArray *_chapters;	// 12 = 0xc
	NSMutableDictionary *_properties;	// 16 = 0x10
	BOOL _shouldAddToPurchasedPlaylist;	// 20 = 0x14
	BOOL _shouldDeleteExistingArtwork;	// 21 = 0x15
	BOOL _assignArtworkCacheIDFromAlbum;	// 22 = 0x16
}
@property(copy, nonatomic) NSData *artworkData;	// G=0x3485c2ed; S=0x3485c301; @synthesize=_artworkData
@property(copy, nonatomic) NSString *assetFilePath;	// G=0x3485c311; S=0x3485c325; @synthesize=_assetFilePath
@property(assign, nonatomic) BOOL assignArtworkCacheIDFromAlbum;	// G=0x3485c335; S=0x3485c345; @synthesize=_assignArtworkCacheIDFromAlbum
@property(copy, nonatomic) NSArray *chapters;	// G=0x3485c355; S=0x3485c369; @synthesize=_chapters
@property(copy, nonatomic) MLContentRating *contentRating;	// G=0x3485ba39; S=0x3485bc35; 
@property(readonly, assign, nonatomic) NSDictionary *entityProperties;	// G=0x3485bac1; 
@property(assign, nonatomic) unsigned long mediaType;	// G=0x3485baed; S=0x3485bc7d; 
@property(copy, nonatomic) MLMovieProperties *movieProperties;	// G=0x3485bb4d; S=0x3485bd21; 
@property(assign, nonatomic) BOOL shouldAddToPurchasedPlaylist;	// G=0x3485c379; S=0x3485c389; @synthesize=_shouldAddToPurchasedPlaylist
@property(assign, nonatomic) BOOL shouldDeleteExistingArtwork;	// G=0x3485c399; S=0x3485c3a9; @synthesize=_shouldDeleteExistingArtwork
+ (void)initialize;	// 0x3485b7c5
- (id)init;	// 0x3485b779
- (void).cxx_destruct;	// 0x3485c3b9
- (void)_addSortStrings;	// 0x3485c1fd
// declared property getter: - (id)artworkData;	// 0x3485c2ed
// declared property getter: - (id)assetFilePath;	// 0x3485c311
// declared property getter: - (BOOL)assignArtworkCacheIDFromAlbum;	// 0x3485c335
// declared property getter: - (id)chapters;	// 0x3485c355
// declared property getter: - (id)contentRating;	// 0x3485ba39
- (id)copyEntityProperties;	// 0x3485bef5
- (id)copyWithZone:(NSZone *)zone;	// 0x3485b929
// declared property getter: - (id)entityProperties;	// 0x3485bac1
// declared property getter: - (unsigned long)mediaType;	// 0x3485baed
// declared property getter: - (id)movieProperties;	// 0x3485bb4d
- (void)normalizeEntityProperties;	// 0x3485bf15
// declared property setter: - (void)setArtworkData:(id)data;	// 0x3485c301
// declared property setter: - (void)setAssetFilePath:(id)path;	// 0x3485c325
// declared property setter: - (void)setAssignArtworkCacheIDFromAlbum:(BOOL)album;	// 0x3485c345
// declared property setter: - (void)setChapters:(id)chapters;	// 0x3485c369
// declared property setter: - (void)setContentRating:(id)rating;	// 0x3485bc35
// declared property setter: - (void)setMediaType:(unsigned long)type;	// 0x3485bc7d
// declared property setter: - (void)setMovieProperties:(id)properties;	// 0x3485bd21
// declared property setter: - (void)setShouldAddToPurchasedPlaylist:(BOOL)addToPurchasedPlaylist;	// 0x3485c389
// declared property setter: - (void)setShouldDeleteExistingArtwork:(BOOL)deleteExistingArtwork;	// 0x3485c3a9
- (void)setValue:(id)value forEntityProperty:(id)entityProperty;	// 0x3485be19
// declared property getter: - (BOOL)shouldAddToPurchasedPlaylist;	// 0x3485c379
// declared property getter: - (BOOL)shouldDeleteExistingArtwork;	// 0x3485c399
- (id)valueForEntityProperty:(id)entityProperty;	// 0x3485bed5
@end

