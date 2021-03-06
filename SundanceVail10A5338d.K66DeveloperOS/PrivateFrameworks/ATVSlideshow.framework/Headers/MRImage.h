/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRTexture, NSDictionary, NSString, MRImageManager, NSMutableDictionary, EAGLContext;

@interface MRImage : NSObject {
	MRImageManager *mImageManager;	// 4 = 0x4
	unsigned long mWidth;	// 8 = 0x8
	unsigned long mHeight;	// 12 = 0xc
	MRImage *mRefImage;	// 16 = 0x10
	NSString *mImageBufferKey;	// 20 = 0x14
	MRTexture *mTexture;	// 24 = 0x18
	unsigned long mPixelFormat;	// 28 = 0x1c
	float mCenterX;	// 32 = 0x20
	float mCenterY;	// 36 = 0x24
	float mScale;	// 40 = 0x28
	float mRotationAngle;	// 44 = 0x2c
	NSString *mFilterID;	// 48 = 0x30
	NSDictionary *mShader;	// 52 = 0x34
	int mClampMode;	// 56 = 0x38
	double mSourceTimeStamp;	// 60 = 0x3c
	double mRenderTime;	// 68 = 0x44
	int mRetainByUserCount;	// 76 = 0x4c
	float mColor[4];	// 80 = 0x50
	IOSurfaceRef mIOSurface;	// 96 = 0x60
	CVBufferRef mCVPixelBuffer;	// 100 = 0x64
	CGContextRef mCGContext;	// 104 = 0x68
	CGColorSpaceRef mColorspace;	// 108 = 0x6c
	void *mDatas[3];	// 112 = 0x70
	unsigned long mDataSize;	// 124 = 0x7c
	unsigned long mDataRowBytes;	// 128 = 0x80
	unsigned long mDataWidth;	// 132 = 0x84
	unsigned long mDataHeight;	// 136 = 0x88
	unsigned char mOrientation;	// 140 = 0x8c
	NSMutableDictionary *mUserData;	// 144 = 0x90
	unsigned long mFlags;	// 148 = 0x94
}
@property(readonly, assign, nonatomic) float aspectRatio;	// G=0x3345d491; 
@property(assign, nonatomic) float centerX;	// G=0x3345e781; S=0x3345e791; @synthesize=mCenterX
@property(assign, nonatomic) float centerY;	// G=0x3345e7a1; S=0x3345e7b1; @synthesize=mCenterY
@property(assign, nonatomic) int clampMode;	// G=0x3345e8b5; S=0x3345e8c5; @synthesize=mClampMode
@property(copy, nonatomic) NSString *filterID;	// G=0x3345da69; S=0x3345e801; @synthesize=mFilterID
@property(assign, nonatomic) BOOL filtersNearest;	// G=0x3345d085; S=0x3345d099; 
@property(readonly, assign, nonatomic) BOOL hasKBOrShader;	// G=0x3345da91; 
@property(assign, nonatomic) BOOL hasKenBurns;	// G=0x3345d2fd; S=0x3345d311; 
@property(readonly, assign, nonatomic) unsigned long height;	// G=0x3345e761; @synthesize=mHeight
@property(readonly, assign) NSString *imageBufferKey;	// G=0x3345d335; 
@property(readonly, assign) MRImageManager *imageManager;	// G=0x3345e73d; @synthesize=mImageManager
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x3345d4c9; 
@property(readonly, assign, nonatomic) BOOL isMonochromatic;	// G=0x3345d071; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x3345d0bd; 
@property(readonly, assign, nonatomic) BOOL isPremultiplied;	// G=0x3345d05d; 
@property(readonly, assign, nonatomic) BOOL isYUV;	// G=0x3345db2d; 
@property(assign, nonatomic) BOOL mipmapFiltersNearest;	// G=0x3345d28d; S=0x3345d2a1; 
@property(readonly, assign, nonatomic) unsigned long pixelFormat;	// G=0x3345e771; @synthesize=mPixelFormat
@property(assign, nonatomic) BOOL preservesAspectRatio;	// G=0x3345d2c5; S=0x3345d2d9; 
@property(assign, nonatomic) double renderTime;	// G=0x3345e889; S=0x3345e8a1; @synthesize=mRenderTime
@property(assign, nonatomic) float rotationAngle;	// G=0x3345e7e1; S=0x3345e7f1; @synthesize=mRotationAngle
@property(assign, nonatomic) float scale;	// G=0x3345e7c1; S=0x3345e7d1; @synthesize=mScale
@property(retain) NSDictionary *shader;	// G=0x3345e825; S=0x3345e839; @synthesize=mShader
@property(assign, nonatomic) double sourceTimeStamp;	// G=0x3345e85d; S=0x3345e875; @synthesize=mSourceTimeStamp
@property(readonly, assign) MRTexture *texture;	// G=0x3345db89; 
@property(readonly, assign) MRTexture *textureIfExists;	// G=0x3345e3fd; 
@property(readonly, assign, nonatomic) unsigned textureName;	// G=0x3345e2f5; 
@property(readonly, assign, nonatomic) unsigned textureTarget;	// G=0x3345e351; 
@property(readonly, assign, nonatomic) EAGLContext *updateGLContext;	// G=0x3345e3a1; 
@property(readonly, assign) NSMutableDictionary *userData;	// G=0x3345d369; 
@property(assign, nonatomic) BOOL usesBackgroundColorAsBorderColor;	// G=0x3345d025; S=0x3345d039; 
@property(readonly, assign) BOOL usesMipmapping;	// G=0x3345d0d1; 
@property(readonly, assign, nonatomic) unsigned long width;	// G=0x3345e751; @synthesize=mWidth
- (id)init;	// 0x3345bcc9
- (id)initWithCGContext:(CGContextRef)cgcontext imageManager:(id)manager;	// 0x3345cb1d
- (id)initWithCGContext:(CGContextRef)cgcontext size:(CGSize)size imageManager:(id)manager;	// 0x3345c9f1
- (id)initWithCGImage:(CGImageRef)cgimage textureSize:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x3345c211
- (id)initWithCGImage:(CGImageRef)cgimage textureSize:(CGSize)size orientation:(int)orientation imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x3345c531
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer size:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x3345c82d
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer size:(CGSize)size orientation:(int)orientation imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x3345c921
- (id)initWithIOSurface:(IOSurfaceRef)iosurface imageBufferKey:(id)key imageManager:(id)manager;	// 0x3345c14d
- (id)initWithIOSurface:(IOSurfaceRef)iosurface imageManager:(id)manager;	// 0x3345c1ad
- (id)initWithIOSurface:(IOSurfaceRef)iosurface size:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager;	// 0x3345bfc1
- (id)initWithIOSurface:(IOSurfaceRef)iosurface size:(CGSize)size orientation:(int)orientation imageManager:(id)manager;	// 0x3345c099
- (id)initWithImage:(id)image;	// 0x3345bf3d
- (id)initWithSize:(CGSize)size andColor:(const float *)color imageBufferKey:(id)key imageManager:(id)manager options:(id)options;	// 0x3345bd2d
- (id)initWithTexture:(id)texture;	// 0x3345bebd
- (void)addOverlayForROI:(id)roi;	// 0x3345e431
// declared property getter: - (float)aspectRatio;	// 0x3345d491
// declared property getter: - (float)centerX;	// 0x3345e781
// declared property getter: - (float)centerY;	// 0x3345e7a1
// declared property getter: - (int)clampMode;	// 0x3345e8b5
- (void)cleanup;	// 0x3345cbf5
- (void)dealloc;	// 0x3345cb75
// declared property getter: - (id)filterID;	// 0x3345da69
// declared property getter: - (BOOL)filtersNearest;	// 0x3345d085
- (void)finalize;	// 0x3345cbb5
- (void)generateMipmap;	// 0x3345d10d
- (void)getMatrix:(float [16])matrix forReferenceAspectRatio:(float)referenceAspectRatio;	// 0x3345d661
// declared property getter: - (BOOL)hasKBOrShader;	// 0x3345da91
// declared property getter: - (BOOL)hasKenBurns;	// 0x3345d2fd
// declared property getter: - (unsigned long)height;	// 0x3345e761
// declared property getter: - (id)imageBufferKey;	// 0x3345d335
// declared property getter: - (id)imageManager;	// 0x3345e73d
- (id)insertingInCollection;	// 0x3345cf01
// declared property getter: - (BOOL)isEmpty;	// 0x3345d4c9
// declared property getter: - (BOOL)isMonochromatic;	// 0x3345d071
// declared property getter: - (BOOL)isOpaque;	// 0x3345d0bd
// declared property getter: - (BOOL)isPremultiplied;	// 0x3345d05d
// declared property getter: - (BOOL)isYUV;	// 0x3345db2d
- (void)kenburnsMatrix:(float [16])matrix forReferenceAspectRatio:(float)referenceAspectRatio;	// 0x3345d4f9
// declared property getter: - (BOOL)mipmapFiltersNearest;	// 0x3345d28d
// declared property getter: - (unsigned long)pixelFormat;	// 0x3345e771
// declared property getter: - (BOOL)preservesAspectRatio;	// 0x3345d2c5
- (CGSize)relativeSizeInContextPixelSize:(CGSize)contextPixelSize;	// 0x3345da19
- (void)releaseByUser;	// 0x3345ceb9
- (void)removingFromCollection;	// 0x3345cf2d
// declared property getter: - (double)renderTime;	// 0x3345e889
- (id)retainByUser;	// 0x3345ce89
- (id)retainedByUserImage;	// 0x3345cf55
- (id)retainedByUserImageWithShader:(id)shader;	// 0x3345cfb1
// declared property getter: - (float)rotationAngle;	// 0x3345e7e1
// declared property getter: - (float)scale;	// 0x3345e7c1
// declared property setter: - (void)setCenterX:(float)x;	// 0x3345e791
// declared property setter: - (void)setCenterY:(float)y;	// 0x3345e7b1
// declared property setter: - (void)setClampMode:(int)mode;	// 0x3345e8c5
// declared property setter: - (void)setFilterID:(id)anId;	// 0x3345e801
// declared property setter: - (void)setFiltersNearest:(BOOL)nearest;	// 0x3345d099
// declared property setter: - (void)setHasKenBurns:(BOOL)burns;	// 0x3345d311
// declared property setter: - (void)setMipmapFiltersNearest:(BOOL)nearest;	// 0x3345d2a1
- (void)setOnContext:(id)context onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(XXStruct_S04vsC *)state;	// 0x3345d9e9
// declared property setter: - (void)setPreservesAspectRatio:(BOOL)ratio;	// 0x3345d2d9
// declared property setter: - (void)setRenderTime:(double)time;	// 0x3345e8a1
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x3345e7f1
// declared property setter: - (void)setScale:(float)scale;	// 0x3345e7d1
// declared property setter: - (void)setShader:(id)shader;	// 0x3345e839
// declared property setter: - (void)setSourceTimeStamp:(double)stamp;	// 0x3345e875
// declared property setter: - (void)setUsesBackgroundColorAsBorderColor:(BOOL)color;	// 0x3345d039
// declared property getter: - (id)shader;	// 0x3345e825
// declared property getter: - (double)sourceTimeStamp;	// 0x3345e85d
// declared property getter: - (id)texture;	// 0x3345db89
// declared property getter: - (id)textureIfExists;	// 0x3345e3fd
// declared property getter: - (unsigned)textureName;	// 0x3345e2f5
// declared property getter: - (unsigned)textureTarget;	// 0x3345e351
- (void)unsetOnContext:(id)context onTextureUnit:(unsigned)unit state:(const XXStruct_S04vsC *)state;	// 0x3345da01
// declared property getter: - (id)updateGLContext;	// 0x3345e3a1
- (void)uploadCGImage:(CGImageRef)image toTextureRect:(CGRect)textureRect;	// 0x3345e619
// declared property getter: - (id)userData;	// 0x3345d369
// declared property getter: - (BOOL)usesBackgroundColorAsBorderColor;	// 0x3345d025
// declared property getter: - (BOOL)usesMipmapping;	// 0x3345d0d1
// declared property getter: - (unsigned long)width;	// 0x3345e751
@end

