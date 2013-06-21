/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
	NSMutableAttributedString *mutableAttributedString;	// 4 = 0x4
}
- (id)initWithMutableAttributedString:(id)mutableAttributedString;	// 0x3199ad61
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3199ae65
- (void)dealloc;	// 0x3199adb5
- (void)finalize;	// 0x3199ae01
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3199ae9d
- (unsigned)length;	// 0x3199ae2d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x3199aee1
@end
