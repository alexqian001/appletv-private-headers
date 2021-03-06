/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import "BRViewController.h"

@class RUIYTDocumentLoader, RUIYTMediaAsset;

__attribute__((visibility("hidden")))
@interface RUIYTOptionsMenuController : BRViewController <RUIYTDocumentLoaderDelegate, BRSecureResource> {
	RUIYTDocumentLoader *_documentLoader;	// 104 = 0x68
	RUIYTMediaAsset *_origAsset;	// 108 = 0x6c
	BOOL _rated;	// 112 = 0x70
	BOOL _flagged;	// 113 = 0x71
	BOOL _faving;	// 114 = 0x72
}
- (id)initWithOriginalAsset:(id)originalAsset blurImage:(id)image;	// 0x2817d1
- (void).cxx_destruct;	// 0x281f51
- (void)_favingDoneBySaving:(BOOL)saving error:(id)error;	// 0x282319
- (void)_flag;	// 0x282489
- (void)_handleRated;	// 0x282079
- (void)_playNoopSound;	// 0x281f85
- (void)_rate;	// 0x281fa5
- (void)_removeFromFavorites;	// 0x2821fd
- (void)_saveToFavorites;	// 0x2820e1
- (void)dealloc;	// 0x281a65
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x281ded
- (BOOL)isNetworkDependent;	// 0x281b85
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x281d3d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x281b89
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x281d39
- (id)secureResourceAuthenticator;	// 0x281ecd
- (void)wasExhumed;	// 0x281b05
@end

