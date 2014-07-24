/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import "PrototypeTools-Structs.h"
#import <UIKit/UIView.h>

@class UIColor, NSArray, PT2DGraphAxisStyle, NSMutableArray;

@interface PT2DGraphView : UIView {
	NSArray *_provisionalData;	// 96 = 0x60
	float _xminimum;	// 100 = 0x64
	float _yminimum;	// 104 = 0x68
	float _xmaximum;	// 108 = 0x6c
	float _ymaximum;	// 112 = 0x70
	PT2DGraphAxisStyle *_xaxisStyle;	// 116 = 0x74
	PT2DGraphAxisStyle *_yaxisStyle;	// 120 = 0x78
	UIColor *_groundColor;	// 124 = 0x7c
	UIColor *_dataColor;	// 128 = 0x80
	UIColor *_provisionalDataColor;	// 132 = 0x84
	NSArray *_data;	// 136 = 0x88
	NSMutableArray *_provisionalDataSubviews;	// 140 = 0x8c
	CGPoint _origin;	// 144 = 0x90
	CGSize _datumSize;	// 152 = 0x98
	UIEdgeInsets _edgeInsets;	// 160 = 0xa0
}
@property(retain, nonatomic) NSArray *data;	// G=0x3259d165; S=0x3259d175; @synthesize=_data
@property(retain, nonatomic) UIColor *dataColor;	// G=0x3259d08d; S=0x3259d09d; @synthesize=_dataColor
@property(assign, nonatomic) CGSize datumSize;	// G=0x3259d0fd; S=0x3259d115; @synthesize=_datumSize
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x3259d129; S=0x3259d141; @synthesize=_edgeInsets
@property(retain, nonatomic) UIColor *groundColor;	// G=0x3259d055; S=0x3259d065; @synthesize=_groundColor
@property(assign, nonatomic) CGPoint origin;	// G=0x3259cfb9; S=0x3259cfd1; @synthesize=_origin
@property(retain, nonatomic) NSArray *provisionalData;	// G=0x3259cf29; S=0x3259b5f5; @synthesize=_provisionalData
@property(retain, nonatomic) UIColor *provisionalDataColor;	// G=0x3259d0c5; S=0x3259d0d5; @synthesize=_provisionalDataColor
@property(retain, nonatomic) NSMutableArray *provisionalDataSubviews;	// G=0x3259d19d; S=0x3259d1ad; @synthesize=_provisionalDataSubviews
@property(retain, nonatomic) PT2DGraphAxisStyle *xaxisStyle;	// G=0x3259cfe5; S=0x3259cff5; @synthesize=_xaxisStyle
@property(assign, nonatomic) float xmaximum;	// G=0x3259cf79; S=0x3259cf89; @synthesize=_xmaximum
@property(assign, nonatomic) float xminimum;	// G=0x3259cf39; S=0x3259cf49; @synthesize=_xminimum
@property(retain, nonatomic) PT2DGraphAxisStyle *yaxisStyle;	// G=0x3259d01d; S=0x3259d02d; @synthesize=_yaxisStyle
@property(assign, nonatomic) float ymaximum;	// G=0x3259cf99; S=0x3259cfa9; @synthesize=_ymaximum
@property(assign, nonatomic) float yminimum;	// G=0x3259cf59; S=0x3259cf69; @synthesize=_yminimum
- (id)initWithFrame:(CGRect)frame;	// 0x3259b2cd
- (void).cxx_destruct;	// 0x3259d1d5
// declared property getter: - (id)data;	// 0x3259d165
// declared property getter: - (id)dataColor;	// 0x3259d08d
// declared property getter: - (CGSize)datumSize;	// 0x3259d0fd
- (void)drawRect:(CGRect)rect;	// 0x3259bd0d
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x3259d129
// declared property getter: - (id)groundColor;	// 0x3259d055
// declared property getter: - (CGPoint)origin;	// 0x3259cfb9
- (CGPoint)pointForText:(id)text centeredOnPoint:(CGPoint)point withAttributes:(id)attributes;	// 0x3259b575
// declared property getter: - (id)provisionalData;	// 0x3259cf29
// declared property getter: - (id)provisionalDataColor;	// 0x3259d0c5
// declared property getter: - (id)provisionalDataSubviews;	// 0x3259d19d
// declared property setter: - (void)setData:(id)data;	// 0x3259d175
// declared property setter: - (void)setDataColor:(id)color;	// 0x3259d09d
// declared property setter: - (void)setDatumSize:(CGSize)size;	// 0x3259d115
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x3259d141
// declared property setter: - (void)setGroundColor:(id)color;	// 0x3259d065
// declared property setter: - (void)setOrigin:(CGPoint)origin;	// 0x3259cfd1
// declared property setter: - (void)setProvisionalData:(id)data;	// 0x3259b5f5
// declared property setter: - (void)setProvisionalDataColor:(id)color;	// 0x3259d0d5
// declared property setter: - (void)setProvisionalDataSubviews:(id)subviews;	// 0x3259d1ad
// declared property setter: - (void)setXaxisStyle:(id)style;	// 0x3259cff5
// declared property setter: - (void)setXmaximum:(float)xmaximum;	// 0x3259cf89
// declared property setter: - (void)setXminimum:(float)xminimum;	// 0x3259cf49
// declared property setter: - (void)setYaxisStyle:(id)style;	// 0x3259d02d
// declared property setter: - (void)setYmaximum:(float)ymaximum;	// 0x3259cfa9
// declared property setter: - (void)setYminimum:(float)yminimum;	// 0x3259cf69
// declared property getter: - (id)xaxisStyle;	// 0x3259cfe5
// declared property getter: - (float)xmaximum;	// 0x3259cf79
// declared property getter: - (float)xminimum;	// 0x3259cf39
// declared property getter: - (id)yaxisStyle;	// 0x3259d01d
// declared property getter: - (float)ymaximum;	// 0x3259cf99
// declared property getter: - (float)yminimum;	// 0x3259cf59
@end
