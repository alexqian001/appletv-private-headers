/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTFeedRequest.h"


@interface YTSearchRequest : YTFeedRequest {
}
+ (id)_formatFilter;	// 0x35e66a75
+ (id)feedCountryCode;	// 0x35e6688d
+ (unsigned)videosPerRequest;	// 0x35e66651
- (void)didParseData;	// 0x35e66655
- (void)failWithError:(id)error;	// 0x35e66839
- (BOOL)receivedValidResponse:(id)response;	// 0x35e67745
- (void)searchForFavoriteVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x35e674fd
- (void)searchForMyVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x35e67621
- (void)searchForRecentVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x35e6712d
- (void)searchForStandardFeedVideosOfType:(id)type startIndex:(unsigned)index maxResults:(unsigned)results timeQualifier:(id)qualifier withDelegate:(id)delegate;	// 0x35e67095
- (void)searchForVideoWithID:(id)anId withDelegate:(id)delegate;	// 0x35e66a81
- (void)searchForVideosByAuthor:(id)videosByAuthor startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x35e673d9
- (void)searchForVideosMatchingString:(id)videosMatchingString startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x35e66d69
- (void)searchForVideosRelatedToVideo:(id)video startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;	// 0x35e6726d
- (void)searchForVideosWithFeedURLBase:(id)feedURLBase startingAtIndex:(unsigned)index maxResults:(unsigned)results withTimeQualifier:(id)timeQualifier withFormatFilter:(BOOL)formatFilter authenticationRequired:(BOOL)required withDelegate:(id)delegate;	// 0x35e66ec1
- (void)searchForVideosWithIDs:(id)ids withDelegate:(id)delegate;	// 0x35e66b31
@end
