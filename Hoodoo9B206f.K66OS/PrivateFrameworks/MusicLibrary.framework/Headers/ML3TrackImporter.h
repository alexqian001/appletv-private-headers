/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, ML3MusicLibrary;

@interface ML3TrackImporter : NSObject {
@private
	NSDictionary *_nameOrders;	// 4 = 0x4
	ML3MusicLibrary *_library;	// 8 = 0x8
	BOOL _updateSmartPlaylists;	// 12 = 0xc
}
@property(retain, nonatomic) NSDictionary *nameOrders;	// G=0x35d50809; S=0x35d50819; @synthesize=_nameOrders
@property(assign, nonatomic) BOOL updateSmartPlaylists;	// G=0x35d5083d; S=0x35d5084d; @synthesize=_updateSmartPlaylists
- (id)initWithMusicLibrary:(id)musicLibrary;	// 0x35d4eb39
- (id)_addAlbumArtistForImportTrackProperties:(id)importTrackProperties;	// 0x35d4f649
- (id)_addAlbumForImportTrackProperties:(id)importTrackProperties;	// 0x35d4f925
- (id)_addArtistForImportTrackProperties:(id)importTrackProperties;	// 0x35d4fc5d
- (id)_addComposerForImportTrackProperties:(id)importTrackProperties;	// 0x35d4fe4d
- (id)_addGenreForImportTrackProperties:(id)importTrackProperties;	// 0x35d4fff9
- (id)_addStoreLinkForImportTrackProperties:(id)importTrackProperties;	// 0x35d5015d
- (id)_newTrackPropertiesByProcessingImportTrack:(id)track insertStringsIntoSortMap:(BOOL)map;	// 0x35d50289
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)playlist;	// 0x35d507e5
- (void)dealloc;	// 0x35d4ec1d
- (void)importTrack:(id)track withCompletionBlock:(id)completionBlock;	// 0x35d4ec7d
// declared property getter: - (id)nameOrders;	// 0x35d50809
// declared property setter: - (void)setNameOrders:(id)orders;	// 0x35d50819
// declared property setter: - (void)setUpdateSmartPlaylists:(BOOL)playlists;	// 0x35d5084d
// declared property getter: - (BOOL)updateSmartPlaylists;	// 0x35d5083d
- (BOOL)updateTrack:(id)track withImportTrack:(id)importTrack;	// 0x35d4f195
@end
