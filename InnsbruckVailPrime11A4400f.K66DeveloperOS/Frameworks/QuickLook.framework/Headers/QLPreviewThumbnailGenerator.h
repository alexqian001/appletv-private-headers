/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import </libobjc.A.h>

@class UIImage, NSString;
@protocol QLPreviewItem;

@interface QLPreviewThumbnailGenerator : NSObject {
	id<QLPreviewItem> _item;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	float _scale;	// 16 = 0x10
	UIImage *_thumbnailImage;	// 20 = 0x14
	NSString *_contentType;	// 24 = 0x18
	int _status;	// 28 = 0x1c
}
@property(readonly, assign) UIImage *thumbnailImage;	// G=0x2f2f2fd5; @synthesize=_thumbnailImage
+ (BOOL)canGenerateThumbnailForPreviewItem:(id)previewItem;	// 0x2f2f24c9
+ (id)generatorForPreviewItem:(id)previewItem size:(CGSize)size;	// 0x2f2f2541
- (CGContextRef)_beginContext;	// 0x2f2f2951
- (id)_endContextWithContentFrame:(CGRect)contentFrame;	// 0x2f2f2999
- (CGSize)_pixelSize;	// 0x2f2f2911
- (id)_thumbnailForImage;	// 0x2f2f2a81
- (id)_thumbnailForMovie;	// 0x2f2f2c5d
- (id)_thumbnailForPDF;	// 0x2f2f2ba5
- (void)cancel;	// 0x2f2f2fc1
- (void)dealloc;	// 0x2f2f25f1
- (void)generateWithCompletionBlock:(id)completionBlock;	// 0x2f2f2669
// declared property getter: - (id)thumbnailImage;	// 0x2f2f2fd5
@end

