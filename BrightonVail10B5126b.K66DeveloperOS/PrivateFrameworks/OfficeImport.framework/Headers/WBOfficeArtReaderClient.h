/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"


@interface WBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (bool)allowOverlap:(EshContentProperties *)overlap;	// 0x349262c9
+ (bool)behindText:(EshContentProperties *)text;	// 0x34926311
+ (BOOL)escherIsFullySupported;	// 0x349264d5
+ (int)horizontalPosition:(EshContentProperties *)position;	// 0x3492606d
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x3498e17d
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x34925c65
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x34a8a34d
+ (void)readFrom:(EshContentProperties *)from to:(id)to;	// 0x34925ec9
+ (int)relativeHorizontalPosition:(EshContentProperties *)position;	// 0x349260a9
+ (int)relativeVerticalPosition:(EshContentProperties *)position;	// 0x34926121
+ (BOOL)tablesAreAllowed;	// 0x3498e179
+ (int)verticalPosition:(EshContentProperties *)position;	// 0x349260e5
+ (double)wrapDistanceBottom:(EshContentProperties *)bottom;	// 0x34926271
+ (double)wrapDistanceLeft:(EshContentProperties *)left;	// 0x3492615d
+ (double)wrapDistanceRight:(EshContentProperties *)right;	// 0x34926211
+ (double)wrapDistanceTop:(EshContentProperties *)top;	// 0x349261b9
@end

