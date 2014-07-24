/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 196 = 0xc4
	ATVFavorite *_favorite;	// 200 = 0xc8
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0xe3be9; S=0xe3bf9; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0xe3bc9; S=0xe3bd9; @synthesize=_merchant
- (void)_toggle;	// 0xe3c65
- (void)_update;	// 0xe3c09
- (BOOL)brEventAction:(id)action;	// 0xe3b69
- (void)controlWasActivated;	// 0xe3b29
- (void)dealloc;	// 0xe3ac5
// declared property getter: - (id)favorite;	// 0xe3be9
// declared property getter: - (id)merchant;	// 0xe3bc9
// declared property setter: - (void)setFavorite:(id)favorite;	// 0xe3bf9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xe3bd9
@end
