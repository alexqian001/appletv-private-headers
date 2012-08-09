/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItem.h"


@interface MPNondurableMediaItem : MPMediaItem {
	unsigned long long _persistentID;	// 4 = 0x4
}
@property(readonly, assign) unsigned long long persistentID;	// G=0x34199149; converted property
+ (BOOL)canFilterByProperty:(id)property;	// 0x341991b1
+ (id)defaultPropertyValues;	// 0x341991b5
- (id)initWithCoder:(id)coder;	// 0x3419941d
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x34199105
- (void)clearBookmarkTime;	// 0x341991ad
- (void)dealloc;	// 0x34199165
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x34199191
- (void)encodeWithCoder:(id)coder;	// 0x34199481
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x341994c1
- (BOOL)existsInLibrary;	// 0x34199161
- (void)incrementPlayCountForPlayingToEnd;	// 0x341991a1
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x341991a5
- (void)incrementSkipCount;	// 0x3419919d
- (BOOL)isUsableAsRepresentativeItem;	// 0x3419958d
- (void)markNominalAmountHasBeenPlayed;	// 0x34199195
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x34199199
// converted property getter: - (unsigned long long)persistentID;	// 0x34199149
- (void)setValue:(id)value forKey:(id)key;	// 0x341993a1
- (void)updateLastUsedDateToCurrentDate;	// 0x341991a9
- (id)valueForProperty:(id)property;	// 0x341992ad
- (id)valuesForProperties:(id)properties;	// 0x341991b9
@end
