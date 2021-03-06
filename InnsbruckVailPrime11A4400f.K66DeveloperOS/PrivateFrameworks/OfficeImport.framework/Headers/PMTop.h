/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIProgressiveReaderDelegate.h"
#import "CMTop.h"

@class PMPresentationMapper, PMState, CMArchiveManager;

@interface PMTop : CMTop <OIProgressiveReaderDelegate> {
	CMArchiveManager *_archiver;	// 4 = 0x4
	PMState *_state;	// 8 = 0x8
	PMPresentationMapper *_mapper;	// 12 = 0xc
	BOOL _xml;	// 16 = 0x10
}
+ (void)fillHTMLArchiveForPowerPointData:(id)powerPointData fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x316a8161
+ (void)fillHTMLArchiveForPowerPointFile:(id)powerPointFile xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x318aaad9
+ (void)fillHTMLArchiveForPowerPointFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x316a8195
- (void)dealloc;	// 0x31723679
- (BOOL)isCancelled;	// 0x318aab35
- (void)readData:(id)data fileName:(id)name xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x316a82fd
- (void)readFile:(id)file xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x318aab0d
- (void)readFrom:(id)from inMemory:(BOOL)memory xmlFlag:(BOOL)flag archiver:(id)archiver;	// 0x316a8325
- (void)readerDidEndDocument:(id)reader;	// 0x3171f121
- (void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;	// 0x31714bc1
- (void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;	// 0x316df541
@end

