/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewCell.h> // Unknown library

@class MPTimeMarker, MPVideoChapterCellContentView, MPImageCache;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 300 = 0x12c
}
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x336f62e1; S=0x336f62c1; 
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x336f6199; S=0x336f61bd; 
@property(assign, nonatomic) unsigned index;	// G=0x336f6179; S=0x336f61dd; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x336f625d; S=0x336f61fd; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x336f6281; S=0x336f621d; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x336f62a1; S=0x336f623d; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x336f5fa1
// declared property getter: - (id)artworkImageCache;	// 0x336f62e1
- (void)dealloc;	// 0x336f60d5
// declared property getter: - (unsigned)index;	// 0x336f6179
// declared property getter: - (BOOL)isCurrent;	// 0x336f6199
- (void)prepareForReuse;	// 0x336f6321
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x336f62c1
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x336f6301
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x336f61bd
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x336f61dd
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x336f6125
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x336f61fd
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x336f621d
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x336f623d
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x336f625d
// declared property getter: - (float)timeColumnWidth;	// 0x336f6281
// declared property getter: - (id)timeMarker;	// 0x336f62a1
@end
