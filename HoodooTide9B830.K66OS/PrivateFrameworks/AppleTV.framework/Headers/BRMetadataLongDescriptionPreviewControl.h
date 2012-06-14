/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRReflectionControl, BRMetadataLongDescriptionControl, NSTimer, BRCoverArtImageLayer;
@protocol BRMetadataProvider;

@interface BRMetadataLongDescriptionPreviewControl : BRControl {
@private
	id _asset;	// 48 = 0x30
	id<BRMetadataProvider> _metadataProvider;	// 52 = 0x34
	BRControl *_coverArtWrapper;	// 56 = 0x38
	BRCoverArtImageLayer *_coverArtLayer;	// 60 = 0x3c
	BRReflectionControl *_reflectionLayer;	// 64 = 0x40
	BRMetadataLongDescriptionControl *_metadataLayer;	// 68 = 0x44
	NSTimer *_timer;	// 72 = 0x48
	BOOL _showsMetadataImmediately;	// 76 = 0x4c
	BOOL _showingMetadata;	// 77 = 0x4d
}
@property(retain) id asset;	// G=0x329f6881; S=0x329f66a5; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x329f68f1; S=0x329f68d1; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x329f6935; S=0x329f6915; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x329f68c1; S=0x329f6891; converted property
- (id)init;	// 0x329f5ec1
- (void)_coverArtChanged:(id)changed;	// 0x329f6c6d
- (void)_downloadStateChanged:(id)changed;	// 0x329f6ce9
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x329f6d29
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x329f6de5
- (void)_metadataTimerFired:(id)fired;	// 0x329f6cc9
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x329f6df5
- (void)_showMetadataAfterDelay;	// 0x329f6a79
- (void)_updateMetadataLayer;	// 0x329f6b19
- (id)accessibilityLabel;	// 0x329f69fd
- (id)accessibilityScreenContent;	// 0x329f6e41
// converted property getter: - (id)asset;	// 0x329f6881
- (void)controlWasActivated;	// 0x329f6969
- (void)controlWasDeactivated;	// 0x329f69a9
- (void)dealloc;	// 0x329f61e1
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x329f68f1
- (void)layoutSubcontrols;	// 0x329f62c1
- (id)metadataControl;	// 0x329f6959
// converted property setter: - (void)setAsset:(id)asset;	// 0x329f66a5
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x329f68d1
- (void)setImageProxy:(id)proxy;	// 0x329f65d9
- (void)setMetadataProvider:(id)provider;	// 0x329f6639
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x329f6915
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x329f6891
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x329f6935
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x329f68c1
@end
