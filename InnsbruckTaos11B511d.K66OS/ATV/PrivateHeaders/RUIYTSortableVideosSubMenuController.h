/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "BRViewController.h"
#import "RUIYTDocumentLoaderDelegate.h"
#import "RUIYTListDataSourceAspectDelegate.h"

@class BRMediaMenuView, RUIYTDocumentLoader, NSMutableDictionary, RUIYTVideosDocumentSpec, RUIYTListDataSourceAspect, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RUIYTSortableVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate, BRTabControlDelegate> {
	BRMediaMenuView *_mediaMenuView;	// 104 = 0x68
	NSMutableDictionary *_assetsInfoDictionary;	// 108 = 0x6c
	NSArray *_timeFilterInfos;	// 112 = 0x70
	NSMutableDictionary *_selectionIndices;	// 116 = 0x74
	RUIYTVideosDocumentSpec *_spec;	// 120 = 0x78
	RUIYTDocumentLoader *_documentLoader;	// 124 = 0x7c
	RUIYTListDataSourceAspect *_listDataSourceAspect;	// 128 = 0x80
	NSString *_selectedTimeFilter;	// 132 = 0x84
}
+ (id)_defaultTimeFilterInfos;	// 0x2a2001
+ (id)controllerWithSpec:(id)spec timeFilter:(id)filter;	// 0x2a0cf1
+ (id)controllerWithSpec:(id)spec timeFilter:(id)filter assetsInfoDictionary:(id)dictionary;	// 0x2a0d35
- (id)initWithSpec:(id)spec timeFilter:(id)filter timeFilterInfos:(id)infos assetsInfoDictionary:(id)dictionary;	// 0x2a0dd1
- (void).cxx_destruct;	// 0x2a1f55
- (id)_sectionsWithAssetsInfo:(id)assetsInfo;	// 0x2a241d
- (id)_timeFilterFromPreference;	// 0x2a2189
- (BOOL)_validateTimeFilter:(id)filter;	// 0x2a2305
- (void)dealloc;	// 0x2a1445
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x2a1a71
- (id)identifier;	// 0x2a1871
- (BOOL)listDataSourceAspect:(id)aspect loadMoreItemsForSection:(unsigned)section count:(unsigned)count;	// 0x2a1891
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x2a1c65
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x2a1e7d
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x2a1f51
- (void)wasPushed;	// 0x2a14a5
@end
