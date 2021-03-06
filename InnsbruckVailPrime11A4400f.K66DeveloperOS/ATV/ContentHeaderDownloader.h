/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ContentDownloadData;
@protocol ContentHeaderDownloaderProtocol;

@interface ContentHeaderDownloader : XXUnknownSuperclass {
	ContentDownloadData *contentDownloadData;	// 52 = 0x34
	shared_ptr<netflix::http::HttpStreamReader> headerHttpReader;	// 56 = 0x38
	shared_ptr<netflix::http::HttpStreamReader> transportHttpReader;	// 64 = 0x40
	shared_ptr<netflix::http::HttpStreamReader> iFrameHttpReader;	// 72 = 0x48
	id<ContentHeaderDownloaderProtocol> delegate_;	// 80 = 0x50
}
@property(assign) id<ContentHeaderDownloaderProtocol> delegate;	// G=0x561a11; S=0x561a25; @synthesize=delegate_
- (id)initWithContentDownloadData:(id)contentDownloadData delegate:(id)delegate;	// 0x55f2cd
- (id).cxx_construct;	// 0x561b71
- (void).cxx_destruct;	// 0x561a3d
- (void)dealloc;	// 0x55f4ad
// declared property getter: - (id)delegate;	// 0x561a11
- (void)downloadContentHeader:(id)header;	// 0x561811
- (BOOL)downloadContentHeaderInternal;	// 0x55f591
- (BOOL)downloadContentHeaderInternalDash;	// 0x561431
- (BOOL)downloadDashHeaderDataToBuffer:(char *)buffer startAt:(int)at length:(int)length;	// 0x560f35
- (const char *)mediaTypeToDLType:(int)dltype;	// 0x55f551
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x561a25
- (id)urlAsRangeRequest:(id)request startOffset:(long long)offset endOffset:(long long)offset3;	// 0x56195d
@end

