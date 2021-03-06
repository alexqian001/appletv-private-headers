/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesRatingControl : BRControl {
	BRImageControl *_freshnessImageControl;	// 84 = 0x54
	BRTextControl *_percentageNumberControl;	// 88 = 0x58
	BRTextControl *_percentageGlyphControl;	// 92 = 0x5c
	BOOL _trickLayouting;	// 96 = 0x60
}
@property(assign) BOOL trickLayouting;	// G=0x208961; S=0x208979; @synthesize=_trickLayouting
+ (id)ratingControlWithItem:(id)item;	// 0x208189
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x208299
- (id)initWithFeedElement:(id)feedElement;	// 0x2083bd
- (id)initWithItem:(id)item;	// 0x2081d5
- (void)_configureControlsWithFreshness:(int)freshness percentage:(id)percentage;	// 0x208991
- (id)accessibilityLabel;	// 0x2088d5
- (void)dealloc;	// 0x2084c1
- (void)layoutSubcontrols;	// 0x208539
// declared property setter: - (void)setTrickLayouting:(BOOL)layouting;	// 0x208979
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x208861
// declared property getter: - (BOOL)trickLayouting;	// 0x208961
@end

