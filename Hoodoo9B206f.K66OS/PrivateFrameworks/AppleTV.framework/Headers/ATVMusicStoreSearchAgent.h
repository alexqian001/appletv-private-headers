/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class NSString, BRMerchant;

@interface ATVMusicStoreSearchAgent : ATVSearchAgent {
@private
	NSString *_baseURLString;	// 12 = 0xc
	BRMerchant *_merchant;	// 16 = 0x10
}
- (id)initWithBaseURLString:(id)baseURLString merchant:(id)merchant;	// 0x3659cead
- (void)_loadSearchURL:(id)url forSearchTerm:(id)searchTerm;	// 0x3659d145
- (void)_searchComplete:(id)complete forSearchTerm:(id)searchTerm;	// 0x3659d405
- (void)_searchRequestProcessed:(id)processed;	// 0x3659d285
- (void)dealloc;	// 0x3659cf21
- (BOOL)isNetworkDependent;	// 0x3659d141
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x3659cfb1
- (BOOL)showRecentSearches;	// 0x3659d13d
@end
