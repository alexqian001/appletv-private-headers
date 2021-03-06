/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPasteboardControl.h"

@class ABClippingImageView, UIImage, UIImageView;
@protocol ABPersonImageDataDelegate, ABStyleProvider;

@interface ABPersonImageView : ABPasteboardControl {
	void *_displayedPerson;	// 72 = 0x48
	UIImageView *_personImageView;	// 76 = 0x4c
	UIImageView *_editingImageView;	// 80 = 0x50
	ABClippingImageView *_emptyImageView;	// 84 = 0x54
	ABClippingImageView *_pasteboardMaskImageView;	// 88 = 0x58
	UIImage *_personImage;	// 92 = 0x5c
	BOOL _isEditing;	// 96 = 0x60
	BOOL _showLabel;	// 97 = 0x61
	BOOL _scalesContentToFit;	// 98 = 0x62
	BOOL _needsReflow;	// 99 = 0x63
	BOOL _needsReload;	// 100 = 0x64
	id<ABPersonImageDataDelegate> _imageDataDelegate;	// 104 = 0x68
	BOOL _multiplePhotoBackdropEnabled;	// 108 = 0x6c
	BOOL _shouldPickBestImage;	// 109 = 0x6d
	id<ABStyleProvider> _styleProvider;	// 112 = 0x70
	BOOL _allowsEditing;	// 116 = 0x74
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x3091ef9d; S=0x308e6ca1; @synthesize=_allowsEditing
@property(readonly, assign, nonatomic) UIImage *attributionImage;	// G=0x309085d9; 
@property(readonly, assign, nonatomic) UIImage *backgroundImage;	// G=0x309083e5; 
@property(assign, nonatomic) void *displayedPerson;	// G=0x30908625; S=0x308e732d; 
@property(readonly, retain) UIImageView *editingImageView;	// G=0x30908635; converted property
@property(readonly, retain) ABClippingImageView *emptyImageView;	// G=0x3090f0f9; converted property
@property(assign, nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;	// G=0x3091ef4d; S=0x308e6c2d; @synthesize=_imageDataDelegate
@property(readonly, assign, nonatomic) UIImage *maskImage;	// G=0x309084b1; 
@property(assign, nonatomic) BOOL multiplePhotoBackdropEnabled;	// G=0x3091ef5d; S=0x3091db41; @synthesize=_multiplePhotoBackdropEnabled
@property(readonly, assign, nonatomic) UIImage *overlayImage;	// G=0x30908539; 
@property(readonly, retain) ABClippingImageView *pasteboardMaskImageView;	// G=0x3091d5f9; converted property
@property(readonly, retain) UIImageView *personImageView;	// G=0x30907e89; converted property
@property(assign, nonatomic) BOOL scalesContentToFit;	// G=0x3091ef7d; S=0x3091ef8d; @synthesize=_scalesContentToFit
@property(assign, nonatomic) BOOL shouldPickBestImage;	// G=0x3091ef6d; S=0x308e6c4d; @synthesize=_shouldPickBestImage
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x30908429; S=0x308e68c1; @synthesize=_styleProvider
+ (id)newImageWithName:(id)name;	// 0x30908465
+ (CGSize)sizeForOptimalPerformance;	// 0x3091d579
- (id)initWithFrame:(CGRect)frame styleProvider:(id)provider;	// 0x308e66e9
- (void)_drawEditLabelInFrame:(CGRect)frame;	// 0x3091d6e9
- (id)_newDictionaryWithImageData;	// 0x3091dbb9
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)types;	// 0x3091dfcd
- (void)abMenuControllerWillHide;	// 0x3091e0f9
- (void)abMenuControllerWillShow:(id)abMenuController;	// 0x3091e085
- (BOOL)abShouldShowMenu;	// 0x3091e031
// declared property getter: - (BOOL)allowsEditing;	// 0x3091ef9d
// declared property getter: - (id)attributionImage;	// 0x309085d9
// declared property getter: - (id)backgroundImage;	// 0x309083e5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3091e119
- (void)copy:(id)copy;	// 0x3091e215
- (id)copyDefaultImageForPerson:(void *)person;	// 0x30907c19
- (id)copyImageForPerson:(void *)person withFrameSize:(CGSize)frameSize operation:(id)operation cache:(id)cache;	// 0x3091d945
- (void)dealloc;	// 0x3090b8c5
// declared property getter: - (void *)displayedPerson;	// 0x30908625
// converted property getter: - (id)editingImageView;	// 0x30908635
// converted property getter: - (id)emptyImageView;	// 0x3090f0f9
- (id)framedPhoto;	// 0x30907f45
- (BOOL)hasImageToDisplay;	// 0x3091db6d
// declared property getter: - (id)imageDataDelegate;	// 0x3091ef4d
- (void)layoutSubviews;	// 0x30907b59
// declared property getter: - (id)maskImage;	// 0x309084b1
// declared property getter: - (BOOL)multiplePhotoBackdropEnabled;	// 0x3091ef5d
// declared property getter: - (id)overlayImage;	// 0x30908539
- (void)paste:(id)paste;	// 0x3091e429
// converted property getter: - (id)pasteboardMaskImageView;	// 0x3091d5f9
// converted property getter: - (id)personImageView;	// 0x30907e89
- (void)reflow;	// 0x30907cd5
- (void)reflowIfNeeded;	// 0x30908705
- (void)reload;	// 0x30907bad
- (void)reloadIfNeeded;	// 0x30907b89
// declared property getter: - (BOOL)scalesContentToFit;	// 0x3091ef7d
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x308e6ca1
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x308e732d
// declared property setter: - (void)setImageDataDelegate:(id)delegate;	// 0x308e6c2d
- (void)setIsEditing:(BOOL)editing animate:(BOOL)animate;	// 0x3091daf9
// declared property setter: - (void)setMultiplePhotoBackdropEnabled:(BOOL)enabled;	// 0x3091db41
- (void)setNeedsReflow;	// 0x3091dad9
- (void)setNeedsReload;	// 0x308f66fd
// declared property setter: - (void)setScalesContentToFit:(BOOL)fit;	// 0x3091ef8d
// declared property setter: - (void)setShouldPickBestImage:(BOOL)pickBestImage;	// 0x308e6c4d
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x308e68c1
// declared property getter: - (BOOL)shouldPickBestImage;	// 0x3091ef6d
// declared property getter: - (id)styleProvider;	// 0x30908429
@end

