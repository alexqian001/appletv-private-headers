/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EBBorders : NSObject {
}
+ (int)convertEDBorderEnumToXl:(int)xl;	// 0x34a06f09
+ (int)convertEDDiagonalEnumToXl:(int)xl;	// 0x34a06f59
+ (int)convertXlBorderEnumToED:(int)ed;	// 0x34898399
+ (int)convertXlDiagStyleEnumToED:(int)ed;	// 0x348984e1
+ (id)edBordersFromXlDXf:(XlDXf *)xlDXf edResources:(id)resources;	// 0x34a06cc5
+ (id)edBordersFromXlXf:(XlXf *)xlXf edResources:(id)resources;	// 0x348981dd
@end

