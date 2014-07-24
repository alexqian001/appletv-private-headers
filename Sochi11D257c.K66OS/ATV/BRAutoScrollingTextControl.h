/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSAttributedString, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
	NSAttributedString *_text;	// 84 = 0x54
	BRMarqueeTextControl *_scrollingTextControl;	// 88 = 0x58
	BRTextControl *_textControl;	// 92 = 0x5c
	BOOL _crossfadeEnabled;	// 96 = 0x60
	BOOL _autoScrollEnabled;	// 97 = 0x61
	BOOL _displaysText;	// 98 = 0x62
	BOOL _useAlphaFadeMask;	// 99 = 0x63
	BOOL _animationUsesDelay;	// 100 = 0x64
	BOOL _animateOnEnter;	// 101 = 0x65
	BOOL _skipsNextAnimations;	// 102 = 0x66
}
@property(assign, nonatomic) BOOL animateOnEnter;	// G=0x358465; S=0x358475; @synthesize=_animateOnEnter
@property(assign) BOOL animationUsesDelay;	// G=0x357e91; S=0x357e81; converted property
@property(retain) id attributedString;	// G=0x357d69; S=0x357cb1; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x357dc5; S=0x357d99; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x357d89; S=0x357d79; converted property
@property(assign) BOOL displaysText;	// G=0x357e71; S=0x357dd5; converted property
@property(assign, nonatomic) BOOL skipsNextAnimations;	// G=0x358485; S=0x358495; @synthesize=_skipsNextAnimations
@property(assign) BOOL useAlphaFadeMask;	// G=0x357eb1; S=0x357ea1; converted property
- (id)init;	// 0x357b71
- (void)_removeMarqueeControl;	// 0x3584e9
- (void)_removeTextControl;	// 0x3584a5
// declared property getter: - (BOOL)animateOnEnter;	// 0x358465
// converted property getter: - (BOOL)animationUsesDelay;	// 0x357e91
// converted property getter: - (id)attributedString;	// 0x357d69
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x357dc5
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x357d89
- (void)dealloc;	// 0x357bc9
// converted property getter: - (BOOL)displaysText;	// 0x357e71
- (void)layoutSubcontrols;	// 0x357ef1
- (id)preferredActionForKey:(id)key;	// 0x358361
// declared property setter: - (void)setAnimateOnEnter:(BOOL)enter;	// 0x358475
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x357e81
// converted property setter: - (void)setAttributedString:(id)string;	// 0x357cb1
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x357d99
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x357d79
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x357dd5
- (void)setNeedsLayoutWithoutAnimations;	// 0x357ec1
// declared property setter: - (void)setSkipsNextAnimations:(BOOL)animations;	// 0x358495
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x357c41
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x357ea1
// declared property getter: - (BOOL)skipsNextAnimations;	// 0x358485
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x357eb1
@end
