/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {
@private
	void *_echo;	// 4 = 0x4
	void *_echo_library;	// 8 = 0x8
	void *_echo_cluster_playlist;	// 12 = 0xc
	NSMutableData *_sharedBlobMutableData;	// 16 = 0x10
}
+ (unsigned)defaultMinTrackCount;	// 0x345f9011
+ (unsigned)defaultTrackCount;	// 0x345f9059
+ (BOOL)hasGeniusDataAvailable;	// 0x345f8fa9
+ (BOOL)hasGeniusFeatureEnabled;	// 0x345ed1f1
+ (void)ignoreUnusedWarnings;	// 0x345f8df1
+ (id)playlistControllerWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x345fa6f1
+ (BOOL)populateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x345fa5a5
+ (BOOL)useFakeGeniusData;	// 0x345ed869
- (id)init;	// 0x345f90a1
- (void).cxx_destruct;	// 0x345facb9
- (BOOL)_canIncludeTrackInGeniusContainer:(id)geniusContainer;	// 0x345f920d
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)seedTracks error:(id *)error;	// 0x345fa7c9
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)persistentID maxTracks:(unsigned)tracks stride:(int)stride;	// 0x345f9321
- (BOOL)_fakePopulateContainer:(id)container withSeedTrack:(id)seedTrack error:(id *)error;	// 0x345f972d
- (BOOL)_populateContainer:(id)container seedTrack:(id)track error:(id *)error;	// 0x345f9c55
- (id)_sharedBlobMutableData;	// 0x345f91b1
- (id)_tracksFromClusterForPlaylistItemMax:(unsigned)playlistItemMax error:(id *)error;	// 0x345faa59
- (void)dealloc;	// 0x345f9141
- (id)tracksFromClusterForCount:(unsigned)count error:(id *)error;	// 0x345fa771
@end
