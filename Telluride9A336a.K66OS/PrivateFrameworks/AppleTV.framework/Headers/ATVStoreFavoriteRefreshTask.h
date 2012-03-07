/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class ATVStoreFavorite, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVStoreFavoriteRefreshTask : BRBackgroundTask {
@private
	ATVStoreFavorite *_favorite;	// 44 = 0x2c
	ATVURLDocument *_curDocumentBeingFetched;	// 48 = 0x30
}
- (id)initWithFavorite:(id)favorite;	// 0x339bb741
- (void)_catalogControlRequestProcessed:(id)processed;	// 0x339bb9f1
- (void)_checkForPurchasesComplete:(id)purchasesComplete;	// 0x339bbcad
- (void)_finalizePageRefresh:(id)refresh;	// 0x339bbd31
- (void)dealloc;	// 0x339bb7b9
- (void)disable:(id)disable;	// 0x339bb971
- (BOOL)perform:(id)perform;	// 0x339bb835
- (void)stop;	// 0x339bb9b1
@end
