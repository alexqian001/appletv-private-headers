/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WBParagraph : NSObject {
}
+ (int)blockType;	// 0x350e5139
+ (void)check:(id)check forFieldMarkerFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x34f870f5
+ (void)checkForAnnotationBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x34f8702d
+ (void)checkForAnnotationFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x34f86f5d
+ (void)checkForBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x34f8717d
+ (void)checkForNoteFrom:(id)from footnote:(BOOL)footnote runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x34f86ee9
+ (bool)isCPAnnotationRangeEnd:(long)end bookmarkTable:(WrdBookmarkTable *)table;	// 0x350e513d
+ (void)prepareFieldMarkersForWriting:(id)writing with:(id)with;	// 0x350e526d
+ (void)readAnnotationBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x350e51a9
+ (void)readAnnotationFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x350e516d
+ (void)readBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x34fa3265
+ (void)readCharacterRunsFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x34f86b95
+ (void)readFieldMarkerFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x34f89b9d
+ (void)readFrom:(id)from textRun:(WrdParagraphTextRun *)run paragraph:(id)paragraph;	// 0x34f866c5
+ (void)readNoteFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x34fe8c05
+ (void)readOfficeArtFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x34f8848d
+ (void)readPictureFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x34f89e65
+ (void)readRunsFor:(id)aFor from:(id)from textRun:(WrdParagraphTextRun *)run;	// 0x34f868f9
+ (void)readSpecialCharacterFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x34fe9175
+ (void)readSpecialCharactersFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x34f88195
+ (void)readSymbolsFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x34f9c8d9
@end

