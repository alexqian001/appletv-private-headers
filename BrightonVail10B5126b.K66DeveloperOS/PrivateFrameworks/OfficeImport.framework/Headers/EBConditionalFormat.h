/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EBConditionalFormat : NSObject {
}
+ (int)convertEDConditionalFmtOperatorEnumToXl:(int)xl;	// 0x34a076f5
+ (int)convertEDConditionalFmtTypeEnumToXl:(int)xl;	// 0x34a076a5
+ (void)convertTokensToSharedTokens:(id)sharedTokens;	// 0x34a075a9
+ (int)convertXlConditionalFmtOperatorEnumToED:(int)ed;	// 0x34a076bd
+ (int)convertXlConditionalFmtTypeEnumToED:(int)ed;	// 0x34a076b1
+ (void)readXlConditionalFormat:(XlConditionalFormat *)format toEDConditionalFormatting:(id)edconditionalFormatting state:(id)state;	// 0x34a0731d
+ (bool)validXlCf:(XlCf *)cf;	// 0x34a07645
@end
