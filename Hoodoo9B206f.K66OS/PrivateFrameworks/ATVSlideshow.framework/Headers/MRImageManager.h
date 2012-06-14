/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSMutableSet, NSMutableDictionary, MRContext, NSLock, EAGLContext;

@interface MRImageManager : NSObject {
	MRContext *mBaseContext;	// 4 = 0x4
	EAGLContext *mImageGLContext;	// 8 = 0x8
	NSMutableDictionary *mImageInfos;	// 12 = 0xc
	NSLock *mImageInfosLock;	// 16 = 0x10
	NSMutableDictionary *mFBOs;	// 20 = 0x14
	NSMutableSet *mAvailableFBOs;	// 24 = 0x18
	NSMutableSet *mRecyclableFBOs;	// 28 = 0x1c
	NSMutableSet *mRemoteKeysToRelease;	// 32 = 0x20
	unsigned long long mHostTime;	// 36 = 0x24
}
@property(readonly, assign) MRContext *baseContext;	// G=0x30a7ad1d; @synthesize=mBaseContext
@property(assign, nonatomic) unsigned long long hostTime;	// G=0x30a7ad3d; S=0x30a7ad55; @synthesize=mHostTime
@property(readonly, assign) EAGLContext *imageGLContext;	// G=0x30a7ad2d; @synthesize=mImageGLContext
+ (void)cleanupPictureCache;	// 0x30a7b9cd
+ (void)initialize;	// 0x30a788f1
- (id)initWithBaseContext:(id)baseContext;	// 0x30a78931
- (CGImageRef)CGImageWithData:(id)data withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x30a7b679
- (CGImageRef)CGImageWithMoviePath:(id)moviePath withOriginalSize:(CGSize)originalSize forSize:(CGSize)size atTime:(double)time orientation:(char *)orientation;	// 0x30a7b9c9
- (CGImageRef)CGImageWithPath:(id)path withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x30a7b32d
- (IOSurfaceRef)IOSurfaceWithData:(id)data withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x30a7af05
- (IOSurfaceRef)IOSurfaceWithMoviePath:(id)moviePath withOriginalSize:(CGSize)originalSize forSize:(CGSize)size atTime:(double)time orientation:(char *)orientation;	// 0x30a7b329
- (IOSurfaceRef)IOSurfaceWithPath:(id)path withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x30a7ad69
// declared property getter: - (id)baseContext;	// 0x30a7ad1d
- (BOOL)configureMovieAtPath:(id)path forSize:(CGSize)size time:(double)time intoImageInfo:(id)info;	// 0x30a7bc75
- (void)dealloc;	// 0x30a78ae5
- (id)fboTextureWithSize:(CGSize)size;	// 0x30a78e59
// declared property getter: - (unsigned long long)hostTime;	// 0x30a7ad3d
- (id)imageFromMovieWithImageInfo:(id)imageInfo atTime:(double)time;	// 0x30a7c0e5
// declared property getter: - (id)imageGLContext;	// 0x30a7ad2d
- (void)play:(BOOL)play forImageKey:(id)imageKey;	// 0x30a7a7f5
- (void)purgeResources:(BOOL)resources;	// 0x30a78bfd
- (void)recycleFBOTexture:(id)texture;	// 0x30a79071
- (void)releaseImageBufferForImage:(id)image;	// 0x30a7a53d
- (void)releaseStuffForRemoteKey:(id)remoteKey;	// 0x30a7c27d
- (id)retainedByUserImageForAsset:(id)asset atSize:(CGSize)size andTime:(double)time previousImageBufferKey:(id)key options:(id)options;	// 0x30a79091
- (id)retainedByUserImageWithCGContext:(CGContextRef)cgcontext;	// 0x30a7ac49
- (id)retainedByUserImageWithSize:(CGSize)size andColor:(const float *)color;	// 0x30a7aca9
// declared property setter: - (void)setHostTime:(unsigned long long)time;	// 0x30a7ad55
- (void)setTime:(double)time forImageKey:(id)imageKey;	// 0x30a7a925
@end
