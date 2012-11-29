/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"


@interface CIImage : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
}
+ (id)emptyImage;	// 0x30d094dd
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x30d084c1
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x30d08459
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x30d079a9
+ (id)imageWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x30d079c9
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x30d08ed5
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x30d08ef5
+ (id)imageWithColor:(id)color;	// 0x30d09029
+ (id)imageWithContentsOfFile:(id)file;	// 0x30d09951
+ (id)imageWithContentsOfFile:(id)file options:(id)options;	// 0x30d09971
+ (id)imageWithContentsOfURL:(id)url;	// 0x30d09889
+ (id)imageWithContentsOfURL:(id)url options:(id)options;	// 0x30d0989d
+ (id)imageWithData:(id)data;	// 0x30d096cd
+ (id)imageWithData:(id)data options:(id)options;	// 0x30d09719
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface;	// 0x30d07441
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x30d07461
+ (id)imageWithInternalRepresentation:(void *)internalRepresentation;	// 0x30d0a969
+ (id)imageWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;	// 0x30d089a1
+ (id)imageWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;	// 0x30d08a01
+ (id)noiseImage;	// 0x30d091ed
+ (id)noiseImagePadded;	// 0x30d09355
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x30d08649
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x30d086dd
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x30d07a15
- (id)initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x30d07db1
- (id)initWithCGImageSource:(CGImageSourceRef)cgimageSource index:(unsigned long)index options:(id)options;	// 0x30d081b9
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x30d08f41
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x30d08f55
- (id)initWithCoder:(id)coder;	// 0x30d0a6e1
- (id)initWithColor:(id)color;	// 0x30d09155
- (id)initWithColorR:(float)colorR G:(float)g B:(float)b A:(float)a;	// 0x30d09071
- (id)initWithContentsOfFile:(id)file;	// 0x30d099bd
- (id)initWithContentsOfFile:(id)file options:(id)options;	// 0x30d099d1
- (id)initWithContentsOfURL:(id)url;	// 0x30d098e9
- (id)initWithContentsOfURL:(id)url options:(id)options;	// 0x30d098fd
- (id)initWithData:(id)data;	// 0x30d09765
- (id)initWithData:(id)data options:(id)options;	// 0x30d09779
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x30d074ad
- (id)initWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x30d074c1
- (id)initWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;	// 0x30d08a59
- (id)initWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;	// 0x30d08b49
- (id)_autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties context:(id)context options:(id)options;	// 0x30d28ec1
- (id)_dictForFeature:(id)feature scale:(float)scale imageHeight:(float)height;	// 0x30d28839
- (id)_initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x30d08529
- (id)_initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x30d07a29
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x30d0a9b1
- (void *)_internalRepresentation;	// 0x30d0aa11
- (id)_scaleImageToMaxDimension:(unsigned)maxDimension;	// 0x30d27ba1
- (id)autoAdjustmentFilters;	// 0x30d287f1
- (id)autoAdjustmentFiltersWithImageProperties:(id)imageProperties options:(id)options;	// 0x30d27c61
- (id)autoAdjustmentFiltersWithOptions:(id)options;	// 0x30d28805
- (id)autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties options:(id)options;	// 0x30d293bd
- (id)autoRedEyeFilterWithFeatures:(id)features options:(id)options;	// 0x30d293e9
- (id)copyWithZone:(NSZone *)zone;	// 0x30d0a4d1
- (void)dealloc;	// 0x30d0a305
- (id)description;	// 0x30d0a349
- (void)encodeWithCoder:(id)coder;	// 0x30d0a4e1
- (CGRect)extent;	// 0x30d0a2e9
- (id)filteredImage:(id)image keysAndValues:(id)values;	// 0x30d0a441
- (id)imageByApplyingBlur:(double)blur;	// 0x30d0a051
- (id)imageByApplyingGamma:(double)gamma;	// 0x30d09ef9
- (id)imageByApplyingLanczosScale:(double)scale aspectRatio:(double)ratio;	// 0x30d0a199
- (id)imageByApplyingOrientation:(int)orientation;	// 0x30d09665
- (id)imageByApplyingTransform:(CGAffineTransform)transform;	// 0x30d09a11
- (id)imageByCroppingToRect:(CGRect)rect;	// 0x30d09b99
- (id)imageByPremultiplying;	// 0x30d09d15
- (id)imageByUnpremultiplying;	// 0x30d09e01
- (CGAffineTransform)imageTransformForOrientation:(int)orientation;	// 0x30d09531
- (id)properties;	// 0x30d0a42d
- (CGRect)regionOfInterestForImage:(id)image inRect:(CGRect)rect;	// 0x30d0aa21
@end
