/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVStoreFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVWishListFavorite : ATVStoreFavorite {
	NSString *_adamID;	// 60 = 0x3c
}
- (id)initWithDictionary:(id)dictionary;	// 0x11343d
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x113281
- (void)dealloc;	// 0x1134b1
- (void)encodeWithDictionary:(id)dictionary;	// 0x1134fd
- (id)itemID;	// 0x113559
- (void)remove;	// 0x1135dd
- (BOOL)removeUponAcquisition;	// 0x113569
- (void)save;	// 0x11356d
@end
