/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPAVItem, NSURL;

@interface MPMovie : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	int _movieSourceType;	// 12 = 0xc
	double _startPlaybackTime;	// 16 = 0x10
	double _endPlaybackTime;	// 24 = 0x18
	BOOL _explicitlySetMovieSourceType;	// 32 = 0x20
	BOOL _movieIsUnplayable;	// 33 = 0x21
	double _lastKnownDuration;	// 36 = 0x24
	CGSize _lastKnownNaturalSize;	// 44 = 0x2c
	unsigned _lastKnownType;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) double duration;	// G=0x33733929; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x33733a41; S=0x33733a2d; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x3373385d; 
@property(assign, nonatomic) int movieSourceType;	// G=0x33733919; S=0x3373389d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x337339b9; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x33733971; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x33733a15; S=0x33733a01; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x3373384d; 
+ (id)movieWithURL:(id)url options:(id)options error:(id *)error;	// 0x33733559
- (id)_MPArrayQueueItem;	// 0x33733cad
- (void)_determineMediaType;	// 0x33733d69
- (void)_durationAvailableNotification:(id)notification;	// 0x33733a59
- (id)_initWithURL:(id)url options:(id)options error:(id *)error;	// 0x337335ad
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x33733b19
- (void)_typeAvailableNotification:(id)notification;	// 0x33733bfd
- (void)dealloc;	// 0x33733761
// declared property getter: - (double)duration;	// 0x33733929
// declared property getter: - (double)endPlaybackTime;	// 0x33733a41
// declared property getter: - (int)movieMediaTypes;	// 0x3373385d
// declared property getter: - (int)movieSourceType;	// 0x33733919
// declared property getter: - (CGSize)naturalSize;	// 0x337339b9
// declared property getter: - (double)playableDuration;	// 0x33733971
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x33733a2d
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x3373389d
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x33733a01
// declared property getter: - (double)startPlaybackTime;	// 0x33733a15
// declared property getter: - (id)url;	// 0x3373384d
@end

