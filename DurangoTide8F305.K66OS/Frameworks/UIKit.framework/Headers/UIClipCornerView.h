/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

@interface UIClipCornerView : UIView {
	float _cornerRadius;	// 44 = 0x2c
	int _rectCorner;	// 48 = 0x30
	CGPoint _pathOrigin;	// 52 = 0x34
	CGPathRef _clipPath;	// 60 = 0x3c
	UIImage *_backgroundImage;	// 64 = 0x40
	CGRect _backgroundImageSubrect;	// 68 = 0x44
	CGAffineTransform _backgroundTransform;	// 84 = 0x54
	BOOL _useSnapshot;	// 108 = 0x6c
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x3221f16d; S=0x3221f3e1; @synthesize=_backgroundImage
@property(assign, nonatomic) CGRect backgroundImageSubrect;	// G=0x3221f151; S=0x3221f821; @synthesize=_backgroundImageSubrect
@property(assign, nonatomic) float cornerRadius;	// G=0x3221f17d; S=0x3221f42d; @synthesize=_cornerRadius
@property(assign, nonatomic) BOOL useSnapshot;	// G=0x3221f141; S=0x3221f3a5; @synthesize=_useSnapshot
- (id)initWithCornerRadius:(float)cornerRadius forCorner:(int)corner;	// 0x3221f669
- (void)_updateCornerPath;	// 0x3221f18d
- (void)_updateSnapshot;	// 0x3221f87d
// declared property getter: - (id)backgroundImage;	// 0x3221f16d
// declared property getter: - (CGRect)backgroundImageSubrect;	// 0x3221f151
// declared property getter: - (float)cornerRadius;	// 0x3221f17d
- (void)dealloc;	// 0x3221f619
- (void)drawRect:(CGRect)rect;	// 0x3222008d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3221f3e1
// declared property setter: - (void)setBackgroundImageSubrect:(CGRect)subrect;	// 0x3221f821
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x3221f42d
- (void)setFrame:(CGRect)frame;	// 0x3221f72d
// declared property setter: - (void)setUseSnapshot:(BOOL)snapshot;	// 0x3221f3a5
// declared property getter: - (BOOL)useSnapshot;	// 0x3221f141
@end
