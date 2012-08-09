/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MPDocument;

@interface MPCropController : NSObject {
	id _delegate;	// 4 = 0x4
	MPDocument *_authoredDocument;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x333979f5; S=0x33397a05; converted property
+ (void)releaseSharedController;	// 0x333978e9
+ (id)sharedController;	// 0x333977f9
- (id)init;	// 0x333979b5
- (void)_applyCropToSlidesInEffectContainersWithArguments:(id)arguments;	// 0x3339840d
- (void)applyAnimatedCropToBreakSlide:(id)breakSlide withOptions:(id)options;	// 0x3339aae9
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x33398fc9
- (void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options centeredAt:(CGPoint)at alwaysZoomIn:(BOOL)anIn;	// 0x3339b351
- (void)applyAnimatedCropWithROIsToSlide:(id)slide withOptions:(id)options;	// 0x33398ff9
- (void)applyCropToSlide:(id)slide inDocument:(id)document withOptions:(id)options;	// 0x333988f1
- (void)applyCropToSlide:(id)slide withOptions:(id)options;	// 0x33398a71
- (void)applyCropToSlidesInEffectContainers:(id)effectContainers inDocument:(id)document withOptions:(id)options;	// 0x333984a9
- (void)applyMultiFaceAnimatedCropToSlide:(id)slide withOptions:(id)options;	// 0x3339bcb1
- (void)applyStationaryCropToSlide:(id)slide withOptions:(id)options;	// 0x33399375
- (void)batchCrop:(id)crop;	// 0x33397a15
- (CGPoint)checkFarApartROIs:(id)rois withImageSize:(CGSize)imageSize visibleAspectRatio:(float)ratio roiCenter:(CGPoint)center;	// 0x33399ce9
- (void)cleanup;	// 0x33398a41
- (void)cropSlidesForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;	// 0x33397da9
- (void)cropSlidesInDocument:(id)document withOptions:(id)options;	// 0x33397d6d
// converted property getter: - (id)delegate;	// 0x333979f5
- (double)durationOfSlide:(id)slide;	// 0x3339c6ad
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33397a05
- (void)setupWithDocument:(id)document andOptions:(id)options;	// 0x333989fd
@end
