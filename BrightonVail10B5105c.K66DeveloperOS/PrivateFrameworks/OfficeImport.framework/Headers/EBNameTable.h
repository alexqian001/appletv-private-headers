/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBNameTable : NSObject {
}
+ (XlNameTable *)createXlNameTableFromNamesCollection:(id)namesCollection state:(id)state;	// 0x37aafd91
+ (id)edNameFromXlName:(XlName *)xlName name:(OcText)name state:(id)state;	// 0x3794337d
+ (void)readFromState:(id)state;	// 0x379430c5
+ (XlName *)xlNameFromEDName:(id)edname state:(id)state;	// 0x37aafefd
@end
