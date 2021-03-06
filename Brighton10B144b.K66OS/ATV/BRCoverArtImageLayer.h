/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	BRImage *_image;	// 88 = 0x58
	BOOL _deletterboxImage;	// 92 = 0x5c
	BOOL _showsDefaultCoverArt;	// 93 = 0x5d
	BOOL _showsBorder;	// 94 = 0x5e
	NSTimer *_setCoverArtTimer;	// 96 = 0x60
}
@property(assign) BOOL deletterboxImage;	// G=0x357485; S=0x357459; converted property
@property(readonly, retain) BRImage *image;	// G=0x3573f9; converted property
@property(assign) BOOL showsBorder;	// G=0x357555; S=0x3574b5; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x3574a5; S=0x357495; converted property
- (id)init;	// 0x3572a1
- (void)_coverArtChanged:(id)changed;	// 0x35787d
- (void)_setCoverArtImage:(id)image;	// 0x3576e5
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x357689
- (void)_setImageAsContents:(id)contents;	// 0x357805
- (void)_updateCoverArt;	// 0x357565
- (void)dealloc;	// 0x357369
// converted property getter: - (BOOL)deletterboxImage;	// 0x357485
// converted property getter: - (id)image;	// 0x3573f9
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x357459
- (void)setImageProxy:(id)proxy;	// 0x357409
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x3574b5
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x357495
// converted property getter: - (BOOL)showsBorder;	// 0x357555
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x3574a5
@end

