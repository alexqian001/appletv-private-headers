/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVFormula : NSObject {
}
+ (OADFormulaArg)readArgument:(id)argument;	// 0x3459324d
+ (id)readFormula:(xmlNode *)formula;	// 0x345935b1
+ (void)readFormulasFromManager:(id)manager toGeometry:(id)geometry;	// 0x34593519
@end
