/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVClient.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXVmlClient : NSObject <OAVClient> {
}
+ (bool)behindText:(id)text;	// 0x3451336d
+ (void)copyFromDrawable:(id)drawable toContent:(id)content;	// 0x345fa711
+ (BOOL)floating:(id)floating;	// 0x34513349
+ (int)horizontalPosition:(id)position;	// 0x34513389
+ (void)initialize;	// 0x344fa919
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x34575ff5
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x34512af5
+ (void)readFromDrawable:(xmlNode *)drawable toContent:(id)content;	// 0x34512f95
+ (void)readTextWrappingFromParent:(xmlNode *)parent toAnchor:(id)anchor;	// 0x34513775
+ (int)relativeHorizontalPosition:(id)position;	// 0x34513441
+ (int)relativeVerticalPosition:(id)position;	// 0x345135e5
+ (int)verticalPosition:(id)position;	// 0x3451352d
+ (int)vmlSupportLevel;	// 0x34511435
+ (double)wrapDistanceBottom:(id)bottom;	// 0x34513739
+ (double)wrapDistanceLeft:(id)left;	// 0x345136d1
+ (double)wrapDistanceRight:(id)right;	// 0x34513719
+ (double)wrapDistanceTop:(id)top;	// 0x345136f1
+ (int)zIndex:(id)index;	// 0x34513761
@end
