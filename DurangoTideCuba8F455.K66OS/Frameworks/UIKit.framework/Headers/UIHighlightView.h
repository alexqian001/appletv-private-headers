/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface UIHighlightView : UIView {
@private
	UIColor *_color;	// 44 = 0x2c
	float _cornerRadius;	// 48 = 0x30
	CGRect _invertedHighlightClipRect;	// 52 = 0x34
	NSArray *_cornerRadii;	// 68 = 0x44
	NSMutableArray *_innerBounds;	// 72 = 0x48
	NSMutableArray *_innerQuads;	// 76 = 0x4c
	BOOL _invertHighlight;	// 80 = 0x50
}
- (id)initWithFrame:(CGRect)frame;	// 0x3018635d
- (void)cleanUp;	// 0x30186429
- (void)dealloc;	// 0x3022f67d
- (void)drawRect:(CGRect)rect;	// 0x3018756d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3022f679
- (void)setColor:(id)color;	// 0x30186489
- (void)setCornerRadii:(id)radii;	// 0x301867fd
- (void)setCornerRadius:(float)radius;	// 0x30186479
- (void)setFrame:(CGRect)frame;	// 0x301863cd
- (void)setFrames:(id)frames boundaryRect:(CGRect)rect;	// 0x301869a5
- (void)setInvertHighlight:(BOOL)highlight clipRect:(CGRect)rect;	// 0x3022f645
- (void)setQuads:(id)quads boundaryRect:(CGRect)rect;	// 0x3022f6e9
@end
