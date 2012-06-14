/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WAKView.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebPDFDocumentView.h"
#import "WebPDFDocumentRepresentation.h"

@class NSArray, NSObject, NSString, WebDataSource;
@protocol WebPDFViewPlaceholderDelegate;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
@private
	NSString *_title;	// 68 = 0x44
	NSArray *_pageRects;	// 72 = 0x48
	CGPDFDocumentRef _document;	// 76 = 0x4c
	WebDataSource *_dataSource;	// 80 = 0x50
	NSObject<WebPDFViewPlaceholderDelegate> *_delegate;	// 84 = 0x54
	BOOL _didFinishLoadAndMemoryMap;	// 88 = 0x58
}
@property(assign) NSObject<WebPDFViewPlaceholderDelegate> *delegate;	// G=0x3458f229; S=0x3458f239; @synthesize=_delegate
@property(readonly, assign) CGPDFDocumentRef doc;	// G=0x3458f2ad; 
@property(readonly, assign) CGPDFDocumentRef document;	// G=0x34590045; @synthesize=_document
@property(retain) NSArray *pageRects;	// G=0x3458f465; S=0x3458f441; @synthesize=_pageRects
@property(retain) NSString *title;	// G=0x3458f4a1; S=0x3458f47d; @synthesize=_title
@property(readonly, assign) unsigned totalPages;	// G=0x3458ff71; 
+ (Class)_representationClassForWebFrame:(id)webFrame;	// 0x3458f425
+ (void)setAsPDFDocRepAndView;	// 0x3450d885
+ (id)supportedMIMETypes;	// 0x34520f95
- (CGSize)_computePageRects:(CGPDFDocumentRef)rects;	// 0x3458f53d
- (void)_doPostLoadOrUnlockTasks;	// 0x3458f2bd
- (void)_evaluateJSForDocument:(CGPDFDocumentRef)document;	// 0x3458fb99
- (CGRect)_getPDFPageBounds:(CGPDFPageRef)bounds;	// 0x3458fa09
- (void)_notifyDidCompleteLayout;	// 0x3458fd29
- (void)_updateTitleForDocumentIfAvailable;	// 0x3458faf1
- (void)_updateTitleForURL:(id)url;	// 0x3458f365
- (BOOL)canProvideDocumentSource;	// 0x3458f221
- (void)dataSourceMemoryMapFailed;	// 0x3458f311
- (void)dataSourceMemoryMapped;	// 0x3458fc39
- (void)dataSourceUpdated:(id)updated;	// 0x3458f201
- (void)dealloc;	// 0x3458fec5
// declared property getter: - (id)delegate;	// 0x3458f229
- (void)didUnlockDocument;	// 0x3458f415
// declared property getter: - (CGPDFDocumentRef)doc;	// 0x3458f2ad
// declared property getter: - (CGPDFDocumentRef)document;	// 0x34590045
- (id)documentSource;	// 0x3458f225
- (void)finishedLoadingWithDataSource:(id)dataSource;	// 0x3458f321
- (void)layout;	// 0x3458fca5
// declared property getter: - (id)pageRects;	// 0x3458f465
- (void)receivedData:(id)data withDataSource:(id)dataSource;	// 0x3458f219
- (void)receivedError:(id)error withDataSource:(id)dataSource;	// 0x3458f21d
- (CGRect)rectForPageNumber:(unsigned)pageNumber;	// 0x3458f4b9
- (void)setDataSource:(id)source;	// 0x3458fded
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3458f239
- (void)setDocument:(CGPDFDocumentRef)document;	// 0x3458ff8d
// declared property setter: - (void)setPageRects:(id)rects;	// 0x3458f441
// declared property setter: - (void)setTitle:(id)title;	// 0x3458f47d
// declared property getter: - (id)title;	// 0x3458f4a1
// declared property getter: - (unsigned)totalPages;	// 0x3458ff71
- (void)viewDidMoveToHostWindow;	// 0x3458f215
- (void)viewWillMoveToHostWindow:(id)view;	// 0x3458f211
@end
