/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMediaShelfViewCell.h"
#import "BRPosterImageDataSource.h"
#import "BRContainerViewCell.h"
#import "BRControl.h"

@class NSMutableDictionary, BRPosterReflectionControl, BRAutoScrollingTextControl, BRWaitSpinnerControl, BRHorizontalSegmentedWidget, BRTextControl, NSString, BRImageControl, BRImage, BRAsyncTask;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRPosterControl : BRControl <BRMediaShelfViewCell, BRContainerViewCell, BRPosterImageDataSource> {
	int _style;	// 84 = 0x54
	BRImageControl *_defaultImageControl;	// 88 = 0x58
	BRImage *_defaultImage;	// 92 = 0x5c
	BRControl *_imageControl;	// 96 = 0x60
	BRImage *_image;	// 100 = 0x64
	id<BRImageProxy> _imageProxy;	// 104 = 0x68
	int _imageSize;	// 108 = 0x6c
	BRHorizontalSegmentedWidget *_numberBadge;	// 112 = 0x70
	int _numberBadgeValue;	// 116 = 0x74
	CGColorRef _posterBorderColor;	// 120 = 0x78
	float _posterBorderWidth;	// 124 = 0x7c
	BOOL _drawFakeAntialiasTopLine;	// 128 = 0x80
	BOOL _imageRequested;	// 129 = 0x81
	NSString *_artworkIdentifier;	// 132 = 0x84
	BRAsyncTask *_imageTask;	// 136 = 0x88
	BRPosterReflectionControl *_reflectionControl;	// 140 = 0x8c
	float _reflectionAmount;	// 144 = 0x90
	float _reflectionBaseline;	// 148 = 0x94
	CGSize _titleControlTypographicBounds;	// 152 = 0x98
	BRAutoScrollingTextControl *_autoScrollingTitleControl;	// 160 = 0xa0
	BRTextControl *_ordinalTextControl;	// 164 = 0xa4
	BRTextControl *_subtitleTextControl;	// 168 = 0xa8
	float _titleWidthScale;	// 172 = 0xac
	float _titleVerticalOffset;	// 176 = 0xb0
	float _subtitleVerticalOffset;	// 180 = 0xb4
	BOOL _alwaysShowTitles;	// 184 = 0xb8
	BOOL _onlyShowSubtitlesWhenFocused;	// 185 = 0xb9
	BRWaitSpinnerControl *_spinnerControl;	// 188 = 0xbc
	XXStruct_qlg9jA _cornerRadius;	// 192 = 0xc0
	float _cropAspectRatio;	// 196 = 0xc4
	BOOL _cropAndFill;	// 200 = 0xc8
	BOOL _deletterboxImage;	// 201 = 0xc9
	NSMutableDictionary *_badges;	// 204 = 0xcc
	float _badgeOpacity;	// 208 = 0xd0
	float _badgeFocusedOpacity;	// 212 = 0xd4
	BOOL _badgeUpdated;	// 216 = 0xd8
	BRImage *_borderImage;	// 220 = 0xdc
	CGRect _borderImageFocusRect;	// 224 = 0xe0
	CGRect _borderImagePhotoImageRect;	// 240 = 0xf0
	BOOL _decoratedImageCacheEnabled;	// 256 = 0x100
	BOOL _usingDecoratedImage;	// 257 = 0x101
	BOOL _imageEdgeAntialiasingEnabled;	// 258 = 0x102
	id _loadCompletionBlock;	// 260 = 0x104
	BOOL _readyToDisplay;	// 264 = 0x108
	BOOL _ignoreLoadAndDisplayOnDemand;	// 265 = 0x109
	BOOL _disableAnimations;	// 266 = 0x10a
	float _reflectionGradientFactor;	// 268 = 0x10c
}
@property(assign) BOOL alwaysShowTitles;	// G=0x31afc5; S=0x31af65; converted property
@property(assign) float badgeOpacity;	// G=0x31a97d; S=0x31a911; converted property
@property(assign) XXStruct_qlg9jA cornerRadius;	// G=0x31a6d9; S=0x31a6b9; converted property
@property(assign) BOOL cropAndFill;	// G=0x31a73d; S=0x31a6f5; converted property
@property(assign) float cropAspectRatio;	// G=0x31a7a1; S=0x31a74d; converted property
@property(retain) BRImage *defaultImage;	// G=0x319cc1; S=0x319c69; converted property
@property(assign) BOOL deletterboxImage;	// G=0x31b1fd; S=0x31b1ed; converted property
@property(assign) float focusedBadgeOpacity;	// G=0x31a9f9; S=0x31a98d; converted property
@property(readonly, retain) BRImage *image;	// G=0x31b1dd; converted property
@property(retain) id imageProxy;	// G=0x31a24d; S=0x31a199; converted property
@property(assign) int imageSize;	// G=0x31a23d; S=0x31a22d; converted property
@property(assign) int numberBadgeValue;	// G=0x31acb9; S=0x31aa09; converted property
@property(assign) BOOL onlyShowSubtitlesWhenFocused;	// G=0x31afe5; S=0x31afd5; converted property
@property(assign) int ordinal;	// G=0x31a545; S=0x31a3d1; converted property
@property(assign) CGColorRef posterBorderColor;	// G=0x319d11; S=0x319cd1; converted property
@property(assign) float posterBorderWidth;	// G=0x319d59; S=0x319d21; converted property
@property(assign) int posterStyle;	// G=0x31a189; S=0x319d95; converted property
@property(assign) float reflectionAmount;	// G=0x31a379; S=0x31a329; converted property
@property(assign) float reflectionBaseline;	// G=0x31a3c1; S=0x31a389; converted property
@property(assign, nonatomic) float reflectionGradientFactor;	// G=0x31cde1; S=0x31cdf1; @synthesize=_reflectionGradientFactor
@property(assign) BOOL spinnerEnabled;	// G=0x31a6a1; S=0x31a58d; converted property
@property(retain) id subtitle;	// G=0x31b1bd; S=0x31aff5; converted property
@property(assign) float subtitleVerticalOffset;	// G=0x31af55; S=0x31af1d; converted property
@property(retain) id title;	// G=0x31ae2d; S=0x31acc9; converted property
@property(assign) float titleVerticalOffset;	// G=0x31af0d; S=0x31aed5; converted property
@property(assign) float titleWidthScale;	// G=0x31aea1; S=0x31ae5d; converted property
+ (void)initialize;	// 0x319715
+ (Class)layerClass;	// 0x3196f9
+ (id)polaroidPosterWithImageProxy:(id)imageProxy title:(id)title;	// 0x31969d
+ (id)posterButtonWithImageProxy:(id)imageProxy title:(id)title;	// 0x319511
+ (id)tilePosterWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x319605
+ (id)twoLinePosterButtonWithImageProxy:(id)imageProxy title:(id)title subtitle:(id)subtitle;	// 0x319581
- (id)init;	// 0x319785
- (id)_addFadeAnimationToLayer:(id)layer forKey:(id)key;	// 0x31dc2d
- (id)_artworkIdentifier;	// 0x31e0a9
- (id)_badgeKeyForBadgePosition:(int)badgePosition;	// 0x31e2e9
- (id)_badgeKeys;	// 0x31e319
- (void)_clearCurrentImage;	// 0x31e12d
- (void)_cropImage:(id)image;	// 0x31ef8d
- (id)_currentImage;	// 0x31d349
- (CGRect)_currentImageRect;	// 0x31d4c1
- (void)_decorateImage:(id)image;	// 0x31f225
- (id)_decoratedImageIdentifier:(id)identifier size:(CGSize)size;	// 0x31f1c9
- (void)_deletterboxImage:(id)image;	// 0x31ef31
- (id)_fetchImage;	// 0x31e599
- (void)_focusWasChanged;	// 0x31dd19
- (id)_getDecoratedImage:(id)image imageID:(id)anId toSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x31f32d
- (id)_getImageFromCacheNamed:(id)cacheNamed withSize:(CGSize)size;	// 0x31e4bd
- (BOOL)_imageIsCorrectSize:(id)size requiresTask:(BOOL *)task requiresDeletterBox:(BOOL *)box;	// 0x31e8d9
- (void)_imageLoadFailed:(id)failed;	// 0x31e7fd
- (BOOL)_imageRequiresCrop;	// 0x31d0ed
- (int)_imageSize;	// 0x31e0fd
- (void)_imageTaskComplete:(id)complete;	// 0x31f96d
- (void)_imageUpdated:(id)updated;	// 0x31e65d
- (void)_lowMemoryNotification:(id)notification;	// 0x31e1b5
- (CGRect)_mainImageRectFromMainImageUnitRect;	// 0x31d56d
- (CGRect)_maxImageRect;	// 0x31d381
- (id)_ordinalAttributes;	// 0x31db1d
- (void)_performDeactivation;	// 0x31e1f5
- (BOOL)_resizeImage:(id)image;	// 0x31ea2d
- (void)_restartImageResizing;	// 0x31e0b9
- (void)_scaleImage:(id)image;	// 0x31f0b1
- (void)_setArtworkIdentifier:(id)identifier;	// 0x31df81
- (void)_setAttributedTitle:(id)title withCrossfade:(BOOL)crossfade;	// 0x31d9d1
- (void)_setFinalFormImage:(id)image;	// 0x31fa71
- (void)_startDeletterboxTaskForImage:(id)image;	// 0x31edc5
- (void)_startImageProcessingTaskForImage:(id)image;	// 0x31eaa5
- (id)_subtitleAttributes;	// 0x31d005
- (id)_titleAttributes;	// 0x31ce01
- (void)_updateDefaultArtwork;	// 0x31d135
- (void)_updateDeferredArtwork;	// 0x31e391
- (void)_updateTextLayerOpacity;	// 0x31d629
- (id)accessibilityLabel;	// 0x31c8d5
- (id)accessibilitySecondaryLabel;	// 0x31ca91
// converted property getter: - (BOOL)alwaysShowTitles;	// 0x31afc5
- (id)badge;	// 0x31cc35
// converted property getter: - (float)badgeOpacity;	// 0x31a97d
- (void)cancelContainerViewLoad;	// 0x31ccb9
- (void)controlWasActivated;	// 0x319ab9
- (void)controlWasDeactivated;	// 0x319b95
- (void)controlWasFocused;	// 0x31b4bd
- (void)controlWasUnfocused;	// 0x31b4fd
// converted property getter: - (XXStruct_qlg9jA)cornerRadius;	// 0x31a6d9
// converted property getter: - (BOOL)cropAndFill;	// 0x31a73d
// converted property getter: - (float)cropAspectRatio;	// 0x31a7a1
- (void)dealloc;	// 0x3198ad
// converted property getter: - (id)defaultImage;	// 0x319cc1
// converted property getter: - (BOOL)deletterboxImage;	// 0x31b1fd
- (id)description;	// 0x319a41
- (BOOL)drawsFakeAntiAliasTopLine;	// 0x319d85
- (CGRect)focusCursorFrame;	// 0x31b20d
// converted property getter: - (float)focusedBadgeOpacity;	// 0x31a9f9
- (void)hideTextLayers;	// 0x31b53d
// converted property getter: - (id)image;	// 0x31b1dd
// converted property getter: - (id)imageProxy;	// 0x31a24d
// converted property getter: - (int)imageSize;	// 0x31a23d
- (BOOL)isAccessibilityElement;	// 0x31c8d1
- (void)layoutSubcontrols;	// 0x31b5c1
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x31cc45
// converted property getter: - (int)numberBadgeValue;	// 0x31acb9
// converted property getter: - (BOOL)onlyShowSubtitlesWhenFocused;	// 0x31afe5
// converted property getter: - (int)ordinal;	// 0x31a545
// converted property getter: - (CGColorRef)posterBorderColor;	// 0x319d11
// converted property getter: - (float)posterBorderWidth;	// 0x319d59
- (id)posterImage;	// 0x31cd59
// converted property getter: - (int)posterStyle;	// 0x31a189
- (float)preferredCursorRadius;	// 0x31cc21
// converted property getter: - (float)reflectionAmount;	// 0x31a379
// converted property getter: - (float)reflectionBaseline;	// 0x31a3c1
// declared property getter: - (float)reflectionGradientFactor;	// 0x31cde1
// converted property setter: - (void)setAlwaysShowTitles:(BOOL)titles;	// 0x31af65
- (void)setBadgeControl:(id)control atPosition:(int)position badgeInset:(XXStruct_40SSZC)inset;	// 0x31a7b1
// converted property setter: - (void)setBadgeOpacity:(float)opacity;	// 0x31a911
// converted property setter: - (void)setCornerRadius:(XXStruct_qlg9jA)radius;	// 0x31a6b9
// converted property setter: - (void)setCropAndFill:(BOOL)fill;	// 0x31a6f5
// converted property setter: - (void)setCropAspectRatio:(float)ratio;	// 0x31a74d
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x319c69
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x31b1ed
- (void)setDrawsFakeAntialiasTopLine:(BOOL)line;	// 0x319d69
- (BOOL)setEnableDecoratedImageCache:(BOOL)cache;	// 0x31a25d
// converted property setter: - (void)setFocusedBadgeOpacity:(float)opacity;	// 0x31a98d
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x31cd0d
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x31cd2d
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x31a2b9
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x31a199
// converted property setter: - (void)setImageSize:(int)size;	// 0x31a22d
- (void)setNonAttributedSubtitle:(id)subtitle;	// 0x31b105
- (void)setNonAttributedTitle:(id)title;	// 0x31acf5
- (void)setNonAttributedTitleWithCrossfade:(id)crossfade;	// 0x31adad
// converted property setter: - (void)setNumberBadgeValue:(int)value;	// 0x31aa09
// converted property setter: - (void)setOnlyShowSubtitlesWhenFocused:(BOOL)focused;	// 0x31afd5
// converted property setter: - (void)setOrdinal:(int)ordinal;	// 0x31a3d1
// converted property setter: - (void)setPosterBorderColor:(CGColorRef)color;	// 0x319cd1
// converted property setter: - (void)setPosterBorderWidth:(float)width;	// 0x319d21
// converted property setter: - (void)setPosterStyle:(int)style;	// 0x319d95
- (void)setReadyToDisplay;	// 0x31cce5
// converted property setter: - (void)setReflectionAmount:(float)amount;	// 0x31a329
// converted property setter: - (void)setReflectionBaseline:(float)baseline;	// 0x31a389
// declared property setter: - (void)setReflectionGradientFactor:(float)factor;	// 0x31cdf1
// converted property setter: - (void)setSpinnerEnabled:(BOOL)enabled;	// 0x31a58d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x31aff5
// converted property setter: - (void)setSubtitleVerticalOffset:(float)offset;	// 0x31af1d
// converted property setter: - (void)setTitle:(id)title;	// 0x31acc9
// converted property setter: - (void)setTitleVerticalOffset:(float)offset;	// 0x31aed5
// converted property setter: - (void)setTitleWidthScale:(float)scale;	// 0x31ae5d
- (void)setTitleWithCrossfade:(id)crossfade;	// 0x31acdd
// converted property getter: - (BOOL)spinnerEnabled;	// 0x31a6a1
// converted property getter: - (id)subtitle;	// 0x31b1bd
// converted property getter: - (float)subtitleVerticalOffset;	// 0x31af55
// converted property getter: - (id)title;	// 0x31ae2d
- (id)titleControl;	// 0x31ae4d
// converted property getter: - (float)titleVerticalOffset;	// 0x31af0d
// converted property getter: - (float)titleWidthScale;	// 0x31aea1
- (void)windowMaxBoundsChanged;	// 0x319bd5
@end

