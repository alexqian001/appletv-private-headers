/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSThread.h> // Unknown library

@class ContentDownloadData;

__attribute__((visibility("hidden")))
@interface PlayListGenerator : NSThread {
@private
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
}
- (id)initWithContentDownloadData:(id)contentDownloadData;	// 0x3071f4c0
- (id).cxx_construct;	// 0x3071d988
- (void).cxx_destruct;	// 0x3071f6b8
- (void)dealloc;	// 0x3071f438
- (void)downloadContentHeader:(id)header;	// 0x3071d9dc
@end

