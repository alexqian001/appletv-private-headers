/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaLibraryDataProviderML3.h"
#import "MediaPlayer-Structs.h"

@protocol OS_dispatch_queue;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
	long long _currentRevision;	// 36 = 0x24
	NSObject<OS_dispatch_queue> *_queue;	// 44 = 0x2c
	long _queueOnce;	// 48 = 0x30
}
+ (BOOL)_isGeniusEnabled;	// 0x2e305031
+ (id)_localizedCloudGeniusErrorForError:(id)error;	// 0x2e3056d9
+ (id)_localizedGeniusErrorForError:(id)error;	// 0x2e305cdd
- (id)initWithLibrary:(id)library;	// 0x2e304efd
- (void).cxx_destruct;	// 0x2e3083b9
- (void)_initInstanceVariableOnce;	// 0x2e304f41
- (id)_itemArtworkCacheIDForItemIdentifier:(long long)itemIdentifier;	// 0x2e30730d
- (id)_itemArtworkCacheIDForItemIdentifier:(long long)itemIdentifier atPlaybackTime:(double)playbackTime;	// 0x2e3073bd
- (void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId completionBlock:(id)block;	// 0x2e306851
- (void)_loadArtworkImageForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x2e306991
- (id)_screenshotCacheIDForItemIdentifier:(long long)itemIdentifier;	// 0x2e30725d
- (void)_seedCloudPlaylistWithTrack:(id)track container:(id)container completionBlock:(id)block;	// 0x2e305fdd
- (id)artworkCacheIDForItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime;	// 0x2e3076d1
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;	// 0x2e3054f5
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x2e3079a5
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;	// 0x2e305611
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x2e3076e1
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x2e307891
- (BOOL)isGeniusEnabled;	// 0x2e3050a5
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x2e3075d9
- (void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x2e307565
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x2e307465
- (void)loadBestArtworkImageForSize:(CGSize)size forArtworkCacheID:(id)artworkCacheID completionBlock:(id)block;	// 0x2e307631
- (void)releaseGeniusClusterPlaylist:(void *)playlist;	// 0x2e3056d1
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x2e3050cd
- (BOOL)supportsEntityChangeTrackingForMediaEntityType:(int)mediaEntityType collectionGroupingType:(int)type dataProviderClass:(out Class *)aClass;	// 0x2e30837d
- (void)updateEntitesToCurrentRevision;	// 0x2e3079f5
@end

