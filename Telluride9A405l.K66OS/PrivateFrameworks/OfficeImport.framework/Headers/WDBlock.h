/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDText;

__attribute__((visibility("hidden")))
@interface WDBlock : NSObject {
@private
	WDText *mText;	// 4 = 0x4
}
- (id)init;	// 0x30e68f9d
- (id)initWithText:(id)text;	// 0x30d143fd
- (int)blockType;	// 0x30e68f89
- (void)clearProperties;	// 0x30e68f99
- (id)document;	// 0x30d146d1
- (BOOL)isEmpty;	// 0x30e68f95
- (id)newRunIterator;	// 0x30e68f91
- (id)runIterator;	// 0x30e68f8d
- (id)text;	// 0x30d223b9
- (int)textType;	// 0x30d14be1
@end

