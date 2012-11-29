/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class _UIDecompressionInfo, CIImage, NSArray;

@interface UIImage : NSObject <NSCoding> {
	void *_imageRef;	// 4 = 0x4
	float _scale;	// 8 = 0x8
	struct {
		unsigned named : 1;
		unsigned imageOrientation : 3;
		unsigned cached : 1;
		unsigned hasPattern : 1;
		unsigned isCIImage : 1;
		unsigned imageSetIdentifer : 16;
	} _imageFlags;	// 12 = 0xc
	_UIDecompressionInfo *_decompressionInfo;	// 16 = 0x10
	UIEdgeInsets _alignmentRectInsets;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x345463f1; 
@property(readonly, assign, nonatomic) CIImage *CIImage;	// G=0x3455900d; 
@property(readonly, assign, nonatomic) UIEdgeInsets alignmentRectInsets;	// G=0x34564a29; @synthesize=_alignmentRectInsets
@property(readonly, assign, nonatomic) UIEdgeInsets capInsets;	// G=0x34546931; 
@property(readonly, assign, nonatomic) double duration;	// G=0x345595f9; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x3454695d; 
@property(readonly, assign, nonatomic) NSArray *images;	// G=0x3456b829; 
@property(readonly, assign, nonatomic) int leftCapWidth;	// G=0x34558f95; 
@property(readonly, assign, nonatomic) int resizingMode;	// G=0x34718365; 
@property(readonly, assign, nonatomic) float scale;	// G=0x34546379; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x34546211; 
@property(readonly, assign, nonatomic) int topCapHeight;	// G=0x34558fd1; 
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format;	// 0x34719b61
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format scale:(float)scale;	// 0x346d2fa5
+ (id)_backgroundGradientWithStartColor:(id)startColor andEndColor:(id)color;	// 0x34600285
+ (id)_cachedImageForKey:(id)key fromBlock:(id)block;	// 0x3460f0bd
+ (id)_defaultBackgroundGradient;	// 0x3460014d
+ (id)_deviceSpecificImageNamed:(id)named;	// 0x345d8329
+ (id)_deviceSpecificImageNamed:(id)named inBundle:(id)bundle;	// 0x34718c7d
+ (void)_flushCache:(id)cache;	// 0x345c83ed
+ (void)_flushSharedImageCache;	// 0x345c9071
+ (id)_iconForResourceProxy:(id)resourceProxy format:(int)format;	// 0x34719b8d
+ (id)_iconForResourceProxy:(id)resourceProxy variant:(int)variant variantsScale:(float)scale;	// 0x346d3215
+ (int)_iconVariantForUIApplicationIconFormat:(int)uiapplicationIconFormat scale:(float *)scale;	// 0x346d301d
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint effectsImage:(id)image maskImage:(id)image4 style:(int)style;	// 0x346088c5
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style;	// 0x345fd9b5
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style edgeInsets:(UIEdgeInsets)insets;	// 0x347d122d
+ (id)animatedImageNamed:(id)named duration:(double)duration;	// 0x3471836d
+ (id)animatedImageWithImages:(id)images duration:(double)duration;	// 0x34718719
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets duration:(double)duration;	// 0x3471866d
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets resizingMode:(int)mode duration:(double)duration;	// 0x347186b5
+ (id)applicationImageNamed:(id)named;	// 0x347187fd
+ (id)imageAtPath:(id)path;	// 0x34718d0d
+ (id)imageFromAlbumArtData:(id)albumArtData height:(int)height width:(int)width bytesPerRow:(int)row cache:(BOOL)cache;	// 0x34718999
+ (id)imageNamed:(id)named;	// 0x34550ea1
+ (id)imageNamed:(id)named inBundle:(id)bundle;	// 0x34552b4d
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x3468818d
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x3455450d
+ (id)imageWithCIImage:(id)ciimage;	// 0x34717c91
+ (id)imageWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x34717cd9
+ (id)imageWithContentsOfCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x34718a85
+ (id)imageWithContentsOfFile:(id)file;	// 0x3459abe9
+ (id)imageWithData:(id)data;	// 0x34717bf9
+ (id)imageWithData:(id)data scale:(float)scale;	// 0x34717c41
+ (void)initialize;	// 0x345988b1
+ (id)kitImageNamed:(id)named;	// 0x345901dd
+ (void)setPreferredSharedImageScale:(float)scale;	// 0x34718d05
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x346881d9
- (id)initWithCGImage:(CGImageRef)cgimage imageOrientation:(int)orientation;	// 0x3460b3d1
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x34554565
- (id)initWithCIImage:(id)ciimage;	// 0x34717d2d
- (id)initWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x34717d95
- (id)initWithCoder:(id)coder;	// 0x347073d1
- (id)initWithContentsOfFile:(id)file;	// 0x3459ac35
- (id)initWithContentsOfFile:(id)file cache:(BOOL)cache;	// 0x34718809
- (id)initWithData:(id)data;	// 0x345d2a19
- (id)initWithData:(id)data cache:(BOOL)cache;	// 0x34718d19
- (id)initWithData:(id)data scale:(float)scale;	// 0x346bf24d
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x34718985
// declared property getter: - (CGImageRef)CGImage;	// 0x345463f1
// declared property getter: - (id)CIImage;	// 0x3455900d
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed;	// 0x34719c05
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed scale:(float)scale;	// 0x34719c59
- (id)_automationID;	// 0x347187f5
- (id)_bezeledImageWithShadowRed:(float)shadowRed green:(float)green blue:(float)blue alpha:(float)alpha fillRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 drawShadow:(BOOL)shadow;	// 0x3456331d
- (BOOL)_canEncodeWithName:(id)name;	// 0x34717e41
- (CGRect)_contentStretchInPixels;	// 0x3455985d
- (void)_decompressionComplete;	// 0x34717271
- (void)_decompressionFallbackImageCreation;	// 0x347172d1
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)exteriorShadowRed green:(float)green blue:(float)blue alpha:(float)alpha interiorShadowRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 fillRed:(float)red9 green:(float)green10 blue:(float)blue11 alpha:(float)alpha12;	// 0x347197fd
- (void)_encodeDataWithCoder:(id)coder imageName:(id)name;	// 0x34717e7d
- (void)_encodePropertiesWithCoder:(id)coder;	// 0x34718115
- (id)_flatImageWithWhite:(float)white alpha:(float)alpha;	// 0x3471971d
- (id)_imageScaledToProportion:(float)proportion interpolationQuality:(int)quality;	// 0x346c84f1
- (int)_imageSetIdentifier;	// 0x347196f1
- (id)_initWithData:(id)data immediateLoadWithMaxSize:(CGSize)maxSize scale:(float)scale renderingIntent:(int)intent;	// 0x3471782d
- (id)_initWithData:(id)data preserveScale:(BOOL)scale;	// 0x34718961
- (id)_initWithData:(id)data preserveScale:(BOOL)scale cache:(BOOL)cache;	// 0x347188ad
- (id)_initWithData:(id)data scale:(float)scale;	// 0x345d29e5
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface imageOrientation:(int)orientation;	// 0x346cccfd
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface scale:(float)scale orientation:(int)orientation;	// 0x34554a21
- (id)_initWithOtherImage:(id)otherImage;	// 0x34604ab1
- (BOOL)_isCached;	// 0x345510ed
- (BOOL)_isDecompressing;	// 0x34598a95
- (BOOL)_isInvisible;	// 0x3459f361
- (BOOL)_isNamed;	// 0x345548ed
- (BOOL)_isResizable;	// 0x34558a91
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x34546955
- (CGColorRef)_patternColor;	// 0x345e6e4d
- (void)_preheatBitmapData;	// 0x34719b89
- (id)_resizableImageWithCapMask:(int)capMask;	// 0x34719cf9
- (void)_saveDecompressedImage:(CGImageRef)image;	// 0x3471736d
- (id)_selectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x345d42f9
- (id)_serializedData;	// 0x34719ad1
- (void)_setAlignmentRectInsets:(UIEdgeInsets)insets;	// 0x34564a51
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x34718361
- (void)_setCached:(BOOL)cached;	// 0x345553f9
- (void)_setImageSetIdentifier:(int)identifier;	// 0x34558211
- (void)_setNamed:(BOOL)named;	// 0x345553d1
- (void)_startEagerDecompression;	// 0x347173a9
- (id)_stretchableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x3456486d
- (id)_subimageInRect:(CGRect)rect;	// 0x34754b89
- (CGColorRef)_tiledPatternColor;	// 0x345e6ba1
- (id)_unselectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x345d408d
// declared property getter: - (UIEdgeInsets)alignmentRectInsets;	// 0x34564a29
// declared property getter: - (UIEdgeInsets)capInsets;	// 0x34546931
- (void)compositeToPoint:(CGPoint)point fromRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x3469b691
- (void)compositeToPoint:(CGPoint)point operation:(int)operation;	// 0x346b00b1
- (void)compositeToPoint:(CGPoint)point operation:(int)operation fraction:(float)fraction;	// 0x346b00d9
- (void)compositeToRect:(CGRect)rect fromRect:(CGRect)rect2 operation:(int)operation fraction:(float)fraction;	// 0x345bd291
- (id)copyWithZone:(NSZone *)zone;	// 0x34718351
- (void)dealloc;	// 0x34554799
- (void)draw1PartImageInRect:(CGRect)rect;	// 0x3471954d
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction;	// 0x3471958d
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction operation:(int)operation;	// 0x346f6df1
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect;	// 0x3469b2ed
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x347194bd
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x346f6d5d
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect;	// 0x34718db5
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x347192b9
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x347193b9
- (void)drawAsPatternInRect:(CGRect)rect;	// 0x34718791
- (void)drawAtPoint:(CGPoint)point;	// 0x345e5151
- (void)drawAtPoint:(CGPoint)point blendMode:(int)mode alpha:(float)alpha;	// 0x3454619d
- (void)drawInRect:(CGRect)rect;	// 0x3458fab1
- (void)drawInRect:(CGRect)rect blendMode:(int)mode alpha:(float)alpha;	// 0x3454647d
// declared property getter: - (double)duration;	// 0x345595f9
- (void)encodeWithCoder:(id)coder;	// 0x34718239
// declared property getter: - (int)imageOrientation;	// 0x3454695d
- (CGImageRef)imageRef;	// 0x346a779d
- (id)imageWithAlignmentRectInsets:(UIEdgeInsets)alignmentRectInsets;	// 0x34604a35
// declared property getter: - (id)images;	// 0x3456b829
- (IOSurfaceRef)ioSurface;	// 0x34608969
// declared property getter: - (int)leftCapWidth;	// 0x34558f95
- (id)patternColor;	// 0x346bf7b1
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x345648ad
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets resizingMode:(int)mode;	// 0x345648d9
// declared property getter: - (int)resizingMode;	// 0x34718365
// declared property getter: - (float)scale;	// 0x34546379
// declared property getter: - (CGSize)size;	// 0x34546211
- (id)stretchableImageWithLeftCapWidth:(int)leftCapWidth topCapHeight:(int)height;	// 0x345647c5
// declared property getter: - (int)topCapHeight;	// 0x34558fd1
- (BOOL)writeToCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x34718b71
@end
