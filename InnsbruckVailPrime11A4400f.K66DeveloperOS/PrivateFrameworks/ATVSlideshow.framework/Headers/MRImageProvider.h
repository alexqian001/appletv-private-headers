/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class MRImage, NSDictionary, MRAsset, NSInvocationOperation, NSLock, NSString;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable> {
	NSString *mAssetPath;	// 4 = 0x4
	MRAsset *mAsset;	// 8 = 0x8
	CGSize mDefaultSize;	// 12 = 0xc
	NSString *mImageSizeScript;	// 20 = 0x14
	NSDictionary *mEffectAttributes;	// 24 = 0x18
	NSInvocationOperation *mPreloadOperation;	// 28 = 0x1c
	NSLock *mPreloadOperationLock;	// 32 = 0x20
	MRImage *mOriginalImage;	// 36 = 0x24
	CGSize mOriginalImageSize;	// 40 = 0x28
	BOOL mIsLoaded;	// 48 = 0x30
	CGSize mRequestedSize;	// 52 = 0x34
	double mShowTime;	// 60 = 0x3c
	double mShowDuration;	// 68 = 0x44
	CGSize mLastImageSize;	// 76 = 0x4c
	double mLastTime;	// 84 = 0x54
	CGSize mLastDaSize;	// 92 = 0x5c
	BOOL mNeedsToUpdate;	// 100 = 0x64
	BOOL mIsUpdatingLive;	// 101 = 0x65
	BOOL mNeedsToUnloadOnEndLiveUpdate;	// 102 = 0x66
	BOOL mIsMonochromatic;	// 103 = 0x67
	BOOL mUseMipmapping;	// 104 = 0x68
	BOOL mUsePowerOfTwo;	// 105 = 0x69
	BOOL mIsCleanedUp;	// 106 = 0x6a
	BOOL mJustHoldIt;	// 107 = 0x6b
}
@property(copy, nonatomic) NSString *assetPath;	// G=0x2fc68a8d; S=0x2fc672f9; @synthesize=mAssetPath
@property(assign, nonatomic) CGSize defaultSize;	// G=0x2fc68951; S=0x2fc66f05; @synthesize=mDefaultSize
@property(retain, nonatomic) NSDictionary *effectAttributes;	// G=0x2fc6897d; S=0x2fc67055; @synthesize=mEffectAttributes
@property(readonly, assign, nonatomic) float imageAspectRatio;	// G=0x2fc66fb9; 
@property(copy, nonatomic) NSString *imageSizeScript;	// G=0x2fc68969; S=0x2fc66fd9; @synthesize=mImageSizeScript
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x2fc67f9d; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x2fc67fa1; 
@property(readonly, assign, nonatomic) BOOL isLoaded;	// G=0x2fc6898d; @synthesize=mIsLoaded
@property(assign, nonatomic) BOOL isMonochromatic;	// G=0x2fc6899d; S=0x2fc689ad; @synthesize=mIsMonochromatic
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x2fc67f95; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x2fc67f99; 
@property(assign, nonatomic) BOOL justHoldIt;	// G=0x2fc68a6d; S=0x2fc68a7d; @synthesize=mJustHoldIt
@property(assign, nonatomic) CGSize originalImageSize;	// G=0x2fc68aa1; S=0x2fc68ab9; @synthesize=mOriginalImageSize
@property(readonly, assign, nonatomic) CGSize requestedSize;	// G=0x2fc68a55; @synthesize=mRequestedSize
@property(assign, nonatomic) double showDuration;	// G=0x2fc68a29; S=0x2fc68a41; @synthesize=mShowDuration
@property(assign, nonatomic) double showTime;	// G=0x2fc689fd; S=0x2fc68a15; @synthesize=mShowTime
@property(assign, nonatomic) BOOL useMipmapping;	// G=0x2fc689bd; S=0x2fc689cd; @synthesize=mUseMipmapping
@property(assign, nonatomic) BOOL usePowerOfTwo;	// G=0x2fc689dd; S=0x2fc689ed; @synthesize=mUsePowerOfTwo
- (id)init;	// 0x2fc66c49
- (void)_loadTextureWithArguments:(id)arguments;	// 0x2fc67a21
// declared property getter: - (id)assetPath;	// 0x2fc68a8d
- (BOOL)beginLiveUpdate;	// 0x2fc673b5
- (void)cancelLoading;	// 0x2fc67e69
- (void)cleanup;	// 0x2fc66da9
- (void)dealloc;	// 0x2fc66d05
// declared property getter: - (CGSize)defaultSize;	// 0x2fc68951
// declared property getter: - (id)effectAttributes;	// 0x2fc6897d
- (BOOL)endLiveUpdate;	// 0x2fc673c9
- (void)finalize;	// 0x2fc66d69
// declared property getter: - (float)imageAspectRatio;	// 0x2fc66fb9
- (CGSize)imageSizeForAspectRatio:(float)aspectRatio;	// 0x2fc670b9
// declared property getter: - (id)imageSizeScript;	// 0x2fc68969
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x2fc67f9d
// declared property getter: - (BOOL)isInfinite;	// 0x2fc67fa1
// declared property getter: - (BOOL)isLoaded;	// 0x2fc6898d
- (BOOL)isLoadedForTime:(double)time;	// 0x2fc67405
// declared property getter: - (BOOL)isMonochromatic;	// 0x2fc6899d
// declared property getter: - (BOOL)isNative3D;	// 0x2fc67f95
// declared property getter: - (BOOL)isOpaque;	// 0x2fc67f99
// declared property getter: - (BOOL)justHoldIt;	// 0x2fc68a6d
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x2fc67419
- (void)loadTextureWithArguments:(id)arguments;	// 0x2fc67ae9
- (void)loadWithArguments:(id)arguments;	// 0x2fc67769
// declared property getter: - (CGSize)originalImageSize;	// 0x2fc68aa1
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc68809
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc67fa5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc68215
// declared property getter: - (CGSize)requestedSize;	// 0x2fc68a55
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fc68229
// declared property setter: - (void)setAssetPath:(id)path;	// 0x2fc672f9
// declared property setter: - (void)setDefaultSize:(CGSize)size;	// 0x2fc66f05
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x2fc67055
// declared property setter: - (void)setImageSizeScript:(id)script;	// 0x2fc66fd9
// declared property setter: - (void)setIsMonochromatic:(BOOL)monochromatic;	// 0x2fc689ad
// declared property setter: - (void)setJustHoldIt:(BOOL)it;	// 0x2fc68a7d
// declared property setter: - (void)setOriginalImageSize:(CGSize)size;	// 0x2fc68ab9
// declared property setter: - (void)setShowDuration:(double)duration;	// 0x2fc68a41
// declared property setter: - (void)setShowTime:(double)time;	// 0x2fc68a15
// declared property setter: - (void)setUseMipmapping:(BOOL)mipmapping;	// 0x2fc689cd
// declared property setter: - (void)setUsePowerOfTwo:(BOOL)two;	// 0x2fc689ed
// declared property getter: - (double)showDuration;	// 0x2fc68a29
// declared property getter: - (double)showTime;	// 0x2fc689fd
- (void)unload;	// 0x2fc67cd9
// declared property getter: - (BOOL)useMipmapping;	// 0x2fc689bd
// declared property getter: - (BOOL)usePowerOfTwo;	// 0x2fc689dd
@end
