/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"

@class NSArray, MPMediaItemArtwork, NSDate, NSString;

@interface MPMediaItem : MPMediaEntity {
}
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x2e2b0b1d; 
@property(readonly, assign, nonatomic) NSString *albumTitle;	// G=0x2e2b0b99; 
@property(readonly, assign, nonatomic) unsigned albumTrackNumber;	// G=0x2e2b14f5; 
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x2e2b0bb5; 
@property(readonly, assign, nonatomic) MPMediaItemArtwork *artwork;	// G=0x2e2b0bd1; 
@property(readonly, assign, nonatomic) double bookmarkTime;	// G=0x2e2b0bed; 
@property(readonly, assign, nonatomic) NSArray *chapters;	// G=0x2e2b023d; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x2e2b0c35; 
@property(copy, nonatomic) NSDate *dateAccessed;	// G=0x2e2b1241; S=0x2e2b125d; 
@property(readonly, assign, nonatomic) NSString *effectiveAlbumArtist;	// G=0x2e2b0b39; 
@property(readonly, assign, nonatomic) double effectiveStopTime;	// G=0x2e2b0ec5; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x2e2b0c51; 
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x2e2b1411; S=0x2e2b1455; 
@property(readonly, assign, nonatomic) BOOL isITunesU;	// G=0x2e2b0d65; 
@property(readonly, assign, nonatomic) BOOL isRental;	// G=0x2e2b0c6d; 
@property(readonly, assign, nonatomic) BOOL isUsableAsRepresentativeItem;	// G=0x2e2b1ce9; 
@property(copy, nonatomic) NSDate *lastPlayedDate;	// G=0x2e2b11f9; S=0x2e2b1215; 
@property(copy, nonatomic) NSDate *lastSkippedDate;	// G=0x2e2b13c9; S=0x2e2b13e5; 
@property(readonly, assign, nonatomic) unsigned mediaType;	// G=0x2e2b0da9; 
@property(readonly, assign, nonatomic) BOOL mediaTypeCanSeedGenius;	// G=0x2e36ba89; 
@property(assign, nonatomic) unsigned playCount;	// G=0x2e2b10b9; S=0x2e2b10fd; 
@property(assign, nonatomic) unsigned playCountSinceSync;	// G=0x2e2b1159; S=0x2e2b119d; 
@property(readonly, assign, nonatomic) double playbackDuration;	// G=0x2e2b0ded; 
@property(readonly, assign, nonatomic) NSString *podcastTitle;	// G=0x2e2b0f09; 
@property(assign, nonatomic) unsigned rating;	// G=0x2e2b0f25; S=0x2e2b0f69; 
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x2e2b0fc5; 
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;	// G=0x2e2b14b1; 
@property(assign, nonatomic) unsigned skipCount;	// G=0x2e2b1289; S=0x2e2b12cd; 
@property(assign, nonatomic) unsigned skipCountSinceSync;	// G=0x2e2b1329; S=0x2e2b136d; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x2e2b0e35; 
@property(readonly, assign, nonatomic) double stopTime;	// G=0x2e2b0e7d; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x2e2b0fe1; 
@property(readonly, assign, nonatomic) unsigned year;	// G=0x2e2b0ffd; 
+ (void)_createFilterableDictionary;	// 0x2e2b0259
+ (BOOL)_isValidItemProperty:(id)property;	// 0x2e2b0ab9
+ (BOOL)canFilterByProperty:(id)property;	// 0x2e2af831
+ (id)dynamicProperties;	// 0x2e2b00e1
+ (id)fallbackTitlePropertyForGroupingType:(int)groupingType;	// 0x2e2b00b1
+ (id)persistentIDPropertyForGroupingType:(int)groupingType;	// 0x2e2affa1
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x2e2b001d
- (id)initWithCoder:(id)coder;	// 0x2e2af701
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x2e2af5e1
- (BOOL)MPSD_isDownloadInProgress;	// 0x2e3926c9
- (BOOL)MPSD_isDownloadable;	// 0x2e392475
- (id)_bestStoreURL;	// 0x2e2afea9
- (id)_directStoreURL;	// 0x2e2b1ced
- (id)_libraryLinkArtist;	// 0x2e2b1f29
- (id)_libraryLinkKind;	// 0x2e2b1fbd
- (id)_libraryLinkPlaylistName;	// 0x2e2b2099
- (id)_libraryLinkURL;	// 0x2e2b2155
// declared property getter: - (id)albumArtist;	// 0x2e2b0b1d
// declared property getter: - (id)albumTitle;	// 0x2e2b0b99
// declared property getter: - (unsigned)albumTrackNumber;	// 0x2e2b14f5
// declared property getter: - (id)artist;	// 0x2e2b0bb5
// declared property getter: - (id)artwork;	// 0x2e2b0bd1
// declared property getter: - (double)bookmarkTime;	// 0x2e2b0bed
- (id)chapterOfType:(int)type atIndex:(unsigned)index;	// 0x2e2b169d
- (id)chapterOfType:(int)type atTime:(double)time;	// 0x2e2b17b1
// declared property getter: - (id)chapters;	// 0x2e2b023d
- (id)chaptersOfType:(int)type;	// 0x2e2b1539
// declared property getter: - (id)composer;	// 0x2e2b0c35
- (unsigned)countOfChaptersOfType:(int)type;	// 0x2e2b1901
// declared property getter: - (id)dateAccessed;	// 0x2e2b1241
- (void)didReceiveMemoryWarning;	// 0x2e2afea5
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x2e2afa45
// declared property getter: - (id)effectiveAlbumArtist;	// 0x2e2b0b39
// declared property getter: - (double)effectiveStopTime;	// 0x2e2b0ec5
- (void)encodeWithCoder:(id)coder;	// 0x2e2af78d
- (BOOL)existsInLibrary;	// 0x2e2aff01
- (void)gaplessHeuristicInfo:(unsigned *)info durationInSamples:(unsigned long long *)samples lastPacketsResync:(unsigned long long *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x2e2b19e9
// declared property getter: - (id)genre;	// 0x2e2b0c51
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x2e2b1411
- (unsigned)hash;	// 0x2e2af645
- (void)incrementPlayCountForPlayingToEnd;	// 0x2e2afcc5
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x2e2afd65
- (void)incrementSkipCount;	// 0x2e2afc25
- (BOOL)isEqual:(id)equal;	// 0x2e2af65d
// declared property getter: - (BOOL)isITunesU;	// 0x2e2b0d65
// declared property getter: - (BOOL)isRental;	// 0x2e2b0c6d
// declared property getter: - (BOOL)isUsableAsRepresentativeItem;	// 0x2e2b1ce9
- (Class)itemArrayCoderPIDDataCodingClass;	// 0x2e2af82d
// declared property getter: - (id)lastPlayedDate;	// 0x2e2b11f9
// declared property getter: - (id)lastSkippedDate;	// 0x2e2b13c9
- (void)markNominalAmountHasBeenPlayed;	// 0x2e2afae5
// declared property getter: - (unsigned)mediaType;	// 0x2e2b0da9
// declared property getter: - (BOOL)mediaTypeCanSeedGenius;	// 0x2e36ba89
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x2e2afb85
// declared property getter: - (unsigned)playCount;	// 0x2e2b10b9
// declared property getter: - (unsigned)playCountSinceSync;	// 0x2e2b1159
// declared property getter: - (double)playbackDuration;	// 0x2e2b0ded
// declared property getter: - (id)podcastTitle;	// 0x2e2b0f09
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x2e2b01ed
- (id)predicateForProperty:(id)property;	// 0x2e2b1041
// declared property getter: - (unsigned)rating;	// 0x2e2b0f25
// declared property getter: - (id)releaseDate;	// 0x2e2b0fc5
// declared property getter: - (BOOL)rememberBookmarkTime;	// 0x2e2b14b1
- (id)representativeItem;	// 0x2e2afefd
// declared property setter: - (void)setDateAccessed:(id)accessed;	// 0x2e2b125d
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x2e2b1455
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x2e2b1215
// declared property setter: - (void)setLastSkippedDate:(id)date;	// 0x2e2b13e5
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x2e2b10fd
// declared property setter: - (void)setPlayCountSinceSync:(unsigned)sync;	// 0x2e2b119d
// declared property setter: - (void)setRating:(unsigned)rating;	// 0x2e2b0f69
// declared property setter: - (void)setSkipCount:(unsigned)count;	// 0x2e2b12cd
// declared property setter: - (void)setSkipCountSinceSync:(unsigned)sync;	// 0x2e2b136d
// declared property getter: - (unsigned)skipCount;	// 0x2e2b1289
// declared property getter: - (unsigned)skipCountSinceSync;	// 0x2e2b1329
// declared property getter: - (double)startTime;	// 0x2e2b0e35
// declared property getter: - (double)stopTime;	// 0x2e2b0e7d
// declared property getter: - (id)title;	// 0x2e2b0fe1
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id)writeCompletionBlock;	// 0x2e2afe05
- (id)valueForProperty:(id)property;	// 0x2e2af8c9
- (id)valuesForProperties:(id)properties;	// 0x2e2af9a5
// declared property getter: - (unsigned)year;	// 0x2e2b0ffd
@end

