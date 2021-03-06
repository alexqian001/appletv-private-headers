/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class ATVCursorTracker, BRGridView, BRPhotoBrowserHeaderControl, ATVCarouselView;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *_header;	// 84 = 0x54
	BRControl *_photoContainer;	// 88 = 0x58
	id _onContainerLayout;	// 92 = 0x5c
	ATVCursorTracker *_cursorTracker;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) ATVCarouselView *carousel;	// G=0xd8201; 
@property(retain, nonatomic) ATVCursorTracker *cursorTracker;	// G=0xd816d; S=0xd817d; @synthesize=_cursorTracker
@property(readonly, assign, nonatomic) BRGridView *grid;	// G=0xd84e5; 
@property(retain, nonatomic) BRPhotoBrowserHeaderControl *header;	// G=0xd8101; S=0xd8111; @synthesize=_header
@property(copy, nonatomic) id onContainerLayout;	// G=0xd8149; S=0xd815d; @synthesize=_onContainerLayout
@property(retain, nonatomic) BRControl *photoContainer;	// G=0xd8139; S=0xd7db9; @synthesize=_photoContainer
- (id)init;	// 0xd7c2d
- (void).cxx_destruct;	// 0xd81a5
- (id)accessibilityLabel;	// 0xd80b9
// declared property getter: - (id)carousel;	// 0xd8201
- (void)configureCarouselAsPhotoContainer;	// 0xd8285
- (void)configureGridAsPhotoContainer;	// 0xd85ed
// declared property getter: - (id)cursorTracker;	// 0xd816d
- (void)focusGridControlAtIndex:(int)index;	// 0xd8729
// declared property getter: - (id)grid;	// 0xd84e5
// declared property getter: - (id)header;	// 0xd8101
- (void)layoutSubcontrols;	// 0xd7e7d
// declared property getter: - (id)onContainerLayout;	// 0xd8149
// declared property getter: - (id)photoContainer;	// 0xd8139
// declared property setter: - (void)setCursorTracker:(id)tracker;	// 0xd817d
// declared property setter: - (void)setHeader:(id)header;	// 0xd8111
// declared property setter: - (void)setOnContainerLayout:(id)layout;	// 0xd815d
// declared property setter: - (void)setPhotoContainer:(id)container;	// 0xd7db9
@end

