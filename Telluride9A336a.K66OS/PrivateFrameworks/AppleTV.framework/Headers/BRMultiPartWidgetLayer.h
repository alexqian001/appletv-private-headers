/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRMultiPartWidgetLayer : BRControl {
@private
	BOOL _suppressAnimations;	// 49 = 0x31
	BRControl *_topRightCornerControl;	// 52 = 0x34
	BRControl *_topEdgeControl;	// 56 = 0x38
	BRControl *_topLeftCornerControl;	// 60 = 0x3c
	BRControl *_rightEdgeControl;	// 64 = 0x40
	BRControl *_bottomRightCornerControl;	// 68 = 0x44
	BRControl *_bottomEdgeControl;	// 72 = 0x48
	BRControl *_bottomLeftCornerControl;	// 76 = 0x4c
	BRControl *_leftEdgeControl;	// 80 = 0x50
	BRControl *_centerControl;	// 84 = 0x54
	BRControl *_bottomDecoControl;	// 88 = 0x58
	BRControl *_topDecoControl;	// 92 = 0x5c
	float _centerOverlapFactor;	// 96 = 0x60
}
@property(assign, nonatomic) BRImage *bottomDeco;	// G=0x33b00179; S=0x33b0014d; 
@property(assign, nonatomic) BRControl *bottomDecoControl;	// G=0x33b00d09; S=0x33b00d19; @synthesize=_bottomDecoControl
@property(assign, nonatomic) BRImage *bottomEdge;	// G=0x33b00115; S=0x33b000e9; 
@property(assign, nonatomic) BRControl *bottomEdgeControl;	// G=0x33b00c89; S=0x33b00c99; @synthesize=_bottomEdgeControl
@property(assign, nonatomic) BRImage *bottomLeftCorner;	// G=0x33afff85; S=0x33afff59; 
@property(assign, nonatomic) BRControl *bottomLeftCornerControl;	// G=0x33b00ca9; S=0x33b00cb9; @synthesize=_bottomLeftCornerControl
@property(assign, nonatomic) BRImage *bottomRightCorner;	// G=0x33afff21; S=0x33affef5; 
@property(assign, nonatomic) BRControl *bottomRightCornerControl;	// G=0x33b00c69; S=0x33b00c79; @synthesize=_bottomRightCornerControl
@property(assign, nonatomic) BRImage *center;	// G=0x33b00241; S=0x33b00215; 
@property(assign, nonatomic) BRControl *centerControl;	// G=0x33b00ce9; S=0x33b00cf9; @synthesize=_centerControl
@property(assign, nonatomic) float centerOverlapFactor;	// G=0x33b00d49; S=0x33b004c5; @synthesize=_centerOverlapFactor
@property(assign, nonatomic) BRImage *leftEdge;	// G=0x33b0004d; S=0x33b00021; 
@property(assign, nonatomic) BRControl *leftEdgeControl;	// G=0x33b00cc9; S=0x33b00cd9; @synthesize=_leftEdgeControl
@property(assign, nonatomic) BRImage *rightEdge;	// G=0x33afffe9; S=0x33afffbd; 
@property(assign, nonatomic) BRControl *rightEdgeControl;	// G=0x33b00c49; S=0x33b00c59; @synthesize=_rightEdgeControl
@property(assign, nonatomic) BRImage *topDeco;	// G=0x33b001dd; S=0x33b001b1; 
@property(assign, nonatomic) BRControl *topDecoControl;	// G=0x33b00d29; S=0x33b00d39; @synthesize=_topDecoControl
@property(assign, nonatomic) BRImage *topEdge;	// G=0x33b000b1; S=0x33b00085; 
@property(assign, nonatomic) BRControl *topEdgeControl;	// G=0x33b00c09; S=0x33b00c19; @synthesize=_topEdgeControl
@property(assign, nonatomic) BRImage *topLeftCorner;	// G=0x33affebd; S=0x33affe91; 
@property(assign, nonatomic) BRControl *topLeftCornerControl;	// G=0x33b00c29; S=0x33b00c39; @synthesize=_topLeftCornerControl
@property(assign, nonatomic) BRImage *topRightCorner;	// G=0x33affe59; S=0x33affe2d; 
@property(assign, nonatomic) BRControl *topRightCornerControl;	// G=0x33b00be9; S=0x33b00bf9; @synthesize=_topRightCornerControl
- (id)init;	// 0x33affde5
- (id)_defaultActions;	// 0x33b00d59
- (void)_setImage:(id)image inControlNamed:(id)controlNamed withAntialiasingMask:(unsigned)antialiasingMask;	// 0x33b00e59
- (float)animationDuration;	// 0x33b00611
- (id)animationTimingFunction;	// 0x33b00619
// declared property getter: - (id)bottomDeco;	// 0x33b00179
// declared property getter: - (id)bottomDecoControl;	// 0x33b00d09
// declared property getter: - (id)bottomEdge;	// 0x33b00115
// declared property getter: - (id)bottomEdgeControl;	// 0x33b00c89
// declared property getter: - (id)bottomLeftCorner;	// 0x33afff85
// declared property getter: - (id)bottomLeftCornerControl;	// 0x33b00ca9
// declared property getter: - (id)bottomRightCorner;	// 0x33afff21
// declared property getter: - (id)bottomRightCornerControl;	// 0x33b00c69
// declared property getter: - (id)center;	// 0x33b00241
// declared property getter: - (id)centerControl;	// 0x33b00ce9
// declared property getter: - (float)centerOverlapFactor;	// 0x33b00d49
- (void)clearImageMap;	// 0x33b00279
- (CGSize)edgeSize;	// 0x33b00375
- (void)layoutSubcontrols;	// 0x33b00645
// declared property getter: - (id)leftEdge;	// 0x33b0004d
// declared property getter: - (id)leftEdgeControl;	// 0x33b00cc9
// declared property getter: - (id)rightEdge;	// 0x33afffe9
// declared property getter: - (id)rightEdgeControl;	// 0x33b00c49
// declared property setter: - (void)setBottomDeco:(id)deco;	// 0x33b0014d
// declared property setter: - (void)setBottomDecoControl:(id)control;	// 0x33b00d19
// declared property setter: - (void)setBottomEdge:(id)edge;	// 0x33b000e9
// declared property setter: - (void)setBottomEdgeControl:(id)control;	// 0x33b00c99
// declared property setter: - (void)setBottomLeftCorner:(id)corner;	// 0x33afff59
// declared property setter: - (void)setBottomLeftCornerControl:(id)control;	// 0x33b00cb9
// declared property setter: - (void)setBottomRightCorner:(id)corner;	// 0x33affef5
// declared property setter: - (void)setBottomRightCornerControl:(id)control;	// 0x33b00c79
// declared property setter: - (void)setCenter:(id)center;	// 0x33b00215
// declared property setter: - (void)setCenterControl:(id)control;	// 0x33b00cf9
// declared property setter: - (void)setCenterOverlapFactor:(float)factor;	// 0x33b004c5
// declared property setter: - (void)setLeftEdge:(id)edge;	// 0x33b00021
// declared property setter: - (void)setLeftEdgeControl:(id)control;	// 0x33b00cd9
// declared property setter: - (void)setRightEdge:(id)edge;	// 0x33afffbd
// declared property setter: - (void)setRightEdgeControl:(id)control;	// 0x33b00c59
- (void)setSuppressAnimations:(BOOL)animations;	// 0x33b004e5
// declared property setter: - (void)setTopDeco:(id)deco;	// 0x33b001b1
// declared property setter: - (void)setTopDecoControl:(id)control;	// 0x33b00d39
// declared property setter: - (void)setTopEdge:(id)edge;	// 0x33b00085
// declared property setter: - (void)setTopEdgeControl:(id)control;	// 0x33b00c19
// declared property setter: - (void)setTopLeftCorner:(id)corner;	// 0x33affe91
// declared property setter: - (void)setTopLeftCornerControl:(id)control;	// 0x33b00c39
// declared property setter: - (void)setTopRightCorner:(id)corner;	// 0x33affe2d
// declared property setter: - (void)setTopRightCornerControl:(id)control;	// 0x33b00bf9
// declared property getter: - (id)topDeco;	// 0x33b001dd
// declared property getter: - (id)topDecoControl;	// 0x33b00d29
// declared property getter: - (id)topEdge;	// 0x33b000b1
// declared property getter: - (id)topEdgeControl;	// 0x33b00c09
// declared property getter: - (id)topLeftCorner;	// 0x33affebd
// declared property getter: - (id)topLeftCornerControl;	// 0x33b00c29
// declared property getter: - (id)topRightCorner;	// 0x33affe59
// declared property getter: - (id)topRightCornerControl;	// 0x33b00be9
- (void)updateAnimations;	// 0x33b0052d
@end
