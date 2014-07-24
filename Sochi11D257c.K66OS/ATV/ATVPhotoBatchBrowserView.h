/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRPhotoBrowserHeaderControl, ATVCarouselView, ATVCursorTracker, BRGridView;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *_header;	// 84 = 0x54
	BRControl *_photoContainer;	// 88 = 0x58
	id _onContainerLayout;	// 92 = 0x5c
	ATVCursorTracker *_cursorTracker;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) ATVCarouselView *carousel;	// G=0xd89f1; 
@property(retain, nonatomic) ATVCursorTracker *cursorTracker;	// G=0xd895d; S=0xd896d; @synthesize=_cursorTracker
@property(readonly, assign, nonatomic) BRGridView *grid;	// G=0xd8cd5; 
@property(retain, nonatomic) BRPhotoBrowserHeaderControl *header;	// G=0xd88f1; S=0xd8901; @synthesize=_header
@property(copy, nonatomic) id onContainerLayout;	// G=0xd8939; S=0xd894d; @synthesize=_onContainerLayout
@property(retain, nonatomic) BRControl *photoContainer;	// G=0xd8929; S=0xd85a9; @synthesize=_photoContainer
- (id)init;	// 0xd841d
- (void).cxx_destruct;	// 0xd8995
- (id)accessibilityLabel;	// 0xd88a9
// declared property getter: - (id)carousel;	// 0xd89f1
- (void)configureCarouselAsPhotoContainer;	// 0xd8a75
- (void)configureGridAsPhotoContainer;	// 0xd8ddd
// declared property getter: - (id)cursorTracker;	// 0xd895d
- (void)focusGridControlAtIndex:(int)index;	// 0xd8f19
// declared property getter: - (id)grid;	// 0xd8cd5
// declared property getter: - (id)header;	// 0xd88f1
- (void)layoutSubcontrols;	// 0xd866d
// declared property getter: - (id)onContainerLayout;	// 0xd8939
// declared property getter: - (id)photoContainer;	// 0xd8929
// declared property setter: - (void)setCursorTracker:(id)tracker;	// 0xd896d
// declared property setter: - (void)setHeader:(id)header;	// 0xd8901
// declared property setter: - (void)setOnContainerLayout:(id)layout;	// 0xd894d
// declared property setter: - (void)setPhotoContainer:(id)container;	// 0xd85a9
@end
