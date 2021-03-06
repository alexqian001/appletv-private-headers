/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library

@class NSURL, UIImage;
@protocol MPNowPlayingItemQueueInfoButtonDelegate;

@interface MPNowPlayingItemQueueInfoButton : UIButton {
	UIImage *_infoCircleImage;	// 140 = 0x8c
	NSURL *_infoURL;	// 144 = 0x90
	BOOL _infoURLIsTimed;	// 148 = 0x94
	unsigned _infoFeederCount;	// 152 = 0x98
	float _minSizingTextWidth;	// 156 = 0x9c
	unsigned _minSizingPositionInQueue;	// 160 = 0xa0
	int _layoutDisabledCount;	// 164 = 0xa4
	unsigned _allowedDisplayTypes;	// 168 = 0xa8
	int _infoTypeForLayout;	// 172 = 0xac
	id<MPNowPlayingItemQueueInfoButtonDelegate> _delegate;	// 176 = 0xb0
}
@property(assign, nonatomic) unsigned allowedDisplayTypes;	// G=0x35bb68dd; S=0x35bb68ed; @synthesize=_allowedDisplayTypes
@property(assign, nonatomic) id<MPNowPlayingItemQueueInfoButtonDelegate> delegate;	// G=0x35bb68fd; S=0x35bb690d; @synthesize=_delegate
@property(readonly, assign, nonatomic) int infoDisplayType;	// G=0x35bb5cf5; 
@property(retain, nonatomic) NSURL *infoURL;	// G=0x35bb68a9; S=0x35bb68b9; @synthesize=_infoURL
- (id)init;	// 0x35bb598d
- (int)_activeDisplayType;	// 0x35bb6471
- (int)_infoDisplayTypeForURL:(id)url urlIsTimed:(BOOL)timed feederCount:(unsigned)count askDelegate:(BOOL)delegate;	// 0x35bb5c6d
- (float)_minSizingTextWidth;	// 0x35bb5d49
- (BOOL)_shouldDisplaysInfoCircleImage;	// 0x35bb649d
- (void)_updateFeederCountInfo:(id)info;	// 0x35bb5ef9
// declared property getter: - (unsigned)allowedDisplayTypes;	// 0x35bb68dd
- (int)buttonType;	// 0x35bb5c69
- (void)clearWeakReferencesToObject:(id)object;	// 0x35bb5bf1
- (void)clicked:(id)clicked;	// 0x35bb684d
- (void)configureForItem:(id)item;	// 0x35bb6801
- (BOOL)configureForItem:(id)item atTime:(double)time;	// 0x35bb64b9
- (void)dealloc;	// 0x35bb5c09
// declared property getter: - (id)delegate;	// 0x35bb68fd
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x35bb62c1
// declared property getter: - (int)infoDisplayType;	// 0x35bb5cf5
// declared property getter: - (id)infoURL;	// 0x35bb68a9
- (void)layoutSubviews;	// 0x35bb6435
// declared property setter: - (void)setAllowedDisplayTypes:(unsigned)types;	// 0x35bb68ed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35bb690d
// declared property setter: - (void)setInfoURL:(id)url;	// 0x35bb68b9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35bb5fb1
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x35bb6191
- (void)updateForItemCrossedTimeMarkerNotification:(id)itemCrossedTimeMarkerNotification currentTime:(double)time;	// 0x35bb6829
@end

