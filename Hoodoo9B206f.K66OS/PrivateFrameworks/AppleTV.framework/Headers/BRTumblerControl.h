/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl;
@protocol BRTumblerDelegate, BRTumblerDataSource;

@interface BRTumblerControl : BRControl {
@private
	id<BRTumblerDataSource> _dataSource;	// 48 = 0x30
	id<BRTumblerDelegate> _delegate;	// 52 = 0x34
	unsigned _currentIndex;	// 56 = 0x38
	unsigned _itemCount;	// 60 = 0x3c
	BRControl *_currentItem;	// 64 = 0x40
	BRControl *_nextItem;	// 68 = 0x44
	BRControl *_prevItem;	// 72 = 0x48
	BRControl *_nextNextItem;	// 76 = 0x4c
	BRControl *_prevPrevItem;	// 80 = 0x50
	int _tumbleState;	// 84 = 0x54
	BRControl *_nextFade;	// 88 = 0x58
	BRControl *_prevFade;	// 92 = 0x5c
	BRControl *_nextBlackout;	// 96 = 0x60
	BRControl *_prevBlackout;	// 100 = 0x64
	BRImageControl *_nextArrow;	// 104 = 0x68
	BRImageControl *_prevArrow;	// 108 = 0x6c
	CGSize _sizeThatFits;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) BRControl *currentItem;	// G=0x366e1a55; @synthesize=_currentItem
@property(assign, nonatomic) unsigned currentItemIndex;	// G=0x366e08ed; S=0x366e08fd; 
@property(assign, nonatomic) id<BRTumblerDataSource> dataSource;	// G=0x366e1a25; S=0x366e1131; @synthesize=_dataSource
@property(assign, nonatomic) id<BRTumblerDelegate> delegate;	// G=0x366e1a35; S=0x366e1a45; @synthesize=_delegate
@property(readonly, assign) float itemPadding;	// G=0x366e1431; @dynamic
- (id)init;	// 0x366e0321
- (id)_arrowAnimations;	// 0x366e1ef1
- (id)_controlFromDataSourceAtIndex:(unsigned)index;	// 0x366e2029
- (CGPoint)_currentPos;	// 0x366e1d89
- (id)_nextFadeFilters;	// 0x366e1a65
- (CGPoint)_nextNextPos;	// 0x366e1e75
- (CGPoint)_nextPos;	// 0x366e1e01
- (id)_prevFadeFilters;	// 0x366e1b79
- (CGPoint)_prevPos;	// 0x366e1d0d
- (CGPoint)_prevPrevPos;	// 0x366e1c8d
- (BOOL)_tumbleNextShouldAnimate:(BOOL)_tumbleNext;	// 0x366e26e1
- (BOOL)_tumblePrevShouldAnimate:(BOOL)_tumblePrev;	// 0x366e2071
- (id)accessibilityLabel;	// 0x366e2d51
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x366e19cd
- (BOOL)brEventAction:(id)action;	// 0x366e14e1
// declared property getter: - (id)currentItem;	// 0x366e1a55
// declared property getter: - (unsigned)currentItemIndex;	// 0x366e08ed
// declared property getter: - (id)dataSource;	// 0x366e1a25
- (void)dealloc;	// 0x366e07d9
// declared property getter: - (id)delegate;	// 0x366e1a35
// declared property getter: - (float)itemPadding;	// 0x366e1431
- (void)layoutSubcontrols;	// 0x366e0a1d
- (void)reload;	// 0x366e1151
// declared property setter: - (void)setCurrentItemIndex:(unsigned)index;	// 0x366e08fd
// declared property setter: - (void)setDataSource:(id)source;	// 0x366e1131
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x366e1a45
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x366e0929
@end
