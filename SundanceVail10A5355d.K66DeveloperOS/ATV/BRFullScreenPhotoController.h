/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, NSString;
@protocol BRPhotoProviderForCollection, BRFullScreenPhotoControllerDelegate;

__attribute__((visibility("hidden")))
@interface BRFullScreenPhotoController : BRController {
	long _startIndex;	// 96 = 0x60
	long _currentIndex;	// 100 = 0x64
	id<BRPhotoProviderForCollection> _provider;	// 104 = 0x68
	id<BRFullScreenPhotoControllerDelegate> _delegate;	// 108 = 0x6c
	BOOL _isNetworkDependent;	// 112 = 0x70
	NSMutableArray *_prefetchImageIDs;	// 116 = 0x74
	NSString *_lastPrefetchAssetID;	// 120 = 0x78
	BOOL _initialLayoutCompleted;	// 124 = 0x7c
	int _startTouchXPosition;	// 128 = 0x80
	float _curTouchOffset;	// 132 = 0x84
	BOOL _imagePrefetchDisabled;	// 136 = 0x88
	long _numPrefetchInProgress;	// 140 = 0x8c
}
@property(readonly, assign) long currentIndex;	// G=0x2815c1; converted property
@property(assign) BOOL imagePrefetchDisabled;	// G=0x281649; S=0x28162d; converted property
@property(assign) BOOL isNetworkDependent;	// G=0x28161d; S=0x28160d; converted property
@property(readonly, assign, nonatomic) id<BRPhotoProviderForCollection> provider;	// G=0x281a51; @synthesize=_provider
+ (id)fullScreenPhotoControllerForProvider:(id)provider startIndex:(long)index;	// 0x281165
- (id)initWithProvider:(id)provider startIndex:(long)index;	// 0x2811b5
- (void)_handleSelection;	// 0x281ca9
- (void)_nextSlide;	// 0x281b91
- (void)_nextSlideWithTransition;	// 0x281c21
- (void)_playerStateChanged:(id)changed;	// 0x282531
- (void)_prefetchImageWritten:(id)written;	// 0x2825c9
- (void)_prefetchNextImage;	// 0x2822b1
- (void)_previousSlide;	// 0x281bd9
- (void)_previousSlideWithTransition;	// 0x281c65
- (void)_setImageLayerTargetBounds;	// 0x281a61
- (long)_switchToImageControlForIndex:(long)index usingSwipeTransition:(BOOL)transition;	// 0x281ed9
- (id)accessibilityLabel;	// 0x2812cd
- (BOOL)brEventAction:(id)action;	// 0x281659
- (void)controlWasActivated;	// 0x2814a1
- (void)controlWasDeactivated;	// 0x281519
// converted property getter: - (long)currentIndex;	// 0x2815c1
- (void)dealloc;	// 0x2813e9
// converted property getter: - (BOOL)imagePrefetchDisabled;	// 0x281649
- (BOOL)isAccessibilityElement;	// 0x2812c9
// converted property getter: - (BOOL)isNetworkDependent;	// 0x28161d
- (BOOL)isValidAfterDataUpdate;	// 0x281575
- (void)layoutSubcontrols;	// 0x281909
// declared property getter: - (id)provider;	// 0x281a51
- (void)reload;	// 0x281a11
- (void)setControllerDelegate:(id)delegate;	// 0x2815d1
// converted property setter: - (void)setImagePrefetchDisabled:(BOOL)disabled;	// 0x28162d
// converted property setter: - (void)setIsNetworkDependent:(BOOL)dependent;	// 0x28160d
@end
