/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "AppleTVServices-Structs.h"
#import </libobjc.A.h>

@class NSString, NSData, NSURL;

@interface ATVImage : NSObject {
	CGImageRef _image;	// 4 = 0x4
	CGImageSourceRef _imageSource;	// 8 = 0x8
	float _imageWidth;	// 12 = 0xc
	float _imageHeight;	// 16 = 0x10
	int _imageOrientation;	// 20 = 0x14
	BOOL _enableCache;	// 24 = 0x18
	NSURL *_imageURL;	// 28 = 0x1c
	NSData *_imageData;	// 32 = 0x20
	NSString *_imageType;	// 36 = 0x24
	BOOL _imageBufferInMemory;	// 40 = 0x28
	BOOL _rotationEnabled;	// 41 = 0x29
}
@property(assign) BOOL enableCache;	// G=0x3040f265; S=0x3040f235; converted property
@property(readonly, assign) CGImageRef image;	// G=0x3040f031; converted property
@property(readonly, assign, getter=isImageBufferInMemory) BOOL imageBufferInMemory;	// G=0x3040f879; converted property
@property(readonly, retain) NSString *imageType;	// G=0x3040f111; converted property
@property(readonly, assign, nonatomic) int orientation;	// G=0x3040f889; @synthesize=_imageOrientation
@property(readonly, assign, nonatomic) BOOL rotationEnabled;	// G=0x3040f899; @synthesize=_rotationEnabled
+ (id)imageWithCGImageRef:(CGImageRef)cgimageRef preserveAlpha:(BOOL)alpha;	// 0x3040e8d9
+ (id)imageWithData:(id)data;	// 0x3040e88d
+ (id)imageWithPath:(id)path;	// 0x3040e80d
+ (id)imageWithRotationFromPath:(id)path;	// 0x3040e979
+ (id)imageWithRotationFromURL:(id)url;	// 0x3040e915
+ (id)imageWithURL:(id)url;	// 0x3040e7c1
- (id)initWithCGImageRef:(CGImageRef)cgimageRef preserveAlpha:(BOOL)alpha;	// 0x3040e9d5
- (id)initWithData:(id)data;	// 0x3040ed39
- (id)initWithURL:(id)url;	// 0x3040eb1d
- (void).cxx_destruct;	// 0x3040f8a9
- (id)_initWithCGImageSourceRotationEnabled:(CGImageSourceRef)cgimageSourceRotationEnabled;	// 0x3040f8f1
- (void)_initializeCGImageWithRotation;	// 0x3040fa81
- (float)aspectRatio;	// 0x3040f191
- (id)croppedImageForSize:(CGSize)size;	// 0x3040f635
- (void)dealloc;	// 0x3040ef65
- (id)deletterboxedImage;	// 0x3040f275
- (void)drawImageInContext:(CGContextRef)context rect:(CGRect)rect;	// 0x3040effd
// converted property getter: - (BOOL)enableCache;	// 0x3040f265
- (BOOL)hasAlpha;	// 0x3040f125
// converted property getter: - (CGImageRef)image;	// 0x3040f031
// converted property getter: - (id)imageType;	// 0x3040f111
// converted property getter: - (BOOL)isImageBufferInMemory;	// 0x3040f879
- (BOOL)isPowerOfTwo;	// 0x3040f1cd
- (CGRect)largestSquareRect;	// 0x3040f6b1
- (id)mapImageWithSourceRect:(CGRect)sourceRect toSize:(CGSize)size;	// 0x3040f559
// declared property getter: - (int)orientation;	// 0x3040f889
- (CGSize)pixelBounds;	// 0x3040f15d
// declared property getter: - (BOOL)rotationEnabled;	// 0x3040f899
// converted property setter: - (void)setEnableCache:(BOOL)cache;	// 0x3040f235
- (BOOL)sourceRequiresRotation;	// 0x3040f219
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)aspectRatioLimit;	// 0x3040f775
@end

