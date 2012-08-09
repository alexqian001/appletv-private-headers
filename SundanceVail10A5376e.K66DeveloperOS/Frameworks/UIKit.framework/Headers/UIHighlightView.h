/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, NSMutableArray, UIColor;

__attribute__((visibility("hidden")))
@interface UIHighlightView : UIView {
	UIColor *_color;	// 84 = 0x54
	float _cornerRadius;	// 88 = 0x58
	CGRect _invertedHighlightClipRect;	// 92 = 0x5c
	NSArray *_cornerRadii;	// 108 = 0x6c
	NSMutableArray *_innerBounds;	// 112 = 0x70
	NSMutableArray *_innerQuads;	// 116 = 0x74
	BOOL _invertHighlight;	// 120 = 0x78
}
- (id)initWithFrame:(CGRect)frame;	// 0x3036c279
- (void)cleanUp;	// 0x3036c329
- (void)dealloc;	// 0x30454441
- (void)drawRect:(CGRect)rect;	// 0x30454ce1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30455391
- (void)setColor:(id)color;	// 0x3036c389
- (void)setCornerRadii:(id)radii;	// 0x304544b5
- (void)setCornerRadius:(float)radius;	// 0x3036c379
- (void)setFrame:(CGRect)frame;	// 0x3036c2d9
- (void)setFrames:(id)frames boundaryRect:(CGRect)rect;	// 0x304544f9
- (void)setInvertHighlight:(BOOL)highlight clipRect:(CGRect)rect;	// 0x30454cb5
- (void)setQuads:(id)quads boundaryRect:(CGRect)rect;	// 0x3045489d
@end
