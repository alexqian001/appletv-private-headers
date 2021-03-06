/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "QLRemotePrintPageHelper.h"

@class UIWebPaginationInfo, UIWebBrowserView, NSMutableArray;

@interface QLSpreadsheetPrintPageRenderer : QLRemotePrintPageHelper {
	UIWebBrowserView *_printView;	// 28 = 0x1c
	UIWebPaginationInfo *_paginationInfo;	// 32 = 0x20
	BOOL _frameLoaded;	// 36 = 0x24
	NSMutableArray *_urls;	// 40 = 0x28
	unsigned _currentURLIndex;	// 44 = 0x2c
	unsigned _currentPageIndex;	// 48 = 0x30
	int _totalPagesPrinted;	// 52 = 0x34
	BOOL _printingDone;	// 56 = 0x38
}
- (id)initWithWebBrowserView:(id)webBrowserView request:(id)request documentType:(id)type;	// 0x341e5c0d
- (id)_documentURLs;	// 0x341e5ce1
- (BOOL)_loadNextURL;	// 0x341e6451
- (BOOL)_loadURLAtIndex:(unsigned)index;	// 0x341e617d
- (void)dealloc;	// 0x341e5c59
- (int)numberOfPages;	// 0x341e6429
- (id)pdfDataForPageAtIndex:(int)index withSize:(CGSize)size printingDone:(BOOL *)done;	// 0x341e64f5
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x341e64c9
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x341e6665
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x341e6651
@end

