/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ATVImage, NSMutableDictionary, BRWaitSpinnerControl, NSArray;

__attribute__((visibility("hidden")))
@interface BRTransportLayer : BRControl {
	BOOL _zeroDuration;	// 84 = 0x54
	BOOL _drawsBetweenLeftEdgeAndBufferEdge;	// 85 = 0x55
	BOOL _useWideLeftEndCap;	// 86 = 0x56
	BOOL _useWideRightEndCap;	// 87 = 0x57
	BOOL _playerStateHidden;	// 88 = 0x58
	float _percentComplete;	// 92 = 0x5c
	NSRange _downloadedRange;	// 96 = 0x60
	int _currentState;	// 104 = 0x68
	NSMutableDictionary *_cachedImages;	// 108 = 0x6c
	CGRect _leftEndCapBounds;	// 112 = 0x70
	CGRect _rightEndCapBounds;	// 128 = 0x80
	CGRect _leftEndCapExtensionBounds;	// 144 = 0x90
	CGRect _rightEndCapExtensionBounds;	// 160 = 0xa0
	ATVImage *_leftEndCap;	// 176 = 0xb0
	ATVImage *_leftEndCapPiece;	// 180 = 0xb4
	ATVImage *_rightEndCap;	// 184 = 0xb8
	ATVImage *_rightEndCapPiece;	// 188 = 0xbc
	CGRect _leftProgressEndCapBounds;	// 192 = 0xc0
	CGRect _rightProgressEndCapBounds;	// 208 = 0xd0
	ATVImage *_leftProgressEndCap;	// 224 = 0xe0
	ATVImage *_rightProgressEndCap;	// 228 = 0xe4
	ATVImage *_leftProgressUnbufferedEndCap;	// 232 = 0xe8
	CGRect _leftGrayBarBounds;	// 236 = 0xec
	CGRect _rightGrayBarBounds;	// 252 = 0xfc
	ATVImage *_grayBarPiece;	// 268 = 0x10c
	CGRect _rightGrayEndCapBounds;	// 272 = 0x110
	ATVImage *_rightGrayEndCap;	// 288 = 0x120
	CGRect _leftWhiteBarBounds;	// 292 = 0x124
	CGRect _rightWhiteBarBounds;	// 308 = 0x134
	ATVImage *_whiteBarPiece;	// 324 = 0x144
	CGRect _blueAlreadyPlayedBounds;	// 328 = 0x148
	ATVImage *_blueAlreadyPlayed;	// 344 = 0x158
	CGRect _chapterMarkerBounds;	// 348 = 0x15c
	NSArray *_chapterMarkers;	// 364 = 0x16c
	NSArray *_interstitialMarkers;	// 368 = 0x170
	ATVImage *_interstitialOnImage;	// 372 = 0x174
	ATVImage *_interstitialOffImage;	// 376 = 0x178
	long _currentInterstitialIndex;	// 380 = 0x17c
	float _temporaryMarkerPositionPercentage;	// 384 = 0x180
	BOOL _showChapterMarkers;	// 388 = 0x184
	CGRect _playheadBounds;	// 392 = 0x188
	ATVImage *_playhead;	// 408 = 0x198
	CGSize _dynamicBounds;	// 412 = 0x19c
	CGSize _staticBounds;	// 420 = 0x1a4
	BRWaitSpinnerControl *_spinner;	// 428 = 0x1ac
}
@property(assign) BOOL showChapterMarks;	// G=0x3b4931; S=0x3b4911; converted property
@property(assign) int state;	// G=0x3b41c1; S=0x3b41d1; converted property
- (id)initWithSpinner:(BOOL)spinner;	// 0x3b3e69
- (id)_cachedImageForName:(id)name;	// 0x3b4dd5
- (void)_drawChapterMarkersInContext:(CGContextRef)context;	// 0x3b58a5
- (void)_drawInterstitialMarkersInContext:(CGContextRef)context;	// 0x3b5c19
- (id)_loadImageForName:(id)name;	// 0x3b4e41
- (void)_updateDynamicFrames;	// 0x3b52d9
- (void)_updateLeftEnd;	// 0x3b4ca5
- (void)_updateStaticFrames;	// 0x3b4eb5
- (void)dealloc;	// 0x3b4135
- (void)drawRect:(CGRect)rect;	// 0x3b4971
- (void)layoutSubcontrols;	// 0x3b4941
- (CGRect)leftEndCapRenderableArea;	// 0x3b45a9
- (float)playheadPosition;	// 0x3b4771
- (CGRect)rightEndCapExtensionFrame;	// 0x3b4511
- (CGRect)rightEndCapFrame;	// 0x3b447d
- (void)setChapterMarkers:(id)markers withTemporaryMarker:(float)temporaryMarker;	// 0x3b4811
- (void)setCurrentInterstitialIndex:(long)index;	// 0x3b48f1
- (void)setDownloadedRange:(NSRange)range;	// 0x3b4429
- (void)setDrawsBetweenLeftEdgeAndBufferEdge:(BOOL)edge;	// 0x3b42a1
- (void)setInterstitialMarkers:(id)markers;	// 0x3b488d
- (void)setPercentComplete:(float)complete;	// 0x3b422d
- (void)setPlayerStateHidden:(BOOL)hidden;	// 0x3b4399
// converted property setter: - (void)setShowChapterMarks:(BOOL)marks;	// 0x3b4911
// converted property setter: - (void)setState:(int)state;	// 0x3b41d1
- (void)setUseWideLeftEndCap:(BOOL)cap;	// 0x3b42e9
- (void)setUseWideRightEndCap:(BOOL)cap;	// 0x3b4341
- (void)setZeroDuration:(BOOL)duration;	// 0x3b43e1
// converted property getter: - (BOOL)showChapterMarks;	// 0x3b4931
// converted property getter: - (int)state;	// 0x3b41c1
@end
