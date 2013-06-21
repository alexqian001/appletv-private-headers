/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray, NSMutableString, YTVideo;

@interface YTCommentsRequest : YTXMLHTTPRequest {
	id _delegate;	// 156 = 0x9c
	NSMutableArray *_comments;	// 160 = 0xa0
	unsigned _startIndex;	// 164 = 0xa4
	unsigned _totalResults;	// 168 = 0xa8
	NSMutableString *_moreCommentsURLString;	// 172 = 0xac
	YTVideo *_video;	// 176 = 0xb0
}
+ (unsigned)commentsPerRequest;	// 0x3670bc0d
- (id)initRequestingCommentsForVideo:(id)video withDelegate:(id)delegate;	// 0x3670bcfd
- (void)_requestCommentsFromURL:(id)url;	// 0x3670bc11
- (void)dealloc;	// 0x3670bdd9
- (void)didAuthenticate:(id)authenticate;	// 0x3670bfb5
- (void)didParseData;	// 0x3670bf3d
- (void)failWithError:(id)error;	// 0x3670c035
- (int)parseData:(id)data;	// 0x3670be51
- (void)requestMoreComments;	// 0x3670bc69
@end
