/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class ATVNavigationBarController;

__attribute__((visibility("hidden")))
@interface PodcastsMainController : BRViewController {
	ATVNavigationBarController *_navigationBarController;	// 104 = 0x68
}
+ (void)initialize;	// 0x222501
- (id)init;	// 0x222619
- (void).cxx_destruct;	// 0x223419
- (void)_favoriteAdded:(id)added;	// 0x22342d
- (void)_favoriteRemoved:(id)removed;	// 0x223581
- (id)_newFavoritesController;	// 0x2231cd
- (id)_newSearchControllerForItem:(id)item;	// 0x22327d
- (void)dealloc;	// 0x2227d1
- (void)reload;	// 0x222a49
- (void)updateBoundRootCollection;	// 0x2229c5
- (void)wasPopped;	// 0x222895
- (void)wasPushed;	// 0x22283d
@end
