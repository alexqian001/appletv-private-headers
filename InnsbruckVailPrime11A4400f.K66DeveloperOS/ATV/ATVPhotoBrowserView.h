/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRCursorControl, BRScrollControl, BRGridView, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl, BRPhotoBrowserCorkBoardControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoBrowserView : BRControl {
	BRPhotoBrowserHeaderControl *headerView;	// 84 = 0x54
	BRPhotoBrowserBannerButton *slideshowButton;	// 88 = 0x58
	BRGridView *gridView;	// 92 = 0x5c
	BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// 96 = 0x60
	BRScrollControl *_scrollControl;	// 100 = 0x64
	BRCursorControl *_cursorControl;	// 104 = 0x68
	int _style;	// 108 = 0x6c
}
@property(retain, nonatomic) BRPhotoBrowserCorkBoardControl *_corkBoardControl;	// G=0x39a235; S=0x39a245; @synthesize
@property(retain, nonatomic) BRCursorControl *_cursorControl;	// G=0x39a275; S=0x39a285; @synthesize
@property(retain, nonatomic) BRScrollControl *_scrollControl;	// G=0x39a255; S=0x39a265; @synthesize
@property(readonly, assign, nonatomic) BRGridView *gridView;	// G=0x39a225; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserHeaderControl *headerView;	// G=0x39a205; @synthesize
@property(readonly, assign, nonatomic) BRPhotoBrowserBannerButton *slideshowButton;	// G=0x39a215; @synthesize
@property(assign, nonatomic) int style;	// G=0x39a295; S=0x39a2a5; @synthesize=_style
+ (id)photoBrowserViewWithStyle:(int)style;	// 0x399ce5
- (id)initWithPhotoBrowserViewStyle:(int)photoBrowserViewStyle;	// 0x399d2d
// declared property getter: - (id)_corkBoardControl;	// 0x39a235
// declared property getter: - (id)_cursorControl;	// 0x39a275
- (id)_iconWithName:(id)name;	// 0x39a8c1
// declared property getter: - (id)_scrollControl;	// 0x39a255
- (void)_setupControls;	// 0x39a2b5
- (void)dealloc;	// 0x399e19
- (void)focusControlAtIndex:(long)index;	// 0x39a125
// declared property getter: - (id)gridView;	// 0x39a225
// declared property getter: - (id)headerView;	// 0x39a205
- (void)layoutSubcontrols;	// 0x399ecd
// declared property setter: - (void)setStyle:(int)style;	// 0x39a2a5
// declared property setter: - (void)set_corkBoardControl:(id)control;	// 0x39a245
// declared property setter: - (void)set_cursorControl:(id)control;	// 0x39a285
// declared property setter: - (void)set_scrollControl:(id)control;	// 0x39a265
// declared property getter: - (id)slideshowButton;	// 0x39a215
// declared property getter: - (int)style;	// 0x39a295
@end
