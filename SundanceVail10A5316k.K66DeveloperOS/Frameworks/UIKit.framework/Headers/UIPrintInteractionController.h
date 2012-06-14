/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, UIPrintPageRenderer, UIPrintInfo, PKPrinter, UIPrintPaper, UIPrintFormatter;
@protocol UIPrintInteractionControllerDelegate;

@interface UIPrintInteractionController : NSObject {
@private
	UIPrintInfo *_printInfo;	// 4 = 0x4
	id<UIPrintInteractionControllerDelegate> _delegate;	// 8 = 0x8
	BOOL _showsPageRange;	// 12 = 0xc
	UIPrintPageRenderer *_printPageRenderer;	// 16 = 0x10
	UIPrintFormatter *_printFormatter;	// 20 = 0x14
	id _printingItem;	// 24 = 0x18
	NSArray *_printingItems;	// 28 = 0x1c
	UIPrintPaper *_printPaper;	// 32 = 0x20
	id _completionHandler;	// 36 = 0x24
	unsigned _backgroundTaskIdentifier;	// 40 = 0x28
	id _printState;	// 44 = 0x2c
}
@property(assign, nonatomic) id<UIPrintInteractionControllerDelegate> delegate;	// G=0x303d7dd1; S=0x303d7de1; @synthesize=_delegate
@property(readonly, assign, nonatomic) int pageCount;	// G=0x303d500d; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x303d5035; S=0x303d5099; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x303d5169; S=0x303d5359; 
@property(retain, nonatomic) UIPrintFormatter *printFormatter;	// G=0x303d7e41; S=0x303d7e51; @synthesize=_printFormatter
@property(retain, nonatomic) UIPrintInfo *printInfo;	// G=0x303d7db1; S=0x303d7dc1; @synthesize=_printInfo
@property(retain, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x303d7e21; S=0x303d7e31; @synthesize=_printPageRenderer
@property(readonly, assign, nonatomic) UIPrintPaper *printPaper;	// G=0x303d7e11; @synthesize=_printPaper
@property(retain, nonatomic) PKPrinter *printer;	// G=0x303d50c1; S=0x303d50e9; 
@property(copy, nonatomic) id printingItem;	// G=0x303d7e61; S=0x303d4959; @synthesize=_printingItem
@property(copy, nonatomic) NSArray *printingItems;	// G=0x303d7e75; S=0x303d7e89; @synthesize=_printingItems
@property(assign, nonatomic) BOOL showsPageRange;	// G=0x303d7df1; S=0x303d7e01; @synthesize=_showsPageRange
+ (BOOL)canPrintData:(id)data;	// 0x303d478d
+ (BOOL)canPrintURL:(id)url;	// 0x303d4615
+ (BOOL)isPrintingAvailable;	// 0x303d4551
+ (id)printableUTIs;	// 0x303d4585
+ (id)sharedPrintController;	// 0x303d47a1
- (id)init;	// 0x303d4825
- (BOOL)_canShowDuplex;	// 0x303d4f21
- (BOOL)_canShowPageRange;	// 0x303d4f65
- (BOOL)_canShowPaperList;	// 0x303d4fcd
- (void)_cleanPrintState;	// 0x303d4e11
- (id)_currentPrintInfo;	// 0x303d4ef9
- (void)_endPrintJob:(BOOL)job error:(id)error;	// 0x303d7c11
- (id)_init;	// 0x303d4875
- (id)_paperForContentType:(int)contentType;	// 0x303d61e5
- (id)_paperForPDFItem:(id)pdfitem withDuplexMode:(int)duplexMode;	// 0x303d5fdd
- (void)_preparePrintInfo;	// 0x303d5eb5
- (id)_printItem:(id)item;	// 0x303d6f75
- (void)_printPage;	// 0x303d6d85
- (id)_printPageRenderer:(id)renderer;	// 0x303d7ac5
- (void)_printPanelDidDismiss;	// 0x303d5d75
- (void)_printPanelDidPresent;	// 0x303d5b29
- (void)_printPanelWillDismiss:(BOOL)_printPanel;	// 0x303d5b71
- (void)_setPrintInfoState:(int)state;	// 0x303d5c19
- (BOOL)_setupPrintPanel:(id)panel;	// 0x303d58c5
- (void)_startPrinting;	// 0x303d68dd
- (void)_updatePageCount;	// 0x303d53b9
- (void)_updatePrintPaper;	// 0x303d6339
- (void)dealloc;	// 0x303d48c1
// declared property getter: - (id)delegate;	// 0x303d7dd1
- (void)dismissAnimated:(BOOL)animated;	// 0x303d4db9
// declared property getter: - (int)pageCount;	// 0x303d500d
// declared property getter: - (NSRange)pageRange;	// 0x303d5035
// declared property getter: - (id)paper;	// 0x303d5169
- (BOOL)presentAnimated:(BOOL)animated completionHandler:(id)handler;	// 0x303d49cd
- (BOOL)presentFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated completionHandler:(id)handler;	// 0x303d4c9d
- (BOOL)presentFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated completionHandler:(id)handler;	// 0x303d4b61
// declared property getter: - (id)printFormatter;	// 0x303d7e41
// declared property getter: - (id)printInfo;	// 0x303d7db1
// declared property getter: - (id)printPageRenderer;	// 0x303d7e21
// declared property getter: - (id)printPaper;	// 0x303d7e11
// declared property getter: - (id)printer;	// 0x303d50c1
// declared property getter: - (id)printingItem;	// 0x303d7e61
// declared property getter: - (id)printingItems;	// 0x303d7e75
- (oneway void)release;	// 0x303d47e9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303d7de1
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x303d5099
// declared property setter: - (void)setPaper:(id)paper;	// 0x303d5359
// declared property setter: - (void)setPrintFormatter:(id)formatter;	// 0x303d7e51
// declared property setter: - (void)setPrintInfo:(id)info;	// 0x303d7dc1
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x303d7e31
// declared property setter: - (void)setPrinter:(id)printer;	// 0x303d50e9
// declared property setter: - (void)setPrintingItem:(id)item;	// 0x303d4959
// declared property setter: - (void)setPrintingItems:(id)items;	// 0x303d7e89
// declared property setter: - (void)setShowsPageRange:(BOOL)range;	// 0x303d7e01
// declared property getter: - (BOOL)showsPageRange;	// 0x303d7df1
@end
