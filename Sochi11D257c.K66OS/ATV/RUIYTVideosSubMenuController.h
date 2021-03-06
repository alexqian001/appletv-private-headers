/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListDataSourceAspectDelegate.h"
#import "BRViewController.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTListDataSourceAspect, RUIYTVideosDocumentSpec, BRMediaMenuView, RUIYTDocumentLoader, RUIYTAssetsInfo;

__attribute__((visibility("hidden")))
@interface RUIYTVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	RUIYTDocumentLoader *_documentLoader;	// 108 = 0x6c
	RUIYTVideosDocumentSpec *_spec;	// 112 = 0x70
	RUIYTAssetsInfo *_initialAssetsInfo;	// 116 = 0x74
	BOOL _playWhenPushed;	// 120 = 0x78
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 124 = 0x7c
}
@property(assign) BOOL playWhenPushed;	// G=0x2b2869; S=0x2b2881; @synthesize=_playWhenPushed
+ (id)controllerWithSpec:(id)spec;	// 0x2b1d01
+ (id)controllerWithSpec:(id)spec assetsInfo:(id)info;	// 0x2b1d49
- (id)initWithSpec:(id)spec assetsInfo:(id)info;	// 0x2b1da9
- (void).cxx_destruct;	// 0x2b2899
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x2b2a01
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x2b2909
- (void)dealloc;	// 0x2b2065
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x2b2559
- (id)identifier;	// 0x2b2105
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x2b26ad
// declared property getter: - (BOOL)playWhenPushed;	// 0x2b2869
// declared property setter: - (void)setPlayWhenPushed:(BOOL)pushed;	// 0x2b2881
- (void)wasPushed;	// 0x2b2125
@end

