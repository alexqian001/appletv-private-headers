/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EBFill : NSObject {
}
+ (int)convertEDPatternFillEnumToXl:(int)xl;	// 0x33b5d6a9
+ (int)convertXlFillPatternEnumToED:(int)ed;	// 0x339ee235
+ (id)edFillFromXlDXf:(XlDXf *)xlDXf edResources:(id)resources;	// 0x33b5d511
+ (id)edFillFromXlXf:(XlXf *)xlXf edResources:(id)resources;	// 0x339ee0a5
+ (bool)extractFromEDFill:(id)edfill foreColorReference:(id *)reference backColorReference:(id *)reference3 fillPatternEnum:(int *)anEnum;	// 0x33b5d5fd
@end

