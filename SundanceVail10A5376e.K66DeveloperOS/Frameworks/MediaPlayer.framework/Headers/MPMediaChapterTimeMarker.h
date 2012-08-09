/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTimeMarker.h"

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {
	unsigned _chapterIndex;	// 40 = 0x28
	NSArray *_chapters;	// 44 = 0x2c
	BOOL _hasArtworkAtPlaybackTime;	// 48 = 0x30
}
@property(assign, nonatomic) unsigned chapterIndex;	// G=0x36d1a535; S=0x36d1a545; @synthesize=_chapterIndex
@property(retain, nonatomic) NSArray *chapters;	// G=0x36d1a555; S=0x36d1a565; @synthesize=_chapters
@property(assign, nonatomic) BOOL hasArtworkAtPlaybackTime;	// G=0x36d1a575; S=0x36d1a585; @synthesize=_hasArtworkAtPlaybackTime
// declared property getter: - (unsigned)chapterIndex;	// 0x36d1a535
// declared property getter: - (id)chapters;	// 0x36d1a555
- (void)dealloc;	// 0x36d1a4e9
// declared property getter: - (BOOL)hasArtworkAtPlaybackTime;	// 0x36d1a575
// declared property setter: - (void)setChapterIndex:(unsigned)index;	// 0x36d1a545
// declared property setter: - (void)setChapters:(id)chapters;	// 0x36d1a565
// declared property setter: - (void)setHasArtworkAtPlaybackTime:(BOOL)playbackTime;	// 0x36d1a585
@end
