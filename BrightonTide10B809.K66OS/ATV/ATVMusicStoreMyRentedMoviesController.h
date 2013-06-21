/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRCursorControl, ATVRentedMediaProvider, BRGridView, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMyRentedMoviesController : BRController {
	ATVRentedMediaProvider *_rentals;	// 100 = 0x64
	BRScrollControl *_scroller;	// 104 = 0x68
	BRGridView *_grid;	// 108 = 0x6c
	BRCursorControl *_cursor;	// 112 = 0x70
	int _numberOfExistingRentals;	// 116 = 0x74
	BOOL _allowOurselfToBeRemovedFromStack;	// 120 = 0x78
}
@property(readonly, assign) BOOL allowOurselfToBeRemovedFromStack;	// G=0x216549; @synthesize=_allowOurselfToBeRemovedFromStack
@property(readonly, assign) BRCursorControl *cursor;	// G=0x216521; @synthesize=_cursor
@property(readonly, assign) BRGridView *grid;	// G=0x21650d; @synthesize=_grid
@property(readonly, assign) int numberOfExistingRentals;	// G=0x216535; @synthesize=_numberOfExistingRentals
@property(readonly, assign) ATVRentedMediaProvider *rentals;	// G=0x2164e5; @synthesize=_rentals
@property(readonly, assign) BRScrollControl *scroller;	// G=0x2164f9; @synthesize=_scroller
- (id)init;	// 0x216155
- (id)initWithRentalsProvider:(id)rentalsProvider;	// 0x21619d
- (void)_rentalsUpdated:(id)updated;	// 0x216441
- (void)_setupView;	// 0x216561
// declared property getter: - (BOOL)allowOurselfToBeRemovedFromStack;	// 0x216549
// declared property getter: - (id)cursor;	// 0x216521
- (void)dealloc;	// 0x21629d
// declared property getter: - (id)grid;	// 0x21650d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x2164d9
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x216475
- (void)layoutSubcontrols;	// 0x216355
- (long)numberOfColumnsInGrid:(id)grid;	// 0x216471
// declared property getter: - (int)numberOfExistingRentals;	// 0x216535
- (long)numberOfItemsInGrid:(id)grid;	// 0x216451
// declared property getter: - (id)rentals;	// 0x2164e5
// declared property getter: - (id)scroller;	// 0x2164f9
@end
