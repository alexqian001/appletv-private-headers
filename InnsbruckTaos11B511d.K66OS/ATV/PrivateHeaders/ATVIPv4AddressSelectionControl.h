/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVIPv4AddressSelectionWidget, BRImageControl, BRTextControl, NSArray;

__attribute__((visibility("hidden")))
@interface ATVIPv4AddressSelectionControl : BRControl {
	NSArray *_octetBackgroundLayers;	// 84 = 0x54
	NSArray *_digitLayers;	// 88 = 0x58
	NSArray *_dotLayers;	// 92 = 0x5c
	BRImageControl *_arrowsLayer;	// 96 = 0x60
	ATVIPv4AddressSelectionWidget *_selectionWidget;	// 100 = 0x64
	BRTextControl *_doneLayer;	// 104 = 0x68
	int _selection;	// 108 = 0x6c
}
- (id)init;	// 0x216489
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x218141
- (id)_buildArrowsLayer;	// 0x217b25
- (id)_buildDigitLayers;	// 0x21791d
- (id)_buildDoneLayer;	// 0x217b91
- (id)_buildDotLayers;	// 0x217a21
- (id)_buildOctetBackgroundLayers;	// 0x217861
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x218329
- (CGRect)_digitFrameForSelection:(int)selection;	// 0x21822d
- (float)_layoutUIWithHeight:(float)height;	// 0x217c69
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x218061
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x21866d
- (void)_setDigitValue:(int)value atIndex:(int)index;	// 0x218751
- (void)_setSelection:(int)selection;	// 0x2184e5
- (float)_singleCellWidth;	// 0x218485
- (id)_textEntryGlyphAttributes;	// 0x218881
- (id)_textEntryGlyphGrayAttributes;	// 0x2188a1
- (id)accessibilityLabel;	// 0x2188c5
- (id)accessibilityTraitsList;	// 0x218951
- (void)controlWasActivated;	// 0x216739
- (void)dealloc;	// 0x216685
- (BOOL)decrementSelection;	// 0x216d65
- (BOOL)doneButtonSelected;	// 0x217259
- (BOOL)incrementSelection;	// 0x216a75
- (id)ipAddress;	// 0x217059
- (BOOL)moveSelectionLeft;	// 0x21699d
- (BOOL)moveSelectionRight;	// 0x2168c5
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x216799
- (void)reset;	// 0x217281
- (void)setFrame:(CGRect)frame;	// 0x2174a1
- (void)setIPAddress:(id)address;	// 0x21729d
- (BOOL)setValueAtSelection:(int)selection;	// 0x217599
@end
