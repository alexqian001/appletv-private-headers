/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIKit/UIPrintPageRenderer.h>

@protocol QLPrintPageRendererDataSource;

@interface QLPrintPageRenderer : UIPrintPageRenderer {
	id<QLPrintPageRendererDataSource> _dataSource;	// 52 = 0x34
	int _numberOfPages;	// 56 = 0x38
	BOOL _printingDone;	// 60 = 0x3c
	int _numberOfPrintedPages;	// 64 = 0x40
}
@property(assign) id<QLPrintPageRendererDataSource> dataSource;	// G=0x2f3109a1; S=0x2f3109b5; @synthesize=_dataSource
@property(readonly, assign) int numberOfPages;	// G=0x2f3107d9; converted property
- (id)init;	// 0x2f310755
// declared property getter: - (id)dataSource;	// 0x2f3109a1
- (void)drawPageAtIndex:(int)index inRect:(CGRect)rect;	// 0x2f3108a5
// converted property getter: - (int)numberOfPages;	// 0x2f3107d9
- (void)prepareForDrawingPages:(NSRange)drawingPages;	// 0x2f310875
- (void)prepareForPrinting;	// 0x2f3107a5
// declared property setter: - (void)setDataSource:(id)source;	// 0x2f3109b5
@end
