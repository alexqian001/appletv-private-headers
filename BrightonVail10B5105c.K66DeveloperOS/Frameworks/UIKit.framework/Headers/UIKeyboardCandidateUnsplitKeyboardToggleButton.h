/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateToggleButton.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton {
	UIView *_pocketShadow;	// 140 = 0x8c
	UIView *_borderLine;	// 144 = 0x90
	UIImage *_backgroundNormal;	// 148 = 0x94
	UIImage *_backgroundHighlighted;	// 152 = 0x98
	BOOL _drawsBackground;	// 156 = 0x9c
	BOOL _drawsPocketShadow;	// 157 = 0x9d
}
@property(assign, nonatomic) BOOL drawsBackground;	// G=0x34999c61; S=0x34999b7d; @synthesize=_drawsBackground
@property(assign, nonatomic) BOOL drawsPocketShadow;	// G=0x34999c71; S=0x34999c0d; @synthesize=_drawsPocketShadow
- (id)initWithFrame:(CGRect)frame;	// 0x34999645
- (void)dealloc;	// 0x349997a1
// declared property getter: - (BOOL)drawsBackground;	// 0x34999c61
// declared property getter: - (BOOL)drawsPocketShadow;	// 0x34999c71
// declared property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x34999b7d
// declared property setter: - (void)setDrawsPocketShadow:(BOOL)shadow;	// 0x34999c0d
- (void)setFrame:(CGRect)frame;	// 0x3499982d
- (id)toggleButtonBackgroundImageWithHighlight:(BOOL)highlight;	// 0x34999961
- (void)updateBackgroundImages;	// 0x349998d9
@end
