/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_categories;	// 160 = 0xa0
}
- (id)init;	// 0x35e7194d
- (id)_categoriesURL;	// 0x35e71be9
- (void)clearDelegate;	// 0x35e71d51
- (void)dealloc;	// 0x35e719d5
- (void)didAuthenticate:(id)authenticate;	// 0x35e71b21
- (void)didParseData;	// 0x35e71a99
- (void)failWithError:(id)error;	// 0x35e71cdd
- (void)loadRequest:(id)request;	// 0x35e71ba1
- (int)parseData:(id)data;	// 0x35e71a21
- (void)requestCategoriesWithDelegate:(id)delegate;	// 0x35e71c5d
@end
