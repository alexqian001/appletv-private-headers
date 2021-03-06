/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView, NSString, UIPrintingProgressViewController;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject {
	NSString *_printerName;	// 4 = 0x4
	id _cancelHandler;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _displayTime;	// 20 = 0x14
	UIAlertView *_alert;	// 28 = 0x1c
	UIPrintingProgressViewController *_viewController;	// 32 = 0x20
	BOOL _donePrinting;	// 36 = 0x24
}
- (id)initWithPrinterName:(id)printerName cancelHandler:(id)handler;	// 0x33006875
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x33006f79
- (void)alertViewCancel:(id)cancel;	// 0x33006f69
- (void)dealloc;	// 0x330068ed
- (void)didPresentAlertView:(id)view;	// 0x33006f31
- (void)endProgress;	// 0x33006f91
- (void)hideProgressAnimated:(BOOL)animated;	// 0x33006dcd
- (double)nextPrintDelay;	// 0x33007329
- (void)progressCancel;	// 0x33006eb9
- (BOOL)progressVisible;	// 0x3300698d
- (void)setPage:(int)page ofPage:(int)page2;	// 0x3300714d
- (void)setPrintInfoState:(int)state;	// 0x330070b1
- (void)showProgress:(id)progress immediately:(BOOL)immediately;	// 0x33006a29
@end

