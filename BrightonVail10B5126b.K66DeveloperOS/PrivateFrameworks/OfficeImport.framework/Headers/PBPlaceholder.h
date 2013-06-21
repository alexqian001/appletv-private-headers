/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBPlaceholder : NSObject {
}
+ (BOOL)isBodyPlaceholder:(int)placeholder;	// 0x34a74cbd
+ (BOOL)isTitlePlaceholder:(int)placeholder;	// 0x34a74cd9
+ (int)placeholderTypeFromTextType:(int)textType;	// 0x34869369
+ (int)readPlaceholderOrientation:(int)orientation;	// 0x3486996d
+ (int)readPlaceholderSize:(int)size;	// 0x34869951
+ (int)readPlaceholderType:(int)type;	// 0x348698d1
+ (void)writePlaceholder:(id)placeholder toPlaceholderAtom:(PptOEPlaceholderAtom *)placeholderAtom isMaster:(BOOL)master isNotes:(BOOL)notes;	// 0x34a74ced
@end
