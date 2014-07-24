/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface BRMultiPartWidgetLayer : BRControl {
	BOOL _suppressAnimations;	// 84 = 0x54
	BRControl *_topRightCornerControl;	// 88 = 0x58
	BRControl *_topEdgeControl;	// 92 = 0x5c
	BRControl *_topLeftCornerControl;	// 96 = 0x60
	BRControl *_rightEdgeControl;	// 100 = 0x64
	BRControl *_bottomRightCornerControl;	// 104 = 0x68
	BRControl *_bottomEdgeControl;	// 108 = 0x6c
	BRControl *_bottomLeftCornerControl;	// 112 = 0x70
	BRControl *_leftEdgeControl;	// 116 = 0x74
	BRControl *_centerControl;	// 120 = 0x78
	BRControl *_bottomDecoControl;	// 124 = 0x7c
	BRControl *_topDecoControl;	// 128 = 0x80
	float _centerOverlapFactorWidth;	// 132 = 0x84
	float _centerOverlapFactorHeight;	// 136 = 0x88
	float _sourceArtSceneHeight;	// 140 = 0x8c
}
@property(assign, nonatomic) ATVImage *bottomDeco;	// G=0x3e9341; S=0x3e9315; 
@property(assign, nonatomic) BRControl *bottomDecoControl;	// G=0x3e9f69; S=0x3e9f79; @synthesize=_bottomDecoControl
@property(assign, nonatomic) ATVImage *bottomEdge;	// G=0x3e92dd; S=0x3e92b1; 
@property(assign, nonatomic) BRControl *bottomEdgeControl;	// G=0x3e9ee9; S=0x3e9ef9; @synthesize=_bottomEdgeControl
@property(assign, nonatomic) ATVImage *bottomLeftCorner;	// G=0x3e914d; S=0x3e9121; 
@property(assign, nonatomic) BRControl *bottomLeftCornerControl;	// G=0x3e9f09; S=0x3e9f19; @synthesize=_bottomLeftCornerControl
@property(assign, nonatomic) ATVImage *bottomRightCorner;	// G=0x3e90e9; S=0x3e90bd; 
@property(assign, nonatomic) BRControl *bottomRightCornerControl;	// G=0x3e9ec9; S=0x3e9ed9; @synthesize=_bottomRightCornerControl
@property(assign, nonatomic) BRControl *centerControl;	// G=0x3e9f49; S=0x3e9f59; @synthesize=_centerControl
@property(assign, nonatomic) ATVImage *centerImage;	// G=0x3e9409; S=0x3e93dd; 
@property(assign, nonatomic) float centerOverlapFactorHeight;	// G=0x3e9fb9; S=0x3e9711; @synthesize=_centerOverlapFactorHeight
@property(assign, nonatomic) float centerOverlapFactorWidth;	// G=0x3e9fa9; S=0x3e96f1; @synthesize=_centerOverlapFactorWidth
@property(assign, nonatomic) ATVImage *leftEdge;	// G=0x3e9215; S=0x3e91e9; 
@property(assign, nonatomic) BRControl *leftEdgeControl;	// G=0x3e9f29; S=0x3e9f39; @synthesize=_leftEdgeControl
@property(assign, nonatomic) ATVImage *rightEdge;	// G=0x3e91b1; S=0x3e9185; 
@property(assign, nonatomic) BRControl *rightEdgeControl;	// G=0x3e9ea9; S=0x3e9eb9; @synthesize=_rightEdgeControl
@property(assign, nonatomic) float sourceArtSceneHeight;	// G=0x3e9fc9; S=0x3e9fd9; @synthesize=_sourceArtSceneHeight
@property(assign, nonatomic) ATVImage *topDeco;	// G=0x3e93a5; S=0x3e9379; 
@property(assign, nonatomic) BRControl *topDecoControl;	// G=0x3e9f89; S=0x3e9f99; @synthesize=_topDecoControl
@property(assign, nonatomic) ATVImage *topEdge;	// G=0x3e9279; S=0x3e924d; 
@property(assign, nonatomic) BRControl *topEdgeControl;	// G=0x3e9e69; S=0x3e9e79; @synthesize=_topEdgeControl
@property(assign, nonatomic) ATVImage *topLeftCorner;	// G=0x3e9085; S=0x3e9059; 
@property(assign, nonatomic) BRControl *topLeftCornerControl;	// G=0x3e9e89; S=0x3e9e99; @synthesize=_topLeftCornerControl
@property(assign, nonatomic) ATVImage *topRightCorner;	// G=0x3e9021; S=0x3e8ff5; 
@property(assign, nonatomic) BRControl *topRightCornerControl;	// G=0x3e9e49; S=0x3e9e59; @synthesize=_topRightCornerControl
- (id)init;	// 0x3e8f99
- (id)_defaultActions;	// 0x3e9fe9
- (void)_setImage:(id)image inControlNamed:(id)controlNamed withAntialiasingMask:(unsigned)antialiasingMask;	// 0x3ea0e9
- (float)animationDuration;	// 0x3e9859
- (id)animationTimingFunction;	// 0x3e9861
// declared property getter: - (id)bottomDeco;	// 0x3e9341
// declared property getter: - (id)bottomDecoControl;	// 0x3e9f69
// declared property getter: - (id)bottomEdge;	// 0x3e92dd
// declared property getter: - (id)bottomEdgeControl;	// 0x3e9ee9
// declared property getter: - (id)bottomLeftCorner;	// 0x3e914d
// declared property getter: - (id)bottomLeftCornerControl;	// 0x3e9f09
// declared property getter: - (id)bottomRightCorner;	// 0x3e90e9
// declared property getter: - (id)bottomRightCornerControl;	// 0x3e9ec9
// declared property getter: - (id)centerControl;	// 0x3e9f49
// declared property getter: - (id)centerImage;	// 0x3e9409
// declared property getter: - (float)centerOverlapFactorHeight;	// 0x3e9fb9
// declared property getter: - (float)centerOverlapFactorWidth;	// 0x3e9fa9
- (void)clearImageMap;	// 0x3e9441
- (CGSize)edgeSize;	// 0x3e953d
- (void)layoutSubcontrols;	// 0x3e988d
// declared property getter: - (id)leftEdge;	// 0x3e9215
// declared property getter: - (id)leftEdgeControl;	// 0x3e9f29
// declared property getter: - (id)rightEdge;	// 0x3e91b1
// declared property getter: - (id)rightEdgeControl;	// 0x3e9ea9
// declared property setter: - (void)setBottomDeco:(id)deco;	// 0x3e9315
// declared property setter: - (void)setBottomDecoControl:(id)control;	// 0x3e9f79
// declared property setter: - (void)setBottomEdge:(id)edge;	// 0x3e92b1
// declared property setter: - (void)setBottomEdgeControl:(id)control;	// 0x3e9ef9
// declared property setter: - (void)setBottomLeftCorner:(id)corner;	// 0x3e9121
// declared property setter: - (void)setBottomLeftCornerControl:(id)control;	// 0x3e9f19
// declared property setter: - (void)setBottomRightCorner:(id)corner;	// 0x3e90bd
// declared property setter: - (void)setBottomRightCornerControl:(id)control;	// 0x3e9ed9
// declared property setter: - (void)setCenterControl:(id)control;	// 0x3e9f59
// declared property setter: - (void)setCenterImage:(id)image;	// 0x3e93dd
- (void)setCenterOverlapFactor:(float)factor;	// 0x3e96bd
// declared property setter: - (void)setCenterOverlapFactorHeight:(float)height;	// 0x3e9711
// declared property setter: - (void)setCenterOverlapFactorWidth:(float)width;	// 0x3e96f1
// declared property setter: - (void)setLeftEdge:(id)edge;	// 0x3e91e9
// declared property setter: - (void)setLeftEdgeControl:(id)control;	// 0x3e9f39
// declared property setter: - (void)setRightEdge:(id)edge;	// 0x3e9185
// declared property setter: - (void)setRightEdgeControl:(id)control;	// 0x3e9eb9
// declared property setter: - (void)setSourceArtSceneHeight:(float)height;	// 0x3e9fd9
- (void)setSuppressAnimations:(BOOL)animations;	// 0x3e9731
// declared property setter: - (void)setTopDeco:(id)deco;	// 0x3e9379
// declared property setter: - (void)setTopDecoControl:(id)control;	// 0x3e9f99
// declared property setter: - (void)setTopEdge:(id)edge;	// 0x3e924d
// declared property setter: - (void)setTopEdgeControl:(id)control;	// 0x3e9e79
// declared property setter: - (void)setTopLeftCorner:(id)corner;	// 0x3e9059
// declared property setter: - (void)setTopLeftCornerControl:(id)control;	// 0x3e9e99
// declared property setter: - (void)setTopRightCorner:(id)corner;	// 0x3e8ff5
// declared property setter: - (void)setTopRightCornerControl:(id)control;	// 0x3e9e59
// declared property getter: - (float)sourceArtSceneHeight;	// 0x3e9fc9
// declared property getter: - (id)topDeco;	// 0x3e93a5
// declared property getter: - (id)topDecoControl;	// 0x3e9f89
// declared property getter: - (id)topEdge;	// 0x3e9279
// declared property getter: - (id)topEdgeControl;	// 0x3e9e69
// declared property getter: - (id)topLeftCorner;	// 0x3e9085
// declared property getter: - (id)topLeftCornerControl;	// 0x3e9e89
// declared property getter: - (id)topRightCorner;	// 0x3e9021
// declared property getter: - (id)topRightCornerControl;	// 0x3e9e49
- (void)updateAnimations;	// 0x3e9779
@end
