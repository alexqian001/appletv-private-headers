/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPMediaChapter : NSObject {
	int _chapterType;	// 4 = 0x4
	unsigned _indexInChaptersWithAnyType;	// 8 = 0x8
	unsigned _indexInChaptersWithSameType;	// 12 = 0xc
	double _playbackDuration;	// 16 = 0x10
	double _playbackTime;	// 24 = 0x18
	id _value;	// 32 = 0x20
	id _valueLoader;	// 36 = 0x24
}
@property(assign, nonatomic) int chapterType;	// G=0x341d8b79; S=0x341d8b89; @synthesize=_chapterType
@property(assign, nonatomic) unsigned indexInChaptersWithAnyType;	// G=0x341d8b39; S=0x341d8b49; @synthesize=_indexInChaptersWithAnyType
@property(assign, nonatomic) unsigned indexInChaptersWithSameType;	// G=0x341d8b59; S=0x341d8b69; @synthesize=_indexInChaptersWithSameType
@property(assign, nonatomic) double playbackDuration;	// G=0x341d8b99; S=0x341d8bb1; @synthesize=_playbackDuration
@property(assign, nonatomic) double playbackTime;	// G=0x341d8bc5; S=0x341d8bdd; @synthesize=_playbackTime
@property(retain, nonatomic) id value;	// G=0x341d8aa5; S=0x341d8bf1; @synthesize=_value
@property(copy, nonatomic) id valueLoader;	// G=0x341d8c01; S=0x341d8c15; @synthesize=_valueLoader
- (id)initWithCoder:(id)coder;	// 0x341d88dd
- (int)_sortByChapterIndex:(id)index;	// 0x341d6245
// declared property getter: - (int)chapterType;	// 0x341d8b79
- (void)dealloc;	// 0x341d8609
- (id)description;	// 0x341d866d
- (double)duration;	// 0x341d8b21
- (void)encodeWithCoder:(id)coder;	// 0x341d8761
// declared property getter: - (unsigned)indexInChaptersWithAnyType;	// 0x341d8b39
// declared property getter: - (unsigned)indexInChaptersWithSameType;	// 0x341d8b59
// declared property getter: - (double)playbackDuration;	// 0x341d8b99
// declared property getter: - (double)playbackTime;	// 0x341d8bc5
// declared property setter: - (void)setChapterType:(int)type;	// 0x341d8b89
// declared property setter: - (void)setIndexInChaptersWithAnyType:(unsigned)anyType;	// 0x341d8b49
// declared property setter: - (void)setIndexInChaptersWithSameType:(unsigned)sameType;	// 0x341d8b69
// declared property setter: - (void)setPlaybackDuration:(double)duration;	// 0x341d8bb1
// declared property setter: - (void)setPlaybackTime:(double)time;	// 0x341d8bdd
// declared property setter: - (void)setValue:(id)value;	// 0x341d8bf1
// declared property setter: - (void)setValueLoader:(id)loader;	// 0x341d8c15
- (id)title;	// 0x341d8acd
// declared property getter: - (id)value;	// 0x341d8aa5
// declared property getter: - (id)valueLoader;	// 0x341d8c01
@end

