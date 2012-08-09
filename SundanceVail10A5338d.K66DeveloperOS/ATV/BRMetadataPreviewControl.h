/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMetadataControl, BRCoverArtImageLayer, NSTimer, BRReflectionControl;
@protocol BRMetadataProvider;

__attribute__((visibility("hidden")))
@interface BRMetadataPreviewControl : BRControl {
	id _asset;	// 80 = 0x50
	id<BRMetadataProvider> _metadataProvider;	// 84 = 0x54
	BRControl *_coverArtWrapper;	// 88 = 0x58
	BRCoverArtImageLayer *_coverArtLayer;	// 92 = 0x5c
	BRReflectionControl *_reflectionLayer;	// 96 = 0x60
	BRMetadataControl *_metadataLayer;	// 100 = 0x64
	NSTimer *_timer;	// 104 = 0x68
	BOOL _showsMetadataImmediately;	// 108 = 0x6c
	BOOL _showingMetadata;	// 109 = 0x6d
}
@property(retain) id asset;	// G=0x30293d; S=0x30277d; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x3029a9; S=0x302989; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x3029ed; S=0x3029cd; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x302979; S=0x30294d; converted property
- (id)init;	// 0x301bd1
- (void)_coverArtChanged:(id)changed;	// 0x302ee5
- (void)_downloadStateChanged:(id)changed;	// 0x302f61
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x302fa5
- (CGRect)_frameForArt:(id)art withMetadataFrame:(CGRect)metadataFrame inBounds:(CGSize)bounds;	// 0x3030c9
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x3033e5
- (void)_metadataTimerFired:(id)fired;	// 0x302f41
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x303495
- (void)_showMetadataAfterDelay;	// 0x302ad5
- (void)_updateMetadataLayer;	// 0x302b71
- (id)accessibilityLabel;	// 0x302ab5
// converted property getter: - (id)asset;	// 0x30293d
- (void)controlWasActivated;	// 0x302a21
- (void)controlWasDeactivated;	// 0x302a61
- (void)dealloc;	// 0x301df9
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x3029a9
- (void)layoutSubcontrols;	// 0x301ed9
- (id)metadataControl;	// 0x302a11
// converted property setter: - (void)setAsset:(id)asset;	// 0x30277d
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x302989
- (void)setImageProxy:(id)proxy;	// 0x3026b1
- (void)setMetadataProvider:(id)provider;	// 0x302711
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x3029cd
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x30294d
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x3029ed
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x302979
@end
