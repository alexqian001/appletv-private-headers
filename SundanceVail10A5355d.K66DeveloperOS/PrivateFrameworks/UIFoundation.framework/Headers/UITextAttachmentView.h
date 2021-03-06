/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "NSTextAttachmentCell.h"
#import "UIFoundation-Structs.h"
#import <UIView.h> // Unknown library

@class UIImage, NSTextAttachment;

__attribute__((visibility("hidden")))
@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {
	UIImage *_image;	// 84 = 0x54
	NSTextAttachment *_attachment;	// 88 = 0x58
}
@property(assign, nonatomic) NSTextAttachment *attachment;	// G=0x32581edd; S=0x32581eed; @synthesize=_attachment
@property(assign, nonatomic) CGRect drawingBounds;	// G=0x32581c61; S=0x32581c3d; 
@property(retain, nonatomic) UIImage *image;	// G=0x32581ecd; S=0x32581e2d; 
+ (id)viewForData:(id)data ofType:(id)type;	// 0x325818f1
+ (id)viewForImage:(id)image;	// 0x32581a4d
- (id)initWithContentView:(id)contentView;	// 0x32581a99
// declared property getter: - (id)attachment;	// 0x32581edd
- (CGPoint)cellBaselineOffset;	// 0x32581c05
- (CGSize)cellSize;	// 0x32581bcd
- (id)contentView;	// 0x32581ba5
- (void)dealloc;	// 0x32581b59
- (void)drawWithFrame:(CGRect)frame inView:(id)view characterIndex:(unsigned)index;	// 0x32581c85
- (void)drawWithFrame:(CGRect)frame inView:(id)view characterIndex:(unsigned)index layoutManager:(id)manager;	// 0x32581cbd
// declared property getter: - (CGRect)drawingBounds;	// 0x32581c61
// declared property getter: - (id)image;	// 0x32581ecd
// declared property setter: - (void)setAttachment:(id)attachment;	// 0x32581eed
// declared property setter: - (void)setDrawingBounds:(CGRect)bounds;	// 0x32581c3d
// declared property setter: - (void)setImage:(id)image;	// 0x32581e2d
@end

