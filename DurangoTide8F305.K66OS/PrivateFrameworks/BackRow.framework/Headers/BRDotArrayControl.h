/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRGridView, BRImage;

__attribute__((visibility("hidden")))
@interface BRDotArrayControl : BRControl {
@private
	long _dotCount;	// 44 = 0x2c
	long _activeDot;	// 48 = 0x30
	BRGridView *_dotGrid;	// 52 = 0x34
	BRImage *_dotOnImage;	// 56 = 0x38
	BRImage *_dotOffImage;	// 60 = 0x3c
}
@property(assign) long activeDot;	// G=0x32a159c9; S=0x32a15a75; converted property
@property(assign) long dotCount;	// G=0x32a159b9; S=0x32a15ac1; converted property
- (id)init;	// 0x32a15af5
- (id)initWithDotCount:(long)dotCount;	// 0x32a15b79
// converted property getter: - (long)activeDot;	// 0x32a159c9
- (void)dealloc;	// 0x32a15b0d
// converted property getter: - (long)dotCount;	// 0x32a159b9
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x32a15ddd
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x32a159f9
- (void)layoutSubcontrols;	// 0x32a15cf9
- (long)numberOfColumnsInGrid:(id)grid;	// 0x32a159e9
- (long)numberOfItemsInGrid:(id)grid;	// 0x32a159d9
// converted property setter: - (void)setActiveDot:(long)dot;	// 0x32a15a75
// converted property setter: - (void)setDotCount:(long)count;	// 0x32a15ac1
@end
