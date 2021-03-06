/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListDataSourceAspectDelegate.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import "BRViewController.h"

@class BRMediaMenuView, RUIYTVideosDocumentSpec, RUIYTAssetsInfo, RUIYTListDataSourceAspect, RUIYTDocumentLoader;

__attribute__((visibility("hidden")))
@interface RUIYTVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	RUIYTDocumentLoader *_documentLoader;	// 108 = 0x6c
	RUIYTVideosDocumentSpec *_spec;	// 112 = 0x70
	RUIYTAssetsInfo *_initialAssetsInfo;	// 116 = 0x74
	BOOL _playWhenPushed;	// 120 = 0x78
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 124 = 0x7c
}
@property(assign) BOOL playWhenPushed;	// G=0x267a51; S=0x267a69; @synthesize=_playWhenPushed
+ (id)controllerWithSpec:(id)spec;	// 0x266eed
+ (id)controllerWithSpec:(id)spec assetsInfo:(id)info;	// 0x266f35
- (id)initWithSpec:(id)spec assetsInfo:(id)info;	// 0x266f95
- (void).cxx_destruct;	// 0x267a81
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x267be9
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x267af1
- (void)dealloc;	// 0x267259
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x267745
- (id)identifier;	// 0x2672f9
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x267895
// declared property getter: - (BOOL)playWhenPushed;	// 0x267a51
// declared property setter: - (void)setPlayWhenPushed:(BOOL)pushed;	// 0x267a69
- (void)wasPushed;	// 0x267319
@end

