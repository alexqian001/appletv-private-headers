/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRSecureResource.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTDocumentLoader, RUIYTMediaAsset;

__attribute__((visibility("hidden")))
@interface RUIYTOptionsMenuController : BRViewController <RUIYTDocumentLoaderDelegate, BRSecureResource> {
	RUIYTDocumentLoader *_documentLoader;	// 104 = 0x68
	RUIYTMediaAsset *_origAsset;	// 108 = 0x6c
	BOOL _rated;	// 112 = 0x70
	BOOL _flagged;	// 113 = 0x71
	BOOL _faving;	// 114 = 0x72
}
- (id)initWithOriginalAsset:(id)originalAsset blurImage:(id)image;	// 0x26fed9
- (void).cxx_destruct;	// 0x270659
- (void)_favingDoneBySaving:(BOOL)saving error:(id)error;	// 0x270a21
- (void)_flag;	// 0x270b91
- (void)_handleRated;	// 0x270781
- (void)_playNoopSound;	// 0x27068d
- (void)_rate;	// 0x2706ad
- (void)_removeFromFavorites;	// 0x270905
- (void)_saveToFavorites;	// 0x2707e9
- (void)dealloc;	// 0x27016d
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x2704f5
- (BOOL)isNetworkDependent;	// 0x27028d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x270445
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x270291
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x270441
- (id)secureResourceAuthenticator;	// 0x2705d5
- (void)wasExhumed;	// 0x27020d
@end
