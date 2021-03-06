/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListDataSourceAspectDelegate.h"
#import "BRViewController.h"
#import "RUIYTDocumentLoaderDelegate.h"

@class RUIYTDocumentLoader, BRMediaMenuView, RUIYTAssetsInfo, RUIYTVideosDocumentSpec, RUIYTListDataSourceAspect;

__attribute__((visibility("hidden")))
@interface RUIYTVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	RUIYTDocumentLoader *_documentLoader;	// 108 = 0x6c
	RUIYTVideosDocumentSpec *_spec;	// 112 = 0x70
	RUIYTAssetsInfo *_initialAssetsInfo;	// 116 = 0x74
	BOOL _playWhenPushed;	// 120 = 0x78
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 124 = 0x7c
}
@property(assign) BOOL playWhenPushed;	// G=0x281275; S=0x28128d; @synthesize=_playWhenPushed
+ (id)controllerWithSpec:(id)spec;	// 0x280719
+ (id)controllerWithSpec:(id)spec assetsInfo:(id)info;	// 0x280761
- (id)initWithSpec:(id)spec assetsInfo:(id)info;	// 0x2807c1
- (void).cxx_destruct;	// 0x2812a5
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x28140d
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x281315
- (void)dealloc;	// 0x280a7d
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x280f65
- (id)identifier;	// 0x280b1d
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x2810b9
// declared property getter: - (BOOL)playWhenPushed;	// 0x281275
// declared property setter: - (void)setPlayWhenPushed:(BOOL)pushed;	// 0x28128d
- (void)wasPushed;	// 0x280b3d
@end

