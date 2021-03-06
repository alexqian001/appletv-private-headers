/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl {
	UITableViewCell *_cell;	// 108 = 0x6c
	unsigned _style : 2;	// 112 = 0x70
	unsigned _rotated : 1;	// 112 = 0x70
	unsigned _rotating : 1;	// 112 = 0x70
	unsigned _hiding : 1;	// 112 = 0x70
	unsigned _reserved : 27;	// 112 = 0x70
}
@property(assign, nonatomic, getter=isHiding) BOOL hiding;	// G=0x30b6a2a5; S=0x30b6a28d; 
@property(assign, nonatomic, getter=isRotated) BOOL rotated;	// G=0x30b6a1f1; S=0x30b6a07d; 
+ (id)_deleteImage;	// 0x30b69e1d
+ (id)_deleteImageBackground;	// 0x308fc2c1
+ (id)_insertImage;	// 0x30b69eed
+ (CGRect)_minusRect;	// 0x30b69dd1
+ (id)_multiSelectHighlightedImage;	// 0x30b69fcd
+ (id)_multiSelectNotSelectedImage;	// 0x30b69f25
+ (id)_multiSelectSelectedImage;	// 0x30b69f5d
+ (CGSize)defaultSize;	// 0x308fc265
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x30a57395
- (id)_currentImage;	// 0x30a5774d
- (id)_minusView;	// 0x30b69cd5
- (void)_multiselectColorChanged;	// 0x30b6a2b9
- (void)_toggleRotate;	// 0x30b69df5
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x30b6a219
- (void)_updateImageView;	// 0x30a58485
// declared property getter: - (BOOL)isHiding;	// 0x30b6a2a5
// declared property getter: - (BOOL)isRotated;	// 0x30b6a1f1
- (BOOL)isRotating;	// 0x30b6a205
- (void)layoutSubviews;	// 0x30a5757d
- (void)setFrame:(CGRect)frame;	// 0x30a57535
// declared property setter: - (void)setHiding:(BOOL)hiding;	// 0x30b6a28d
- (void)setHighlighted:(BOOL)highlighted;	// 0x30a58445
// declared property setter: - (void)setRotated:(BOOL)rotated;	// 0x30b6a07d
- (void)setRotated:(BOOL)rotated animated:(BOOL)animated;	// 0x30b6a091
- (void)setSelected:(BOOL)selected;	// 0x30b6a03d
@end

