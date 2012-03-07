/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIPrintPaper : NSObject {
@private
	BOOL _landscape;	// 4 = 0x4
	id _internal;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL landscape;	// G=0x32246e49; S=0x32246e59; @synthesize=_landscape
@property(readonly, assign) CGSize paperSize;	// G=0x322472a5; 
@property(readonly, assign) CGRect printableRect;	// G=0x322478a1; 
+ (id)_defaultPaperForOuptutType:(int)ouptutType;	// 0x32246f55
+ (id)_paperListForPrinter:(id)printer withDuplexMode:(int)duplexMode;	// 0x322471a9
+ (id)bestPaperForPageSize:(CGSize)pageSize withPapersFromArray:(id)array;	// 0x322473fd
- (id)_initWithPrintKitPaper:(id)printKitPaper;	// 0x32246f05
- (id)_pkPaper;	// 0x32246e39
- (CGRect)_printableRectForDuplex:(BOOL)duplex;	// 0x322472f5
- (void)_updatePKPaper:(id)paper;	// 0x32246ec9
- (void)dealloc;	// 0x32246e81
// declared property getter: - (BOOL)landscape;	// 0x32246e49
// declared property getter: - (CGSize)paperSize;	// 0x322472a5
- (CGRect)printRect;	// 0x32246e69
// declared property getter: - (CGRect)printableRect;	// 0x322478a1
// declared property setter: - (void)setLandscape:(BOOL)landscape;	// 0x32246e59
@end
