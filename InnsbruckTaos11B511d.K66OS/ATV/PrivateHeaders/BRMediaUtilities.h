/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRMediaUtilities : XXUnknownSuperclass {
}
+ (id)defaultImageForATVDataAsset:(id)atvdataAsset imageSize:(int)size;	// 0x45a3f1
+ (BOOL)iTunesServerID:(id)anId isEqualToITunesServerID:(id)itunesServerID;	// 0x45aed9
+ (BOOL)isAirPlayAsset:(id)asset;	// 0x45a85d
+ (BOOL)isAssetValidForPlayback:(id)playback;	// 0x45afe9
+ (BOOL)isAssetValidForPlayback:(id)playback withPlayer:(id)player;	// 0x45b035
+ (BOOL)isHomeShareRental:(id)rental;	// 0x45a9e1
+ (BOOL)isSagaMediaAsset:(id)asset;	// 0x45ae15
+ (BOOL)isSagaMediaItem:(id)item;	// 0x45ac3d
+ (BOOL)isStoreHLSAsset:(id)asset;	// 0x45acc1
+ (BOOL)isStoreHLSItem:(id)item;	// 0x45ad1d
+ (BOOL)isStoreRental:(id)rental;	// 0x45ab05
+ (BOOL)isTiltMediaAsset:(id)asset;	// 0x45ae71
+ (BOOL)isTrilogyMediaAsset:(id)asset;	// 0x45abe1
+ (BOOL)isTrilogyMediaItem:(id)item;	// 0x45aba9
+ (BOOL)isVodka2Asset:(id)asset;	// 0x45a949
+ (BOOL)isVodka2AudioAsset:(id)asset;	// 0x45a8c9
+ (BOOL)isVodka2MediaItem:(id)item;	// 0x45a9a9
+ (BOOL)isiTunesAsset:(id)asset;	// 0x45a7c5
+ (BOOL)isiTunesMediaItem:(id)item;	// 0x45a821
+ (id)loudnessInfoMediaKindForMediaType:(id)mediaType;	// 0x45a101
+ (id)mediaAssetsFromMediaItems:(id)mediaItems;	// 0x45a70d
+ (id)mediaTypeForATVDataAsset:(id)atvdataAsset;	// 0x45a42d
+ (id)mediaTypeForATVDataType:(id)atvdataType;	// 0x45a46d
+ (double)playedThresholdForMediaType:(id)mediaType duration:(double)duration;	// 0x45a011
+ (float)soundCheckValueForMediaAsset:(id)mediaAsset;	// 0x45a279
+ (float)soundCheckValueForMediaItem:(id)mediaItem;	// 0x45a2e5
+ (int)watchedStateForMediaItem:(id)mediaItem;	// 0x459e79
+ (int)watchedStateForMediaType:(id)mediaType duration:(double)duration bookmarkInMS:(long)ms hasBeenPlayed:(BOOL)played playCount:(long)count;	// 0x459f89
@end
